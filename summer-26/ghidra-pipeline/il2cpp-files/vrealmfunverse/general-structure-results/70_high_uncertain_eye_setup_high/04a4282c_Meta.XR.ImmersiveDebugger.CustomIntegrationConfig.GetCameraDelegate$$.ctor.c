/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetCameraDelegate$$.ctor
ENTRY_POINT: 04a4282c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate___ctor
               (long param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int in_stack_00000008;
  
  if (param_4 < 0) {
    in_stack_00000008 = param_4;
    uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000008);
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar4 = thunk_FUN_02b79644();
    uVar2 = thunk_FUN_02ba3594(PTR_DAT_0631ea50);
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322bb0);
    System_Threading_Tasks_Task__get_CompletedTask(uVar4,uVar2,uVar5,uVar3,0);
  }
  else {
    if ((param_3 <= *(int *)(param_2 + 0x18)) && (param_4 <= *(int *)(param_2 + 0x18) - param_3)) {
      iVar7 = *(int *)(param_1 + 0x24);
      if ((0 < iVar7) && (param_4 != 0)) {
        lVar6 = 0;
        uVar8 = 0;
        iVar9 = 0;
        do {
          lVar10 = *(long *)(param_1 + 0x18);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
LAB_04a428d0:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < *(int *)(lVar10 + lVar6 + 0x20)) {
            if (*(uint *)(param_2 + 0x18) <= (uint)(iVar9 + param_3)) goto LAB_04a428d0;
            lVar1 = param_2 + (long)(iVar9 + param_3) * 0x10;
            iVar9 = iVar9 + 1;
            uVar5 = *(undefined8 *)(lVar10 + lVar6 + 0x28);
            *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar10 + lVar6 + 0x30);
            *(undefined8 *)(lVar1 + 0x20) = uVar5;
            iVar7 = *(int *)(param_1 + 0x24);
          }
          uVar8 = uVar8 + 1;
        } while (((long)uVar8 < (long)iVar7) && (lVar6 = lVar6 + 0x18, iVar9 < param_4));
      }
      return;
    }
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar4 = thunk_FUN_02b79644();
    uVar5 = thunk_FUN_02ba3594(PTR_DAT_0631ff28);
    FUN_04cf4a4c(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,param_5);
}


