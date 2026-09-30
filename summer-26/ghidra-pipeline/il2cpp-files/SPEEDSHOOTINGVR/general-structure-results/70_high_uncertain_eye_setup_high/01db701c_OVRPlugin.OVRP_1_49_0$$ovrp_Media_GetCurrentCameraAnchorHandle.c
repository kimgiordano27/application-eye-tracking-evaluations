/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCurrentCameraAnchorHandle
ENTRY_POINT: 01db701c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCurrentCameraAnchorHandle(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4();
  }
  puVar2 = (undefined8 *)__cxa_begin_catch();
  uVar3 = thunk_FUN_010303a8(PTR_DAT_0234bcc0);
  uVar4 = thunk_FUN_0102bfdc(uVar3,*(undefined8 *)*puVar2);
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_0220e3b8,0);
  }
  uVar3 = *puVar2;
  __cxa_end_catch();
  if ((*(long *)(unaff_x19 + 0x30) != 0) && (uVar1 = FUN_01db71b8(), (uVar1 >> 2 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = FUN_01db71b8();
    if ((uVar1 >> 3 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0)
      goto OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName;
      FUN_01db73e4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc52c(uVar3);
}


