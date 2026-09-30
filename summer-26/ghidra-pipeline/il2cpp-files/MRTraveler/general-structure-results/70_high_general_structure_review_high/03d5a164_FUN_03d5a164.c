/*
FUNCTION_NAME: FUN_03d5a164
ENTRY_POINT: 03d5a164
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void FUN_03d5a164(undefined8 *param_1,undefined8 *param_2,basic_string *param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  __shared_count *this;
  collate_byname<char> *this_00;
  collate_byname<wchar_t> *this_01;
  ctype_byname<char> *this_02;
  ctype_byname<wchar_t> *this_03;
  long *plVar4;
  codecvt<wchar_t,char,mbstate_t> *this_04;
  void *pvVar5;
  numpunct_byname<char> *this_05;
  numpunct_byname<wchar_t> *this_06;
  long lVar6;
  long lVar7;
  basic_string *pbVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = &PTR_FUN_08e62d98;
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
    FUN_03d6c5d8(param_1 + 2,param_2[2],param_2[3]);
  }
  lVar7 = param_1[2];
  lVar6 = param_1[3];
  if (lVar6 != lVar7) {
    uVar9 = 0;
    uVar10 = 1;
    do {
      this = *(__shared_count **)(lVar7 + uVar9 * 8);
      if (this != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this);
        lVar7 = param_1[2];
        lVar6 = param_1[3];
      }
      bVar3 = uVar10 < (ulong)(lVar6 - lVar7 >> 3);
      uVar9 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar3);
  }
  if ((param_4 >> 3 & 1) != 0) {
    this_00 = operator_new(0x18);
    std::__ndk1::collate_byname<char>::collate_byname(this_00,param_3,0);
    FUN_03d58494(param_1,this_00);
    this_01 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_01,param_3,0);
    FUN_03d585c0(param_1,this_01);
  }
  if ((param_4 & 1) != 0) {
    this_02 = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this_02,param_3,0);
    FUN_03d586ec(param_1,this_02);
    this_03 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_03,param_3,0);
    FUN_03d58818(param_1,this_03);
    plVar4 = operator_new(0x10);
    *plVar4 = (long)(System_Collections_ObjectModel_ReadOnlyCollection<ZipArchiveEntry>_TypeInfo +
                    0x10);
    plVar4[1] = -1;
    FUN_03d58944(param_1);
    this_04 = operator_new(0x18);
    pbVar8 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_04,(char *)pbVar8,0);
    *(undefined **)this_04 =
         System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo +
         0x10;
    FUN_03d58a70(param_1,this_04);
    plVar4 = operator_new(0x10);
    *plVar4 = (long)(
                    System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo
                    + 0x10);
    plVar4[1] = -1;
    FUN_03d58b9c(param_1);
    plVar4 = operator_new(0x10);
    *plVar4 = (long)(
                    System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                    + 0x10);
    plVar4[1] = -1;
    FUN_03d58cc8(param_1);
  }
  if ((param_4 >> 4 & 1) != 0) {
    pvVar5 = operator_new(0x88);
    FUN_03d59178(pvVar5,param_3,0);
    FUN_03d5904c(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
    FUN_03d59388(pvVar5,param_3,0);
    FUN_03d5925c(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
    FUN_03d59598(pvVar5,param_3,0);
    FUN_03d5946c(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
    FUN_03d597a8(pvVar5,param_3,0);
    FUN_03d5967c(param_1,pvVar5);
  }
  if ((param_4 >> 1 & 1) != 0) {
    this_05 = operator_new(0x30);
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined8 *)(this_05 + 0x28) = 0;
    *(undefined8 *)(this_05 + 0x18) = 0;
    puVar1 = System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IEventMetric>_TypeInfo;
    *(undefined2 *)(this_05 + 0x10) = 0x2c2e;
    *(undefined **)this_05 = puVar1 + 0x10;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    pbVar8 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_05,(char *)pbVar8);
    FUN_03d58df4(param_1,this_05);
    this_06 = operator_new(0x30);
    *(undefined8 *)(this_06 + 0x20) = 0;
    *(undefined8 *)(this_06 + 0x28) = 0;
    uVar2 = DAT_018aebf0;
    *(undefined8 *)(this_06 + 0x18) = 0;
    puVar1 = 
    System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
    ;
    *(undefined8 *)(this_06 + 0x10) = uVar2;
    *(undefined **)this_06 = puVar1 + 0x10;
    *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
    pbVar8 = param_3 + 1;
    if (((byte)*param_3 & 1) != 0) {
      pbVar8 = *(basic_string **)(param_3 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_06,(char *)pbVar8);
    FUN_03d58f20(param_1,this_06);
  }
  if ((param_4 >> 2 & 1) != 0) {
    plVar4 = operator_new(0x440);
    puVar1 = Oculus_Interaction_RandomSampleConsensus<Vector3>_TypeInfo + 0x70;
    *plVar4 = (long)(Oculus_Interaction_RandomSampleConsensus<Vector3>_TypeInfo + 0x10);
    plVar4[1] = -1;
    plVar4[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(plVar4 + 3),param_3);
    puVar1 = Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
             + 0xa8;
    *plVar4 = (long)(
                    Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
                    + 0x10);
    plVar4[2] = (long)puVar1;
    FUN_03d5988c(param_1,plVar4);
    plVar4 = operator_new(0x440);
    puVar1 = System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>_TypeInfo + 0x70;
    *plVar4 = (long)(System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>_TypeInfo
                    + 0x10);
    plVar4[1] = -1;
    plVar4[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(plVar4 + 3),param_3);
    puVar1 = Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
             + 0xa8;
    *plVar4 = (long)(
                    Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
                    + 0x10);
    plVar4[2] = (long)puVar1;
    FUN_03d599b8(param_1,plVar4);
    pvVar5 = operator_new(0x18);
    FUN_03d59c10(pvVar5,param_3,0);
    FUN_03d59ae4(param_1,pvVar5);
    pvVar5 = operator_new(0x18);
    FUN_03d59e24(pvVar5,param_3,0);
    FUN_03d59cf8(param_1,pvVar5);
  }
  if ((param_4 >> 5 & 1) != 0) {
    plVar4 = operator_new(0x10);
    *plVar4 = (long)(
                    Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
                    + 0x10);
    plVar4[1] = -1;
    FUN_03d59f0c(param_1);
    plVar4 = operator_new(0x10);
    *plVar4 = (long)(
                    Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                    + 0x10);
    plVar4[1] = -1;
    FUN_03d5a038(param_1);
  }
  return;
}


