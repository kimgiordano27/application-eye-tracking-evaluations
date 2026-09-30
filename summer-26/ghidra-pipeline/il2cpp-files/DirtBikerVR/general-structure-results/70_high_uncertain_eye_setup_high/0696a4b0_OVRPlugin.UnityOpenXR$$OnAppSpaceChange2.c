/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange2
ENTRY_POINT: 0696a4b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnAppSpaceChange2(void)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x19;
  undefined8 *puVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x24;
  float fVar9;
  float fVar10;
  float fVar11;
  
  plVar1 = *(long **)(unaff_x20 + 0x80);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    FUN_07d1d2c8();
    if (((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0xd0), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) {
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07c9c218(uVar8,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b7038,0);
        return;
      }
      if (((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0xd0), lVar4 != 0)) &&
         ((lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0 &&
          ((unaff_x20 != 0 && (*(long *)(unaff_x20 + 0x80) != 0)))))) {
        uVar7 = *(undefined8 *)(lVar4 + 0x20);
        uVar8 = FUN_07c98f88(*(long *)(unaff_x20 + 0x80),0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        lVar4 = FUN_04658320(uVar7,uVar8,1,*(undefined8 *)PTR_DAT_084b7018);
        plVar1 = (long *)(unaff_x19 + 0x40);
        *plVar1 = lVar4;
        thunk_FUN_03afed3c(plVar1,lVar4);
        if (*plVar1 != 0) {
          lVar4 = FUN_07c9c69c(*plVar1,0);
          if (DAT_08974d89 == '\0') {
            FUN_03a8a718(PTR_DAT_084868a0);
            DAT_08974d89 = '\x01';
          }
          plVar3 = *(long **)(unaff_x20 + 0x80);
          if (plVar3 != (long *)0x0) {
            uVar8 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
            fVar11 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
            fVar9 = (float)(**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
            plVar3 = *(long **)(unaff_x20 + 0x80);
            if ((plVar3 != (long *)0x0) &&
               (fVar10 = (float)(**(code **)(*plVar3 + 0x228))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x230)), lVar4 != 0)) {
              fVar9 = fVar9 + fVar10;
              FUN_07cab7ec(-(float)uVar8 * fVar9,-(float)((ulong)uVar8 >> 0x20) * fVar9,
                           fVar9 * -fVar11,lVar4,0);
              if (*plVar1 != 0) {
                lVar4 = FUN_07c9c69c(*plVar1,0);
                if (DAT_08974d8a == '\0') {
                  FUN_03a8a718(PTR_DAT_08486860);
                  DAT_08974d8a = '\x01';
                }
                if (lVar4 != 0) {
                  puVar5 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
                  FUN_07cac71c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar4,0);
                  if (*plVar1 != 0) {
                    lVar4 = FUN_04561560(*plVar1,*(undefined8 *)PTR_DAT_084b7010);
                    plVar1 = (long *)(unaff_x19 + 0x30);
                    *plVar1 = lVar4;
                    thunk_FUN_03afed3c(plVar1,lVar4);
                    if (*plVar1 != 0) {
                      thunk_FUN_07ca23d0(*plVar1,*(undefined8 *)PTR_DAT_084b7030,0);
                      if (*plVar1 != 0) {
                        uVar8 = FUN_07d1c684(*plVar1,0);
                        puVar6 = (undefined8 *)(unaff_x19 + 0x58);
                        *puVar6 = uVar8;
                        thunk_FUN_03afed3c(puVar6,0);
                        plVar1 = *(long **)(unaff_x20 + 0x80);
                        if (plVar1 != (long *)0x0) {
                          (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
                          FUN_07d1d2c8(puVar6,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


