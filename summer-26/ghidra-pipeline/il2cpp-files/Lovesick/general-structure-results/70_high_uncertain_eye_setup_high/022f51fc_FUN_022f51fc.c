/*
FUNCTION_NAME: FUN_022f51fc
ENTRY_POINT: 022f51fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_022f51fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((DAT_03781b07 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractor_<Start>b__24_0__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(PTR_DAT_033ecb50);
    thunk_FUN_00d48444(StringLiteral_4743);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsriq_n_u16__);
    DAT_03781b07 = 1;
  }
  puVar3 = StringLiteral_4743;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsriq_n_u16__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_0202015c(param_2,*(undefined8 *)puVar3,0);
  lVar5 = FUN_0202015c(param_2,*(undefined8 *)puVar2,0);
  if (lVar4 != 0) {
    uVar6 = FUN_0201bf00(lVar4,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar7 = FUN_0201bd24(lVar4,0);
    puVar1 = PTR_DAT_033ecb50;
    if (lVar5 != 0) {
      uVar8 = FUN_0201bd24(lVar5,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar4 != 0) &&
         (FUN_0232584c(lVar4,uVar7,uVar8,0),
         puVar1 = Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractor_<Start>b__24_0__,
         param_3 != 0)) {
        uVar7 = FUN_01604318(param_3,0);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          FUN_017b46ec(lVar5,0);
          *(long *)(lVar5 + 0x10) = lVar4;
          *(undefined8 *)(lVar5 + 0x18) = uVar7;
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


