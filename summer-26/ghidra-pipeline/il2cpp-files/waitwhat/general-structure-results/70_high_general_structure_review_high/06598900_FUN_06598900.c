/*
FUNCTION_NAME: FUN_06598900
ENTRY_POINT: 06598900
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


ulong FUN_06598900(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  
  puVar1 = System_Tuple<string,_string>_TypeInfo;
                    /* try { // try from 06598900 to 0669891f has its CatchHandler @ 065989bc */
                    /* try { // try from 06598920 to 0669893f has its CatchHandler @ 065989ac */
  if ((DAT_07557582 & 1) == 0) {
    FUN_03188a78(System_Tuple<TextReader,_Memory<char>>_TypeInfo);
    FUN_03188a78(
                System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo
                );
                    /* try { // try from 0659894c to 06698953 has its CatchHandler @ 065989cc */
    FUN_03188a78(PTR_DAT_070f2030);
    FUN_03188a78(PTR_DAT_070f1fd0);
    FUN_03188a78(System_Net_Http_Headers_TryParseListDelegate<ProductHeaderValue>_TypeInfo);
                    /* try { // try from 06598970 to 06698977 has its CatchHandler @ 065989c8 */
    FUN_03188a78(System_Tuple<Vector3,_float>_TypeInfo);
                    /* try { // try from 06598978 to 06698993 has its CatchHandler @ 06598714 */
    FUN_03188a78(System_Tuple<Vector3,_Vector3>_TypeInfo);
    FUN_03188a78(
                System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_TypeInfo
                );
                    /* try { // try from 06598994 to 06698997 has its CatchHandler @ 065989dc */
    FUN_03188a78(System_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>_TypeInfo);
                    /* try { // try from 06598998 to 0669899b has its CatchHandler @ 065989e4 */
                    /* try { // try from 0659899c to 0669899f has its CatchHandler @ 065989d8 */
                    /* try { // try from 065989a0 to 066989a3 has its CatchHandler @ 065989d0 */
    FUN_03188a78(System_Tuple<TaskCompletionSource<int>,_Memory<byte>,_byte[]>_TypeInfo);
                    /* try { // try from 065989a4 to 066989a7 has its CatchHandler @ 065989c4 */
                    /* try { // try from 065989a8 to 066989ab has its CatchHandler @ 065989b4 */
                    /* catch() { ... } // from try @ 06598920 with catch @ 065989ac
                       try { // try from 065989ac to 066989fb has its CatchHandler @ 06598714 */
    FUN_03188a78(System_Tuple<string,_string>_TypeInfo);
                    /* catch() { ... } // from try @ 065988d4 with catch @ 065989b0 */
                    /* catch() { ... } // from try @ 065989a8 with catch @ 065989b4 */
    DAT_07557582 = 1;
  }
                    /* catch() { ... } // from try @ 065988b0 with catch @ 065989b8 */
                    /* catch() { ... } // from try @ 06598900 with catch @ 065989bc */
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
                    /* catch() { ... } // from try @ 0659888c with catch @ 065989c0 */
  local_50 = 0;
  uStack_48 = 0;
                    /* catch() { ... } // from try @ 065989a4 with catch @ 065989c4 */
  local_58 = 0;
                    /* catch() { ... } // from try @ 06598970 with catch @ 065989c8 */
  lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0659894c with catch @ 065989cc */
                    /* catch() { ... } // from try @ 065989a0 with catch @ 065989d0 */
                    /* catch() { ... } // from try @ 06598864 with catch @ 065989d4 */
  FUN_05971910(lVar3,0);
                    /* catch() { ... } // from try @ 0659899c with catch @ 065989d8 */
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06598bdc with catch @ 06598be0
                       try { // try from 06598be0 to 06698c37 has its CatchHandler @ 06598aac */
    FUN_03188cd8();
  }
                    /* catch() { ... } // from try @ 06598994 with catch @ 065989dc */
                    /* catch() { ... } // from try @ 06598824 with catch @ 065989e0 */
  *(undefined4 *)(lVar3 + 0x10) = param_2;
  puVar1 = System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo;
                    /* catch() { ... } // from try @ 0659884c with catch @ 065989e4
                       catch() { ... } // from try @ 06598998 with catch @ 065989e4 */
  piVar7 = (int *)(param_1 + 0x28);
  if (0 < *piVar7) {
    iVar2 = 0;
    do {
                    /* try { // try from 065989fc to 06698a13 has its CatchHandler @ 06598a98 */
      uVar4 = FUN_03f46b54(piVar7,iVar2,*(undefined8 *)puVar1);
                    /* try { // try from 06598a14 to 06698a87 has its CatchHandler @ 06598714 */
      if (*(int *)(lVar3 + 0x10) == (int)uVar4) {
        return uVar4 >> 0x20;
                    /* try { // try from 06598b24 to 06698b2b has its CatchHandler @ 06598c04 */
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar7);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06598b8c with catch @ 06598be4 */
      FUN_03188cd8();
    }
    local_40 = FUN_0659516c();
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)System_Tuple<Vector3,_Vector3>_TypeInfo);
    FUN_047bac2c(uVar5,lVar3,
                 *(undefined8 *)
                  System_Tuple<TaskCompletionSource<int>,_Memory<byte>,_byte[]>_TypeInfo,0);
    iVar2 = FUN_0488697c(local_40,uVar5,
                         *(undefined8 *)
                          System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_TypeInfo
                        );
                    /* try { // try from 06598a88 to 06698a97 has its CatchHandler @ 06598a98 */
    if (iVar2 != -1) {
                    /* catch() { ... } // from try @ 065989fc with catch @ 06598a98
                       catch() { ... } // from try @ 06598a88 with catch @ 06598a98 */
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06598b68 with catch @ 06598be8 */
        FUN_03188cd8();
      }
                    /* try { // try from 06598a9c to 06698a9f has its CatchHandler @ 06598aa8 */
      auVar8 = FUN_0659516c();
                    /* try { // try from 06598aa0 to 06698aab has its CatchHandler @ 06598714 */
                    /* catch() { ... } // from try @ 06598a9c with catch @ 06598aa8 */
                    /* try { // try from 06598aac to 06698b0b has its CatchHandler @ 06598aac
                       catch() { ... } // from try @ 06598aac with catch @ 06598aac
                       catch() { ... } // from try @ 06598be0 with catch @ 06598aac
                       catch() { ... } // from try @ 06598c3c with catch @ 06598aac
                       catch() { ... } // from try @ 06598c78 with catch @ 06598aac */
      local_40 = auVar8;
      System_Collections_ObjectModel_ReadOnlyCollection<HIDParser_HIDReportData>__System_Collections_IList_get_IsReadOnly
                (auStack_80,local_40,iVar2,
                 *(undefined8 *)System_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>_TypeInfo);
      FUN_064dfd00(&local_50,local_78,0);
      puVar1 = PTR_DAT_070f2030;
      lVar6 = *(long *)PTR_DAT_070f2030;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *(long *)puVar1;
      }
      uVar4 = FUN_065a5a40(*(long *)(lVar6 + 0xb8) + 0x10,local_50,uStack_48,0);
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 06598b0c to 06698b17 has its CatchHandler @ 06598c0c */
        uVar4 = FUN_057bebf8(local_68,0);
        if ((uVar4 & 1) != 0) goto LAB_06598b18;
                    /* try { // try from 06598b2c to 06698b3b has its CatchHandler @ 06598c00 */
        if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
                    /* try { // try from 06598b4c to 06698b57 has its CatchHandler @ 06598bec */
        FUN_064f7a08(local_68,0,0,0,0);
      }
      uVar5 = FUN_064e007c(local_50,uStack_48,0);
                    /* try { // try from 06598b68 to 06698b6f has its CatchHandler @ 06598be8 */
      if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
                    /* try { // try from 06598b8c to 06698b8f has its CatchHandler @ 06598be4 */
      lVar6 = FUN_064f920c(uVar5,0,0,0);
      if (lVar6 != 0) {
                    /* try { // try from 06598ba4 to 06698baf has its CatchHandler @ 06598bf4 */
        FUN_06597a3c(param_1,*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar6 + 0xe0));
                    /* try { // try from 06598bb0 to 06698bbb has its CatchHandler @ 06598bf0 */
        System_Array_InternalEnumerator<UnitySynchronizationContext_WorkRequest>__get_Current
                  (param_1 + 0x48,lVar6,10,
                   *(undefined8 *)System_Tuple<TextReader,_Memory<char>>_TypeInfo);
        return (ulong)*(uint *)(lVar6 + 0xe0);
      }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06598b4c with catch @ 06598bec */
      FUN_03188cd8();
    }
  }
LAB_06598b18:
                    /* try { // try from 06598bcc to 06698bcf has its CatchHandler @ 06598c08 */
                    /* try { // try from 06598bd0 to 06698bd3 has its CatchHandler @ 06598c0c */
                    /* try { // try from 06598bd4 to 06698bd7 has its CatchHandler @ 06598bfc */
                    /* try { // try from 06598bd8 to 06698bdb has its CatchHandler @ 06598bf8 */
                    /* try { // try from 06598bdc to 06698bdf has its CatchHandler @ 06598be0 */
  return (ulong)*(uint *)(lVar3 + 0x10);
}


