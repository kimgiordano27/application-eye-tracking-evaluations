/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 03cb44c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate
              (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  void *__src;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_035777d4(param_3,0x14,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x58));
                    /* try { // try from 03cb44dc to 03db4533 has its CatchHandler @ 03cb4534 */
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c(lVar2);
  }
  if (unaff_x20 != (long *)0x0) {
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* try { // try from 03cb45c8 to 03db45d7 has its CatchHandler @ 03cb45d8 */
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    __src = (void *)thunk_FUN_02f453b8();
    memcpy(&stack0x00000000,__src,0x48);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb44dc with catch @ 03cb4534
                       try { // try from 03cb4534 to 03db454b has its CatchHandler @ 03cb4490 */
    lVar2 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar2 != 0) {
                    /* try { // try from 03cb454c to 03db4563 has its CatchHandler @ 03cb45d8 */
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar2 + (long)(int)uVar1 * 0x48 + 0x20),&stack0x00000000,0x48);
      }
      else {
        memcpy(&stack0x00000048,&stack0x00000000,0x48);
        FUN_03cb4430();
      }
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


