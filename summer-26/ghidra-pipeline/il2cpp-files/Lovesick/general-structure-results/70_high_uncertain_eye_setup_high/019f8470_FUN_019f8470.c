/*
FUNCTION_NAME: FUN_019f8470
ENTRY_POINT: 019f8470
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_019f8470(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if ((DAT_0377a862 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec720);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<STMSampleLink>__ctor__);
    thunk_FUN_00d48444(Method_IronMaidenNeedle_OnRelease__);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_71_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3453);
    DAT_0377a862 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_016f27fc(lVar2,param_1,*(undefined8 *)OVRPlugin_OVRP_1_71_0_TypeInfo,0);
    FUN_01954c14(param_1,param_1 + 0x108,lVar2,0);
    if (*(long *)(param_1 + 0x120) == 0) {
      lVar2 = FUN_0268fd4c(param_1,0);
      if (lVar2 == 0) goto LAB_019f864c;
      uVar3 = FUN_010e5800(lVar2,*(undefined8 *)
                                  Method_System_Collections_Generic_List<STMSampleLink>__ctor__);
      FUN_019f8650(param_1,uVar3);
    }
    if (*(long *)(param_1 + 0x178) != 0) {
LAB_019f8630:
      FUN_01954cb8(param_1,param_1 + 0x108,0);
      return;
    }
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
    puVar1 = Method_IronMaidenNeedle_OnRelease__;
    if (lVar2 != 0) {
      FUN_0268afbc(lVar2,*(undefined8 *)StringLiteral_3453,0);
      plVar4 = (long *)FUN_010e5800(lVar2,*(undefined8 *)puVar1);
      if (plVar4 != (long *)0x0) {
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(param_1 + 0x128);
        if (*(long *)(param_1 + 0x138) != 0) {
          lVar5 = FUN_010e5800(lVar2,*(undefined8 *)PTR_DAT_033ec720);
          if (lVar5 == 0) goto LAB_019f864c;
          thunk_FUN_019d1284(lVar5,*(undefined8 *)(param_1 + 0x138),0);
          lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar2,0);
          plVar4[4] = lVar2;
        }
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo)
        ;
        if (lVar2 != 0) {
          FUN_019f6090(lVar2,plVar4,*(undefined8 *)(*plVar4 + 400));
          *(long *)(param_1 + 0x178) = lVar2;
          goto LAB_019f8630;
        }
      }
    }
  }
LAB_019f864c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


