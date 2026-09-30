/*
FUNCTION_NAME: FUN_0141d5f4
ENTRY_POINT: 0141d5f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_0141d5f4(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_30;
  undefined4 local_24;
  
  if ((DAT_03776984 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_InputSystem_LowLevel_InputUpdateDelegate_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_141__);
    DAT_03776984 = 1;
  }
  local_30 = 0;
  if (param_2 != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x18);
    uVar2 = FUN_02681c0c(param_2,0);
    if (lVar5 != 0) {
      local_24 = uVar2;
      uVar3 = FUN_0129eff4(lVar5,&local_24,&local_30,
                           *(undefined8 *)
                            UnityEngine_InputSystem_LowLevel_InputUpdateDelegate_TypeInfo);
      puVar1 = StringLiteral_302;
      if ((uVar3 & 1) == 0) {
        uVar6 = *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_141__;
        uVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar4 = FUN_015f5b28(uVar6,uVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        FUN_026610e4(uVar4,0);
      }
      if (local_30 != 0) {
        return *(undefined1 (*) [16])(local_30 + 0x18);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


