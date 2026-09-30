/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrame
ENTRY_POINT: 01dabad8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dabdfc) */
/* WARNING: Removing unreachable block (ram,0x01dabfac) */

void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrame(void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar9;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *plVar10;
  int unaff_w24;
  undefined8 uVar11;
  long *unaff_x25;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  uVar11 = in_stack_00000038;
  if (*(int *)(*(long *)PTR_DAT_0234bca8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar4 = FUN_01dac0f4(unaff_w22,uVar11);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0103ffe0(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0)) {
    uVar11 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar11,0);
  }
  if (*(uint *)(unaff_x21 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  unaff_x21[5] = lVar4;
  thunk_FUN_0106e12c(unaff_x21 + 5,lVar4);
  lVar4 = FUN_01dac4ac();
  *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(unaff_x19 + 10);
  thunk_FUN_0106e12c();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  _in_stack_00000020 = FUN_01a52a84(lVar4,0,*(undefined8 *)PTR_DAT_0235a1a0);
  uVar6 = FUN_01368dd0(&stack0x00000020,*(undefined8 *)PTR_DAT_0235a188);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
    thunk_FUN_0106e12c(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_010e77cc(unaff_x19 + 2,&stack0x00000020);
    return;
  }
  lVar4 = FUN_01368e1c(&stack0x00000020,*(undefined8 *)PTR_DAT_0235a178);
  plVar10 = (long *)(unaff_x19 + 0x12);
  if (*plVar10 == lVar4) {
    *plVar10 = 0;
    thunk_FUN_0106e12c(plVar10,0);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01da8a04(lVar4);
    FUN_01da8ae8(lVar4,0);
    uVar3 = 1;
    iVar12 = 10;
    iVar9 = 10;
    if (unaff_w24 < 0) goto LAB_01dabf3c;
LAB_01dabc04:
    iVar12 = iVar9;
    bVar1 = true;
  }
  else {
    uVar3 = 0;
    iVar12 = 0xb;
    iVar9 = 0xb;
    if (-1 < unaff_w24) goto LAB_01dabc04;
LAB_01dabf3c:
    plVar10 = *(long **)(unaff_x19 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar4 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234bef0) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01dabf98;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_0103c348(plVar10,*(long *)PTR_DAT_0234bef0,0);
LAB_01dabf98:
      (*(code *)*puVar7)(plVar10,puVar7[1]);
    }
    bVar1 = false;
  }
  if (iVar12 != 0xb) {
    if (iVar12 == 10) goto LAB_01dabd94;
    if (iVar12 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_0106e12c(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_01da75d8(uVar11,(long)&stack0x00000018 + 4);
  uVar6 = FUN_01dab020();
  if ((uVar6 & 1) == 0) {
    iVar9 = 0xd;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01da6b04(unaff_x19 + 8);
    uVar3 = 0;
    iVar9 = 10;
  }
  if (!bVar1 && in_stack_00000018._4_1_ != '\0') {
    FUN_0102a860(uVar11);
  }
  if (iVar9 != 0xd) {
    if (iVar9 == 10) goto LAB_01dabd94;
    if (iVar9 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  auVar13 = FUN_01a4ebe0(*(long *)(unaff_x19 + 10),0,*(undefined8 *)PTR_DAT_0235a1a8);
  uVar6 = FUN_01368958();
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar13;
    thunk_FUN_0106e12c(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_010e75b8(unaff_x19 + 2);
    return;
  }
  uVar3 = FUN_013689a4();
LAB_01dabd94:
  *unaff_x19 = 0xfffffffe;
  puVar2 = PTR_DAT_0235a160;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_0185635c(unaff_x19 + 2,uVar3 & 1,*(undefined8 *)puVar2);
  return;
}


