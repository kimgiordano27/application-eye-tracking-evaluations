/*
FUNCTION_NAME: System.Array$$SetValue
ENTRY_POINT: 0169773c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 149
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void System_Array__SetValue(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 in_w8;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar15;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  *(undefined1 *)(unaff_x21 + 0x53c) = in_w8;
                    /* try { // try from 01697740 to 0179775b has its CatchHandler @ 0169784c */
  lVar4 = thunk_FUN_00d62348(*unaff_x22);
  if (lVar4 == 0) goto LAB_01697ad0;
  FUN_017b46ec(lVar4,0);
                    /* try { // try from 0169775c to 01797763 has its CatchHandler @ 01697838 */
  *(undefined4 *)(lVar4 + 0x3c) = unaff_w20;
                    /* try { // try from 01697764 to 0179776f has its CatchHandler @ 01697840 */
  FUN_016894cc(lVar4);
  if (*(int *)(lVar4 + 0x28) == 4) {
                    /* try { // try from 01697778 to 01797783 has its CatchHandler @ 01697834 */
    if (0 < *(int *)(lVar4 + 0x38)) {
      lVar5 = FUN_016967a8();
      if (lVar5 == 0) goto LAB_01697ad0;
                    /* try { // try from 01697790 to 0179779b has its CatchHandler @ 01697830 */
      plVar6 = (long *)FUN_01699c4c(lVar5,*(undefined4 *)(lVar4 + 0x38),0);
                    /* try { // try from 0169779c to 017977c7 has its CatchHandler @ 01697588 */
      if ((plVar6 != (long *)0x0) &&
         (*plVar6 != *(long *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
      goto LAB_016977cc;
    }
    uVar9 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar10 = FUN_00da4fb8(uVar9,1);
    FUN_00ac2be8(lVar4);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    FUN_00ac2be8(uVar10);
    FUN_00acb0b4(uVar10,uVar9);
    FUN_00adb25c(uVar10,0,uVar9);
    puVar11 = System_Security_Cryptography_X509Certificates_X509ChainElementCollection_TypeInfo;
  }
  else {
    plVar6 = (long *)FUN_01696694();
                    /* try { // try from 016977c8 to 017977cb has its CatchHandler @ 0169782c */
LAB_016977cc:
                    /* try { // try from 016977cc to 017977cf has its CatchHandler @ 01697828 */
                    /* try { // try from 016977d0 to 017977d3 has its CatchHandler @ 01697824 */
    lVar5 = FUN_01698a6c();
    if (lVar5 == 0) goto LAB_01697ad0;
    *(undefined4 *)(lVar5 + 0x30) = 2;
    *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar4 + 0x30);
    lVar15 = *(long *)(lVar5 + 0x80);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01697ad0;
    plVar7 = (long *)FUN_01699a00(*(long *)(unaff_x19 + 0x40),0);
    if (plVar7 == (long *)0x0) {
LAB_01697830:
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_033ea820;
      if (lVar15 == 0) goto LAB_01697ad0;
      *(undefined4 *)(lVar15 + 0x10) = 2;
      *(undefined4 *)(lVar5 + 0x38) = 0;
    }
    else {
      if (*plVar7 !=
          *(long *)
           Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      if (0 < *(int *)(lVar4 + 0x10)) goto LAB_01697830;
      if (lVar15 == 0) goto LAB_01697ad0;
      *(undefined4 *)(lVar15 + 0x10) = 3;
      *(undefined4 *)(lVar15 + 0x20) = 2;
      *(undefined4 *)(lVar5 + 0x38) = 2;
      if ((int)plVar7[6] == 2) {
        *(undefined4 *)(lVar15 + 0x1c) = 3;
        *(undefined4 *)(lVar5 + 0x34) = 3;
      }
      else {
        if ((int)plVar7[6] != 1) {
          uVar9 = thunk_FUN_00d48444(StringLiteral_3033);
          uVar10 = FUN_00da4fb8(uVar9,1);
          FUN_00ac2be8(plVar7);
          uStack000000000000000c = (undefined4)plVar7[6];
          uVar9 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<Color32>_SetDefault__);
          uVar9 = thunk_FUN_00d61fa0(uVar9,(long)&stack0x00000008 + 4);
          uVar9 = FUN_017a7f78(uVar9,0);
          FUN_00ac2be8(uVar10);
          FUN_00acb0b4(uVar10,uVar9);
          FUN_00adb25c(uVar10,0,uVar9);
          uVar9 = thunk_FUN_00d48444(PTR_DAT_033ee728);
          goto LAB_01697bac;
        }
        lVar8 = plVar7[5];
        *(undefined4 *)(lVar15 + 0x1c) = 2;
        *(long *)(lVar15 + 0x28) = lVar8;
        *(undefined4 *)(lVar5 + 0x34) = 2;
        *(long *)(lVar15 + 0x40) = lVar8;
        *(long *)(lVar15 + 0x48) = plVar7[8];
      }
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01697ad0;
    lVar8 = FUN_01693db8(*(long *)(unaff_x19 + 0x10),(long)*(int *)(lVar4 + 0x10));
    *(long *)(lVar15 + 0x58) = lVar8;
    if (lVar8 == *(long *)(unaff_x19 + 0x20)) {
      uVar12 = 1;
    }
    else if ((*(long *)(unaff_x19 + 0x28) < 1) || (lVar8 != *(long *)(unaff_x19 + 0x28))) {
      uVar12 = 2;
    }
    else {
      uVar12 = 3;
    }
    *(undefined4 *)(lVar15 + 0x24) = uVar12;
    *(undefined4 *)(lVar15 + 0x14) = 2;
    FUN_0168699c(*(undefined4 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                 *(undefined8 *)(unaff_x19 + 0x10),plVar6,lVar15 + 0x7c,lVar15 + 0x68,lVar15 + 0x70,
                 lVar15 + 0x78);
    *(undefined4 *)(lVar15 + 0x50) = 0;
    uVar1 = *(uint *)(lVar4 + 0x14);
    *(uint *)(lVar15 + 0x80) = uVar1;
    lVar8 = *(long *)(lVar4 + 0x18);
    *(long *)(lVar15 + 0x88) = lVar8;
    *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar4 + 0x20);
    puVar11 = 
    Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__;
    if (*(uint *)(lVar4 + 0x40) < 6) {
      uVar2 = 1 << (ulong)(*(uint *)(lVar4 + 0x40) & 0x1f);
      if ((uVar2 & 9) == 0) {
        if ((uVar2 & 0x12) == 0) {
          if ((int)uVar1 < 1) {
            iVar13 = 1;
          }
          else {
            if (lVar8 == 0) goto LAB_01697ad0;
            uVar14 = 0;
            iVar13 = 1;
            do {
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_01697ad4;
              lVar4 = uVar14 * 4;
              uVar14 = uVar14 + 1;
              iVar13 = *(int *)(lVar8 + 0x20 + lVar4) * iVar13;
            } while (uVar1 != uVar14);
          }
          *(int *)(lVar5 + 0x48) = iVar13;
          *(undefined4 *)(lVar15 + 0x18) = 3;
        }
        else {
          if (lVar8 == 0) goto LAB_01697ad0;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01697ad4;
          *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(lVar8 + 0x20);
          *(undefined4 *)(lVar15 + 0x18) = 2;
        }
LAB_01697a5c:
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01697ad0;
        FUN_0169983c(*(long *)(unaff_x19 + 0x40),lVar5,0);
        bVar3 = false;
      }
      else {
        if (lVar8 == 0) goto LAB_01697ad0;
        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_01697ad4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(lVar8 + 0x20);
        *(undefined4 *)(lVar15 + 0x18) = 1;
        uVar1 = *(uint *)(lVar15 + 0x7c);
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((0x10 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x1cfceU) == 0)) goto LAB_01697a5c;
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 == 0) goto LAB_01697ad0;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_01697ad4;
        if (*(int *)(lVar4 + 0x20) != 0) goto LAB_01697a5c;
        FUN_01699364();
        FUN_0169868c();
        bVar3 = true;
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_01691df0(*(long *)(unaff_x19 + 0x10),lVar15);
        if (!bVar3) {
          return;
        }
        *(undefined4 *)(lVar15 + 0x10) = 4;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_01691df0(*(long *)(unaff_x19 + 0x10),lVar15);
          return;
        }
      }
LAB_01697ad0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar10 = FUN_00da4fb8(uVar9,1);
    FUN_00ac2be8(lVar4);
    uStack0000000000000008 = *(undefined4 *)(lVar4 + 0x40);
    uVar9 = thunk_FUN_00d48444(System_Converter<IBounded,_Triangle>_TypeInfo);
    uVar9 = thunk_FUN_00d61fa0(uVar9,&stack0x00000008);
    uVar9 = FUN_017a7f78(uVar9,0);
    FUN_00ac2be8(uVar10);
    FUN_00acb0b4(uVar10,uVar9);
    FUN_00adb25c(uVar10,0,uVar9);
    puVar11 = OVRPlugin_OVRP_1_38_0_TypeInfo;
  }
  uVar9 = thunk_FUN_00d48444(puVar11);
LAB_01697bac:
  uVar9 = FUN_017b63dc(uVar9,uVar10,0);
  thunk_FUN_00d48444(
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                    );
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_01679968(uVar10,uVar9,0);
  uVar9 = thunk_FUN_00d48444(StringLiteral_10139);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar9);
}


