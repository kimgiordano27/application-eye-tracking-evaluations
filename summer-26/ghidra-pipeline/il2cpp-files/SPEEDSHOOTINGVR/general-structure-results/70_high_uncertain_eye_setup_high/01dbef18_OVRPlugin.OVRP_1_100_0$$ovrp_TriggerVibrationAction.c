/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_TriggerVibrationAction
ENTRY_POINT: 01dbef18
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0__ovrp_TriggerVibrationAction(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  
  if (unaff_x22 != (long *)0x0) {
    lVar2 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0234bef0) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01dbedf0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0103c348();
LAB_01dbedf0:
    (*(code *)*puVar1)();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  if (unaff_w24 == 0) {
    if (unaff_x21 == 0) goto LAB_01dbee7c;
  }
  else {
    lVar2 = thunk_FUN_0103ffe0();
    if (lVar2 == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar3 = thunk_FUN_010400dc();
      uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a9c8);
      uVar5 = thunk_FUN_010303a8(PTR_DAT_0235a9d0);
      FUN_01c5e198(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a9d8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar3,uVar4);
    }
    if (unaff_x21 == 0) {
LAB_01dbee7c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_018987d4();
  }
  if (*(int *)(unaff_x21 + 0x18) < 1) {
    return;
  }
  FUN_01dbf024();
  return;
}


