/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_119
ENTRY_POINT: 01dc4f50
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_119(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  ulong in_x10;
  long in_x11;
  undefined2 in_w12;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x23;
  undefined2 *unaff_x24;
  
  while( true ) {
    *(undefined2 *)(in_x11 + param_1 * 2) = in_w12;
    param_1 = param_1 + 1;
    if (in_x10 == param_1) break;
    if (in_x9 <= param_1) goto LAB_01dc4ff4;
    in_w12 = *unaff_x24;
    unaff_x24 = unaff_x24 + 1;
  }
  lVar2 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bbb0,unaff_w20);
  uVar1 = (**(code **)(*unaff_x23 + 0x1a8))();
  if ((int)unaff_w20 <= (int)uVar1) {
    uVar1 = unaff_w20;
  }
  if (0 < (int)uVar1) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_01dc4ff4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      *(undefined1 *)(unaff_x19 + uVar3) = *(undefined1 *)(lVar2 + 0x20 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


