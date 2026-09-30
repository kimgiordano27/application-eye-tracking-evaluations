/*
FUNCTION_NAME: Niantic.Peridot.DotTriggerVolume$$OnTriggerEnter
ENTRY_POINT: 02d4cbfc
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Niantic_Peridot_DotTriggerVolume__OnTriggerEnter(undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  bool in_ZR;
  bool bVar2;
  __shared_count *this;
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
  *(undefined8 *)(param_2 + 0x68) = uVar10;
  *(undefined8 *)(param_2 + 0x60) = uVar9;
  *(undefined8 *)(param_2 + 0x78) = uVar10;
  *(undefined8 *)(param_2 + 0x70) = uVar9;
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
    FUN_02d5f00c();
  }
  lVar5 = *(long *)(unaff_x19 + 0x10);
  lVar4 = *(long *)(unaff_x19 + 0x18);
  if (lVar4 != lVar5) {
    uVar7 = 0;
    uVar8 = 1;
    do {
      this = *(__shared_count **)(lVar5 + uVar7 * 8);
      if (this != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this);
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
    FUN_02d4aec8();
    this_01 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_01,unaff_x22,0);
    FUN_02d4aff4();
  }
  if ((unaff_w21 & 1) != 0) {
    this_02 = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this_02,unaff_x22,0);
    FUN_02d4b120();
    this_03 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_03,unaff_x22,0);
    FUN_02d4b24c();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Google_Api_Gax_VersionHeaderBuilder_<>c_TypeInfo + 0x10);
    plVar3[1] = -1;
    FUN_02d4b378();
    this_04 = operator_new(0x18);
    pbVar6 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar6 = unaff_x22 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_04,(char *)pbVar6,0);
    *(undefined **)this_04 = Google_Apis_Requests_VersionHeaderBuilder_<>c_TypeInfo + 0x10;
    FUN_02d4b4a4();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Niantic_Peridot_CameraMode_VideoGeneratorWorker_<>c_TypeInfo + 0x10);
    plVar3[1] = -1;
    FUN_02d4b5d0();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(UnityEngine_XR_Interaction_Toolkit_VignetteParameters_Defaults_TypeInfo + 0x10)
    ;
    plVar3[1] = -1;
    FUN_02d4b6fc();
  }
  if ((unaff_w21 >> 4 & 1) != 0) {
    operator_new(0x88);
    FUN_02d4bbac();
    FUN_02d4ba80();
    operator_new(0x88);
    FUN_02d4bdbc();
    FUN_02d4bc90();
    operator_new(0x88);
    FUN_02d4bfcc();
    FUN_02d4bea0();
    operator_new(0x88);
    FUN_02d4c1dc();
    FUN_02d4c0b0();
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    this_05 = operator_new(0x30);
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined8 *)(this_05 + 0x28) = 0;
    *(undefined8 *)(this_05 + 0x18) = 0;
    puVar1 = Oculus_Interaction_VirtualPointable_<>c_TypeInfo;
    *(undefined2 *)(this_05 + 0x10) = 0x2c2e;
    *(undefined **)this_05 = puVar1 + 0x10;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    pbVar6 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar6 = unaff_x22 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_05,(char *)pbVar6);
    FUN_02d4b828();
    this_06 = operator_new(0x30);
    *(undefined8 *)(this_06 + 0x20) = 0;
    *(undefined8 *)(this_06 + 0x28) = 0;
    uVar9 = DAT_0137e668;
    *(undefined8 *)(this_06 + 0x18) = 0;
    puVar1 = Oculus_Interaction_VirtualSelector_<>c_TypeInfo;
    *(undefined8 *)(this_06 + 0x10) = uVar9;
    *(undefined **)this_06 = puVar1 + 0x10;
    *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
    pbVar6 = unaff_x22 + 1;
    if (((byte)*unaff_x22 & 1) != 0) {
      pbVar6 = *(basic_string **)(unaff_x22 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_06,(char *)pbVar6);
    Niantic_Peridot_CreatureIconService_<GenerateCreatureQueueCoroutine>d__28__System_IDisposable_Dispose
              ();
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    plVar3 = operator_new(0x440);
    puVar1 = VendingModule_<>c__DisplayClass55_1_TypeInfo + 0x70;
    *plVar3 = (long)(VendingModule_<>c__DisplayClass55_1_TypeInfo + 0x10);
    plVar3[1] = -1;
    plVar3[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(plVar3 + 3),unaff_x22);
    puVar1 = Niantic_Peridot_Cohort_VisitorCohortManager_<>c_TypeInfo + 0xa8;
    *plVar3 = (long)(Niantic_Peridot_Cohort_VisitorCohortManager_<>c_TypeInfo + 0x10);
    plVar3[2] = (long)puVar1;
    FUN_02d4c2c0();
    plVar3 = operator_new(0x440);
    puVar1 = VendingModule_<>c__DisplayClass57_0_TypeInfo + 0x70;
    *plVar3 = (long)(VendingModule_<>c__DisplayClass57_0_TypeInfo + 0x10);
    plVar3[1] = -1;
    plVar3[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(plVar3 + 3),unaff_x22);
    puVar1 = Niantic_HelloDot_Creature_VisitorDotEntranceBehavior_<Entrance>d__9_TypeInfo + 0xa8;
    *plVar3 = (long)(Niantic_HelloDot_Creature_VisitorDotEntranceBehavior_<Entrance>d__9_TypeInfo +
                    0x10);
    plVar3[2] = (long)puVar1;
    FUN_02d4c3ec();
    operator_new(0x18);
    FUN_02d4c644();
    FUN_02d4c518();
    operator_new(0x18);
    FUN_02d4c858();
    FUN_02d4c72c();
  }
  if ((unaff_w21 >> 5 & 1) != 0) {
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Niantic_HelloDot_Gameplay_VisitorDotManager_<>c_TypeInfo + 0x10);
    plVar3[1] = -1;
    FUN_02d4c940();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(Niantic_HelloDot_Gameplay_VisitorDotManager_<>c__DisplayClass32_0_TypeInfo +
                    0x10);
    plVar3[1] = -1;
    FUN_02d4ca6c();
  }
  return;
}


