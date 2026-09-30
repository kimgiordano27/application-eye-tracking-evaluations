/*
FUNCTION_NAME: FUN_0246ce4c
ENTRY_POINT: 0246ce4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0246ce4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  puVar10 = StringLiteral_7079;
  puVar9 = Method_System_IO_MemoryStream_EnsureNotClosed__;
  puVar8 = Method_System_Linq_Enumerable_Where<char>__;
  puVar7 = Method_DG_Tweening_DOTween_ApplyTo<Vector3,_Vector3[],_Vector3ArrayOptions>__;
  puVar6 = Method_System_Linq_Expressions_BlockExpressionList_Remove__;
  puVar5 = Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__;
  puVar4 = Method_System_Collections_Generic_List<PoolManagerComponent_PoolDesc>__ctor__;
  puVar3 = PTR_DAT_033f2990;
  puVar2 = PTR_DAT_033f2278;
  puVar1 = PTR_DAT_033ec418;
                    /* try { // try from 0246ce7c to 0256ce7f has its CatchHandler @ 0246ce84 */
                    /* try { // try from 0246ce80 to 0256ce9b has its CatchHandler @ 0246ca64 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0246ce7c with catch @ 0246ce84
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0246cdac with catch @ 0246ce88
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0246cd50 with catch @ 0246ce8c
                        */
                    /* try { // try from 0246ce9c to 0256ce9f has its CatchHandler @ 0246cfb0 */
                    /* try { // try from 0246cea0 to 0256cf5f has its CatchHandler @ 0246ca64 */
  if ((DAT_03782530 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2278);
    thunk_FUN_00d48444(PTR_DAT_033f2990);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PoolManagerComponent_PoolDesc>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_5691);
    thunk_FUN_00d48444(StringLiteral_7079);
    thunk_FUN_00d48444(Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTween_ApplyTo<Vector3,_Vector3[],_Vector3ArrayOptions>__
                      );
    thunk_FUN_00d48444(StringLiteral_8697);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_ConduitParameterValue>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033ec738);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector3Int>_Copy__);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_BlockExpressionList_Remove__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<JsonProperty>_get_Count__);
    thunk_FUN_00d48444(Method_System_IO_MemoryStream_EnsureNotClosed__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_Focusable_set_delegatesFocus__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Pose>_get_Item__);
    thunk_FUN_00d48444(Method_RhythmGameStarter_NoteRecorderStorage_<>c_<RefreshUI>b__8_0__);
    thunk_FUN_00d48444(StringLiteral_1488);
    thunk_FUN_00d48444(StringLiteral_13036);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<char>__);
    thunk_FUN_00d48444(PTR_DAT_033ec418);
    thunk_FUN_00d48444(StringLiteral_5080);
    thunk_FUN_00d48444(PTR_DAT_033eb140);
    DAT_03782530 = 1;
  }
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar9,0);
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar3,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar1,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_UnityEngine_UIElements_Focusable_set_delegatesFocus__,
                        0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_RhythmGameStarter_NoteRecorderStorage_<>c_<RefreshUI>b__8_0__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_13036,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         System_Collections_Generic_Dictionary<string,_ConduitParameterValue>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_GetEnumerator__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_System_Collections_Generic_List<Pose>_get_Item__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_System_Collections_Generic_List<JsonProperty>_get_Count__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_8697,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_Unity_Collections_NativeArray<Vector3Int>_Copy__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x44) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_1488,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_5080,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_5691,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)PTR_DAT_033eb140,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_Unity_Collections_NativeSlice<Vector3>_get_Length__,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)PTR_DAT_033ec738,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x5c) = uVar11;
  return;
}


