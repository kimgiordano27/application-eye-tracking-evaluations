/*
FUNCTION_NAME: FUN_068e16b8
ENTRY_POINT: 068e16b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;functionality_gaze_retrieval_or_extraction
*/


void FUN_068e16b8(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_48;
  undefined1 *puStack_40;
  undefined1 local_38 [16];
  long local_28;
  
  if ((DAT_075592d3 & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TextOverflowProperty_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TopProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo);
    FUN_03188a78(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransformOriginProperty_TypeInfo
                );
    FUN_03188a78(System_Net_FtpWebResponse_EmptyStream_TypeInfo);
    FUN_03188a78(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDelayProperty_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070d2128);
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    DAT_075592d3 = 1;
  }
  local_38._8_8_ = 0;
  local_28 = 0;
  local_38._0_8_ = 0;
  lVar4 = FUN_068d8cdc(param_1);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x18);
    FUN_068daab4(param_1,param_2);
    lVar4 = FUN_068d8cdc(param_1);
    puVar3 = PTR_DAT_070d2128;
    if (lVar4 != 0) {
      uVar2 = *(undefined4 *)(lVar4 + 0x18);
      *(undefined1 *)(param_1 + 0x49) = 1;
      local_48 = 0;
      FUN_04dbe314(&local_48,uVar1,uVar2,*(undefined8 *)puVar3);
      *(undefined4 *)(param_1 + 0x51) = 0;
      *(undefined8 *)((long)param_1 + 0x24c) = local_48;
      lVar4 = FUN_068d8cdc(param_1);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
          if (*(char *)((long)param_1 + 500) != '\0') {
            if ((param_2 == 0) || (plVar5 = (long *)FUN_068525f4(param_2,0), plVar5 == (long *)0x0))
            goto LAB_068e1950;
            lVar4 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                  goto LAB_068e1834;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_031c0d08(plVar5,*(long *)
                                          UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo
                                  ,6);
LAB_068e1834:
            lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (lVar4 == 0) goto LAB_068e1950;
            lVar4 = FUN_03a2d8ec(lVar4,*(undefined8 *)
                                        UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TextOverflowProperty_TypeInfo
                                );
            param_1[0x5d] = lVar4;
          }
          (**(code **)(*param_1 + 0x8e8))(param_1,*(undefined8 *)(*param_1 + 0x8f0));
          puVar3 = OVRPlugin_LayerLayout_TypeInfo;
          if (0 < (int)param_1[0x4b]) {
            lVar4 = *(long *)OVRPlugin_LayerLayout_TypeInfo;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar4 = *(long *)puVar3;
            }
            if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_068e1950;
            local_38 = FUN_0414d318(**(long **)(lVar4 + 0xb8),&local_28,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransformOriginProperty_TypeInfo
                                   );
            puStack_40 = local_38;
            local_48 = 0;
            if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            *(long *)(local_28 + 0x10) = param_2;
            FUN_068df3f4(param_1);
            FUN_047abab0(local_38,*(undefined8 *)
                                   UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDelayProperty_TypeInfo
                        );
          }
        }
        if (param_2 != 0) {
          lVar4 = param_1[0x62];
          uVar7 = FUN_068525f4(param_2,0);
          if (lVar4 != 0) {
            FUN_03eb5d04(lVar4,uVar7,
                         *(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TopProperty_TypeInfo
                        );
            uVar7 = FUN_068525f4(param_2,0);
            if (param_1[0x66] != 0) {
              FUN_06876d00(param_1[0x66],uVar7,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_068e1950:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


