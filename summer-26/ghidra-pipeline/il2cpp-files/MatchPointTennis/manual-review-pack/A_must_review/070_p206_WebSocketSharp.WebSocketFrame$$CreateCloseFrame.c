/*
FUNCTION_NAME: WebSocketSharp.WebSocketFrame$$CreateCloseFrame
ENTRY_POINT: 097e4094
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void WebSocketSharp_WebSocketFrame__CreateCloseFrame(void)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 097e3e64 with catch @ 097e4094 */
  if (!in_ZR) {
    in_stack_00000008 = thunk_FUN_044adef4(System_Buffers_ArrayPool<Quaternion>_TypeInfo);
    in_stack_00000010 = 0xffffffffffffffff;
    uVar2 = FUN_07a742b0(&stack0x00000008,0);
    uVar3 = thunk_FUN_044adef4(System_Func<UnifiedUI_XPSummaryEntry,_bool>_TypeInfo);
    uVar4 = thunk_FUN_044adef4(System_Func<Type,_Type>_TypeInfo);
    uVar2 = FUN_078b4f58(uVar3,uVar2,uVar4,0);
    thunk_FUN_044adef4(PTR_DAT_09f217f8);
    uVar3 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f3d188);
    FUN_07996d40(uVar3,uVar2,uVar4,0);
    uVar2 = thunk_FUN_044adef4(System_Func<UnityWebRequestResult,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar2);
  }
                    /* catch() { ... } // from try @ 097e406c with catch @ 097e4098 */
                    /* catch() { ... } // from try @ 097e3f70 with catch @ 097e409c */
                    /* catch() { ... } // from try @ 097e3dec with catch @ 097e40a0 */
                    /* catch() { ... } // from try @ 097e3f48 with catch @ 097e40a4 */
                    /* catch() { ... } // from try @ 097e3e20 with catch @ 097e40a8 */
                    /* catch() { ... } // from try @ 097e4068 with catch @ 097e40ac */
  lVar1 = FUN_0676f100(unaff_x21 + 0x28,
                       *(undefined8 *)
                        DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_88_var
                      );
                    /* catch() { ... } // from try @ 097e3e68 with catch @ 097e40b0 */
                    /* catch() { ... } // from try @ 097e3e30 with catch @ 097e40b4 */
                    /* catch() { ... } // from try @ 097e3e90 with catch @ 097e40b8 */
  if (*(int *)(lVar1 + 200) != unaff_w20) {
                    /* catch() { ... } // from try @ 097e3dc4 with catch @ 097e40bc */
                    /* catch() { ... } // from try @ 097e3df0 with catch @ 097e40c0 */
                    /* catch() { ... } // from try @ 097e3fa4 with catch @ 097e40c4 */
                    /* catch() { ... } // from try @ 097e3f80 with catch @ 097e40c8
                       catch() { ... } // from try @ 097e3fb4 with catch @ 097e40c8 */
    lVar1 = FUN_0676f11c(unaff_x21 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    *(int *)(lVar1 + 200) = unaff_w20;
    if (unaff_x19 != 0) {
                    /* try { // try from 097e40dc to 098e40df has its CatchHandler @ 097e40f8 */
                    /* try { // try from 097e40e0 to 098e4127 has its CatchHandler @ 097e3bd0 */
      uVar2 = FUN_09687ba8();
      FUN_0971d9f8(uVar2,unaff_w20,0);
      FUN_0968e4c0();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return;
}


