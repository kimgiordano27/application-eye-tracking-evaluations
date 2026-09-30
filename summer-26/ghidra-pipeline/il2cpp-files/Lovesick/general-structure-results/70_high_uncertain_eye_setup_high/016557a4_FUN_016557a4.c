/*
FUNCTION_NAME: FUN_016557a4
ENTRY_POINT: 016557a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_016557a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  puVar1 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  lVar2 = param_1;
  if ((DAT_037782ea & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_65__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    lVar2 = thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    DAT_037782ea = 1;
  }
  local_38 = FUN_016564c8(lVar2,param_2,*(undefined8 *)puVar1);
  uVar3 = FUN_01656600(local_38,&local_38);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar4 = thunk_FUN_015fe514(*(long *)(param_1 + 0x30),
                                 *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,0),
     uVar5 = local_38, (uVar4 & 1) == 0)) {
    plVar6 = *(long **)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_65__);
    if ((lVar2 != 0) && (FUN_0164c1e0(lVar2,uVar5,uVar3,uVar7), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01655898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x308))(plVar6,lVar2,*(undefined8 *)(*plVar6 + 0x310));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__);
  uVar3 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar5 = thunk_FUN_00d48444(StringLiteral_3194);
  FUN_0164c318(uVar3,uVar5);
  uVar5 = thunk_FUN_00d48444(StringLiteral_3322);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar5);
}


