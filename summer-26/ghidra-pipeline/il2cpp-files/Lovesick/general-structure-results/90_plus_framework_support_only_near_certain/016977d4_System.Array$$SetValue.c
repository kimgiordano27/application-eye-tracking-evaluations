/*
FUNCTION_NAME: System.Array$$SetValue
ENTRY_POINT: 016977d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 149
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__SetValue(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  long unaff_x19;
  long lVar13;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
                    /* try { // try from 016977d4 to 01797863 has its CatchHandler @ 01697588 */
  if (param_1 == 0) goto LAB_01697ad0;
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(unaff_x21 + 0x28);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(unaff_x21 + 0x30);
  lVar13 = *(long *)(param_1 + 0x80);
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01697ad0;
  plVar6 = (long *)FUN_01699a00(*(long *)(unaff_x19 + 0x40),0);
  if (plVar6 == (long *)0x0) {
LAB_01697830:
                    /* catch() { ... } // from try @ 01697790 with catch @ 01697830 */
                    /* catch() { ... } // from try @ 01697778 with catch @ 01697834 */
                    /* catch() { ... } // from try @ 0169775c with catch @ 01697838 */
                    /* catch() { ... } // from try @ 01697720 with catch @ 0169783c */
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)PTR_DAT_033ea820;
                    /* catch() { ... } // from try @ 01697764 with catch @ 01697840 */
    if (lVar13 == 0) goto LAB_01697ad0;
                    /* catch() { ... } // from try @ 01697730 with catch @ 01697844 */
                    /* catch() { ... } // from try @ 01697710 with catch @ 01697848 */
    *(undefined4 *)(lVar13 + 0x10) = 2;
                    /* catch() { ... } // from try @ 01697740 with catch @ 0169784c */
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    if (*plVar6 !=
        *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__)
    {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
                    /* catch() { ... } // from try @ 016977d0 with catch @ 01697824 */
                    /* catch() { ... } // from try @ 016977cc with catch @ 01697828 */
                    /* catch() { ... } // from try @ 016977c8 with catch @ 0169782c */
    if (0 < *(int *)(unaff_x21 + 0x10)) goto LAB_01697830;
    if (lVar13 == 0) goto LAB_01697ad0;
    *(undefined4 *)(lVar13 + 0x10) = 3;
    *(undefined4 *)(lVar13 + 0x20) = 2;
    *(undefined4 *)(param_1 + 0x38) = 2;
    if ((int)plVar6[6] == 2) {
      *(undefined4 *)(lVar13 + 0x1c) = 3;
      *(undefined4 *)(param_1 + 0x34) = 3;
    }
    else {
      if ((int)plVar6[6] != 1) {
        uVar8 = thunk_FUN_00d48444(StringLiteral_3033);
        uVar8 = FUN_00da4fb8(uVar8,1);
        FUN_00ac2be8(plVar6);
        uStack000000000000000c = (undefined4)plVar6[6];
        uVar9 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<Color32>_SetDefault__);
        uVar9 = thunk_FUN_00d61fa0(uVar9,(long)&stack0x00000008 + 4);
        uVar9 = FUN_017a7f78(uVar9,0);
        FUN_00ac2be8(uVar8);
        FUN_00acb0b4(uVar8,uVar9);
        FUN_00adb25c(uVar8,0,uVar9);
        uVar9 = thunk_FUN_00d48444(PTR_DAT_033ee728);
        goto LAB_01697bac;
      }
      lVar7 = plVar6[5];
      *(undefined4 *)(lVar13 + 0x1c) = 2;
      *(long *)(lVar13 + 0x28) = lVar7;
      *(undefined4 *)(param_1 + 0x34) = 2;
      *(long *)(lVar13 + 0x40) = lVar7;
      *(long *)(lVar13 + 0x48) = plVar6[8];
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01697ad0;
  lVar7 = FUN_01693db8(*(long *)(unaff_x19 + 0x10),(long)*(int *)(unaff_x21 + 0x10));
  *(long *)(lVar13 + 0x58) = lVar7;
                    /* try { // try from 01697864 to 01797867 has its CatchHandler @ 01697888 */
                    /* try { // try from 01697868 to 0179788f has its CatchHandler @ 01697588 */
  if (lVar7 == *(long *)(unaff_x19 + 0x20)) {
    uVar10 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 01697864 with catch @ 01697888 */
    if ((*(long *)(unaff_x19 + 0x28) < 1) || (lVar7 != *(long *)(unaff_x19 + 0x28))) {
      uVar10 = 2;
    }
    else {
      uVar10 = 3;
                    /* try { // try from 01697890 to 01797897 has its CatchHandler @ 016978ac */
    }
  }
                    /* try { // try from 01697898 to 017978a3 has its CatchHandler @ 01697588 */
  *(undefined4 *)(lVar13 + 0x24) = uVar10;
  *(undefined4 *)(lVar13 + 0x14) = 2;
                    /* try { // try from 016978a4 to 017978ab has its CatchHandler @ 016978ac */
  FUN_0168699c(*(undefined4 *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
               *(undefined8 *)(unaff_x19 + 0x10));
  *(undefined4 *)(lVar13 + 0x50) = 0;
  uVar2 = *(uint *)(unaff_x21 + 0x14);
  *(uint *)(lVar13 + 0x80) = uVar2;
  lVar7 = *(long *)(unaff_x21 + 0x18);
  *(long *)(lVar13 + 0x88) = lVar7;
  *(undefined8 *)(lVar13 + 0x98) = *(undefined8 *)(unaff_x21 + 0x20);
  puVar5 = 
  Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__;
  if (5 < *(uint *)(unaff_x21 + 0x40)) {
    uVar8 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar8 = FUN_00da4fb8(uVar8,1);
    FUN_00ac2be8();
    uStack0000000000000008 = *(undefined4 *)(unaff_x21 + 0x40);
    uVar9 = thunk_FUN_00d48444(System_Converter<IBounded,_Triangle>_TypeInfo);
    uVar9 = thunk_FUN_00d61fa0(uVar9,&stack0x00000008);
    uVar9 = FUN_017a7f78(uVar9,0);
    FUN_00ac2be8(uVar8);
    FUN_00acb0b4(uVar8,uVar9);
    FUN_00adb25c(uVar8,0,uVar9);
    uVar9 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_38_0_TypeInfo);
LAB_01697bac:
    uVar8 = FUN_017b63dc(uVar9,uVar8,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar9,uVar8,0);
    uVar8 = thunk_FUN_00d48444(StringLiteral_10139);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,uVar8);
  }
  uVar3 = 1 << (ulong)(*(uint *)(unaff_x21 + 0x40) & 0x1f);
  if ((uVar3 & 9) == 0) {
    if ((uVar3 & 0x12) == 0) {
      if ((int)uVar2 < 1) {
        iVar11 = 1;
      }
      else {
        if (lVar7 == 0) goto LAB_01697ad0;
        uVar12 = 0;
        iVar11 = 1;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_01697ad4;
          lVar1 = uVar12 * 4;
          uVar12 = uVar12 + 1;
          iVar11 = *(int *)(lVar7 + 0x20 + lVar1) * iVar11;
        } while (uVar2 != uVar12);
      }
      *(int *)(param_1 + 0x48) = iVar11;
      *(undefined4 *)(lVar13 + 0x18) = 3;
    }
    else {
      if (lVar7 == 0) goto LAB_01697ad0;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01697ad4;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar7 + 0x20);
      *(undefined4 *)(lVar13 + 0x18) = 2;
    }
LAB_01697a5c:
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01697ad0;
    FUN_0169983c(*(long *)(unaff_x19 + 0x40),param_1,0);
    bVar4 = false;
  }
  else {
    if (lVar7 == 0) goto LAB_01697ad0;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_01697ad4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar7 + 0x20);
    *(undefined4 *)(lVar13 + 0x18) = 1;
    uVar2 = *(uint *)(lVar13 + 0x7c);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((0x10 < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x1cfceU) == 0)) goto LAB_01697a5c;
    lVar7 = *(long *)(unaff_x21 + 0x20);
    if (lVar7 == 0) goto LAB_01697ad0;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01697ad4;
    if (*(int *)(lVar7 + 0x20) != 0) goto LAB_01697a5c;
    FUN_01699364();
    FUN_0169868c();
    bVar4 = true;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_01691df0(*(long *)(unaff_x19 + 0x10),lVar13);
    if (!bVar4) {
      return;
    }
    *(undefined4 *)(lVar13 + 0x10) = 4;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_01691df0(*(long *)(unaff_x19 + 0x10),lVar13);
      return;
    }
  }
LAB_01697ad0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


