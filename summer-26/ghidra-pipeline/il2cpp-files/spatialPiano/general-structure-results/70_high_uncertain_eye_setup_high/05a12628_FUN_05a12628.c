/*
FUNCTION_NAME: FUN_05a12628
ENTRY_POINT: 05a12628
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_17;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_17
*/


long FUN_05a12628(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  
                    /* try { // try from 05a12628 to 05b1262b has its CatchHandler @ 05a12638 */
                    /* catch() { ... } // from try @ 05a12628 with catch @ 05a12638 */
                    /* try { // try from 05a1263c to 05b12643 has its CatchHandler @ 05a1264c */
                    /* try { // try from 05a12644 to 05b1264f has its CatchHandler @ 05a12460 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05a12600 with catch @ 05a1264c
                       catch(type#2 @ 00000000) { ... } // from try @ 05a1263c with catch @ 05a1264c
                        */
  if ((DAT_06bc2025 & 1) == 0) {
    FUN_02f08768(Method_OVRNativeList<ulong>_op_Implicit__);
    FUN_02f08768(Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
    FUN_02f08768(PTR_DAT_067c9aa0);
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c9c20);
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__);
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__);
    FUN_02f08768(PTR_DAT_067c9c00);
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__);
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_MarkerType>__ctor__);
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_MarkerType>_Add__);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc2025 = 1;
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar5 = thunk_FUN_02f45270();
    uVar12 = thunk_FUN_02f6ef30(Method_OVRNativeList<OVRPlugin_MarkerType>_Dispose__);
    FUN_0504ee1c(uVar5,uVar12,0);
    uVar12 = thunk_FUN_02f6ef30(Method_OVRNativeList<OVRPlugin_MarkerType>_op_Implicit__);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,uVar12);
  }
  plVar3 = (long *)thunk_FUN_02f1863c(param_1,0);
  if (plVar3 == (long *)0x0) {
LAB_05a12a74:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
  if ((uVar4 & 1) != 0) {
    FUN_02a7da48(param_1);
    param_2 = (long *)thunk_FUN_02f1863c(param_1,0);
    puVar7 = Method_OVRResult<OVRAnchor_EraseResult>_get_Success__;
    goto LAB_05a12b10;
  }
  if (param_2 == (long *)0x0) goto LAB_05a12a74;
  uVar4 = FUN_050162b4(param_2,0);
  puVar7 = Method_OVRResult<OVRAnchor_SaveResult>_get_Status__;
  if (((uVar4 & 1) == 0) ||
     (uVar4 = (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300)),
     puVar2 = PTR_DAT_067c9c20, puVar7 = Method_OVRResult<OVRAnchor_SaveResult>_get_Success__,
     (uVar4 & 1) != 0)) goto LAB_05a12b10;
  if (((param_3 & 1) != 0) && ((param_4 & 1) == 0)) {
    uVar5 = FUN_0501cb34(param_2,0);
    puVar7 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__;
    lVar8 = *(long *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
      lVar8 = *(long *)puVar7;
    }
    puVar9 = *(undefined8 **)(lVar8 + 0xb8);
    lVar10 = puVar9[1];
    if (lVar10 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar8);
        puVar9 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar12 = *puVar9;
      lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__);
      FUN_04e0200c(lVar10,uVar12,
                   *(undefined8 *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = lVar10;
    }
    uVar4 = FUN_03385ff8(uVar5,lVar10,
                         *(undefined8 *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__);
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_04f65e2c(*(undefined8 *)Method_OVRNativeList<OVRPlugin_MarkerType>__ctor__,param_2
                           ,0);
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
      }
      FUN_060a9584(uVar5,0);
    }
  }
  lVar8 = *(long *)puVar2;
  lVar10 = *param_1;
  bVar1 = *(byte *)(lVar8 + 0x130);
  plVar3 = (long *)0x0;
  if ((((param_4 & 1) == 0) && (bVar1 <= *(byte *)(lVar10 + 0x130))) &&
     (plVar3 = param_1, *(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar8)) {
    plVar3 = (long *)0x0;
  }
  if (*(byte *)(lVar10 + 0x130) < bVar1) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = param_1;
    if (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
      plVar11 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_05a12f10(param_2);
  puVar2 = PTR_DAT_067c9aa0;
  puVar7 = Method_OVRResult<OVRAnchor_ShareResult>_FromFailure__;
  if ((uVar4 & 1) == 0) goto LAB_05a12b10;
  lVar8 = *(long *)PTR_DAT_067c9aa0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  puVar7 = Method_OVRNativeList<ulong>_op_Implicit__;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_05a12a74;
  if (*(char *)(lVar8 + 0x10) == '\0') {
LAB_05a12a14:
    if ((param_4 & 1) != 0) {
      return 0;
    }
  }
  else {
    lVar8 = *(long *)Method_OVRNativeList<ulong>_op_Implicit__;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar7;
    }
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 8) == '\0') goto LAB_05a12a14;
    if ((param_3 & 1) != 0) {
      lVar8 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      puVar7 = Method_OVRNativeList<OVRPlugin_MarkerType>_Add__;
      if (lVar8 == 0) goto LAB_05a12a74;
      uVar4 = FUN_04f6d2e4(lVar8,*(undefined8 *)Method_OVRNativeList<OVRPlugin_MarkerType>_Add__,0);
      if ((uVar4 & 1) != 0) {
        lVar8 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        lVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        if (((lVar10 == 0) ||
            (uVar5 = FUN_04f715a0(lVar10,*(undefined8 *)puVar7,*(undefined8 *)PTR_DAT_067cbf00,0),
            lVar8 == 0)) ||
           ((plVar6 = (long *)FUN_050ef6a8(lVar8,uVar5,0x38,0), plVar11 == (long *)0x0 ||
            (uVar5 = thunk_FUN_02f1863c(plVar11,0), plVar6 == (long *)0x0)))) goto LAB_05a12a74;
        param_1 = (long *)(**(code **)(*plVar6 + 0x418))
                                    (plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x420));
      }
    }
    uVar5 = FUN_0609db84(param_1,**(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8),0);
    lVar8 = FUN_0609dd40(uVar5,0);
    if (lVar8 != 0) {
      return lVar8;
    }
    if ((param_4 & 1) != 0) {
      return 0;
    }
  }
  FUN_05003fd8(plVar3,0);
  if (*(int *)(*(long *)PTR_DAT_067c9c00 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_05005640(plVar3,0);
  lVar8 = FUN_0511fb5c(uVar5,0);
  puVar7 = Method_OVRResult<OVRAnchor_ShareResult>_get_Status__;
  if (lVar8 != 0) {
    return lVar8;
  }
LAB_05a12b10:
  uVar5 = thunk_FUN_02f6ef30(puVar7);
  uVar5 = FUN_04f65e2c(uVar5,param_2,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
  uVar12 = thunk_FUN_02f45270();
  FUN_050d5404(uVar12,uVar5,0);
  uVar5 = thunk_FUN_02f6ef30(Method_OVRNativeList<OVRPlugin_MarkerType>_op_Implicit__);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar12,uVar5);
}


