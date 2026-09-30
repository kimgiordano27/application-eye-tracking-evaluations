/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseRequestStream
ENTRY_POINT: 055b1748
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest__CloseRequestStream(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  int iVar8;
  code *unaff_x25;
  code *pcVar9;
  ulong uVar10;
  undefined4 uStack000000000000000c;
  
  uVar2 = (*unaff_x25)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_032934b8(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x208);
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar7);
  }
  uVar3 = (*pcVar9)();
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if (0 < (int)uVar2) {
    iVar8 = 0;
    uVar10 = (ulong)uVar2;
    do {
      iVar4 = FUN_06baafb8(unaff_x21 + 2 + (long)unaff_w23 + (long)iVar8,
                           unaff_x19 + 2 + (long)unaff_w24 + (long)iVar8);
      if (iVar4 != 0) {
        return;
      }
      uVar10 = uVar10 - 1;
      iVar8 = iVar8 + unaff_w22;
    } while (uVar10 != 0);
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_032934b8(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar7);
  }
  uStack000000000000000c = (*pcVar9)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_032934b8(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x208);
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar7);
  }
  uVar5 = (*pcVar9)();
  FUN_05920ed4(&stack0x0000000c,uVar5,0);
  return;
}


