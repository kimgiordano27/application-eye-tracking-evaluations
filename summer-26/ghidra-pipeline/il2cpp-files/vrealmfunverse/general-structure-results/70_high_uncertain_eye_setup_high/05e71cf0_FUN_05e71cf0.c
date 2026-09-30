/*
FUNCTION_NAME: FUN_05e71cf0
ENTRY_POINT: 05e71cf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_05e71cf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Object>__;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_102__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_101__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_100__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_10__;
  if ((DAT_066dc6e4 & 1) == 0) {
    FUN_02b3c81c(Method_System_Type_GetTypeHandle__);
    FUN_02b3c81c(Method_System_Type_GetType__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_102__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_100__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_10__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_101__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Object>__);
    DAT_066dc6e4 = 1;
  }
  uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_03f467fc(uVar8,0x2000,0x800,0x10000,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar8);
  uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03f46120(uVar8,0x4000,0x1000,0x20000,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar8);
  FUN_04dbdb8c(param_1,0);
  uVar8 = FUN_04ca5fac(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  uVar6 = FUN_05c35a24(0);
  lVar9 = FUN_02b3c908(*(undefined8 *)puVar5,uVar6);
  plVar10 = (long *)(param_1 + 0x18);
  *plVar10 = lVar9;
  thunk_FUN_02bb0e9c(plVar10,lVar9);
  iVar7 = FUN_05c35a24(0);
  puVar2 = Method_System_Type_GetTypeHandle__;
  puVar1 = Method_System_Type_GetType__;
  if (0 < iVar7) {
    uVar11 = 0;
    lVar9 = 0x20;
    do {
      lVar12 = *plVar10;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_0375a1dc(uVar8,*(undefined8 *)puVar2);
      if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined8 *)(lVar12 + lVar9) = uVar8;
      thunk_FUN_02bb0e9c(lVar12 + lVar9,uVar8);
      uVar11 = uVar11 + 1;
      iVar7 = FUN_05c35a24(0);
      lVar9 = lVar9 + 8;
    } while ((long)uVar11 < (long)iVar7);
  }
  return;
}


