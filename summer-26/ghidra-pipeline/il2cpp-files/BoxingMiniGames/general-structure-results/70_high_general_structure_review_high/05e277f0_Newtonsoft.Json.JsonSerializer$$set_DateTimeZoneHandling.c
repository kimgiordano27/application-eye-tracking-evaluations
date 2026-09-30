/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateTimeZoneHandling
ENTRY_POINT: 05e277f0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_DateTimeZoneHandling(long param_1)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int iVar9;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long lVar10;
  uint uStack000000000000000c;
  undefined *puVar7;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x588));
  *(undefined1 *)(unaff_x22 + 0xd18) = 1;
  iVar9 = 10;
  if (unaff_w24 != -1) {
    iVar9 = unaff_w24;
  }
  uStack000000000000000c = *unaff_x20;
  uVar1 = (uint)(CONCAT44(iVar9,iVar9 + -2) >> 1);
  if (7 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x99U) == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
    uVar5 = thunk_FUN_0367fe20();
    uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a11768);
    uVar8 = thunk_FUN_036aa1c8(PTR_DAT_07a0ac48);
    FUN_05d7e218(uVar5,uVar6,uVar8,0);
    goto LAB_05e27ab4;
  }
  if (((int)uStack000000000000000c < 0) || ((int)unaff_w21 <= (int)uStack000000000000000c)) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
    uVar5 = thunk_FUN_0367fe20();
    uVar6 = thunk_FUN_036aa1c8(PTR_DAT_079fd430);
    FUN_05d862e8(uVar5,uVar6,0);
    goto LAB_05e27ab4;
  }
  if (((unaff_w19 & 0x3000) == 0) && (FUN_05e27b14(), uStack000000000000000c == unaff_w21)) {
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar5 = thunk_FUN_0367fe20();
    puVar7 = PTR_DAT_07a15420;
    goto LAB_05e27a3c;
  }
  if (unaff_w21 <= uStack000000000000000c) goto LAB_05e27988;
  sVar2 = *(short *)(unaff_x23 + (long)(int)uStack000000000000000c * 2);
  if (sVar2 == 0x2b) {
    uStack000000000000000c = uStack000000000000000c + 1;
LAB_05e278b8:
    bVar3 = false;
    lVar10 = 1;
LAB_05e278bc:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = uStack000000000000000c + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= uStack000000000000000c) {
LAB_05e27988:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (*(short *)(unaff_x23 + (long)(int)uStack000000000000000c * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_05e27988;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          uStack000000000000000c = uStack000000000000000c + 2;
          iVar9 = 0x10;
        }
      }
    }
    uVar1 = uStack000000000000000c;
    lVar4 = FUN_05e27bd0(iVar9);
    if (uStack000000000000000c == uVar1) {
      thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
      uVar5 = thunk_FUN_0367fe20();
      puVar7 = PTR_DAT_07a15418;
    }
    else {
      if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)uStack000000000000000c)) {
        *unaff_x20 = uStack000000000000000c;
        if (lVar4 != -0x8000000000000000) {
          bVar3 = true;
        }
        if (((iVar9 != 10) || ((unaff_w19 >> 9 & 1) != 0)) || (bVar3)) {
          if (iVar9 != 10) {
            lVar10 = 1;
          }
          return lVar4 * lVar10;
        }
        thunk_FUN_036aa1c8(PTR_DAT_079fc228);
        uVar5 = thunk_FUN_0367fe20();
        puVar7 = PTR_DAT_07a11720;
        goto LAB_05e27aa4;
      }
      thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
      uVar5 = thunk_FUN_0367fe20();
      puVar7 = PTR_DAT_07a15038;
    }
LAB_05e27a3c:
    uVar6 = thunk_FUN_036aa1c8(puVar7);
    FUN_05dffe0c(uVar5,uVar6,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_05e278b8;
    if (iVar9 != 10) {
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar5 = thunk_FUN_0367fe20();
      uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a15428);
      FUN_05d84c94(uVar5,uVar6,0);
      goto LAB_05e27ab4;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      uStack000000000000000c = uStack000000000000000c + 1;
      lVar10 = -1;
      bVar3 = true;
      goto LAB_05e278bc;
    }
    thunk_FUN_036aa1c8(PTR_DAT_079fc228);
    uVar5 = thunk_FUN_0367fe20();
    puVar7 = PTR_DAT_07a15430;
LAB_05e27aa4:
    uVar6 = thunk_FUN_036aa1c8(puVar7);
    FUN_05e272f8(uVar5,uVar6);
  }
LAB_05e27ab4:
  uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a15438);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar5,uVar6);
}


