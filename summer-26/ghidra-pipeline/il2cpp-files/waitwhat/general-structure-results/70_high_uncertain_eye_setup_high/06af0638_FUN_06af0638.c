/*
FUNCTION_NAME: FUN_06af0638
ENTRY_POINT: 06af0638
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_06af0638(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_190 [168];
  undefined1 auStack_e8 [152];
  undefined8 local_50;
  
  puVar2 = Method_System_Collections_Generic_Dictionary<uint,_Func<GameObject>>__ctor__;
  if ((DAT_0755f8f9 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1328);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<uint,_Func<GameObject>>__ctor__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                );
    DAT_0755f8f9 = 1;
  }
  memset(auStack_e8,0,0xa8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  plVar4 = (long *)FUN_06b25804(param_1,**(undefined4 **)(*(long *)puVar2 + 0xb8),0);
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
  ;
  puVar2 = PTR_DAT_070f1328;
  if (plVar4 == (long *)0x0) {
    local_50 = 0;
    uVar6 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                     + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar4);
    }
    iVar7 = (int)plVar4[3];
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) {
        local_50 = 0;
        uVar6 = 0;
        goto LAB_06af07ac;
      }
      FUN_043d16c4(auStack_190,plVar4,iVar7,*(undefined8 *)puVar3);
      memcpy(auStack_e8,auStack_190,0xa8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_06b73df4(param_2,auStack_e8,0);
    } while ((uVar5 & 1) != 0);
    uVar6 = 1;
  }
LAB_06af07ac:
  *param_3 = local_50;
  return uVar6;
}


