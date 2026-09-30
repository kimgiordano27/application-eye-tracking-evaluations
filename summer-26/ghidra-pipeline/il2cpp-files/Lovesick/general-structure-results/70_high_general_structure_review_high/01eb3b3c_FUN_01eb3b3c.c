/*
FUNCTION_NAME: FUN_01eb3b3c
ENTRY_POINT: 01eb3b3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01eb3b3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 01eb3b44 to 01fb3b4f has its CatchHandler @ 01eb3cf4 */
  if ((DAT_0377fedd & 1) == 0) {
                    /* try { // try from 01eb3b60 to 01fb3b6b has its CatchHandler @ 01eb3cf0 */
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_TrackAsset_CreateClipOfType__);
    thunk_FUN_00d48444(PTR_DAT_033f1220);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Collider>_Remove__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
                    /* try { // try from 01eb3b90 to 01fb3b97 has its CatchHandler @ 01eb3cec */
    thunk_FUN_00d48444(StringLiteral_10516);
                    /* try { // try from 01eb3b98 to 01fb3c7f has its CatchHandler @ 01eb3840 */
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_0377fedd = 1;
  }
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x4b8))(plVar3,*(undefined8 *)(*plVar3 + 0x4c0));
    *(long *)(param_1 + 0x98) = lVar4;
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10516);
      if (lVar4 == 0) goto LAB_01eb3ce0;
      FUN_01f74f2c(lVar4,uVar5,0);
      *(long *)(param_1 + 0x98) = lVar4;
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Timeline_TrackAsset_CreateClipOfType__);
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
    if (lVar4 != 0) {
      FUN_01f5ccd8(lVar4,10,0);
      *(long *)(param_1 + 0x80) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
      puVar1 = PTR_DAT_033f1220;
      if (lVar4 != 0) {
        FUN_0160aa4c(lVar4,0);
        *(long *)(param_1 + 0x68) = lVar4;
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar2;
        }
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_System_Collections_Generic_HashSet<Collider>_Remove__;
                    /* try { // try from 01eb3c80 to 01fb3c87 has its CatchHandler @ 01eb3ce8 */
        if (lVar4 != 0) {
                    /* try { // try from 01eb3c88 to 01fb3c8b has its CatchHandler @ 01eb3ce4 */
                    /* try { // try from 01eb3c8c to 01fb3c8f has its CatchHandler @ 01eb3840 */
                    /* try { // try from 01eb3c90 to 01fb3c93 has its CatchHandler @ 01eb3ce0 */
                    /* try { // try from 01eb3c94 to 01fb3c97 has its CatchHandler @ 01eb3cdc */
          FUN_01747a0c(lVar4,0);
                    /* try { // try from 01eb3c98 to 01fb3c9b has its CatchHandler @ 01eb3cd8 */
          *(long *)(param_1 + 0x88) = lVar4;
                    /* try { // try from 01eb3c9c to 01fb3c9f has its CatchHandler @ 01eb3cd4 */
                    /* try { // try from 01eb3ca0 to 01fb3ca3 has its CatchHandler @ 01eb3cc8 */
                    /* try { // try from 01eb3ca4 to 01fb3ca7 has its CatchHandler @ 01eb3cc4 */
                    /* try { // try from 01eb3ca8 to 01fb3caf has its CatchHandler @ 01eb3cc0 */
          FUN_01eb3d7c(param_1,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8));
                    /* try { // try from 01eb3cb0 to 01fb3cb3 has its CatchHandler @ 01eb3cbc */
                    /* try { // try from 01eb3cb4 to 01fb3d1f has its CatchHandler @ 01eb3840 */
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 01eb3cb0 with catch @ 01eb3cbc */
                    /* catch() { ... } // from try @ 01eb3ca8 with catch @ 01eb3cc0 */
                    /* catch() { ... } // from try @ 01eb3ca4 with catch @ 01eb3cc4 */
            FUN_01e92090(lVar4,0);
                    /* catch() { ... } // from try @ 01eb3ca0 with catch @ 01eb3cc8 */
            *(long *)(param_1 + 0x48) = lVar4;
            *(undefined1 *)(param_1 + 0x79) = 0;
                    /* catch() { ... } // from try @ 01eb3c9c with catch @ 01eb3cd4 */
                    /* catch() { ... } // from try @ 01eb3c98 with catch @ 01eb3cd8 */
                    /* catch() { ... } // from try @ 01eb3c94 with catch @ 01eb3cdc */
            return;
          }
        }
      }
    }
  }
LAB_01eb3ce0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01eb3c90 with catch @ 01eb3ce0 */
  FUN_00da518c();
}


