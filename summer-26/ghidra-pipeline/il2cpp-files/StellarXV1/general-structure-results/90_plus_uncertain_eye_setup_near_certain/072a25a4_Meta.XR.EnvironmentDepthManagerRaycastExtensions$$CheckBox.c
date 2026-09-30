/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$CheckBox
ENTRY_POINT: 072a25a4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_EnvironmentDepthManagerRaycastExtensions__CheckBox(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint in_w8;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  ulong unaff_x22;
  long lVar13;
  long lVar14;
  long unaff_x24;
  long unaff_x25;
  ulong uVar15;
  long unaff_x26;
  int iVar16;
  
  if ((unaff_w20 == 1) && ((unaff_x22 & 1) != 0)) {
    uVar12 = (int)in_w8 >> 1;
    if ((int)uVar12 < 0xb4) {
      lVar5 = *(long *)(unaff_x19 + 0xa8);
      if (lVar5 == 0) goto LAB_072a2e40;
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (uVar4 == 0) goto LAB_072a2e3c;
      *(int *)(lVar5 + 0x20) = (int)uVar12 / 0x24;
      if (((uVar4 == 1) ||
          (uVar1 = (char)((char)uVar12 + (char)((int)uVar12 / 0x24) * -0x24) * 0x2b,
          *(int *)(lVar5 + 0x24) = (int)(char)(((byte)(uVar1 >> 0xf) & 1) + (char)(uVar1 >> 8)),
          uVar4 < 3)) || (*(int *)(lVar5 + 0x28) = (int)uVar12 % 6, uVar4 == 3)) goto LAB_072a2e3c;
      lVar13 = *(long *)(unaff_x19 + 0x138);
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      if (lVar13 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
      lVar5 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_072a2e40;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2e3c;
      lVar5 = lVar5 + unaff_x24 * 4;
      lVar13 = 3;
    }
    else if (uVar12 < 0xf4) {
      lVar5 = *(long *)(unaff_x19 + 0xa8);
      if (lVar5 == 0) goto LAB_072a2e40;
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (uVar4 == 0) goto LAB_072a2e3c;
      *(uint *)(lVar5 + 0x20) = uVar12 - 0xb4 >> 4;
      if (((uVar4 == 1) || (*(uint *)(lVar5 + 0x24) = uVar12 - 0xb4 >> 2 & 3, uVar4 < 3)) ||
         (*(uint *)(lVar5 + 0x28) = in_w8 >> 1 & 3, uVar4 == 3)) goto LAB_072a2e3c;
      lVar13 = *(long *)(unaff_x19 + 0x138);
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      if (lVar13 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
      lVar5 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_072a2e40;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2e3c;
      lVar5 = lVar5 + unaff_x24 * 4;
      lVar13 = 4;
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xa8);
      if (0xfe < uVar12) {
        if (lVar5 == 0) goto LAB_072a2e40;
        uVar12 = *(uint *)(lVar5 + 0x18);
        if ((((uVar12 == 0) || (*(undefined4 *)(lVar5 + 0x20) = 0, uVar12 == 1)) ||
            (*(undefined4 *)(lVar5 + 0x24) = 0, uVar12 < 3)) ||
           (*(undefined4 *)(lVar5 + 0x28) = 0, uVar12 == 3)) goto LAB_072a2e3c;
        lVar13 = 0;
        *(undefined4 *)(lVar5 + 0x2c) = 0;
        goto LAB_072a2a00;
      }
      if (lVar5 == 0) goto LAB_072a2e40;
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (uVar4 == 0) goto LAB_072a2e3c;
      uVar1 = (uVar12 + 0xc & 0xff) / 3;
      *(uint *)(lVar5 + 0x20) = uVar1;
      if (((uVar4 == 1) || (*(uint *)(lVar5 + 0x24) = uVar12 + 0xc + uVar1 * -3 & 0xff, uVar4 < 3))
         || (*(undefined4 *)(lVar5 + 0x28) = 0, uVar4 == 3)) goto LAB_072a2e3c;
      lVar13 = *(long *)(unaff_x19 + 0x138);
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      if (lVar13 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
      lVar5 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_072a2e40;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2e3c;
      lVar5 = lVar5 + unaff_x24 * 4;
      lVar13 = 5;
    }
LAB_072a29fc:
    *(undefined4 *)(lVar5 + 0x20) = 0;
  }
  else {
    if ((int)in_w8 < 400) {
      lVar5 = *(long *)(unaff_x19 + 0xa8);
      if (lVar5 == 0) goto LAB_072a2e40;
      uVar12 = *(uint *)(lVar5 + 0x18);
      if (uVar12 == 0) goto LAB_072a2e3c;
      *(int *)(lVar5 + 0x20) = ((int)in_w8 >> 4) / 5;
      if (((uVar12 == 1) || (*(int *)(lVar5 + 0x24) = ((int)in_w8 >> 4) % 5, uVar12 < 3)) ||
         (*(uint *)(lVar5 + 0x28) = in_w8 >> 2 & 3, uVar12 == 3)) goto LAB_072a2e3c;
      lVar13 = *(long *)(unaff_x19 + 0x138);
      *(uint *)(lVar5 + 0x2c) = in_w8 & 3;
      if (lVar13 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
      lVar5 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
      lVar5 = lVar5 + unaff_x24 * 4;
      lVar13 = 0;
      goto LAB_072a29fc;
    }
    if (in_w8 < 500) {
      lVar5 = *(long *)(unaff_x19 + 0xa8);
      if (lVar5 == 0) goto LAB_072a2e40;
      uVar12 = *(uint *)(lVar5 + 0x18);
      if (uVar12 == 0) goto LAB_072a2e3c;
      uVar4 = in_w8 + 0x270 >> 2;
      uVar1 = (uVar4 & 0xff) / 5;
      *(uint *)(lVar5 + 0x20) = uVar1;
      if (((uVar12 == 1) || (*(uint *)(lVar5 + 0x24) = uVar4 + uVar1 * -5 & 0xff, uVar12 < 3)) ||
         (*(uint *)(lVar5 + 0x28) = in_w8 & 3, uVar12 == 3)) goto LAB_072a2e3c;
      lVar13 = *(long *)(unaff_x19 + 0x138);
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      if (lVar13 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
      lVar5 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
      lVar5 = lVar5 + unaff_x24 * 4;
      lVar13 = 1;
      goto LAB_072a29fc;
    }
    lVar5 = *(long *)(unaff_x19 + 0xa8);
    if (in_w8 < 0x200) {
      if (lVar5 == 0) goto LAB_072a2e40;
      uVar12 = *(uint *)(lVar5 + 0x18);
      if (uVar12 == 0) goto LAB_072a2e3c;
      uVar4 = (in_w8 + 0xc & 0xff) / 3;
      *(uint *)(lVar5 + 0x20) = uVar4;
      if (((uVar12 == 1) || (*(uint *)(lVar5 + 0x24) = in_w8 + 0xc + uVar4 * -3 & 0xff, uVar12 < 3))
         || (*(undefined4 *)(lVar5 + 0x28) = 0, uVar12 == 3)) goto LAB_072a2e3c;
      lVar13 = *(long *)(unaff_x19 + 0x138);
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      if (lVar13 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
      lVar5 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
      lVar13 = 2;
      *(undefined4 *)(lVar5 + unaff_x24 * 4 + 0x20) = 1;
    }
    else {
      if (lVar5 == 0) goto LAB_072a2e40;
      uVar12 = *(uint *)(lVar5 + 0x18);
      if ((((uVar12 == 0) || (*(undefined4 *)(lVar5 + 0x20) = 0, uVar12 == 1)) ||
          (*(undefined4 *)(lVar5 + 0x24) = 0, uVar12 < 3)) ||
         (*(undefined4 *)(lVar5 + 0x28) = 0, uVar12 == 3)) goto LAB_072a2e3c;
      lVar13 = 0;
      *(undefined4 *)(lVar5 + 0x2c) = 0;
    }
  }
LAB_072a2a00:
  puVar2 = PTR_DAT_092c2198;
  lVar5 = *(long *)PTR_DAT_092c2198;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
  if (lVar5 == 0) goto LAB_072a2e40;
  if (*(uint *)(lVar5 + 0x18) <= (uint)lVar13) goto LAB_072a2e3c;
  lVar5 = *(long *)(lVar5 + lVar13 * 8 + 0x20);
  if (lVar5 == 0) goto LAB_072a2e40;
  if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x25) goto LAB_072a2e3c;
  lVar5 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
  if (lVar5 == 0) goto LAB_072a2e40;
  uVar15 = 0;
  uVar12 = 0;
  do {
    uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
    if (uVar6 <= uVar15) goto LAB_072a2e3c;
    iVar16 = 0;
    while (uVar4 = uVar12 + iVar16, iVar16 < *(int *)(lVar5 + uVar15 * 4 + 0x20)) {
      lVar13 = *(long *)(unaff_x19 + 0xa8);
      if (lVar13 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_072a2e3c;
      lVar14 = *(long *)(unaff_x19 + 0xb0);
      if (*(int *)(lVar13 + uVar15 * 4 + 0x20) == 0) {
        uVar3 = 0;
      }
      else {
        if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_072a2e40;
        uVar3 = FUN_07297b50();
      }
      if (lVar14 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar14 + 0x18) <= uVar4) goto LAB_072a2e3c;
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      iVar16 = iVar16 + 1;
      *(undefined4 *)(lVar14 + (long)(int)uVar4 * 4 + 0x20) = uVar3;
      if (uVar6 <= uVar15) goto LAB_072a2e3c;
    }
    uVar15 = uVar15 + 1;
    uVar12 = uVar4;
  } while (uVar15 != 4);
  lVar13 = *(long *)(unaff_x19 + 0x100);
  if (lVar13 == 0) goto LAB_072a2e40;
  if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
  lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
  if (lVar13 == 0) goto LAB_072a2e40;
  if (*(uint *)(lVar13 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
  if (*(char *)(lVar13 + unaff_x24 + 0x20) == '\0') {
LAB_072a2c40:
    lVar13 = *(long *)(unaff_x19 + 0x180);
    if (lVar13 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
    lVar13 = *(long *)(lVar13 + unaff_x24 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_072a2e40;
    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2e3c;
    lVar14 = *(long *)(unaff_x19 + 0xb0);
    if (lVar14 == 0) goto LAB_072a2e40;
    lVar13 = *(long *)(lVar13 + 0x38);
    uVar12 = *(uint *)(lVar14 + 0x18);
    uVar15 = 0;
    do {
      if (uVar12 == uVar15) goto LAB_072a2e3c;
      if (lVar13 == 0) goto LAB_072a2e40;
      uVar4 = *(uint *)(lVar13 + 0x18);
      if (uVar4 <= uVar15) goto LAB_072a2e3c;
      uVar10 = uVar15 + 1;
      *(undefined4 *)(lVar13 + 0x20 + uVar15 * 4) = *(undefined4 *)(lVar14 + 0x20 + uVar15 * 4);
      uVar15 = uVar10;
    } while (uVar10 != 0x15);
    if (uVar4 < 0x17) goto LAB_072a2e3c;
    puVar8 = (undefined4 *)(lVar13 + 0x78);
  }
  else {
    lVar13 = *(long *)(unaff_x19 + 0x110);
    if (lVar13 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
    lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
    if (*(int *)(lVar13 + unaff_x24 * 4 + 0x20) != 2) goto LAB_072a2c40;
    lVar13 = *(long *)(unaff_x19 + 0x108);
    if (lVar13 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_072a2e3c;
    lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
    lVar9 = *(long *)(unaff_x19 + 0x180);
    lVar14 = lVar9 + unaff_x24 * 8;
    if (*(char *)(lVar13 + unaff_x24 + 0x20) == '\0') {
      uVar15 = 0;
      iVar16 = 0;
    }
    else {
      if (lVar9 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar9 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
      lVar13 = *(long *)(lVar14 + 0x20);
      if (lVar13 == 0) goto LAB_072a2e40;
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2e3c;
      lVar7 = *(long *)(unaff_x19 + 0xb0);
      if (lVar7 == 0) goto LAB_072a2e40;
      lVar13 = *(long *)(lVar13 + 0x38);
      uVar12 = *(uint *)(lVar7 + 0x18);
      iVar16 = 8;
      uVar15 = 3;
      uVar10 = 0;
      do {
        if (uVar12 == uVar10) goto LAB_072a2e3c;
        if (lVar13 == 0) goto LAB_072a2e40;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_072a2e3c;
        uVar11 = uVar10 + 1;
        *(undefined4 *)(lVar13 + 0x20 + uVar10 * 4) = *(undefined4 *)(lVar7 + 0x20 + uVar10 * 4);
        uVar10 = uVar11;
      } while (uVar11 != 8);
    }
    if (lVar9 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar9 + 0x18) <= unaff_w20) goto LAB_072a2e3c;
    lVar13 = *(long *)(lVar14 + 0x20);
    if (lVar13 == 0) goto LAB_072a2e40;
    uVar10 = *(ulong *)(lVar13 + 0x18);
    do {
      uVar11 = 0;
      do {
        if ((uVar10 & 0xffffffff) == uVar11) goto LAB_072a2e3c;
        lVar14 = *(long *)(unaff_x19 + 0xb0);
        if (lVar14 == 0) goto LAB_072a2e40;
        uVar12 = iVar16 + (int)uVar11;
        if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_072a2e3c;
        lVar9 = *(long *)(lVar13 + 0x20 + uVar11 * 8);
        if (lVar9 == 0) goto LAB_072a2e40;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_072a2e3c;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar9 + uVar15 * 4 + 0x20) =
             *(undefined4 *)(lVar14 + (long)(int)uVar12 * 4 + 0x20);
      } while (uVar11 != 3);
      uVar15 = uVar15 + 1;
      iVar16 = iVar16 + 3;
    } while (uVar15 != 0xc);
    uVar12 = (uint)uVar10;
    if (uVar12 == 0) goto LAB_072a2e3c;
    lVar14 = *(long *)(lVar13 + 0x20);
    if (lVar14 == 0) goto LAB_072a2e40;
    if ((*(uint *)(lVar14 + 0x18) < 0xd) || (*(undefined4 *)(lVar14 + 0x50) = 0, uVar12 == 1))
    goto LAB_072a2e3c;
    lVar14 = *(long *)(lVar13 + 0x28);
    if (lVar14 == 0) goto LAB_072a2e40;
    if ((*(uint *)(lVar14 + 0x18) < 0xd) || (*(undefined4 *)(lVar14 + 0x50) = 0, uVar12 < 3))
    goto LAB_072a2e3c;
    lVar13 = *(long *)(lVar13 + 0x30);
    if (lVar13 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar13 + 0x18) < 0xd) goto LAB_072a2e3c;
    puVar8 = (undefined4 *)(lVar13 + 0x50);
  }
  lVar13 = *(long *)(unaff_x19 + 0xa8);
  *puVar8 = 0;
  if (lVar13 != 0) {
    uVar12 = *(uint *)(lVar13 + 0x18);
    if ((((uVar12 != 0) && (uVar4 = (uint)uVar6, uVar4 != 0)) && (uVar12 != 1)) &&
       (((uVar4 != 1 && (2 < uVar12)) && ((2 < uVar4 && ((uVar12 != 3 && (uVar4 != 3)))))))) {
      return *(int *)(lVar5 + 0x20) * *(int *)(lVar13 + 0x20) +
             *(int *)(lVar5 + 0x24) * *(int *)(lVar13 + 0x24) +
             *(int *)(lVar5 + 0x28) * *(int *)(lVar13 + 0x28) +
             *(int *)(lVar5 + 0x2c) * *(int *)(lVar13 + 0x2c);
    }
LAB_072a2e3c:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_072a2e40:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


