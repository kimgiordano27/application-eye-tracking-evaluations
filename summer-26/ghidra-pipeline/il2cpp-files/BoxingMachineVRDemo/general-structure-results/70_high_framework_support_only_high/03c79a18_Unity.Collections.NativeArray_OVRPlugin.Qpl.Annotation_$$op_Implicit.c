/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 03c79a18
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Implicit(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x30);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x30);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  uVar3 = **(undefined8 **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06767228);
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0(lVar1);
  }
  FUN_05069454(uVar2,uVar3,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x78),0);
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x30);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = uVar2;
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x30);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(long *)(lVar1 + 0xb8) + 0x18,uVar2);
  FUN_035829e8(*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_06769c60);
                    /* WARNING: Could not recover jumptable at 0x03c79b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


