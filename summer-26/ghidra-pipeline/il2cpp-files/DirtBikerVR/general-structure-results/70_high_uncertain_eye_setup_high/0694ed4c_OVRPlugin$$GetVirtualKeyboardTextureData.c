/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardTextureData
ENTRY_POINT: 0694ed4c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardTextureData(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = param_2;
  fVar10 = param_3;
  lVar2 = FUN_07c98f88();
  if (lVar2 != 0) {
    fVar6 = (float)FUN_07cac280(lVar2,0);
    if (((*(long *)(unaff_x19 + 0x28) != 0) &&
        (fVar9 = fVar8, fVar11 = fVar10, lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x28),0),
        lVar2 != 0)) && (fVar7 = (float)FUN_07cac280(lVar2,0), unaff_x21 != 0)) {
      FUN_07cac358(param_1 - (fVar6 - fVar7),param_2 - (fVar8 - fVar9),param_3 - (fVar10 - fVar11));
      puVar1 = PTR_DAT_08486738;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        lVar2 = FUN_0447aad0(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_08488c80);
        plVar4 = (long *)(unaff_x19 + 0x60);
        *plVar4 = lVar2;
        thunk_FUN_03afed3c(plVar4,lVar2);
        lVar2 = *plVar4;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar3 = FUN_07c9c218(lVar2,0,0);
        if ((uVar3 & 1) != 0) {
          lVar2 = *plVar4;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07ca310c(lVar2,0);
        }
        if ((*(long *)(unaff_x19 + 0x10) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar2 != 0)) {
          FUN_069608d0(lVar2,0,0);
          *(undefined1 *)(unaff_x19 + 0x21) = 1;
          FUN_0694f398();
          if (*(long *)(unaff_x19 + 0x48) != 0) {
            FUN_07cb2910(*(long *)(unaff_x19 + 0x48),0);
            lVar2 = *plVar4;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar3 = FUN_07c9e200(lVar2,0,0);
            if ((uVar3 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x10) == 0) ||
                 (lVar2 = FUN_07c99058(*(long *)(unaff_x19 + 0x10),0), lVar2 == 0))
              goto LAB_0694f028;
              lVar2 = FUN_045614d0(lVar2,*(undefined8 *)PTR_DAT_08488148);
              *plVar4 = lVar2;
              thunk_FUN_03afed3c(plVar4,lVar2);
            }
            if (*(long *)(unaff_x19 + 0x10) != 0) {
              lVar5 = *(long *)(unaff_x19 + 0x60);
              lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0);
              if (((*(long *)(unaff_x20 + 0x28) != 0) &&
                  (FUN_07cac280(*(long *)(unaff_x20 + 0x28),0), lVar2 != 0)) &&
                 (FUN_07cadf5c(lVar2,0), lVar5 != 0)) {
                FUN_07d2d468(lVar5,0);
                if (*plVar4 != 0) {
                  FUN_07d255e0(*plVar4,0,0);
                  if (*plVar4 != 0) {
                    FUN_07d256a4(*plVar4,0,0);
                    if (*plVar4 != 0) {
                      FUN_07d25768(*plVar4,0,0);
                      if (*plVar4 != 0) {
                        FUN_07d25bd0(*plVar4,(ulong)(*(char *)(unaff_x19 + 0x59) == '\0') << 1,0);
                        if (*(long *)(unaff_x19 + 0x60) != 0) {
                          FUN_07d2d958(*(long *)(unaff_x19 + 0x60),1,0);
                          if (*plVar4 != 0) {
                            FUN_07d2d7b0(*(undefined4 *)(unaff_x19 + 0x3c),*plVar4,0);
                            if ((*(long *)(unaff_x20 + 0x10) != 0) &&
                               (*(long *)(unaff_x19 + 0x60) != 0)) {
                              FUN_07d2d0e4(*(long *)(unaff_x19 + 0x60),
                                           *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x20),0);
                              *(long *)(unaff_x19 + 0x68) = unaff_x20;
                              thunk_FUN_03afed3c((long *)(unaff_x19 + 0x68));
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0694f028:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


