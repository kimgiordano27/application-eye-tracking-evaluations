/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 04f8bdc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x27;
  
  while( true ) {
    uVar1 = in_w8 + 1;
    *(uint *)(unaff_x20 + 0x10) = uVar1;
    if (0x19 < (int)uVar1) {
      return;
    }
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *unaff_x23;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_02b79644(*unaff_x24);
    FUN_03bfcd24();
    uVar2 = FUN_0325f4bc(uVar5,uVar4,*unaff_x27);
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined4 *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
    in_w8 = *(int *)(unaff_x20 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


