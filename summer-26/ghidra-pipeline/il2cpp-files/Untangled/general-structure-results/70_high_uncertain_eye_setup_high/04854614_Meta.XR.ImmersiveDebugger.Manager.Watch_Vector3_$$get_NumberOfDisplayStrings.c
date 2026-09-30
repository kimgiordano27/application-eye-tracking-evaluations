/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04854614
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfDisplayStrings
               (undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  
  FUN_02eea768(param_1);
  FUN_04aa3af8();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = unaff_x20;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  thunk_FUN_02f411dc(*(long *)(lVar3 + 0xb8) + 8);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xa0) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  uVar4 = thunk_FUN_02ef1808();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 200);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  System_Collections_Generic_Dictionary<int,_DynamicHeightVirtualizationController_ContentHeightCacheInfo<object>>__ContainsKey
            (uVar4,0,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd0));
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10) = uVar4;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  puVar2 = PTR_DAT_06d08068;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  thunk_FUN_02f411dc(*(long *)(lVar3 + 0xb8) + 0x10,uVar4);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  FUN_0555e110(uVar4,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd8),0);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18) = uVar4;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  thunk_FUN_02f411dc(*(long *)(lVar3 + 0xb8) + 0x18,uVar4);
  return;
}


