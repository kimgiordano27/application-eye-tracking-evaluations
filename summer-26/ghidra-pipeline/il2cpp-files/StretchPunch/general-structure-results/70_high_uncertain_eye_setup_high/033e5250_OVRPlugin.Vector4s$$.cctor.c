/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 033e5250
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_Vector4s___cctor(void)

{
  long lVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  ulong uVar6;
  int unaff_w24;
  long lVar7;
  ulong unaff_x28;
  uint unaff_w29;
  ulong in_stack_00000000;
  int iStack0000000000000008;
  byte bStack000000000000000c;
  
  do {
    iVar4 = FUN_034180e4();
    if (unaff_w24 < iVar4) {
      FUN_034180e4();
      FUN_034185b4();
      goto joined_r0x033e527c;
    }
    while( true ) {
      if ((int)unaff_x22 == 0xd) {
        FUN_033e506c();
        *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
        if (0 < iStack0000000000000008) {
          uVar6 = 0;
          lVar7 = (in_stack_00000000 >> 0x20) << 0x20;
          goto LAB_033e52e8;
        }
        iVar4 = 0;
        goto LAB_033e5348;
      }
      uVar6 = FUN_033e4bc0();
      unaff_x22 = uVar6 >> 0x20;
      unaff_w23 = (uint)bStack000000000000000c | unaff_w29 & 1;
      unaff_w29 = (uint)(unaff_w23 != 0);
      iVar4 = (int)(uVar6 >> 0x20);
      if (iVar4 == 8) break;
      if (iVar4 == 0xd) {
        if (unaff_x20 == 0) goto LAB_033e5340;
        unaff_w24 = FUN_034180e4();
      }
      else if (unaff_x20 == 0) goto LAB_033e5340;
      FUN_03419818();
joined_r0x033e527c:
      if (unaff_w23 != 0) {
        FUN_033e5018();
      }
    }
  } while (unaff_x20 != 0);
  goto LAB_033e5340;
  while( true ) {
    uVar3 = FUN_03418984();
    if (unaff_x21 == 0) goto LAB_033e5340;
    if ((ulong)*(uint *)(unaff_x21 + 0x18) <= (in_stack_00000000 >> 0x20) + uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar6 = uVar6 + 1;
    lVar1 = lVar7 >> 0x1f;
    lVar7 = lVar7 + 0x100000000;
    *(undefined2 *)(unaff_x21 + lVar1 + 0x20) = uVar3;
    if (unaff_x28 == uVar6) break;
LAB_033e52e8:
    iVar4 = FUN_034180e4();
    if ((long)iVar4 <= (long)uVar6) goto LAB_033e533c;
  }
  uVar6 = unaff_x28 & 0xffffffff;
LAB_033e533c:
  iVar4 = (int)uVar6;
  if (unaff_x20 != 0) {
LAB_033e5348:
    iVar5 = FUN_034180e4();
    iVar2 = iVar4;
    if (iVar4 < iVar5) {
      do {
        FUN_03418984();
        FUN_033e41c4();
        iVar2 = iVar2 + 1;
        iVar5 = FUN_034180e4();
      } while (iVar2 < iVar5);
    }
    return iVar4;
  }
LAB_033e5340:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


