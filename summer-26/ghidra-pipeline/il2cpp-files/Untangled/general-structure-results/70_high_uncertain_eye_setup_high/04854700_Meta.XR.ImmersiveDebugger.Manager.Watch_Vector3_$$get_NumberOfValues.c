/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfValues
ENTRY_POINT: 04854700
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfValues(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  
  FUN_02eea768();
  System_Collections_Generic_Dictionary<int,_DynamicHeightVirtualizationController_ContentHeightCacheInfo<object>>__ContainsKey
            ();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10) = unaff_x20;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  puVar1 = PTR_DAT_06d08068;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  thunk_FUN_02f411dc(*(long *)(lVar2 + 0xb8) + 0x10);
  uVar3 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768(lVar2);
  }
  FUN_0555e110(uVar3,0,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd8),0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = uVar3;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  thunk_FUN_02f411dc(*(long *)(lVar2 + 0xb8) + 0x18,uVar3);
  return;
}


