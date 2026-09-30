/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 03998e70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate
               (ushort *param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((*param_1 & 1) == 0) {
                    /* catch() { ... } // from try @ 03998e28 with catch @ 03998e78
                       catch() { ... } // from try @ 03998e68 with catch @ 03998e78 */
                    /* try { // try from 03998e7c to 03a98e7f has its CatchHandler @ 03998e88 */
    param_3 = FUN_02b76218(param_3);
                    /* try { // try from 03998e80 to 03a98e8b has its CatchHandler @ 03998db0 */
  }
  if (unaff_x21 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03998e7c with catch @ 03998e88
                        */
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(param_3 + 0x40)) {
      puVar1 = (undefined4 *)thunk_FUN_02b7978c();
      FUN_0338977c(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(unaff_x19 + 0x10),0,
                   *(undefined4 *)(unaff_x19 + 0x18),
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                  0xd0) + 0x20) + 0xc0) + 0x150));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


