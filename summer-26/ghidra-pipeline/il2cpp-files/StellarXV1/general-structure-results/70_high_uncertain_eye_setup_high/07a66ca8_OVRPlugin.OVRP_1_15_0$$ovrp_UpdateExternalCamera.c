/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_UpdateExternalCamera
ENTRY_POINT: 07a66ca8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_UpdateExternalCamera(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092f0d70);
  FUN_04077588(PTR_DAT_092f0d68);
  *(undefined1 *)(unaff_x20 + 0x5c5) = 1;
  puVar1 = PTR_DAT_09285980;
  uVar3 = *unaff_x19;
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_0768890c(uVar3,0);
  if (*(int *)(*(long *)(puVar1 + 0x98) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(puVar1 + 0x98));
  }
  lVar2 = FUN_076aebbc(uVar3,0);
  puVar1 = PTR_DAT_092f0d40;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_092f0d70;
    **(undefined4 **)(*(long *)PTR_DAT_092f0d40 + 0xb8) = (int)*(undefined8 *)(lVar2 + 0x18);
    uVar3 = FUN_0768890c(uVar3,0);
    lVar2 = FUN_076aebbc(uVar3,0);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(int *)(lVar2 + 4) = (int)uVar3;
      *(undefined4 *)(lVar2 + 8) = 0xfffff768;
      thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


