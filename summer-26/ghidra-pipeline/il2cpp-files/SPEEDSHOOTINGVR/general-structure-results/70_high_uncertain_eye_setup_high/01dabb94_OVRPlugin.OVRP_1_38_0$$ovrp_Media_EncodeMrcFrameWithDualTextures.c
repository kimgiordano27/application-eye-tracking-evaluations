/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 01dabb94
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dabdfc) */
/* WARNING: Removing unreachable block (ram,0x01dabfac) */

void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar8;
  long *plVar9;
  int unaff_w24;
  undefined8 uVar10;
  long *unaff_x25;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000018;
  
  lVar4 = FUN_01368e1c(&stack0x00000020,**(undefined8 **)(param_1 + 0x178));
  plVar9 = (long *)(unaff_x19 + 0x12);
  if (*plVar9 == lVar4) {
    *plVar9 = 0;
    thunk_FUN_0106e12c(plVar9,0);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01da8a04(lVar4);
    FUN_01da8ae8(lVar4,0);
    uVar3 = 1;
    iVar11 = 10;
    iVar8 = 10;
    if (unaff_w24 < 0) goto LAB_01dabf3c;
LAB_01dabc04:
    iVar11 = iVar8;
    bVar1 = true;
  }
  else {
    uVar3 = 0;
    iVar11 = 0xb;
    iVar8 = 0xb;
    if (-1 < unaff_w24) goto LAB_01dabc04;
LAB_01dabf3c:
    plVar9 = *(long **)(unaff_x19 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0234bef0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01dabf98;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_0234bef0,0);
LAB_01dabf98:
      (*(code *)*puVar5)(plVar9,puVar5[1]);
    }
    bVar1 = false;
  }
  if (iVar11 != 0xb) {
    if (iVar11 == 10) goto LAB_01dabd94;
    if (iVar11 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_0106e12c(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_01da75d8(uVar10,(long)&stack0x00000018 + 4);
  uVar6 = FUN_01dab020();
  if ((uVar6 & 1) == 0) {
    iVar8 = 0xd;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01da6b04(unaff_x19 + 8);
    uVar3 = 0;
    iVar8 = 10;
  }
  if (!bVar1 && in_stack_00000018._4_1_ != '\0') {
    FUN_0102a860(uVar10);
  }
  if (iVar8 != 0xd) {
    if (iVar8 == 10) goto LAB_01dabd94;
    if (iVar8 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  auVar12 = FUN_01a4ebe0(*(long *)(unaff_x19 + 10),0,*(undefined8 *)PTR_DAT_0235a1a8);
  uVar6 = FUN_01368958();
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar12;
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


