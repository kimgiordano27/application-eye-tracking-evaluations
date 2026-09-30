/*
FUNCTION_NAME: System.Array$$GetValue
ENTRY_POINT: 01696958
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__GetValue(ulong param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar8;
  undefined4 uStack000000000000000c;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xc80);
                    /* try { // try from 0169695c to 0179695f has its CatchHandler @ 01697268 */
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_RCG_Lovesick_ControllerMapping_DialogueSkipReleased__);
                    /* try { // try from 0169698c to 0179698f has its CatchHandler @ 016972a0 */
                    /* try { // try from 01696990 to 017969a3 has its CatchHandler @ 01697300 */
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    *(undefined1 *)(unaff_x21 + 0x533) = 1;
  }
  lVar3 = thunk_FUN_00d62348(*puVar8);
  if (lVar3 == 0) goto LAB_01696a98;
  FUN_017b46ec(lVar3,0);
  if (param_3 == 0x14) {
                    /* try { // try from 016969c0 to 017969c3 has its CatchHandler @ 0169726c */
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_RCG_Lovesick_ControllerMapping_DialogueSkipReleased__);
    if (lVar4 == 0) goto LAB_01696a98;
    FUN_017b46ec(lVar4,0);
                    /* try { // try from 016969e4 to 017969eb has its CatchHandler @ 016972f0 */
    FUN_01687e68(lVar4,param_2);
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_01696a98;
    plVar5 = (long *)FUN_01691dc0(*(long *)(param_2 + 0x10),*(undefined4 *)(lVar4 + 0x14));
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_01696aa0:
      uVar6 = thunk_FUN_00d48444(StringLiteral_3033);
      uVar6 = FUN_00da4fb8(uVar6,2);
      FUN_00ac2be8();
      puVar2 = Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__;
      uVar7 = thunk_FUN_00d48444(
                                Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__
                                );
      FUN_00acb0b4(uVar6,uVar7);
      uVar7 = thunk_FUN_00d48444(puVar2);
      FUN_00adb25c(uVar6,0,uVar7);
      FUN_00ac2be8(lVar4);
      uStack000000000000000c = *(undefined4 *)(lVar4 + 0x14);
      uVar7 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                );
      uVar7 = thunk_FUN_00d61fa0(uVar7,&stack0x0000000c);
      FUN_00ac2be8(uVar6);
      FUN_00acb0b4(uVar6,uVar7);
      FUN_00adb25c(uVar6,1,uVar7);
      uVar7 = thunk_FUN_00d48444(StringLiteral_12627);
      uVar6 = FUN_017b63dc(uVar7,uVar6,0);
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar7 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01679968(uVar7,uVar6,0);
      uVar6 = thunk_FUN_00d48444(System_Runtime_InteropServices_UnmanagedType_var);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,uVar6);
    }
    if (*plVar5 !=
        *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
      plVar5 = (long *)0x0;
    }
    *(long **)(lVar3 + 0x18) = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_01696aa0;
  }
  else {
    FUN_01687e00(lVar3,param_2);
  }
  puVar2 = Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__;
  lVar4 = FUN_016967a8(param_2);
  uVar1 = *(undefined4 *)(lVar3 + 0x10);
  uVar6 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    if (lVar4 != 0) {
      FUN_01699cc0(lVar4,uVar1,lVar3,0);
      return;
    }
  }
LAB_01696a98:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


