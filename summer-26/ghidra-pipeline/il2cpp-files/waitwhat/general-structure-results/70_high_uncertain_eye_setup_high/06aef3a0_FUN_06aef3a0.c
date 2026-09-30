/*
FUNCTION_NAME: FUN_06aef3a0
ENTRY_POINT: 06aef3a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_06aef3a0(long param_1,void *param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined1 auStack_248 [152];
  undefined8 local_1b0;
  undefined1 auStack_1a0 [152];
  undefined1 auStack_108 [152];
  undefined8 local_70;
  ulong local_68;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<uint,_Func<GameObject>>__ctor__;
  if ((DAT_0755f8f5 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1328);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<uint,_Func<GameObject>>__ctor__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                );
                    /* try { // try from 06aef424 to 06bef49f has its CatchHandler @ 06aef424
                       catch() { ... } // from try @ 06aef424 with catch @ 06aef424
                       catch() { ... } // from try @ 06aef54c with catch @ 06aef424
                       catch() { ... } // from try @ 06aef594 with catch @ 06aef424 */
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                );
    DAT_0755f8f5 = 1;
  }
  memset(auStack_248,0,0xa8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
  ;
  if (param_1 != 0) {
    plVar6 = (long *)FUN_06b25804(param_1,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
    lVar7 = *(long *)puVar2;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (lVar7);
                    /* try { // try from 06aef4d4 to 06bef4db has its CatchHandler @ 06aef574 */
      FUN_043d1188(plVar6,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                  );
      lVar7 = *(long *)puVar1;
                    /* try { // try from 06aef4ec to 06bef4ff has its CatchHandler @ 06aef578 */
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar1;
      }
      FUN_06b259f4(param_1,**(undefined4 **)(lVar7 + 0xb8),plVar6,0);
      if (plVar6 == (long *)0x0) goto LAB_06aef6b4;
    }
    else {
                    /* try { // try from 06aef4a0 to 06bef4bf has its CatchHandler @ 06aef57c */
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar6);
      }
    }
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
    ;
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
    ;
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
    ;
    puVar1 = PTR_DAT_070f1328;
    uVar13 = *(uint *)(plVar6 + 3);
                    /* try { // try from 06aef518 to 06bef54b has its CatchHandler @ 06aef580 */
    if ((int)uVar13 < 1) {
      bVar12 = 1;
    }
    else {
      iVar10 = 0;
      bVar11 = 1;
      do {
        FUN_043d16c4(auStack_108,plVar6,iVar10,*(undefined8 *)puVar3);
        memcpy(auStack_248,auStack_108,0xa8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        bVar5 = FUN_06b73da0(auStack_248,param_2,0);
        uVar9 = local_1b0;
        bVar12 = (bVar5 ^ 1) & bVar11;
        if ((((bVar5 ^ 1) & 1) == 0) && ((param_4 & 1) == 0)) {
          memcpy(auStack_108,auStack_248,0x98);
          local_70 = uVar9;
          local_68 = 0;
          FUN_043d1728(plVar6,iVar10,auStack_108,*(undefined8 *)puVar4);
          bVar12 = bVar11;
        }
        uVar13 = *(uint *)(plVar6 + 3);
        iVar10 = iVar10 + 1;
        bVar11 = bVar12;
      } while (iVar10 < (int)uVar13);
    }
    memcpy(auStack_1a0,param_2,0x98);
    lVar7 = plVar6[2];
    lVar8 = *(long *)puVar2;
    *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
    if (lVar7 != 0) {
      if (uVar13 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar13 * 0xa8;
        *(uint *)(plVar6 + 3) = uVar13 + 1;
        memcpy((void *)(lVar7 + 0x20),auStack_1a0,0x98);
        *(undefined8 *)(lVar7 + 0xb8) = param_3;
        *(byte *)(lVar7 + 0xc0) = bVar12;
        *(undefined4 *)(lVar7 + 0xc1) = 0;
        *(undefined4 *)(lVar7 + 0xc4) = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
        memcpy(auStack_108,auStack_1a0,0x98);
        local_68 = (ulong)bVar12;
        local_70 = param_3;
        FUN_043d1a3c(plVar6,auStack_108,uVar9);
      }
      return;
    }
  }
LAB_06aef6b4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


