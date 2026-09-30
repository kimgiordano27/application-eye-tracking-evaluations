/*
FUNCTION_NAME: FUN_02f77f70
ENTRY_POINT: 02f77f70
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_14;source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_02f77f70(undefined8 *param_1,undefined8 *param_2,basic_string *param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  void *pvVar4;
  collate_byname<char> *this;
  collate_byname<wchar_t> *this_00;
  ctype_byname<char> *this_01;
  ctype_byname<wchar_t> *this_02;
  long *plVar5;
  codecvt<wchar_t,char,mbstate_t> *this_03;
  numpunct_byname<char> *this_04;
  numpunct_byname<wchar_t> *this_05;
  long lVar6;
  long lVar7;
  basic_string *pbVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = &PTR_FUN_06cfbed0;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[2] = param_1 + 6;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[3] = param_1 + 0x22;
  param_1[4] = param_1 + 0x22;
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  if (param_1 != param_2) {
    FUN_02f8a3e4(param_1 + 2,param_2[2],param_2[3]);
  }
  lVar7 = param_1[2];
  lVar6 = param_1[3];
  if (lVar6 != lVar7) {
    uVar9 = 0;
    uVar10 = 1;
    do {
      pvVar4 = *(void **)(lVar7 + uVar9 * 8);
      if (pvVar4 != (void *)0x0) {
        RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
        lVar7 = param_1[2];
        lVar6 = param_1[3];
      }
      bVar3 = uVar10 < (ulong)(lVar6 - lVar7 >> 3);
      uVar9 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar3);
  }
  if ((param_4 >> 3 & 1) != 0) {
    this = operator_new(0x18);
    std::__ndk1::collate_byname<char>::collate_byname(this,param_3,0);
    FUN_02f762a0(param_1,this);
    this_00 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_00,param_3,0);
    FUN_02f763cc(param_1,this_00);
  }
  if ((param_4 & 1) != 0) {
    this_01 = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this_01,param_3,0);
    FUN_02f764f8(param_1,this_01);
    this_02 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_02,param_3,0);
    FUN_02f76624(param_1,this_02);
    plVar5 = operator_new(0x10);
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_GetClosestPowerOfTen__ + 0x10);
    plVar5[1] = -1;
    FUN_02f76750(param_1);
    this_03 = operator_new(0x18);
    pbVar8 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_03,(char *)pbVar8,0);
    *(undefined **)this_03 =
         Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__ + 0x10;
    FUN_02f7687c(param_1,this_03);
    plVar5 = operator_new(0x10);
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__ + 0x10);
    plVar5[1] = -1;
    FUN_02f769a8(param_1);
    plVar5 = operator_new(0x10);
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__ + 0x10);
    plVar5[1] = -1;
    FUN_02f76ad4(param_1);
  }
  if ((param_4 >> 4 & 1) != 0) {
    pvVar4 = operator_new(0x88);
    FUN_02f76f84(pvVar4,param_3,0);
    FUN_02f76e58(param_1,pvVar4);
    pvVar4 = operator_new(0x88);
    FUN_02f77194(pvVar4,param_3,0);
    FUN_02f77068(param_1,pvVar4);
    pvVar4 = operator_new(0x88);
    FUN_02f773a4(pvVar4,param_3,0);
    FUN_02f77278(param_1,pvVar4);
    pvVar4 = operator_new(0x88);
    FUN_02f775b4(pvVar4,param_3,0);
    FUN_02f77488(param_1,pvVar4);
  }
  if ((param_4 >> 1 & 1) != 0) {
    this_04 = operator_new(0x30);
    *(undefined8 *)(this_04 + 0x20) = 0;
    *(undefined8 *)(this_04 + 0x28) = 0;
    *(undefined8 *)(this_04 + 0x18) = 0;
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__;
    *(undefined2 *)(this_04 + 0x10) = 0x2c2e;
    *(undefined **)this_04 = puVar1 + 0x10;
    *(undefined8 *)(this_04 + 8) = 0xffffffffffffffff;
    pbVar8 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_04,(char *)pbVar8);
    FUN_02f76c00(param_1,this_04);
    this_05 = operator_new(0x30);
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined8 *)(this_05 + 0x28) = 0;
    uVar2 = DAT_013f59d8;
    *(undefined8 *)(this_05 + 0x18) = 0;
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
    *(undefined8 *)(this_05 + 0x10) = uVar2;
    *(undefined **)this_05 = puVar1 + 0x10;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    pbVar8 = param_3 + 1;
    if (((byte)*param_3 & 1) != 0) {
      pbVar8 = *(basic_string **)(param_3 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_05,(char *)pbVar8);
    FUN_02f76d2c(param_1,this_05);
  }
  if ((param_4 >> 2 & 1) != 0) {
    plVar5 = operator_new(0x440);
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x70;
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x10);
    plVar5[1] = -1;
    plVar5[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(plVar5 + 3),param_3);
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__ + 0xa8;
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__ + 0x10);
    plVar5[2] = (long)puVar1;
    FUN_02f77698(param_1,plVar5);
    plVar5 = operator_new(0x440);
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x70;
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x10);
    plVar5[1] = -1;
    plVar5[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(plVar5 + 3),param_3);
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__ + 0xa8;
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__ + 0x10);
    plVar5[2] = (long)puVar1;
    FUN_02f777c4(param_1,plVar5);
    pvVar4 = operator_new(0x18);
    FUN_02f77a1c(pvVar4,param_3,0);
    FUN_02f778f0(param_1,pvVar4);
    pvVar4 = operator_new(0x18);
    FUN_02f77c30(pvVar4,param_3,0);
    FUN_02f77b04(param_1,pvVar4);
  }
  if ((param_4 >> 5 & 1) != 0) {
    plVar5 = operator_new(0x10);
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__ + 0x10);
    plVar5[1] = -1;
    FUN_02f77d18(param_1);
    plVar5 = operator_new(0x10);
    *plVar5 = (long)(Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__ + 0x10);
    plVar5[1] = -1;
    FUN_02f77e44(param_1);
  }
  return;
}


