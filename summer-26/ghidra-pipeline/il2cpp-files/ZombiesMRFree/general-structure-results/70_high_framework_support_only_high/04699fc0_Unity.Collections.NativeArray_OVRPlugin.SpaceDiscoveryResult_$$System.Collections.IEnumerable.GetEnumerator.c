/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04699fc0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
                    /* try { // try from 04699fc0 to 0479a2bf has its CatchHandler @ 04699fc0
                       catch() { ... } // from try @ 04699fc0 with catch @ 04699fc0
                       catch() { ... } // from try @ 0469a384 with catch @ 04699fc0
                       catch() { ... } // from try @ 0469a448 with catch @ 04699fc0
                       catch() { ... } // from try @ 0469a4f4 with catch @ 04699fc0 */
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  lVar2 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  uVar1 = FUN_03e49c10(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48));
  uVar3 = FUN_068b5670((long)unaff_w21 * 0xc,uVar1,unaff_w20,0,0);
  *unaff_x19 = uVar3;
  *(int *)(unaff_x19 + 1) = unaff_w21;
  *(undefined4 *)((long)unaff_x19 + 0xc) = unaff_w20;
  return;
}


