/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 050ce704
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList
               (long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  uint unaff_w22;
  uint uVar7;
  uint unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long lVar8;
  long unaff_x29;
  undefined1 auVar9 [16];
  undefined8 auStack_10 [2];
  
                    /* try { // try from 050ce704 to 051ce70b has its CatchHandler @ 050ce714 */
                    /* try { // try from 050ce70c to 051ce717 has its CatchHandler @ 050ce558 */
  lVar8 = **(long **)(param_1 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050ce704 with catch @ 050ce714
                        */
  if ((unaff_w22 < 3) || (unaff_w23 < param_2)) {
    FUN_050f577c(0);
  }
  if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  uVar4 = FUN_050cf2e4(unaff_x20 + 6,param_2,unaff_x29 + -0xc,0xffffffff,0x1000);
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_050cf058(*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x18),
                         param_2 + 4);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(uint *)(unaff_x29 + -0x18);
      param_2 = param_2 + 6;
      lVar8 = *unaff_x25;
      if (uVar7 < param_2) {
        FUN_050f577c(0);
        uVar7 = *(uint *)(unaff_x29 + -0x18);
      }
      lVar6 = *(long *)(unaff_x29 + -0x20);
      if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      iVar2 = FUN_050e3e50(lVar6 + (long)(int)param_2 * 2,uVar7 - param_2,0x2c,*unaff_x26);
      if (0 < iVar2) {
        auVar9 = FUN_02e47358(unaff_x29 + -0x20,param_2,iVar2,*(undefined8 *)PTR_DAT_067db018);
        *(undefined8 *)(unaff_x29 + -0x10) = 0;
        *(undefined2 *)(unaff_x19 + 4) = 0;
        uVar4 = FUN_050cf2e4(auVar9._0_8_,auVar9._8_8_,unaff_x29 + -0x10,0xffffffff,0x1000,
                             unaff_x29 + -0xc);
        uVar5 = 0;
        *(short *)(unaff_x19 + 4) = (short)*(undefined4 *)(unaff_x29 + -0xc);
        if ((uVar4 & 1) == 0) goto LAB_050cea10;
        uVar4 = FUN_050cf058(*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x18),
                             iVar2 + param_2 + 1);
        if ((uVar4 & 1) != 0) {
          iVar2 = iVar2 + param_2 + 3;
          auVar9 = FUN_02e473c0(unaff_x29 + -0x20,iVar2,*unaff_x25);
          iVar3 = FUN_050e3e50(auVar9._0_8_,auVar9._8_8_,0x2c,*unaff_x26);
          if (0 < iVar3) {
            auVar9 = FUN_02e47358(unaff_x29 + -0x20,iVar2,iVar3,*(undefined8 *)PTR_DAT_067db018);
            *(undefined8 *)(unaff_x29 + -0x10) = 0;
            *(undefined2 *)(unaff_x19 + 6) = 0;
            uVar4 = FUN_050cf2e4(auVar9._0_8_,auVar9._8_8_,unaff_x29 + -0x10,0xffffffff,0x1000,
                                 unaff_x29 + -0xc);
            uVar5 = 0;
            *(short *)(unaff_x19 + 6) = (short)*(undefined4 *)(unaff_x29 + -0xc);
            if ((uVar4 & 1) == 0) goto LAB_050cea10;
                    /* try { // try from 050ce8b8 to 051ce963 has its CatchHandler @ 050ce8b8
                       catch() { ... } // from try @ 050ce8b8 with catch @ 050ce8b8
                       catch() { ... } // from try @ 050ce9d8 with catch @ 050ce8b8
                       catch() { ... } // from try @ 050cea00 with catch @ 050ce8b8
                       catch() { ... } // from try @ 050cea28 with catch @ 050ce8b8
                       catch() { ... } // from try @ 050cea4c with catch @ 050ce8b8 */
            iVar3 = iVar3 + 1;
            uVar7 = iVar3 + iVar2;
            if ((int)uVar7 < (int)*(uint *)(unaff_x29 + -0x18)) {
              if (*(uint *)(unaff_x29 + -0x18) <= uVar7) {
LAB_050ceae0:
                if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0(uVar5);
                }
                goto LAB_050ceaf4;
              }
              if (*(short *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar7 * 2) == 0x7b) {
                lVar8 = 0;
                auStack_10[0] = 0;
                do {
                  uVar4 = FUN_050cf058(*(undefined8 *)(unaff_x29 + -0x20),
                                       *(undefined8 *)(unaff_x29 + -0x18),iVar2 + iVar3 + 1);
                  if ((uVar4 & 1) == 0) goto LAB_050cea00;
                  iVar2 = iVar2 + iVar3 + 3;
                  auVar9 = FUN_02e473c0(unaff_x29 + -0x20,iVar2,*unaff_x25);
                  if (lVar8 == 7) {
                    iVar3 = FUN_050e3e50(auVar9._0_8_,auVar9._8_8_,0x7d,*unaff_x26);
                  }
                  else {
                    iVar3 = FUN_050e3e50(auVar9._0_8_,auVar9._8_8_,0x2c,*unaff_x26);
                  }
                  if (iVar3 < 1) goto LAB_050cea00;
                    /* try { // try from 050ce964 to 051ce96b has its CatchHandler @ 050cea04 */
                  auVar9 = FUN_02e47358(unaff_x29 + -0x20,iVar2,iVar3,
                                        *(undefined8 *)PTR_DAT_067db018);
                  *(undefined4 *)(unaff_x29 + -0xc) = 0;
                  uVar5 = FUN_050cf2e4(auVar9._0_8_,auVar9._8_8_,unaff_x29 + -0xc,0xffffffff,0x1000,
                                       unaff_x29 + -0x24);
                  if ((uVar5 & 1) == 0) goto LAB_050cea0c;
                  if (0xff < *(uint *)(unaff_x29 + -0x24)) goto LAB_050cea00;
                  *(char *)((long)auStack_10 + lVar8) = (char)*(uint *)(unaff_x29 + -0x24);
                  lVar8 = lVar8 + 1;
                    /* try { // try from 050ce9a8 to 051ce9d7 has its CatchHandler @ 050cea08 */
                } while (lVar8 != 8);
                uVar1 = *(uint *)(unaff_x29 + -0x18);
                uVar7 = iVar2 + iVar3 + 1;
                *(undefined8 *)(unaff_x19 + 8) = auStack_10[0];
                if ((int)uVar7 < (int)uVar1) {
                  if (uVar1 <= uVar7) goto LAB_050ceae0;
                    /* try { // try from 050ce9d8 to 051ce9fb has its CatchHandler @ 050ce8b8 */
                  if ((*(short *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar7 * 2) == 0x7d) &&
                     (iVar2 + iVar3 == uVar1 - 2)) {
                    uVar5 = 1;
                    goto LAB_050cea10;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_050cea00:
                    /* catch(type#1 @ 06402238) { ... } // from try @ 050ce9fc with catch @ 050cea00
                       try { // try from 050cea00 to 051cea23 has its CatchHandler @ 050ce8b8 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 050ce964 with catch @ 050cea04
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 050ce9a8 with catch @ 050cea08
                        */
    FUN_050cedd0();
LAB_050cea0c:
    uVar5 = 0;
  }
LAB_050cea10:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* try { // try from 050cea24 to 051cea27 has its CatchHandler @ 050cea40 */
                    /* try { // try from 050cea28 to 051cea43 has its CatchHandler @ 050ce8b8 */
    return;
  }
LAB_050ceaf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


