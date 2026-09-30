/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 04f60490
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *plVar7;
  
  *(undefined1 *)(unaff_x21 + 0xadb) = 1;
  lVar5 = thunk_FUN_02b79644(*unaff_x23);
  FUN_04dbdb8c(lVar5,0);
  puVar4 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
  puVar3 = System_EmptyArray<char>_TypeInfo;
  puVar2 = System_EmptyArray<byte>_TypeInfo;
  puVar1 = PTR_DAT_06314578;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar7 = (long *)(lVar5 + 0x10);
  *plVar7 = unaff_x22;
  thunk_FUN_02bb0e9c(plVar7);
  *(long **)(lVar5 + 0x18) = unaff_x19;
  thunk_FUN_02bb0e9c();
  unaff_x19[0x31] = *plVar7;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x31);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_049b7e3c(uVar6,lVar5,*(undefined8 *)puVar3,0);
  (**(code **)(*unaff_x19 + 0x4a8))();
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_049b749c(uVar6,lVar5,*(undefined8 *)puVar4,0);
  (**(code **)(*unaff_x19 + 0x4c8))();
  if ((unaff_x20 & 1) != 0) {
    return;
  }
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_049b749c(uVar6,lVar5,*(undefined8 *)System_EmptyArray<ParameterInfo>_TypeInfo,0);
                    /* WARNING: Could not recover jumptable at 0x04f605e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x4e8))();
  return;
}


