/*
FUNCTION_NAME: FUN_05bcb710
ENTRY_POINT: 05bcb710
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_05bcb710(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_50 [16];
  
                    /* catch() { ... } // from try @ 05bcb6e8 with catch @ 05bcb710 */
                    /* catch() { ... } // from try @ 05bcb6e4 with catch @ 05bcb714 */
                    /* catch() { ... } // from try @ 05bcb6e0 with catch @ 05bcb718 */
                    /* catch() { ... } // from try @ 05bcb6d8 with catch @ 05bcb71c */
                    /* catch() { ... } // from try @ 05bcb6d4 with catch @ 05bcb720 */
                    /* catch() { ... } // from try @ 05bcb6d0 with catch @ 05bcb724 */
                    /* catch() { ... } // from try @ 05bcb558 with catch @ 05bcb728 */
                    /* catch() { ... } // from try @ 05bcb6cc with catch @ 05bcb72c */
                    /* catch() { ... } // from try @ 05bcb538 with catch @ 05bcb730 */
  if ((DAT_06dc250e & 1) == 0) {
                    /* catch() { ... } // from try @ 05bcb6c8 with catch @ 05bcb734 */
                    /* catch() { ... } // from try @ 05bcb6bc with catch @ 05bcb738 */
                    /* catch() { ... } // from try @ 05bcb534 with catch @ 05bcb73c */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<InternedString,_string>_TryGetValue__)
    ;
                    /* catch() { ... } // from try @ 05bcb4f0 with catch @ 05bcb740 */
                    /* catch() { ... } // from try @ 05bcb6b8 with catch @ 05bcb744 */
                    /* catch() { ... } // from try @ 05bcb524 with catch @ 05bcb748 */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<InternedString,_string>_get_Count__);
                    /* catch() { ... } // from try @ 05bcb590 with catch @ 05bcb74c */
                    /* catch() { ... } // from try @ 05bcb6b4 with catch @ 05bcb750 */
                    /* catch() { ... } // from try @ 05bcb6b0 with catch @ 05bcb754 */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<InternedString,_string>__ctor__);
                    /* catch() { ... } // from try @ 05bcb1ec with catch @ 05bcb758 */
                    /* catch() { ... } // from try @ 05bcb6ac with catch @ 05bcb75c */
                    /* catch() { ... } // from try @ 05bcb6c4 with catch @ 05bcb760 */
    FUN_02d965b8(OVRPlugin_OVRP_1_51_0_TypeInfo);
                    /* catch() { ... } // from try @ 05bcb194 with catch @ 05bcb764 */
                    /* catch() { ... } // from try @ 05bcb6a8 with catch @ 05bcb768 */
                    /* catch() { ... } // from try @ 05bcb698 with catch @ 05bcb76c */
    FUN_02d965b8(OVRPlugin_OVRP_1_54_0_TypeInfo);
                    /* catch() { ... } // from try @ 05bcb6a4 with catch @ 05bcb770 */
                    /* catch() { ... } // from try @ 05bcb1b0 with catch @ 05bcb774 */
                    /* catch() { ... } // from try @ 05bcb694 with catch @ 05bcb778 */
    FUN_02d965b8(OVRPlugin_OVRP_1_55_0_TypeInfo);
                    /* catch() { ... } // from try @ 05bcb474 with catch @ 05bcb77c */
                    /* catch() { ... } // from try @ 05bcb410 with catch @ 05bcb780 */
                    /* catch() { ... } // from try @ 05bcb500 with catch @ 05bcb784 */
    FUN_02d965b8(PTR_DAT_06a0eb60);
                    /* catch() { ... } // from try @ 05bcb68c with catch @ 05bcb788 */
    FUN_02d965b8(OVRPlugin_OVRP_1_65_0_TypeInfo);
    DAT_06dc250e = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<InternedString,_string>__ctor__;
  puVar2 = PTR_DAT_069fb9c0;
  local_50._8_8_ = 0;
  local_50._0_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 0xc);
    uVar5 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_055006dc(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)PTR_DAT_06a0eb60;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_054f73b4(uVar6,0);
      uVar4 = FUN_055006dc(uVar5,uVar6,0);
      if ((uVar4 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        lVar7 = *(long *)(puVar2 + 0x10);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_054f73b4(lVar7 + 0x20,0);
        uVar4 = FUN_055006dc(uVar5,uVar6,0);
        if ((uVar4 & 1) == 0) {
          uVar8 = **(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_JustifyContentProperty_TypeInfo
                            );
          uVar5 = thunk_FUN_02dd3144();
          uVar6 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_Dictionary<InternedString,_InternedString>_TryGetValue__
                                    );
          FUN_05bbfb54(uVar5,uVar6,uVar8);
          uVar6 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_Dictionary<InternedString,_string>_set_Item__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar5,uVar6);
        }
      }
    }
    lVar7 = FUN_05bcb3a0();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_05bc5c74(lVar7,*(undefined8 *)(param_1 + 10),*(undefined8 *)(lVar9 + 0x10),
                         *(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x20));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_50 = FUN_0481d044(lVar9,0,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
    uVar4 = FUN_04b88f80(local_50,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      LeanTween__value(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031e7f20(param_1 + 2,local_50,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<InternedString,_string>_TryGetValue__
                  );
      return;
    }
  }
  uVar5 = FUN_04b88fc8(local_50,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
  puVar2 = Method_System_Collections_Generic_Dictionary<InternedString,_string>_get_Count__;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


