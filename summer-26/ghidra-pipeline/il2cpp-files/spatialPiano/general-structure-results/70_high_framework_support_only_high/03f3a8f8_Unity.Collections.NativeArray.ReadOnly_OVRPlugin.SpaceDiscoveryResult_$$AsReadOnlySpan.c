/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 03f3a8f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  puVar2 = PTR_DAT_067cc480;
  puVar1 = PTR_DAT_067cc478;
                    /* try { // try from 03f3a904 to 0403a907 has its CatchHandler @ 03f3a9b8 */
                    /* try { // try from 03f3a908 to 0403a99b has its CatchHandler @ 03f3a6dc */
  uVar3 = thunk_FUN_02f45270();
  FUN_04882848(uVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
  uVar4 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  uVar3 = thunk_FUN_02f45270(uVar4);
  FUN_0470cd04(uVar3,*unaff_x24);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar3 = thunk_FUN_02f45270();
  FUN_048549c8(uVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20));
  uVar4 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  uVar3 = thunk_FUN_02f45270(uVar4);
  FUN_04885e70(uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  FUN_05116b38();
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar5 = *(long *)(lVar6 + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  **(long **)(lVar5 + 0xb8) = unaff_x19;
  if ((*(ushort *)(*(long *)(lVar6 + 0x28) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
    return;
  }
  return;
}


