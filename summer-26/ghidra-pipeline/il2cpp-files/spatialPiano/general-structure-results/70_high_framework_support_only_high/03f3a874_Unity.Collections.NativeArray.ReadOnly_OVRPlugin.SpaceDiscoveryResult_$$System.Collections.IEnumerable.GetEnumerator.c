/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03f3a874
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 03f3a87c to 0403a8f3 has its CatchHandler @ 03f3a9c4 */
  if ((DAT_06bb52e9 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc468);
    FUN_02f08768(PTR_DAT_067cc470);
    FUN_02f08768(PTR_DAT_067cc478);
    FUN_02f08768(PTR_DAT_067cc480);
    DAT_06bb52e9 = 1;
  }
  puVar2 = PTR_DAT_067cc470;
  puVar1 = PTR_DAT_067cc468;
  if ((*(ushort *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  puVar4 = PTR_DAT_067cc480;
  puVar3 = PTR_DAT_067cc478;
  uVar5 = thunk_FUN_02f45270();
  FUN_04882848(uVar5,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8));
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = thunk_FUN_02f45270(uVar6);
  FUN_0470cd04(uVar5,*(undefined8 *)puVar1);
  lVar7 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar5 = thunk_FUN_02f45270();
  FUN_048549c8(uVar5,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20));
  uVar6 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar5 = thunk_FUN_02f45270(uVar6);
  FUN_04885e70(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  FUN_05116b38(param_1,0);
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar8 + 0x28);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02f41e9c();
    lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  }
  **(long **)(lVar7 + 0xb8) = param_1;
  if ((*(ushort *)(*(long *)(lVar8 + 0x28) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
    return;
  }
  return;
}


