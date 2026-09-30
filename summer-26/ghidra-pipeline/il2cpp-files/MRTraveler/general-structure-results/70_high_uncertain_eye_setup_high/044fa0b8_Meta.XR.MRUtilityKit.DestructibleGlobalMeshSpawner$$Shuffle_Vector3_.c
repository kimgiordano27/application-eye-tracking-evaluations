/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$Shuffle<Vector3>
ENTRY_POINT: 044fa0b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Shuffle<Vector3>(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  long lVar2;
  
  if (unaff_w20 < 2) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa034 with catch @ 044fa174
                       catch(type#1 @ 088de0a8) { ... } // from try @ 044fa0ac with catch @ 044fa174
                        */
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
                    /* try { // try from 044fa0dc to 045fa0ef has its CatchHandler @ 044fa160 */
    thunk_FUN_03cd7500();
  }
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  lVar1 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
                    /* try { // try from 044fa10c to 045fa117 has its CatchHandler @ 044fa15c */
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar1 = *(long *)(lVar2 + 0x20);
                    /* try { // try from 044fa11c to 045fa12b has its CatchHandler @ 044fa158 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
                    /* try { // try from 044fa134 to 045fa13f has its CatchHandler @ 044fa168 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
                    /* try { // try from 044fa140 to 045fa18b has its CatchHandler @ 044f9fe4 */
  if (**(long **)(lVar1 + 0xb8) != 0) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa11c with catch @ 044fa158
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa10c with catch @ 044fa15c
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa0dc with catch @ 044fa160
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa064 with catch @ 044fa164
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa134 with catch @ 044fa168
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa084 with catch @ 044fa16c
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 044fa01c with catch @ 044fa170
                        */
    FUN_05600fd4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


