/*
FUNCTION_NAME: FUN_03fde670
ENTRY_POINT: 03fde670
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03fde764) */

uint FUN_03fde670(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
                    /* try { // try from 03fde670 to 040de677 has its CatchHandler @ 03fde698 */
  puVar1 = Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_3__;
                    /* try { // try from 03fde678 to 040de693 has its CatchHandler @ 03fde474 */
  if ((DAT_0483baf1 & 1) == 0) {
                    /* try { // try from 03fde694 to 040de697 has its CatchHandler @ 03fde6a0 */
                    /* catch() { ... } // from try @ 03fde670 with catch @ 03fde698
                       try { // try from 03fde698 to 040de6bf has its CatchHandler @ 03fde474 */
                    /* catch() { ... } // from try @ 03fde604 with catch @ 03fde69c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch() { ... } // from try @ 03fde694 with catch @ 03fde6a0 */
                    /* catch() { ... } // from try @ 03fde640 with catch @ 03fde6a4 */
                    /* catch() { ... } // from try @ 03fde5d4 with catch @ 03fde6a8 */
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_3__);
    DAT_0483baf1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 03fde6c0 to 040de6d7 has its CatchHandler @ 03fde754 */
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)FUN_03f83108(1,0);
                    /* try { // try from 03fde6d8 to 040de72b has its CatchHandler @ 03fde474 */
  uVar2 = FUN_03fde814(param_1,plVar3);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03fde740;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 03fde72c to 040de72f has its CatchHandler @ 03fde760 */
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
                    /* try { // try from 03fde730 to 040de73f has its CatchHandler @ 03fde474 */
LAB_03fde740:
                    /* try { // try from 03fde740 to 040de74f has its CatchHandler @ 03fde754 */
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
                    /* catch() { ... } // from try @ 03fde6c0 with catch @ 03fde754
                       catch() { ... } // from try @ 03fde740 with catch @ 03fde754 */
                    /* try { // try from 03fde758 to 040de75b has its CatchHandler @ 03fde824 */
                    /* try { // try from 03fde75c to 040de777 has its CatchHandler @ 03fde474 */
                    /* catch() { ... } // from try @ 03fde72c with catch @ 03fde760 */
  return uVar2 & 1;
}


