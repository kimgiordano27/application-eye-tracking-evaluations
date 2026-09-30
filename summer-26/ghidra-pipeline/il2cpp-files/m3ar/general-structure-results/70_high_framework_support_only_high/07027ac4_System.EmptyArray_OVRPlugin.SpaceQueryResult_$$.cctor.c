/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 07027ac4
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_EmptyArray<OVRPlugin_SpaceQueryResult>___cctor(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  
  puVar1 = PTR_DAT_08f68538;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar2 = FUN_0747f92c(unaff_w21,0);
  uVar3 = *(undefined8 *)puVar1;
  *(undefined4 *)(unaff_x19 + 0x24) = 0xffffffff;
  uVar3 = FUN_040316d0(uVar3,uVar2);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x1b0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0406aaec();
  }
  uVar3 = FUN_040316d0(lVar4,uVar2);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  return uVar2;
}


