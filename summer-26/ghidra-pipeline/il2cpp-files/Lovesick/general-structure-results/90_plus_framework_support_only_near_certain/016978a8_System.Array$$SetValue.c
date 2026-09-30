/*
FUNCTION_NAME: System.Array$$SetValue
ENTRY_POINT: 016978a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__SetValue(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 01697890 with catch @ 016978ac
                       catch() { ... } // from try @ 016978a4 with catch @ 016978ac */
                    /* try { // try from 016978b4 to 0179790f has its CatchHandler @ 016978b4
                       catch() { ... } // from try @ 016978b4 with catch @ 016978b4
                       catch() { ... } // from try @ 01697980 with catch @ 016978b4
                       catch() { ... } // from try @ 016979b4 with catch @ 016978b4
                       catch() { ... } // from try @ 01697af4 with catch @ 016978b4 */
  FUN_0168699c(param_1,*(undefined8 *)(unaff_x21 + 0x30),*(undefined8 *)(unaff_x19 + 0x10));
  *(undefined4 *)(unaff_x20 + 0x50) = 0;
  uVar2 = *(uint *)(unaff_x21 + 0x14);
  *(uint *)(unaff_x20 + 0x80) = uVar2;
  lVar9 = *(long *)(unaff_x21 + 0x18);
  *(long *)(unaff_x20 + 0x88) = lVar9;
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x21 + 0x20);
  puVar5 = 
  Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__;
  if (5 < *(uint *)(unaff_x21 + 0x40)) {
                    /* try { // try from 01697adc to 01797aeb has its CatchHandler @ 01697aec */
    uVar6 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar6 = FUN_00da4fb8(uVar6,1);
                    /* catch() { ... } // from try @ 0169799c with catch @ 01697aec
                       catch() { ... } // from try @ 01697adc with catch @ 01697aec */
                    /* try { // try from 01697af0 to 01797af3 has its CatchHandler @ 01697afc */
    FUN_00ac2be8();
    in_stack_00000008 = *(undefined4 *)(unaff_x21 + 0x40);
    uVar7 = thunk_FUN_00d48444(System_Converter<IBounded,_Triangle>_TypeInfo);
    uVar7 = thunk_FUN_00d61fa0(uVar7,&stack0x00000008);
    uVar7 = FUN_017a7f78(uVar7,0);
    FUN_00ac2be8(uVar6);
    FUN_00acb0b4(uVar6,uVar7);
    FUN_00adb25c(uVar6,0,uVar7);
    uVar7 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_38_0_TypeInfo);
    uVar6 = FUN_017b63dc(uVar7,uVar6,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar7,uVar6,0);
    uVar6 = thunk_FUN_00d48444(StringLiteral_10139);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar6);
  }
  uVar3 = 1 << (ulong)(*(uint *)(unaff_x21 + 0x40) & 0x1f);
  if ((uVar3 & 9) == 0) {
    if ((uVar3 & 0x12) == 0) {
      if ((int)uVar2 < 1) {
        iVar8 = 1;
      }
      else {
        if (lVar9 == 0) goto LAB_01697ad0;
        uVar10 = 0;
        iVar8 = 1;
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01697ad4;
          lVar1 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          iVar8 = *(int *)(lVar9 + 0x20 + lVar1) * iVar8;
        } while (uVar2 != uVar10);
      }
      *(int *)(unaff_x22 + 0x48) = iVar8;
      *(undefined4 *)(unaff_x20 + 0x18) = 3;
    }
    else {
                    /* try { // try from 01697910 to 01797937 has its CatchHandler @ 01697984 */
      if (lVar9 == 0) goto LAB_01697ad0;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01697ad4;
      *(undefined4 *)(unaff_x22 + 0x48) = *(undefined4 *)(lVar9 + 0x20);
      *(undefined4 *)(unaff_x20 + 0x18) = 2;
    }
LAB_01697a5c:
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01697ad0;
    FUN_0169983c();
    bVar4 = false;
  }
  else {
    if (lVar9 == 0) goto LAB_01697ad0;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_01697ad4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(unaff_x22 + 0x48) = *(undefined4 *)(lVar9 + 0x20);
    *(undefined4 *)(unaff_x20 + 0x18) = 1;
    uVar2 = *(uint *)(unaff_x20 + 0x7c);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((0x10 < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x1cfceU) == 0)) goto LAB_01697a5c;
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if (lVar9 == 0) goto LAB_01697ad0;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01697ad4;
    if (*(int *)(lVar9 + 0x20) != 0) goto LAB_01697a5c;
    FUN_01699364();
    FUN_0169868c();
    bVar4 = true;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_01691df0();
    if (!bVar4) {
      return;
    }
    *(undefined4 *)(unaff_x20 + 0x10) = 4;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_01691df0();
      return;
    }
  }
LAB_01697ad0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


