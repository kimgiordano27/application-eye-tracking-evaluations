/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsDesc
ENTRY_POINT: 01db209c
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


bool OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsDesc(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  uint uVar4;
  uint uVar5;
  undefined4 in_stack_00000008;
  
  uVar1 = unaff_w22 & 0xffff;
  do {
    uVar4 = unaff_w22;
    uVar5 = uVar1;
    if (uVar5 == uVar4 >> 0x10) goto LAB_01db216c;
    thunk_FUN_00ffe618();
    unaff_w22 = FUN_00ff75f8();
    puVar2 = PTR_DAT_023578f8;
    uVar1 = unaff_w22 & 0xffff;
  } while (unaff_w22 != (uVar5 | uVar4 & 0xffff0000));
  in_stack_00000008 = 0;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_01db21a4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar3 = *(long *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
      thunk_FUN_00ffe618();
      *unaff_x19 = lVar3;
      thunk_FUN_0106e12c();
      if (lVar3 != 0) {
        lVar3 = *(long *)(unaff_x20 + 0x10);
        if (lVar3 != 0) {
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            unaff_x19 = (long *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
LAB_01db216c:
            *unaff_x19 = 0;
            thunk_FUN_0106e12c(unaff_x19,0);
            return uVar5 != uVar4 >> 0x10;
          }
          goto LAB_01db21a4;
        }
        break;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01da8120(&stack0x00000008);
      lVar3 = *(long *)(unaff_x20 + 0x10);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


