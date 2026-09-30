/*
FUNCTION_NAME: FUN_068f3228
ENTRY_POINT: 068f3228
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_068f3228(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 uStack_74;
  long *local_68;
  
  puVar2 = PTR_DAT_070c1b68;
  if ((DAT_07559386 & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_PropertyChangedEvent_<>c_TypeInfo);
    FUN_03188a78(PTR_DAT_070c22b0);
    FUN_03188a78(UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo);
    FUN_03188a78(Unity_Properties_PropertyContainer_GetPropertyVisitor_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_070f13a0);
    FUN_03188a78(PTR_DAT_070c28d8);
    FUN_03188a78(PTR_DAT_070c6e90);
    FUN_03188a78(Sentry_SentryOptions_<>c__DisplayClass370_0_TypeInfo);
    FUN_03188a78(OVRPlugin_Sizef_TypeInfo);
    FUN_03188a78(PTR_DAT_070c4180);
    FUN_03188a78(PTR_DAT_070c20c8);
    DAT_07559386 = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  local_68 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar7 = FUN_069d8404(uVar14,0,0);
  if ((uVar7 & 1) == 0) goto LAB_068f3644;
  uVar14 = FUN_068f2d64(param_1);
  plVar8 = (long *)thunk_FUN_03196ed8(param_1,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    uVar15 = *(undefined8 *)PTR_DAT_070c20c8;
    uVar7 = FUN_03a2e25c(param_1,&local_68,
                         *(undefined8 *)UnityEngine_UIElements_PropertyChangedEvent_<>c_TypeInfo);
    plVar8 = local_68;
    if ((uVar7 & 1) != 0) {
      if (local_68 == (long *)0x0) goto LAB_068f3678;
      lVar12 = *local_68;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 5) * 0x10 + 0x138);
            goto LAB_068f33d8;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_031c0d08(local_68,*(long *)
                                       UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo
                             ,5);
LAB_068f33d8:
      local_78 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      local_88 = *(undefined8 *)Unity_Properties_PropertyContainer_GetPropertyVisitor_TypeInfo;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffffffff;
      uVar15 = FUN_05965738(&local_88,0);
    }
    lVar12 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,5);
    puVar4 = PTR_DAT_070c4180;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 != 0) {
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_070c4180;
        if ((uVar1 != 1) &&
           (*(undefined8 *)(lVar12 + 0x28) = uVar15, puVar5 = PTR_DAT_070c6e90, 2 < uVar1)) {
          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_070c6e90;
          if ((uVar1 != 3) && (*(undefined8 *)(lVar12 + 0x38) = uVar9, 4 < uVar1)) {
            *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)OVRPlugin_Sizef_TypeInfo;
            uVar11 = FUN_057bfff0(lVar12,0);
            puVar3 = PTR_DAT_070c22b0;
            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)PTR_DAT_070c22b0);
            FUN_069d76f4(lVar12,uVar11,0);
            if (lVar12 != 0) {
              lVar12 = FUN_069d6e00(lVar12,0);
              *(long *)(param_1 + 0xe8) = lVar12;
              if (lVar12 != 0) {
                FUN_069e7a48(lVar12,uVar14,0,0);
                puVar6 = PTR_DAT_070f13a0;
                uVar14 = *(undefined8 *)(param_1 + 0xe8);
                if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                FUN_069e53e4(&local_88,0);
                uStack_a8 = uStack_80;
                local_b0 = local_88;
                uStack_9c = uStack_74;
                uStack_a4 = uStack_7c;
                uStack_a0 = local_78;
                FUN_06824ae4(uVar14,&local_b0,0);
                uVar14 = *(undefined8 *)(param_1 + 0xf0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                uVar7 = FUN_069d8404(uVar14,0,0);
                if ((uVar7 & 1) == 0) {
LAB_068f3644:
                  if ((param_2 & 1) != 0) {
                    FUN_068f3170(param_1);
                  }
                  return *(undefined8 *)(param_1 + 0xf0);
                }
                lVar12 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,5);
                if (lVar12 != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if ((((uVar1 == 0) ||
                       (*(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar4, uVar1 == 1)) ||
                      (*(undefined8 *)(lVar12 + 0x28) = uVar15, uVar1 < 3)) ||
                     ((*(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)puVar5, uVar1 == 3 ||
                      (*(undefined8 *)(lVar12 + 0x38) = uVar9, uVar1 < 5)))) goto LAB_068f3674;
                  *(undefined8 *)(lVar12 + 0x40) =
                       *(undefined8 *)Sentry_SentryOptions_<>c__DisplayClass370_0_TypeInfo;
                  uVar14 = FUN_057bfff0(lVar12,0);
                  lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar3);
                  FUN_069d76f4(lVar12,uVar14,0);
                  if (lVar12 != 0) {
                    lVar12 = FUN_069d6e00(lVar12,0);
                    *(long *)(param_1 + 0xf0) = lVar12;
                    if (lVar12 != 0) {
                      FUN_069e7a48(lVar12,*(undefined8 *)(param_1 + 0xe8),0,0);
                      uVar14 = *(undefined8 *)(param_1 + 0xf0);
                      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      FUN_069e53e4(&local_88,0);
                      uStack_c8 = uStack_80;
                      local_d0 = local_88;
                      uStack_bc = uStack_74;
                      uStack_c4 = uStack_7c;
                      uStack_c0 = local_78;
                      FUN_06824ae4(uVar14,&local_d0,0);
                      goto LAB_068f3644;
                    }
                  }
                }
              }
            }
            goto LAB_068f3678;
          }
        }
      }
LAB_068f3674:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
  }
LAB_068f3678:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


