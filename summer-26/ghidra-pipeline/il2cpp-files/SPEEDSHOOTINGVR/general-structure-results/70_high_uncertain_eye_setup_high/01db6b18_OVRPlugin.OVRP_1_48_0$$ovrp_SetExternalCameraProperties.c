/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 01db6b18
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
               uint param_6,undefined8 param_7)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x26;
  
  if ((*(byte *)(unaff_x26 + 0xa26) & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c670);
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    *(undefined1 *)(unaff_x26 + 0xa26) = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_0106e12c((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  thunk_FUN_0106e12c((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  thunk_FUN_0106e12c((undefined8 *)(param_1 + 0x28),param_7);
  if ((param_5 & 0xffffffa0) == 0) {
    uVar2 = param_6 | param_5;
    if (*(long *)(param_1 + 0x18) == 0 || (param_6 & 0x200) != 0) {
      uVar2 = param_6 | param_5 | 0x2000000;
    }
    thunk_FUN_00ffe618();
    *(uint *)(param_1 + 0x38) = uVar2;
    if ((((param_5 >> 2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
       (uVar2 = FUN_01db71b8(), (uVar2 >> 3 & 1) == 0)) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01db6d78();
    }
    if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    puVar1 = PTR_DAT_0234bbd8;
    if (param_4 != 0) {
      FUN_01db6dec(param_1,param_4,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = FUN_01da65cc();
    FUN_01db70c8(param_1,uVar3);
    return;
  }
  thunk_FUN_010303a8(PTR_DAT_0234be28);
  uVar3 = thunk_FUN_010400dc();
  uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a650);
  FUN_01c66cb4(uVar3,uVar4,0);
  uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a660);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar4);
}


