/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetEyeTextureArrayEnabled
ENTRY_POINT: 01db3c6c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db3d28) */

undefined4 OVRPlugin_OVRP_1_15_0__ovrp_GetEyeTextureArrayEnabled(ulong param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar1 = FUN_0102ae7c();
  }
  else {
    lVar2 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359478,1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
    uVar1 = (**(code **)(*unaff_x21 + 0x1b8))();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01cb97fc();
  }
  return uVar1;
}


