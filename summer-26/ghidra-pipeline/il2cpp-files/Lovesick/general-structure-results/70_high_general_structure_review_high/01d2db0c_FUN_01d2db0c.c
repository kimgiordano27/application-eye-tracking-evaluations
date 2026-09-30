/*
FUNCTION_NAME: FUN_01d2db0c
ENTRY_POINT: 01d2db0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_01d2db0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 01d2db0c to 01e2db0f has its CatchHandler @ 01d2d3ec */
  puVar1 = PTR_DAT_033ee168;
                    /* try { // try from 01d2db10 to 01e2db13 has its CatchHandler @ 01d2dba4 */
                    /* try { // try from 01d2db14 to 01e2db17 has its CatchHandler @ 01d2dbf0 */
                    /* try { // try from 01d2db18 to 01e2db1b has its CatchHandler @ 01d2dba0 */
                    /* try { // try from 01d2db1c to 01e2db23 has its CatchHandler @ 01d2d3ec */
                    /* try { // try from 01d2db24 to 01e2db27 has its CatchHandler @ 01d2db9c */
                    /* try { // try from 01d2db28 to 01e2db2f has its CatchHandler @ 01d2dbc4 */
                    /* try { // try from 01d2db30 to 01e2db33 has its CatchHandler @ 01d2dbc0 */
  if ((DAT_0377f35f & 1) == 0) {
                    /* try { // try from 01d2db34 to 01e2db37 has its CatchHandler @ 01d2dbbc */
                    /* try { // try from 01d2db38 to 01e2db3b has its CatchHandler @ 01d2dbd4 */
                    /* try { // try from 01d2db3c to 01e2db3f has its CatchHandler @ 01d2dbb8 */
    thunk_FUN_00d48444(PTR_DAT_033ee168);
                    /* try { // try from 01d2db40 to 01e2db43 has its CatchHandler @ 01d2dbb4 */
                    /* try { // try from 01d2db44 to 01e2db47 has its CatchHandler @ 01d2dbb0 */
                    /* try { // try from 01d2db48 to 01e2db53 has its CatchHandler @ 01d2dbc4 */
    thunk_FUN_00d48444(Method_UnityEngine_Animations_AnimationPosePlayable__ctor__);
                    /* try { // try from 01d2db54 to 01e2db5f has its CatchHandler @ 01d2dbc0 */
    thunk_FUN_00d48444(UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<uint>_get_Item__);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_SerializeMember<int>__);
    DAT_0377f35f = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_Animations_AnimationPosePlayable__ctor__;
  if (lVar3 != 0) {
    FUN_01743c34(lVar3,0);
    *(long *)(param_1 + 0x18) = lVar3;
    *(undefined4 *)(param_1 + 0x20) = 1;
    lVar4 = *(long *)puVar1;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_00d59478(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar1 = Method_FullSerializer_fsBaseConverter_SerializeMember<int>__;
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    *(undefined8 *)(param_1 + 0x40) = **(undefined8 **)(lVar3 + 0xb8);
    puVar2 = Method_System_Collections_Generic_List<uint>_get_Item__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017b46ec(param_1,0);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      FUN_01298da0(lVar3,*(undefined8 *)
                          UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_TypeInfo
                  );
      *(long *)(param_1 + 0x30) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


