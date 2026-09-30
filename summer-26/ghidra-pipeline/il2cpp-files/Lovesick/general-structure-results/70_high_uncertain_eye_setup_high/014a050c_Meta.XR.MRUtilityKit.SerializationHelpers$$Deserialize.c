/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Deserialize
ENTRY_POINT: 014a050c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers__Deserialize(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w9;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  if (in_w9 == 0) {
    thunk_FUN_00d32864();
  }
  plVar2 = (long *)FUN_01780344();
  lVar3 = FUN_00da4fb8(*unaff_x22,1);
  if (lVar3 != 0) {
    if ((unaff_x20 != 0) && (lVar4 = thunk_FUN_00d6225c(), lVar4 == 0)) {
      uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(long *)(lVar3 + 0x20) = unaff_x20;
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x928))(plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x930));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      FUN_016fbc40();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


