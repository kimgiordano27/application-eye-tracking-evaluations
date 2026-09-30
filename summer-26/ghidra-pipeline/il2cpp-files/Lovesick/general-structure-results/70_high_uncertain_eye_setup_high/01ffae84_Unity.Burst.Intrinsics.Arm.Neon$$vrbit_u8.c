/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vrbit_u8
ENTRY_POINT: 01ffae84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Burst_Intrinsics_Arm_Neon__vrbit_u8(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_0378084d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Module>__ctor__);
    thunk_FUN_00d48444(System_Xml_Schema_XsdBuilder_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_ArrayEnumerator_get_Current__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_0378084d = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(UnityEngine_Assertions_Assert_TypeInfo);
    FUN_016f2f28(uVar5,uVar7,0);
    uVar7 = thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<Color2>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar7);
  }
  lVar2 = thunk_FUN_00d6225c(param_1,*(undefined8 *)System_Xml_Schema_XsdBuilder_TypeInfo);
  if (lVar2 != 0) {
    uVar5 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar5 = FUN_00da4fb8(uVar5,1);
    FUN_00ac2be8(param_1);
    plVar6 = (long *)thunk_FUN_00d93c64(param_1,0);
    FUN_00ac2be8();
    uVar7 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
    FUN_00ac2be8(uVar5);
    FUN_00acb0b4(uVar5,uVar7);
    FUN_00adb25c(uVar5,0,uVar7);
    uVar7 = thunk_FUN_00d48444(StringLiteral_14291);
    uVar5 = FUN_015e239c(uVar7,uVar5,0);
    thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_0176c578(uVar7,uVar5,0);
    uVar5 = thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<Color2>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar5);
  }
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar2 = FUN_01ffe28c(param_1);
  puVar1 = Method_System_Collections_Generic_List<Module>__ctor__;
  if (lVar2 != 0) {
    lVar3 = FUN_01fe43a8(lVar2,param_1,0);
    lVar4 = thunk_FUN_00d6225c(param_1,*(undefined8 *)puVar1);
    lVar2 = lVar3;
    if ((lVar4 != 0) && ((param_2 & 1) == 0)) {
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_ArrayEnumerator_get_Current__);
      if (lVar2 == 0) goto LAB_01ffaf80;
      FUN_017b46ec(lVar2,0);
      *(long *)(lVar2 + 0x10) = lVar4;
      *(long *)(lVar2 + 0x18) = lVar3;
    }
    return lVar2;
  }
LAB_01ffaf80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


