/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$.cctor
ENTRY_POINT: 033f2360
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_32_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int unaff_w19;
  ulong *unaff_x20;
  ulong uVar10;
  uint unaff_w21;
  
  puVar2 = StringLiteral_9323;
  if (0x19999999 < unaff_w21) {
    uVar5 = 0;
    goto LAB_033f23d0;
  }
  uVar10 = *unaff_x20;
  lVar6 = *(long *)StringLiteral_9323;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (unaff_w19 < 0x14) {
    if (unaff_w21 < 4) {
      return 9;
    }
    if (unaff_w21 != 4) goto LAB_033f241c;
    if (uVar10 < 0x4b82fa09b5a52cba) {
      return 9;
    }
    uVar9 = 8;
  }
  else {
    if (lVar6 == 0) goto LAB_033f2510;
    if (*(uint *)(lVar6 + 0x18) <= (uint)(0x1b - (long)unaff_w19)) goto LAB_033f2514;
    if (unaff_w21 < *(uint *)(lVar6 + (0x1b - (long)unaff_w19) * 0x10 + 0x20)) {
      uVar5 = 0x1c - unaff_w19;
      goto LAB_033f23d0;
    }
LAB_033f241c:
    if (unaff_w21 < 0xa7c6) {
      if (unaff_w21 < 0x1ae) {
        bVar3 = 0x29 < unaff_w21;
        bVar4 = unaff_w21 == 0x2a;
        uVar9 = 7;
      }
      else {
        bVar3 = 0x10c5 < unaff_w21;
        bVar4 = unaff_w21 == 0x10c6;
        uVar9 = 5;
      }
    }
    else if (unaff_w21 < 0x418938) {
      bVar3 = 0x68db7 < unaff_w21;
      bVar4 = unaff_w21 == 0x68db8;
      uVar9 = 3;
    }
    else {
      bVar3 = 0x28f5c27 < unaff_w21;
      bVar4 = unaff_w21 == 0x28f5c28;
      uVar9 = 1;
    }
    if (!bVar3 || bVar4) {
      uVar9 = uVar9 + 1;
    }
  }
  if (lVar6 == 0) {
LAB_033f2510:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = uVar9 - 1;
  if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_033f2514:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  uVar5 = uVar9;
  if ((unaff_w21 == *(uint *)(lVar6 + (ulong)uVar1 * 0x10 + 0x20)) &&
     (uVar5 = uVar1, uVar10 <= *(ulong *)(lVar6 + (ulong)uVar1 * 0x10 + 0x28))) {
    uVar5 = uVar9;
  }
LAB_033f23d0:
  if ((int)(uVar5 + unaff_w19) < 0) {
    thunk_FUN_01dd295c(StringLiteral_1150);
    uVar7 = thunk_FUN_01de27b8();
    uVar8 = thunk_FUN_01dd295c(StringLiteral_8348);
    FUN_03390704(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01dd295c(StringLiteral_9353);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar7,uVar8);
  }
  return uVar5;
}


