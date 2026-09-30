/*
FUNCTION_NAME: PhysicalButtonStoreItemPurchaseConfirmationProvider$$RequestConfirmation
ENTRY_POINT: 019e00e4
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void PhysicalButtonStoreItemPurchaseConfirmationProvider__RequestConfirmation(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  
  FUN_029d3854();
  if (*(long *)(unaff_x20 + 0x80) == 0) {
LAB_019e03c8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_046e4828(*(long *)(unaff_x20 + 0x80),unaff_w23,*(undefined8 *)PTR_DAT_06debee8);
  if (*(long *)(unaff_x20 + 0x78) == 0) {
    FUN_04e4322c(unaff_x20 + 0xb0,0);
  }
  else {
    FUN_019e5da0();
  }
  iVar1 = *unaff_x21;
  if ((int)unaff_w24 < iVar1) {
    lVar9 = *(long *)(unaff_x20 + 0x78);
    if (lVar9 == 0) goto LAB_019e03c8;
    uVar5 = *(uint *)(lVar9 + 0x18);
    plVar3 = (long *)(lVar9 + (long)(int)unaff_w24 * 8 + 0x20);
    do {
      if (uVar5 <= unaff_w24) goto LAB_019e03c4;
      lVar9 = *plVar3;
      if (lVar9 == 0) goto LAB_019e03c8;
      unaff_w24 = unaff_w24 + 1;
      plVar3 = plVar3 + 1;
      *(int *)(lVar9 + 0xe8) = *(int *)(lVar9 + 0xe8) + -1;
    } while ((int)unaff_w24 < iVar1);
  }
  *(undefined4 *)(unaff_x19 + 0xe8) = 0xffffffff;
  if (0 < *(int *)(unaff_x20 + 0x88)) {
    lVar9 = *(long *)(unaff_x20 + 0x90);
    if (lVar9 == 0) goto LAB_019e03c8;
    uVar5 = 0;
    puVar7 = (undefined1 *)(lVar9 + 0x5d);
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_019e03c4;
      if (*(int *)(puVar7 + -5) == unaff_w23) {
        if ((unaff_x22 & 1) == 0) {
          FUN_029d3bd8();
        }
        else {
          *puVar7 = 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 0x40;
    } while ((int)uVar5 < *(int *)(unaff_x20 + 0x88));
  }
  puVar2 = PTR_DAT_06e28f60;
  FUN_02087bd4();
  FUN_01cd2458();
  plVar3 = (long *)thunk_FUN_015d0480();
  if (plVar3 != (long *)0x0) {
    lVar9 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dc3660);
    if (lVar9 == 0) goto LAB_019e03c8;
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          lVar6 = lVar6 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_019e028c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_015c2a80(plVar3,*(long *)puVar2,0);
LAB_019e028c:
    FUN_028f8740(lVar9,plVar3,*(undefined8 *)(lVar6 + 8),0);
    FUN_019e66b0();
  }
  uVar8 = FUN_0208ef08();
  if ((uVar8 & 1) != 0) {
    iVar1 = *unaff_x21;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        lVar6 = *(long *)(unaff_x20 + 0x78);
        if (lVar6 == 0) goto LAB_019e03c8;
        if (*(uint *)(lVar6 + 0x18) <= (uint)lVar9) {
LAB_019e03c4:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_019e03c8;
        uVar8 = FUN_0208ef08(lVar6,0);
        if ((uVar8 & 1) != 0) goto LAB_019e032c;
        iVar1 = *unaff_x21;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar1);
    }
    uVar5 = *(uint *)(unaff_x20 + 0xa8) & 0xfffffffb;
    if ((*(uint *)(unaff_x20 + 0xa8) != uVar5) && (*(uint *)(unaff_x20 + 0xa8) = uVar5, 0 < iVar1))
    {
      FUN_019e5da0();
    }
  }
LAB_019e032c:
  puVar2 = PTR_DAT_06e1c9d8;
  FUN_0208f978();
  FUN_043262cc(unaff_x20 + 0xe0);
  uVar4 = thunk_FUN_0164ba04();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar2);
  }
  plVar3 = (long *)FUN_02082ab4(uVar4,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
  }
  return;
}


