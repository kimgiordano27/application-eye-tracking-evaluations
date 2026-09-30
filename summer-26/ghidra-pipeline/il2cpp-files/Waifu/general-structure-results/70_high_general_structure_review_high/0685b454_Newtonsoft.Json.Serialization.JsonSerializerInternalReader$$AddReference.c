/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
ENTRY_POINT: 0685b454
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  uint unaff_w20;
  undefined8 *puVar13;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
                    /* catch() { ... } // from try @ 0685b2ac with catch @ 0685b454 */
                    /* catch() { ... } // from try @ 0685b32c with catch @ 0685b458
                       catch() { ... } // from try @ 0685b37c with catch @ 0685b458 */
  uVar12 = 0;
  do {
                    /* try { // try from 0685b474 to 0695b48f has its CatchHandler @ 0685b4bc */
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(in_stack_00000028 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar9 = *(long **)(in_stack_00000028 + uVar12 * 8 + 0x20);
    if (plVar9 != (long *)0x0) {
                    /* try { // try from 0685b490 to 0695b4ab has its CatchHandler @ 0685b1b0 */
      lVar5 = FUN_0339a700(*plVar9 + 0x20);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
                    /* try { // try from 0685b4ac to 0695b4bb has its CatchHandler @ 0685b4bc */
      if ((lVar5 != 0) &&
         (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x25 + 0x40)), lVar6 == 0)) {
        uVar8 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar8,0);
      }
                    /* catch() { ... } // from try @ 0685b474 with catch @ 0685b4bc
                       catch() { ... } // from try @ 0685b4ac with catch @ 0685b4bc */
                    /* try { // try from 0685b4c0 to 0695b4c3 has its CatchHandler @ 0685b4cc */
                    /* try { // try from 0685b4c4 to 0695b4cf has its CatchHandler @ 0685b1b0 */
      if (*(uint *)(unaff_x25 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar9 = unaff_x25 + uVar12 + 4;
                    /* catch() { ... } // from try @ 0685b3fc with catch @ 0685b4cc
                       catch() { ... } // from try @ 0685b4c0 with catch @ 0685b4cc */
      *plVar9 = lVar5;
                    /* try { // try from 0685b4d0 to 0695b533 has its CatchHandler @ 0685b4d0
                       catch() { ... } // from try @ 0685b4d0 with catch @ 0685b4d0
                       catch() { ... } // from try @ 0685b5cc with catch @ 0685b4d0
                       catch() { ... } // from try @ 0685b654 with catch @ 0685b4d0
                       catch() { ... } // from try @ 0685b688 with catch @ 0685b4d0 */
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != unaff_x26);
  if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
    uVar12 = 0;
    uVar10 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
                    /* try { // try from 0685b534 to 0695b537 has its CatchHandler @ 0685b5d4 */
                    /* try { // try from 0685b538 to 0695b543 has its CatchHandler @ 0685b5e0 */
      puVar13 = (undefined8 *)(unaff_x24 + uVar12 * 8 + 0x20);
      plVar9 = (long *)*puVar13;
      if (*(int *)(DAT_083d0c20 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (plVar9 != (long *)0x0) {
                    /* try { // try from 0685b570 to 0695b573 has its CatchHandler @ 0685b5cc */
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_083d0b70 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_083d0b70 + 0x130) * 8 + -8) !=
            DAT_083d0b70)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar9);
        }
      }
      uVar10 = Newtonsoft_Json_Schema_JsonSchema__get_MinimumItems(plVar9,unaff_w20,3);
                    /* try { // try from 0685b590 to 0695b5a3 has its CatchHandler @ 0685b5d0 */
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(unaff_x24 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uVar8 = *puVar13;
        lVar5 = *(long *)(unaff_x23 + 0x10);
                    /* try { // try from 0685b5b4 to 0695b5b7 has its CatchHandler @ 0685b5d8 */
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uVar2 = *(uint *)(unaff_x23 + 0x18);
                    /* try { // try from 0685b5c8 to 0695b5cb has its CatchHandler @ 0685b5dc */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0685b570 with catch @ 0685b5cc
                       try { // try from 0685b5cc to 0695b5f7 has its CatchHandler @ 0685b4d0 */
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0685b590 with catch @ 0685b5d0
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0685b534 with catch @ 0685b5d4
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0685b5b4 with catch @ 0685b5d8
                        */
          *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0685b5c8 with catch @ 0685b5dc
                        */
          puVar13 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          *puVar13 = uVar8;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0685b538 with catch @ 0685b5e0
                        */
          if (DAT_08908cd0 != 0) {
                    /* try { // try from 0685b5f8 to 0695b653 has its CatchHandler @ 0685b680 */
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        else {
          FUN_04ab0e54();
        }
      }
      uVar10 = (ulong)*(uint *)(unaff_x24 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(unaff_x24 + 0x18));
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
                    /* try { // try from 0685b654 to 0695b66f has its CatchHandler @ 0685b4d0 */
  lVar5 = FUN_03398188(DAT_083c7980,*(undefined4 *)(unaff_x23 + 0x18));
                    /* try { // try from 0685b670 to 0695b67f has its CatchHandler @ 0685b680 */
  FUN_068537e0(*(undefined8 *)(unaff_x23 + 0x10),0,lVar5,0,*(undefined4 *)(unaff_x23 + 0x18),0);
                    /* catch() { ... } // from try @ 0685b5f8 with catch @ 0685b680
                       catch() { ... } // from try @ 0685b670 with catch @ 0685b680 */
                    /* try { // try from 0685b684 to 0695b687 has its CatchHandler @ 0685b690 */
                    /* try { // try from 0685b688 to 0695b693 has its CatchHandler @ 0685b4d0 */
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
    uVar8 = FUN_0335b6c8(&DAT_083c7a10,1);
    plVar9 = (long *)FUN_03398188(uVar8,1);
    lVar5 = (**(code **)(*in_stack_00000008 + 0x2f8))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x300));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
      uVar8 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar8,0);
    }
    if ((int)plVar9[3] != 0) {
      plVar11 = plVar9 + 4;
      *plVar11 = lVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar8 = FUN_0335b6c8(&DAT_08437818,1);
      uVar8 = FUN_068791ec(uVar8,plVar9,0);
      FUN_0335b6c8(&DAT_083cee70,1);
      lVar5 = FUN_03398a84();
      FUN_0683efb8(lVar5,uVar8,0);
      *(undefined4 *)(lVar5 + 0x60) = 0x80131513;
      uVar8 = FUN_0335b6c8(&DAT_08416148,1);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(lVar5,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0685b684 with catch @ 0685b690
                        */
  in_stack_00000020 = 0;
  if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x188))
                             (in_stack_00000010,unaff_w20,lVar5,&stack0x00000028,0,in_stack_00000018
                              ,0,&stack0x00000020);
  uVar12 = FUN_06740938(plVar9,0,0);
  if ((uVar12 & 1) != 0) {
    uVar8 = FUN_0335b6c8(&DAT_083c7a10,1);
    plVar9 = (long *)FUN_03398188(uVar8,1);
    lVar5 = (**(code **)(*in_stack_00000008 + 0x2f8))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x300));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
                    /* try { // try from 0685bacc to 0695bbb3 has its CatchHandler @ 0685bacc
                       catch() { ... } // from try @ 0685bacc with catch @ 0685bacc
                       catch() { ... } // from try @ 0685bbe0 with catch @ 0685bacc
                       catch() { ... } // from try @ 0685bcc0 with catch @ 0685bacc */
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
      uVar8 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar8,0);
    }
    if ((int)plVar9[3] != 0) {
      plVar11 = plVar9 + 4;
      *plVar11 = lVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar8 = FUN_0335b6c8(&DAT_08437818,1);
      uVar8 = FUN_068791ec(uVar8,plVar9,0);
      FUN_0335b6c8(&DAT_083cee70,1);
      lVar5 = FUN_03398a84();
      FUN_0683efb8(lVar5,uVar8,0);
      *(undefined4 *)(lVar5 + 0x60) = 0x80131513;
      uVar8 = FUN_0335b6c8(&DAT_08416148,1);
                    /* try { // try from 0685bbb4 to 0695bbbf has its CatchHandler @ 0685bc6c */
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(lVar5,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar5 = (**(code **)(*plVar9 + 1000))(plVar9,*(undefined8 *)(*plVar9 + 0x3f0));
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar5 + 0x18) == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(in_stack_00000028 + 0x18) != 0) {
      lVar5 = FUN_0335b6c8(&DAT_083c9fc0,1);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = FUN_067d0c18(0);
      uVar7 = FUN_0335b6c8(&DAT_0844c120,1);
      lVar5 = FUN_0335b6c8(&DAT_084012c0,1);
      lVar6 = *(long *)(lVar5 + 0x38);
      if (lVar6 == 0) {
        FUN_0338f674(lVar5);
        lVar6 = *(long *)(lVar5 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0338f618();
      }
      uVar8 = FUN_0666f3a4(uVar8,uVar7,**(undefined8 **)(lVar5 + 0xb8),0);
      FUN_0335b6c8(&DAT_083cf4c0,1);
      lVar5 = FUN_03398a84();
      FUN_0683efb8(lVar5,uVar8,0);
      *(undefined4 *)(lVar5 + 0x60) = 0x80131515;
      uVar8 = FUN_0335b6c8(&DAT_08416148,1);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(lVar5,uVar8);
    }
    uVar8 = FUN_0685bdbc(in_stack_00000008,1,(unaff_w20 & 0x2000000) == 0);
  }
  else {
    lVar5 = *plVar9;
    if ((*(byte *)(lVar5 + 0x130) < *(byte *)(DAT_083c9d50 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_083c9d50 + 0x130) * 8 + -8) !=
        DAT_083c9d50)) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(plVar9);
    }
    uVar8 = (**(code **)(lVar5 + 0x3f8))
                      (plVar9,unaff_w20,in_stack_00000010,in_stack_00000028,in_stack_00000018,
                       *(undefined8 *)(lVar5 + 0x400));
    if (in_stack_00000020 != 0) {
      if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      (**(code **)(*in_stack_00000010 + 0x1a8))
                (in_stack_00000010,&stack0x00000028,in_stack_00000020,
                 *(undefined8 *)(*in_stack_00000010 + 0x1b0));
    }
  }
  return uVar8;
}


