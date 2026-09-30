/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceVisemesState
ENTRY_POINT: 0697bd9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetFaceVisemesState(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if ((*(byte *)(unaff_x20 + 0x139) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b75f8);
    FUN_03a8a718(PTR_DAT_084b7600);
    FUN_03a8a718(PTR_DAT_084b6708);
    FUN_03a8a718(PTR_DAT_084b75f0);
    FUN_03a8a718(PTR_DAT_08486738);
    *(undefined1 *)(unaff_x20 + 0x139) = 1;
  }
  puVar2 = PTR_DAT_084b75f0;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) < 1) {
LAB_0697be48:
      if (*(char *)(param_1 + 0x20) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar4 = FUN_0447b578(*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_084b7600);
        plVar5 = (long *)(param_1 + 0x40);
        *plVar5 = lVar4;
        thunk_FUN_03afed3c(plVar5,lVar4);
        puVar3 = PTR_DAT_084b75f8;
        puVar2 = PTR_DAT_08486738;
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if ((int)uVar1 < 1) {
            return;
          }
          uVar11 = 0;
          do {
            if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            lVar9 = *(long *)(lVar4 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar9 == 0) break;
            uVar6 = FUN_07d2d014(lVar9,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar2);
            }
            uVar7 = FUN_07c9c218(uVar6,0,0);
            if ((uVar7 & 1) != 0) {
              uVar6 = FUN_07d2d014(lVar9,0);
              uVar10 = *(undefined8 *)(param_1 + 0x38);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)puVar2);
              }
              uVar7 = FUN_07c9c218(uVar6,uVar10,0);
              if ((uVar7 & 1) != 0) {
                lVar9 = FUN_07d2d014(lVar9,0);
                if (lVar9 == 0) break;
                lVar9 = FUN_0447aad0(lVar9,*(undefined8 *)puVar3);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(*(long *)puVar2);
                }
                uVar7 = FUN_07ca21f0(lVar9,0);
                if ((uVar7 & 1) != 0) {
                  if (lVar9 == 0) break;
                  FUN_0697bd84(lVar9);
                }
              }
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            uVar11 = uVar11 + 1;
            if ((int)uVar1 <= (int)uVar11) {
              return;
            }
          } while( true );
        }
      }
    }
    else {
      iVar8 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar8) goto LAB_0697be48;
        plVar5 = (long *)FUN_04de82e0(lVar4,iVar8,*(undefined8 *)puVar2);
        if (plVar5 == (long *)0x0) break;
        (**(code **)(*plVar5 + 0x618))(plVar5,*(undefined8 *)(*plVar5 + 0x620));
        lVar4 = *(long *)(param_1 + 0x28);
        iVar8 = iVar8 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


