/*
FUNCTION_NAME: RootMotion.FinalIK.FingerRig$$AutoDetect
ENTRY_POINT: 02f78080
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_14;source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


void RootMotion_FinalIK_FingerRig__AutoDetect(collate_byname<wchar_t> *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ctype_byname<char> *this;
  ctype_byname<wchar_t> *this_00;
  long *plVar3;
  codecvt<wchar_t,char,mbstate_t> *this_01;
  numpunct_byname<char> *this_02;
  numpunct_byname<wchar_t> *this_03;
  basic_string *pbVar4;
  uint unaff_w21;
  basic_string *unaff_x22;
  
  std::__ndk1::collate_byname<wchar_t>::collate_byname(param_1,unaff_x22,0);
  FUN_02f763cc();
  if ((unaff_w21 & 1) != 0) {
    this = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this,unaff_x22,0);
    FUN_02f764f8();
    this_00 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_00,unaff_x22,0);
    FUN_02f76624();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_GetClosestPowerOfTen__ + 0x10);
    plVar3[1] = -1;
    FUN_02f76750();
    this_01 = operator_new(0x18);
    pbVar4 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar4 = unaff_x22 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_01,(char *)pbVar4,0);
    *(undefined **)this_01 =
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
    this_02 = operator_new(0x30);
    *(undefined8 *)(this_02 + 0x20) = 0;
    *(undefined8 *)(this_02 + 0x28) = 0;
    *(undefined8 *)(this_02 + 0x18) = 0;
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__;
    *(undefined2 *)(this_02 + 0x10) = 0x2c2e;
    *(undefined **)this_02 = puVar1 + 0x10;
    *(undefined8 *)(this_02 + 8) = 0xffffffffffffffff;
    pbVar4 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar4 = unaff_x22 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_02,(char *)pbVar4);
    FUN_02f76c00();
    this_03 = operator_new(0x30);
    *(undefined8 *)(this_03 + 0x20) = 0;
    *(undefined8 *)(this_03 + 0x28) = 0;
    uVar2 = DAT_013f59d8;
    *(undefined8 *)(this_03 + 0x18) = 0;
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
    *(undefined8 *)(this_03 + 0x10) = uVar2;
    *(undefined **)this_03 = puVar1 + 0x10;
    *(undefined8 *)(this_03 + 8) = 0xffffffffffffffff;
    pbVar4 = unaff_x22 + 1;
    if (((byte)*unaff_x22 & 1) != 0) {
      pbVar4 = *(basic_string **)(unaff_x22 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_03,(char *)pbVar4);
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


