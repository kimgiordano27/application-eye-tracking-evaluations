/*
FUNCTION_NAME: DG.Tweening.DOTween$$CompleteAndReturnKilledTot
ENTRY_POINT: 00f6a4cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_DOTween__CompleteAndReturnKilledTot(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar4;
  undefined8 *unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *unaff_x22;
  uVar2 = FUN_01600424(param_1,*(undefined8 *)(unaff_x20 + 0x20),*unaff_x23,0);
  puVar1 = Method_Obi_ObiNativeList<CollisionMaterial>_GetIntPtr__;
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)
             UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo;
    if (0 < *(int *)(lVar3 + 0x10)) {
      uVar4 = FUN_015f5b28(uVar4,lVar3,0);
      uVar5 = FUN_015f5b28(uVar5,*(undefined8 *)puVar1,0);
    }
    if (unaff_x19 != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_02020524(uVar6,param_2,uVar4,2,0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
      uVar2 = FUN_02020524(uVar4,uVar2,uVar5,2,0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


