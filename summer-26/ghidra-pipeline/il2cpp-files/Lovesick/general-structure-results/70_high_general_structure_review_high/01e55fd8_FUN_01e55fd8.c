/*
FUNCTION_NAME: FUN_01e55fd8
ENTRY_POINT: 01e55fd8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01e55fd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = Method_UnityEngine_Timeline_TrackAsset_CreateClipOfType__;
  if ((DAT_0377fd3d & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_TrackAsset_CreateClipOfType__);
    thunk_FUN_00d48444(PTR_DAT_033f1220);
                    /* try { // try from 01e56014 to 01f5603b has its CatchHandler @ 01e56168 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Collider>_Remove__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_0377fd3d = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if (lVar3 != 0) {
    FUN_01f5ccd8(lVar3,10,0);
    *(long *)(param_1 + 0x80) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    puVar1 = PTR_DAT_033f1220;
                    /* try { // try from 01e56070 to 01f5609b has its CatchHandler @ 01e56160 */
    if (lVar3 != 0) {
      FUN_0160aa4c(lVar3,0);
      *(long *)(param_1 + 0x68) = lVar3;
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
                    /* try { // try from 01e560b4 to 01f560bf has its CatchHandler @ 01e56154 */
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_System_Collections_Generic_HashSet<Collider>_Remove__;
      if (lVar3 != 0) {
                    /* try { // try from 01e560c0 to 01f5610f has its CatchHandler @ 01e55e60 */
        FUN_01747a0c(lVar3,0);
        *(long *)(param_1 + 0x88) = lVar3;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          FUN_01e92090(lVar3,0);
          *(long *)(param_1 + 0x48) = lVar3;
          *(undefined1 *)(param_1 + 0x79) = 0;
          FUN_01e56114(param_1,*(undefined8 *)(param_1 + 0x90));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01e56110 to 01f56113 has its CatchHandler @ 01e5614c */
  FUN_00da518c();
}


