/*
FUNCTION_NAME: OVRPlugin$$SetVirtualKeyboardModelVisibility
ENTRY_POINT: 02c2d0c0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetVirtualKeyboardModelVisibility(void)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_w8;
  ulong in_x9;
  undefined8 in_x10;
  long in_x11;
  uint *unaff_x19;
  uint *unaff_x20;
  int unaff_w22;
  ulong uVar10;
  uint uVar11;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  uint in_stack_00000028;
  uint uStack000000000000002c;
  uint uStack0000000000000030;
  long in_stack_00000048;
  
  puVar2 = PTR_DAT_037f2b80;
  uVar10 = in_x9 & 0xffffffff | in_x11 << 0x20;
  uStack000000000000002c = (uint)in_x10;
  uStack0000000000000030 = (uint)((ulong)in_x10 >> 0x20);
  uVar11 = (uint)unaff_x23;
  if (uVar10 == 0) {
    uVar12 = 0;
  }
  else {
    in_stack_00000028 = 0;
    if (unaff_x23 != 0) {
      in_stack_00000028 = (uint)(uVar10 / unaff_x23);
    }
    uVar12 = in_w8 - uVar11 * in_stack_00000028;
  }
  bVar4 = false;
  if (uVar12 == 0) goto LAB_02c2d2e0;
LAB_02c2d2ac:
  uVar10 = _in_stack_00000028;
  if (unaff_w22 != 0x1c) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar5 = FUN_02c2f500(&stack0x00000028,unaff_w22);
    uVar10 = _in_stack_00000028;
    if (uVar5 != 0) {
      bVar4 = true;
      do {
        lVar7 = *unaff_x25;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar7 = *unaff_x25;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        uVar10 = (ulong)*(uint *)(lVar7 + (long)(int)uVar5 * 4 + 0x20);
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar5;
        iVar6 = FUN_02c2e668(&stack0x00000028,uVar10);
        if (iVar6 != 0) {
          thunk_FUN_01851c08(PTR_DAT_037f87b0);
          uVar8 = thunk_FUN_01861bbc();
          uVar9 = thunk_FUN_01851c08(PTR_DAT_03809d90);
          FUN_02bde04c(uVar8,uVar9,0);
          uVar9 = thunk_FUN_01851c08(PTR_DAT_0380bd80);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar8,uVar9);
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        iVar6 = in_stack_00000020._4_4_;
        uVar10 = uVar10 * uVar12;
        uVar1 = 0;
        if (unaff_x23 != 0) {
          uVar1 = uVar10 / unaff_x23;
        }
        uVar12 = (int)uVar10 - uVar11 * (int)uVar1;
        bVar3 = CARRY8(_in_stack_00000028,uVar1 & 0xffffffff);
        _in_stack_00000028 = _in_stack_00000028 + (uVar1 & 0xffffffff);
        if ((bVar3) &&
           (bVar3 = 0xfffffffe < uStack0000000000000030,
           uStack0000000000000030 = uStack0000000000000030 + 1, bVar3)) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          unaff_w22 = FUN_02c2f3a8(&stack0x00000028,iVar6,uVar12 != 0);
          in_stack_00000020._4_4_ = unaff_w22;
          uVar10 = _in_stack_00000028;
LAB_02c2d45c:
          if (bVar4) goto LAB_02c2d488;
          _in_stack_00000028 = uVar10;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          *(ulong *)(unaff_x19 + 2) = uVar10;
          unaff_x19[1] = uStack0000000000000030;
          goto LAB_02c2d4d4;
        }
        unaff_w22 = in_stack_00000020._4_4_;
        if (uVar12 != 0) goto LAB_02c2d2ac;
LAB_02c2d2e0:
        uVar10 = _in_stack_00000028;
        if (-1 < unaff_w22) goto LAB_02c2d45c;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar5 = FUN_02bd01ec(9,-unaff_w22,0);
      } while( true );
    }
  }
  iVar6 = in_stack_00000020._4_4_;
  uVar5 = uVar12 << 1;
  if ((((uVar5 < uVar12) || ((uVar11 <= uVar5 && ((uVar11 < uVar5 || ((uVar10 & 1) != 0)))))) &&
      (bVar4 = uVar10 == 0xffffffffffffffff, _in_stack_00000028 = uVar10 + 1,
      uVar10 = _in_stack_00000028, bVar4)) &&
     (bVar4 = uStack0000000000000030 == 0xffffffff,
     uStack0000000000000030 = uStack0000000000000030 + 1, bVar4)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    in_stack_00000020._4_4_ = FUN_02c2f3a8(&stack0x00000028,iVar6,1);
    uVar10 = _in_stack_00000028;
  }
LAB_02c2d488:
  uVar12 = uStack0000000000000030;
  uStack000000000000002c = (uint)(uVar10 >> 0x20);
  uVar11 = uStack000000000000002c;
  in_stack_00000028 = (uint)uVar10;
  in_stack_00000008._4_4_ = in_stack_00000028;
  _in_stack_00000028 = uVar10;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c3ca24((long)&stack0x00000008 + 4);
  unaff_x19[2] = in_stack_00000008._4_4_;
  unaff_x19[3] = uVar11;
  unaff_x19[1] = uVar12;
  unaff_w22 = in_stack_00000020._4_4_;
LAB_02c2d4d4:
  *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | unaff_w22 << 0x10;
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


