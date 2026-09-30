/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03e661e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_0159f088(PTR_DAT_06db7ea8);
  thunk_FUN_0159f088(PTR_DAT_06dfeb50);
  thunk_FUN_0159f088(PTR_DAT_06e25810);
  *(undefined1 *)(unaff_x21 + 0x2eb) = 1;
  puVar2 = PTR_DAT_06e25810;
  puVar1 = PTR_DAT_06db7ea8;
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *unaff_x20;
  }
  uVar4 = FUN_0160edfc(*(undefined8 *)puVar1,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x18));
                    /* try { // try from 03e66240 to 03f66243 has its CatchHandler @ 03e662bc */
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  thunk_FUN_01656ef8();
  uVar4 = FUN_0160edfc(*(undefined8 *)puVar2,*(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18));
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  thunk_FUN_01656ef8();
  FUN_02d76b34();
  return;
}


