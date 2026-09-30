/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 03f3a98c
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Item
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x21;
  FUN_05116b38(param_1,0);
                    /* try { // try from 03f3a99c to 0403a99f has its CatchHandler @ 03f3a9b4 */
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
                    /* try { // try from 03f3a9a0 to 0403a9e3 has its CatchHandler @ 03f3a6dc */
  lVar1 = *(long *)(lVar2 + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3a99c with catch @ 03f3a9b4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3a904 with catch @ 03f3a9b8
                        */
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3a838 with catch @ 03f3a9c0
                        */
  **(long **)(lVar1 + 0xb8) = unaff_x19;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3a87c with catch @ 03f3a9c4
                        */
  if ((*(ushort *)(*(long *)(lVar2 + 0x28) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
    return;
  }
                    /* catch() { ... } // from try @ 03f3a9e4 with catch @ 03f3a9f0 */
                    /* try { // try from 03f3a9f4 to 0403a9fb has its CatchHandler @ 03f3aa04 */
  return;
}


