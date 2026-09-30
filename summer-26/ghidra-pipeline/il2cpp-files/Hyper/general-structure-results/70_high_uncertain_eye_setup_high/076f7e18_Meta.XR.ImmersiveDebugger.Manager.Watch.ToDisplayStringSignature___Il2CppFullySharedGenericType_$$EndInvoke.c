/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 076f7e18
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,uint param_6,long param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_2 == 0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac50);
    uVar2 = thunk_FUN_04983f60();
    puVar4 = PTR_DAT_0ac42358;
  }
  else {
    if (param_7 != 0) {
      lVar1 = *(long *)(param_8 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04980b34();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      lVar1 = thunk_FUN_04983f60();
      if ((*(ushort *)(*(long *)(param_8 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34(*(long *)(param_8 + 0x20));
      }
      FUN_076f7c38(lVar1,param_2,param_3,param_1,param_4,param_5,param_6 | 0x2000,param_7);
      if (lVar1 != 0) {
        FUN_08df603c(lVar1,0,0);
        return lVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac50);
    uVar2 = thunk_FUN_04983f60();
    puVar4 = PTR_DAT_0ac3fd10;
  }
  uVar3 = thunk_FUN_049ae08c(puVar4);
  System_RuntimeType__get_Assembly(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar2,param_8);
}


