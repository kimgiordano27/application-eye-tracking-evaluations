/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$get_NumberOfControllers
ENTRY_POINT: 03b6d690
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__get_NumberOfControllers
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               int param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((DAT_066c40d4 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631ec10);
    DAT_066c40d4 = 1;
  }
  puVar2 = PTR_DAT_0631ec10;
  iVar1 = (param_5 - param_6) + 1;
  if (iVar1 <= (int)param_5) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_5) {
LAB_03b6d78c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (**(undefined8 **)(*(long *)(param_7 + 0x20) + 0xc0));
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar2);
      }
      if (*(uint *)(param_2 + 0x18) <= param_5) goto LAB_03b6d78c;
      uVar4 = FUN_04b4b204(param_2 + 0x20 + (long)(int)param_5 * 0x10,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 8));
      if ((uVar4 & 1) != 0) {
        return param_5;
      }
      param_5 = param_5 - 1;
    } while (iVar1 <= (int)param_5);
  }
  return 0xffffffff;
}


