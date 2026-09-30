/*
FUNCTION_NAME: FUN_0320c4d8
ENTRY_POINT: 0320c4d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8
FUN_0320c4d8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  
  if ((DAT_03ff45fa & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_13603);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    DAT_03ff45fa = 1;
  }
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar4 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  param_5[1] = (*(undefined8 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8))[1];
  *param_5 = uVar4;
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  if (param_2 == 5) {
    lVar2 = *(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    if (*(int *)(*(long *)(lVar2 + 0xb8) + 0x100) == 1) {
      if (*(int *)(*(long *)
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_0324fb4c(local_60,param_3,param_4,0);
      *param_5 = CONCAT44(-local_60._4_4_,-local_60._0_4_);
      param_5[1] = uStack_58;
    }
    else {
      if (*(int *)(*(long *)StringLiteral_13603 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_032155b8(param_1,5,param_5);
      if ((uVar3 & 1) == 0) goto LAB_0320c614;
    }
    uVar4 = 1;
  }
  else {
LAB_0320c614:
    uVar4 = 0;
  }
  return uVar4;
}


