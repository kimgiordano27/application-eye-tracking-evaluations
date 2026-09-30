/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 03f07798
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


void Meta_XR_ImmersiveDebugger_Manager_Tweak<__Il2CppFullySharedGenericType>___ctor
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  
  iVar1 = thunk_FUN_02b4ba0c(param_2,0);
  if (iVar1 == 1) {
    iVar1 = thunk_FUN_02b4b9cc(param_2,0,0);
    if (iVar1 == 0) {
      if ((param_3 < 0) || (iVar1 = FUN_04d941cc(param_2,0), iVar1 < param_3)) {
        in_stack_00000008._4_4_ = param_3;
        uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000008 + 4);
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar5 = thunk_FUN_02b79644();
        uVar2 = thunk_FUN_02ba3594(PTR_DAT_0631cbc8);
        uVar3 = thunk_FUN_02ba3594(PTR_DAT_0631ed58);
        System_Threading_Tasks_Task__get_CompletedTask(uVar5,uVar2,uVar6,uVar3,0);
      }
      else {
        iVar1 = FUN_04d941cc(param_2,0);
        if (*(int *)(param_1 + 0x18) <= iVar1 - param_3) {
          FUN_04d9e334(*(undefined8 *)(param_1 + 0x10),0,param_2,param_3,*(int *)(param_1 + 0x18),0)
          ;
          FUN_04da01b8(param_2,param_3,*(undefined4 *)(param_1 + 0x18),0);
          return;
        }
        thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
        uVar5 = thunk_FUN_02b79644();
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_0631ed78);
        FUN_04cf4a4c(uVar5,uVar6,0);
      }
      goto LAB_03f07978;
    }
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar5 = thunk_FUN_02b79644();
    puVar4 = PTR_DAT_0631ff20;
  }
  else {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar5 = thunk_FUN_02b79644();
    puVar4 = PTR_DAT_0631ff18;
  }
  uVar6 = thunk_FUN_02ba3594(puVar4);
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_0631cbb8);
  FUN_04cee0f4(uVar5,uVar6,uVar2,0);
LAB_03f07978:
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5);
}


