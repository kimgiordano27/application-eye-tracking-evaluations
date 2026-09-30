/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdup_laneq_s8
ENTRY_POINT: 01ffaee8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Unity_Burst_Intrinsics_Arm_Neon__vdup_laneq_s8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong unaff_x20;
  
  lVar1 = thunk_FUN_00d6225c(param_2,*param_1);
  if (lVar1 != 0) {
    uVar4 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar4 = FUN_00da4fb8(uVar4,1);
    FUN_00ac2be8();
    plVar5 = (long *)thunk_FUN_00d93c64();
    FUN_00ac2be8();
    uVar6 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
    FUN_00ac2be8(uVar4);
    FUN_00acb0b4(uVar4,uVar6);
    FUN_00adb25c(uVar4,0,uVar6);
    uVar6 = thunk_FUN_00d48444(StringLiteral_14291);
    uVar4 = FUN_015e239c(uVar6,uVar4,0);
    thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_0176c578(uVar6,uVar4,0);
    uVar4 = thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<Color2>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar4);
  }
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar1 = FUN_01ffe28c();
  if (lVar1 != 0) {
    lVar2 = FUN_01fe43a8();
    lVar3 = thunk_FUN_00d6225c();
    lVar1 = lVar2;
    if ((lVar3 != 0) && ((unaff_x20 & 1) == 0)) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_ArrayEnumerator_get_Current__);
      if (lVar1 == 0) goto LAB_01ffaf80;
      FUN_017b46ec(lVar1,0);
      *(long *)(lVar1 + 0x10) = lVar3;
      *(long *)(lVar1 + 0x18) = lVar2;
    }
    return lVar1;
  }
LAB_01ffaf80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


