/*
FUNCTION_NAME: FUN_015298b0
ENTRY_POINT: 015298b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_015298b0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_033f3618;
  if ((DAT_037779d7 & 1) == 0) {
    thunk_FUN_00d48444(Method_Autohand_HandDistanceGrabber_TryCatchAssist__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(Method_System_Single_System_IConvertible_ToChar__);
    DAT_037779d7 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar3 = Method_System_Single_System_IConvertible_ToChar__;
  puVar2 = Method_Autohand_HandDistanceGrabber_TryCatchAssist__;
  if (lVar4 != 0) {
    FUN_02669c18(lVar4,0);
    FUN_0268b75c(lVar4,*(undefined8 *)puVar3,0);
    *(long *)(param_1 + 0x48) = lVar4;
    plVar1 = (long *)(param_1 + 0x50);
    uVar5 = FUN_010c3738(param_1,plVar1,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      lVar4 = FUN_0268fd4c(param_1,0);
      if (lVar4 == 0) goto LAB_015299ac;
      lVar4 = FUN_010e5800(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
      *plVar1 = lVar4;
    }
    else {
      lVar4 = *plVar1;
    }
    if (lVar4 != 0) {
      FUN_02666150(lVar4,*(undefined8 *)(param_1 + 0x48),0);
      return;
    }
  }
LAB_015299ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


