/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 033ef2d4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_7_0___cctor(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong uVar16;
  long unaff_x23;
  long *unaff_x24;
  ulong uVar17;
  undefined8 uStack0000000000000000;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long lStack0000000000000010;
  long in_stack_00000018;
  
  uStack0000000000000000 = 0;
  _uStack0000000000000008 = 0;
  lStack0000000000000010 = 0;
  uVar6 = *unaff_x19;
  iVar8 = *(int *)(*unaff_x24 + 0xe0);
  uVar13 = *unaff_x20;
  if (iVar8 == 0) {
    thunk_FUN_01dc4f30();
    iVar8 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar1 = unaff_x19[1];
  uVar2 = unaff_x19[3];
  if (iVar8 == 0) {
    thunk_FUN_01dc4f30();
    iVar8 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar3 = unaff_x20[1];
  uVar4 = unaff_x20[3];
  uVar6 = uVar13 + uVar6 >> 0x10 & 0xff;
  if (iVar8 == 0) {
    thunk_FUN_01dc4f30();
  }
  if (uVar2 == 0 && uVar1 == 0) {
    uVar16 = (ulong)unaff_x19[2];
    uVar17 = unaff_x20[2] * uVar16;
    if (uVar4 != 0 || uVar3 != 0) {
      uVar15 = unaff_x20[3] * uVar16 + (uVar17 >> 0x20);
      uStack0000000000000000 = CONCAT44((int)uVar15,(int)uVar17);
      uVar13 = unaff_x20[1];
      uVar15 = uVar15 >> 0x20;
      if (uVar13 != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          uVar16 = (ulong)unaff_x19[2];
          uVar13 = unaff_x20[1];
        }
        goto LAB_033ef508;
      }
      goto LAB_033ef524;
    }
    if (uVar6 < 0x1d) {
      lVar7 = *unaff_x24;
      uVar6 = uVar6 << 0x10;
      uVar16 = uVar17;
    }
    else {
      if (0x2f < uVar6) {
LAB_033ef64c:
        unaff_x19[0] = 0;
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        unaff_x19[3] = 0;
        goto LAB_033ef5e0;
      }
      lVar7 = *unaff_x24;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar7 = *unaff_x24;
      }
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar6 - 0x1d) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar15 = *(ulong *)(lVar10 + (ulong)(uVar6 - 0x1d) * 8 + 0x20);
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar17 / uVar15;
      }
      uVar17 = uVar17 - uVar16 * uVar15;
      if (uVar17 < uVar15 >> 1) {
        uVar6 = 0x1c0000;
      }
      else {
        uVar16 = (uVar16 & 1 | (ulong)(uVar15 >> 1 < uVar17)) + uVar16;
        uVar6 = 0x1c0000;
      }
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    *(ulong *)(unaff_x19 + 2) = uVar16;
    uVar6 = (*unaff_x19 ^ *unaff_x20) & 0x80000000 | uVar6;
  }
  else {
    if (uVar4 == 0 && uVar3 == 0) {
      uVar16 = (ulong)unaff_x20[2];
      uVar15 = unaff_x19[3] * uVar16 + (unaff_x19[2] * uVar16 >> 0x20);
      uStack0000000000000000 = CONCAT44((int)uVar15,(int)(unaff_x19[2] * uVar16));
      uVar13 = unaff_x19[1];
      uVar15 = uVar15 >> 0x20;
      if (uVar13 == 0) {
LAB_033ef524:
        if ((int)uVar15 == 0) goto LAB_033ef544;
        _uStack0000000000000008 = CONCAT44(uStack000000000000000c,(int)uVar15);
        uVar16 = 2;
        goto LAB_033ef574;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar16 = (ulong)unaff_x20[2];
        uVar13 = unaff_x19[1];
      }
LAB_033ef508:
      uVar15 = uVar15 + uVar16 * uVar13;
      if (uVar15 >> 0x20 == 0) goto LAB_033ef524;
LAB_033ef584:
      _uStack0000000000000008 = uVar15;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar6 = FUN_033f1594();
    }
    else {
      uVar11 = (ulong)unaff_x19[3];
      uVar9 = (ulong)unaff_x20[3];
      uVar15 = (ulong)unaff_x20[2] * (ulong)unaff_x19[2];
      uVar16 = uVar9 * unaff_x19[2] + (uVar15 >> 0x20);
      uVar14 = uVar11 * unaff_x20[2];
      uVar17 = uVar16 + uVar14;
      uStack0000000000000000 = CONCAT44((int)uVar17,(int)uVar15);
      uVar15 = uVar17 >> 0x20 | 0x100000000;
      if (!CARRY8(uVar16,uVar14)) {
        uVar15 = uVar17 >> 0x20;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar11 = (ulong)unaff_x19[3];
        uVar9 = (ulong)unaff_x20[3];
      }
      uVar13 = unaff_x20[1];
      uVar15 = uVar15 + uVar9 * uVar11;
      if (uVar13 == 0 && unaff_x19[1] == 0) {
        if (uVar15 == 0) {
LAB_033ef544:
          uVar16 = 1;
        }
        else {
          _uStack0000000000000008 = uVar15;
          uVar16 = 3;
        }
      }
      else {
        iVar8 = *(int *)(*unaff_x24 + 0xe0);
        if (iVar8 == 0) {
          thunk_FUN_01dc4f30();
          uVar13 = unaff_x20[1];
          iVar8 = *(int *)(*unaff_x24 + 0xe0);
        }
        uVar17 = (ulong)uVar13 * (ulong)unaff_x19[2];
        uVar16 = uVar17 + uVar15;
        if (iVar8 == 0) {
          thunk_FUN_01dc4f30();
          iVar8 = *(int *)(*unaff_x24 + 0xe0);
        }
        uVar11 = 1;
        if (uVar16 < uVar17) {
          uVar11 = 2;
        }
        uVar9 = (ulong)unaff_x20[2] * (ulong)unaff_x19[1] + uVar16;
        if (!CARRY8((ulong)unaff_x20[2] * (ulong)unaff_x19[1],uVar16)) {
          uVar11 = (ulong)CARRY8(uVar17,uVar15);
        }
        uVar16 = uVar9 >> 0x20 | uVar11 << 0x20;
        _uStack0000000000000008 = CONCAT44(uStack000000000000000c,(int)uVar9);
        if (iVar8 == 0) {
          thunk_FUN_01dc4f30();
          iVar8 = *(int *)(*unaff_x24 + 0xe0);
        }
        uVar13 = unaff_x19[3];
        uVar1 = unaff_x20[1];
        uVar17 = (ulong)uVar1 * (ulong)uVar13 + uVar16;
        if (iVar8 == 0) {
          thunk_FUN_01dc4f30();
          iVar8 = *(int *)(*unaff_x24 + 0xe0);
        }
        uVar11 = (ulong)unaff_x19[1];
        uVar15 = 1;
        if (uVar17 < uVar16) {
          uVar15 = 2;
        }
        uVar9 = unaff_x20[3] * uVar11 + uVar17;
        if (!CARRY8(unaff_x20[3] * uVar11,uVar17)) {
          uVar15 = (ulong)CARRY8((ulong)uVar1 * (ulong)uVar13,uVar16);
        }
        _uStack0000000000000008 = CONCAT44((int)uVar9,uStack0000000000000008);
        if (iVar8 == 0) {
          thunk_FUN_01dc4f30();
          uVar11 = (ulong)unaff_x19[1];
        }
        lStack0000000000000010 = (uVar9 >> 0x20 | uVar15 << 0x20) + uVar11 * unaff_x20[1];
        uVar16 = 5;
      }
      if (*(int *)((long)&stack0x00000000 + uVar16 * 4) == 0) {
        piVar12 = (int *)((long)&stack0x00000000 + uVar16 * 4);
        do {
          piVar12 = piVar12 + -1;
          if (uVar16 == 0) goto LAB_033ef64c;
          uVar16 = uVar16 - 1;
        } while (*piVar12 == 0);
        uVar16 = uVar16 & 0xffffffff;
      }
LAB_033ef574:
      uVar15 = _uStack0000000000000008;
      if ((0x1c < uVar6) || (2 < (uint)uVar16)) goto LAB_033ef584;
    }
    uVar5 = uStack0000000000000000;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    *(undefined8 *)(unaff_x19 + 2) = uVar5;
    unaff_x19[1] = uStack0000000000000008;
    uVar6 = (*unaff_x19 ^ *unaff_x20) & 0x80000000 | uVar6 << 0x10;
  }
  *unaff_x19 = uVar6;
LAB_033ef5e0:
  if (*(long *)(unaff_x23 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


