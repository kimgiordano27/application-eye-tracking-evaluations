/*
FUNCTION_NAME: FUN_01c6c288
ENTRY_POINT: 01c6c288
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_01c6c288(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_033f4120;
  if ((DAT_0377ebab & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_36>_SliceWithStride<Vector2>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4120);
    DAT_0377ebab = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_1;
    uVar3 = FUN_016aaf78(param_1,0,0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(StringLiteral_9130);
      FUN_016ec5b8(uVar6,uVar4,0);
LAB_01c6c3dc:
      uVar4 = thunk_FUN_00d48444(
                                Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent,_WitResponseNode>_get_OnPartialResponse__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,uVar4);
    }
    if (*(long *)(lVar2 + 0x10) != 0) {
      uVar3 = FUN_016aaed0(*(long *)(lVar2 + 0x10),0);
      puVar1 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
      if ((uVar3 & 1) == 0) {
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar4 = thunk_FUN_00d48444(
                                  System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_TypeInfo
                                  );
        FUN_016f2f28(uVar6,uVar4,0);
        goto LAB_01c6c3dc;
      }
      uVar4 = FUN_01c5effc(*(undefined8 *)(lVar2 + 0x10),0,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar4;
                    /* try { // try from 01c6c334 to 01d6c3f7 has its CatchHandler @ 01c6c334
                       catch() { ... } // from try @ 01c6c334 with catch @ 01c6c334
                       catch() { ... } // from try @ 01c6c5a8 with catch @ 01c6c334
                       catch() { ... } // from try @ 01c6c600 with catch @ 01c6c334
                       catch() { ... } // from try @ 01c6c658 with catch @ 01c6c334
                       catch() { ... } // from try @ 01c6c6a0 with catch @ 01c6c334 */
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        FUN_011c181c(lVar5,lVar2,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_36>_SliceWithStride<Vector2>__
                     ,0);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


