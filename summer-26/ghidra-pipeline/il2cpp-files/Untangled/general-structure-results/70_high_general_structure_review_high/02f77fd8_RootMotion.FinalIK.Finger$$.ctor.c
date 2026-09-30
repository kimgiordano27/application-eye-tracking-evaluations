/*
FUNCTION_NAME: RootMotion.FinalIK.Finger$$.ctor
ENTRY_POINT: 02f77fd8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_14;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void RootMotion_FinalIK_Finger___ctor(undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  bool in_ZR;
  bool bVar2;
  void *this;
  collate_byname<char> *this_00;
  collate_byname<wchar_t> *this_01;
  ctype_byname<char> *this_02;
  ctype_byname<wchar_t> *this_03;
  long *plVar3;
  codecvt<wchar_t,char,mbstate_t> *this_04;
  numpunct_byname<char> *this_05;
  numpunct_byname<wchar_t> *this_06;
  undefined2 in_w8;
  long lVar4;
  long lVar5;
  basic_string *pbVar6;
  ulong uVar7;
  long unaff_x19;
  uint unaff_w21;
  basic_string *unaff_x22;
  ulong uVar8;
  undefined8 unaff_x24;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = param_1._8_8_;
  uVar9 = param_1._0_8_;
  *(undefined8 *)(param_2 + 0x88) = uVar10;
  *(undefined8 *)(param_2 + 0x80) = uVar9;
  *(undefined8 *)(param_2 + 0x98) = uVar10;
  *(undefined8 *)(param_2 + 0x90) = uVar9;
  *(undefined8 *)(param_2 + 0xa8) = uVar10;
  *(undefined8 *)(param_2 + 0xa0) = uVar9;
  *(undefined8 *)(param_2 + 0xb8) = uVar10;
  *(undefined8 *)(param_2 + 0xb0) = uVar9;
  *(undefined8 *)(param_2 + 200) = uVar10;
  *(undefined8 *)(param_2 + 0xc0) = uVar9;
  *(undefined8 *)(param_2 + 0xd8) = uVar10;
  *(undefined8 *)(param_2 + 0xd0) = uVar9;
  *(undefined8 *)(param_2 + 0xe8) = uVar10;
  *(undefined8 *)(param_2 + 0xe0) = uVar9;
  *(undefined8 *)(param_2 + 0xf8) = uVar10;
  *(undefined8 *)(param_2 + 0xf0) = uVar9;
  *(undefined8 *)(param_2 + 0x108) = uVar10;
  *(undefined8 *)(param_2 + 0x100) = uVar9;
  *(undefined8 *)(param_2 + 0x18) = unaff_x24;
  *(undefined8 *)(param_2 + 0x20) = unaff_x24;
  *(undefined2 *)(param_2 + 0x120) = in_w8;
  *(undefined1 *)(param_2 + 0x122) = 0;
  if (!in_ZR) {
    FUN_02f8a3e4();
  }
  lVar5 = *(long *)(unaff_x19 + 0x10);
  lVar4 = *(long *)(unaff_x19 + 0x18);
  if (lVar4 != lVar5) {
    uVar7 = 0;
    uVar8 = 1;
    do {
      this = *(void **)(lVar5 + uVar7 * 8);
      if (this != (void *)0x0) {
        RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(this);
        lVar5 = *(long *)(unaff_x19 + 0x10);
        lVar4 = *(long *)(unaff_x19 + 0x18);
      }
      bVar2 = uVar8 < (ulong)(lVar4 - lVar5 >> 3);
      uVar7 = uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar2);
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    this_00 = operator_new(0x18);
    std::__ndk1::collate_byname<char>::collate_byname(this_00,unaff_x22,0);
    FUN_02f762a0();
    this_01 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_01,unaff_x22,0);
    FUN_02f763cc();
  }
  if ((unaff_w21 & 1) != 0) {
    this_02 = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this_02,unaff_x22,0);
    FUN_02f764f8();
    this_03 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_03,unaff_x22,0);
    FUN_02f76624();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_GetClosestPowerOfTen__ + 0x10);
    plVar3[1] = -1;
    FUN_02f76750();
    this_04 = operator_new(0x18);
    pbVar6 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar6 = unaff_x22 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_04,(char *)pbVar6,0);
    *(undefined **)this_04 =
         Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__ + 0x10;
    FUN_02f7687c();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__ + 0x10);
    plVar3[1] = -1;
    FUN_02f769a8();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__ + 0x10);
    plVar3[1] = -1;
    FUN_02f76ad4();
  }
  if ((unaff_w21 >> 4 & 1) != 0) {
    operator_new(0x88);
    FUN_02f76f84();
    FUN_02f76e58();
    operator_new(0x88);
    FUN_02f77194();
    FUN_02f77068();
    operator_new(0x88);
    FUN_02f773a4();
    FUN_02f77278();
    operator_new(0x88);
    FUN_02f775b4();
    FUN_02f77488();
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    this_05 = operator_new(0x30);
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined8 *)(this_05 + 0x28) = 0;
    *(undefined8 *)(this_05 + 0x18) = 0;
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__;
    *(undefined2 *)(this_05 + 0x10) = 0x2c2e;
    *(undefined **)this_05 = puVar1 + 0x10;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    pbVar6 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar6 = unaff_x22 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_05,(char *)pbVar6);
    FUN_02f76c00();
    this_06 = operator_new(0x30);
    *(undefined8 *)(this_06 + 0x20) = 0;
    *(undefined8 *)(this_06 + 0x28) = 0;
    uVar9 = DAT_013f59d8;
    *(undefined8 *)(this_06 + 0x18) = 0;
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
    *(undefined8 *)(this_06 + 0x10) = uVar9;
    *(undefined **)this_06 = puVar1 + 0x10;
    *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
    pbVar6 = unaff_x22 + 1;
    if (((byte)*unaff_x22 & 1) != 0) {
      pbVar6 = *(basic_string **)(unaff_x22 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_06,(char *)pbVar6);
    FUN_02f76d2c();
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    plVar3 = operator_new(0x440);
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x70;
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x10);
    plVar3[1] = -1;
    plVar3[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(plVar3 + 3),unaff_x22);
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__ + 0xa8;
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__ + 0x10);
    plVar3[2] = (long)puVar1;
    FUN_02f77698();
    plVar3 = operator_new(0x440);
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x70;
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x10);
    plVar3[1] = -1;
    plVar3[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(plVar3 + 3),unaff_x22);
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__ + 0xa8;
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__ + 0x10);
    plVar3[2] = (long)puVar1;
    FUN_02f777c4();
    operator_new(0x18);
    FUN_02f77a1c();
    FUN_02f778f0();
    operator_new(0x18);
    FUN_02f77c30();
    FUN_02f77b04();
  }
  if ((unaff_w21 >> 5 & 1) != 0) {
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__ + 0x10);
    plVar3[1] = -1;
    FUN_02f77d18();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__ + 0x10);
    plVar3[1] = -1;
    FUN_02f77e44();
  }
  return;
}


