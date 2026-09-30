/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 0685b36c
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  uint unaff_w20;
  long *unaff_x22;
  undefined8 *puVar16;
  undefined8 unaff_x25;
  long *unaff_x26;
  long in_stack_00000020;
  long lStack0000000000000028;
  
  lStack0000000000000028 = *param_1;
  if (lStack0000000000000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
                    /* try { // try from 0685b378 to 0695b37b has its CatchHandler @ 0685b390 */
  uVar15 = *(ulong *)(lStack0000000000000028 + 0x18);
                    /* try { // try from 0685b37c to 0695b383 has its CatchHandler @ 0685b458 */
  if (unaff_x26 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0685b24c with catch @ 0685b384
                       try { // try from 0685b384 to 0695b3ab has its CatchHandler @ 0685b1b0 */
                    /* catch() { ... } // from try @ 0685b2e4 with catch @ 0685b388 */
                    /* catch() { ... } // from try @ 0685b2d8 with catch @ 0685b38c */
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0685b378 with catch @ 0685b390 */
      FUN_033b9870();
    }
    unaff_x26 = (long *)FUN_0684b040(0);
  }
  iVar14 = (int)uVar15;
                    /* try { // try from 0685b3ac to 0695b3af has its CatchHandler @ 0685b430 */
  if (((((unaff_w20 ^ 0xffffffff) & 0x14) == 0) && (iVar14 == 0)) &&
     (uVar5 = (**(code **)(*unaff_x22 + 0x628))(), (uVar5 & 1) != 0)) {
    uVar6 = FUN_0685bf30();
  }
  else {
                    /* try { // try from 0685b3fc to 0695b42f has its CatchHandler @ 0685b4cc */
    lVar7 = (**(code **)(*unaff_x22 + 0x698))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar8 = FUN_03398a84(DAT_083c4bf8);
    FUN_04ab0488(lVar8,*(undefined4 *)(lVar7 + 0x18),DAT_083f2b38);
                    /* catch() { ... } // from try @ 0685b3ac with catch @ 0685b430
                       try { // try from 0685b430 to 0695b473 has its CatchHandler @ 0685b1b0 */
    uVar15 = uVar15 & 0xffffffff;
                    /* catch() { ... } // from try @ 0685b294 with catch @ 0685b440 */
                    /* catch() { ... } // from try @ 0685b288 with catch @ 0685b444 */
    plVar9 = (long *)FUN_03398188(DAT_083c7dc8,uVar15);
    if (0 < iVar14) {
      uVar5 = 0;
      do {
        if (lStack0000000000000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(lStack0000000000000028 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        plVar13 = *(long **)(lStack0000000000000028 + uVar5 * 8 + 0x20);
        if (plVar13 != (long *)0x0) {
          lVar10 = FUN_0339a700(*plVar13 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if ((lVar10 != 0) &&
             (lVar11 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
            uVar6 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20(uVar6,0);
          }
          if (*(uint *)(plVar9 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          plVar13 = plVar9 + uVar5 + 4;
          *plVar13 = lVar10;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar15);
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar15 = 0;
      uVar5 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        puVar16 = (undefined8 *)(lVar7 + uVar15 * 8 + 0x20);
        plVar13 = (long *)*puVar16;
        if (*(int *)(DAT_083d0c20 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083d0b70 + 0x130)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083d0b70 + 0x130) * 8 + -8)
              != DAT_083d0b70)) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec(plVar13);
          }
        }
        uVar5 = Newtonsoft_Json_Schema_JsonSchema__get_MinimumItems(plVar13,unaff_w20,3,plVar9);
        lVar10 = DAT_083f2b40;
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          uVar6 = *puVar16;
          lVar11 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            puVar16 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *puVar16 = uVar6;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar16 >> 0x12 & 0x7fff);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          else {
            FUN_04ab0e54(lVar8,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar7 = FUN_03398188(DAT_083c7980,*(undefined4 *)(lVar8 + 0x18));
    FUN_068537e0(*(undefined8 *)(lVar8 + 0x10),0,lVar7,0,*(undefined4 *)(lVar8 + 0x18),0);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
      uVar6 = FUN_0335b6c8(&DAT_083c7a10,1);
      plVar9 = (long *)FUN_03398188(uVar6,1);
      lVar7 = (**(code **)(*unaff_x22 + 0x2f8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x300));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((lVar7 != 0) && (lVar8 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
      {
        uVar6 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar6,0);
      }
      if ((int)plVar9[3] != 0) {
        plVar13 = plVar9 + 4;
        *plVar13 = lVar7;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar6 = FUN_0335b6c8(&DAT_08437818,1);
        uVar6 = FUN_068791ec(uVar6,plVar9,0);
        FUN_0335b6c8(&DAT_083cee70,1);
        lVar7 = FUN_03398a84();
        FUN_0683efb8(lVar7,uVar6,0);
        *(undefined4 *)(lVar7 + 0x60) = 0x80131513;
        uVar6 = FUN_0335b6c8(&DAT_08416148,1);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(lVar7,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    in_stack_00000020 = 0;
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    plVar9 = (long *)(**(code **)(*unaff_x26 + 0x188))
                               (unaff_x26,unaff_w20,lVar7,&stack0x00000028,0,unaff_x25,0,
                                &stack0x00000020);
    uVar15 = FUN_06740938(plVar9,0,0);
    if ((uVar15 & 1) != 0) {
      uVar6 = FUN_0335b6c8(&DAT_083c7a10,1);
      plVar9 = (long *)FUN_03398188(uVar6,1);
      lVar7 = (**(code **)(*unaff_x22 + 0x2f8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x300));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((lVar7 != 0) && (lVar8 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
      {
        uVar6 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar6,0);
      }
      if ((int)plVar9[3] != 0) {
        plVar13 = plVar9 + 4;
        *plVar13 = lVar7;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar6 = FUN_0335b6c8(&DAT_08437818,1);
        uVar6 = FUN_068791ec(uVar6,plVar9,0);
        FUN_0335b6c8(&DAT_083cee70,1);
        lVar7 = FUN_03398a84();
        FUN_0683efb8(lVar7,uVar6,0);
        *(undefined4 *)(lVar7 + 0x60) = 0x80131513;
        uVar6 = FUN_0335b6c8(&DAT_08416148,1);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(lVar7,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar7 = (**(code **)(*plVar9 + 1000))(plVar9,*(undefined8 *)(*plVar9 + 0x3f0));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(lVar7 + 0x18) == 0) {
      if (lStack0000000000000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(long *)(lStack0000000000000028 + 0x18) != 0) {
        lVar7 = FUN_0335b6c8(&DAT_083c9fc0,1);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar6 = FUN_067d0c18(0);
        uVar12 = FUN_0335b6c8(&DAT_0844c120,1);
        lVar7 = FUN_0335b6c8(&DAT_084012c0,1);
        lVar8 = *(long *)(lVar7 + 0x38);
        if (lVar8 == 0) {
          FUN_0338f674(lVar7);
          lVar8 = *(long *)(lVar7 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0338f618();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0338f618();
        }
        uVar6 = FUN_0666f3a4(uVar6,uVar12,**(undefined8 **)(lVar7 + 0xb8),0);
        FUN_0335b6c8(&DAT_083cf4c0,1);
        lVar7 = FUN_03398a84();
        FUN_0683efb8(lVar7,uVar6,0);
        *(undefined4 *)(lVar7 + 0x60) = 0x80131515;
        uVar6 = FUN_0335b6c8(&DAT_08416148,1);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(lVar7,uVar6);
      }
      uVar6 = FUN_0685bdbc(unaff_x22,1,(unaff_w20 & 0x2000000) == 0);
    }
    else {
      lVar7 = *plVar9;
      if ((*(byte *)(lVar7 + 0x130) < *(byte *)(DAT_083c9d50 + 0x130)) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_083c9d50 + 0x130) * 8 + -8) !=
          DAT_083c9d50)) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar9);
      }
      uVar6 = (**(code **)(lVar7 + 0x3f8))
                        (plVar9,unaff_w20,unaff_x26,lStack0000000000000028,unaff_x25,
                         *(undefined8 *)(lVar7 + 0x400));
      if (in_stack_00000020 != 0) {
        if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        (**(code **)(*unaff_x26 + 0x1a8))
                  (unaff_x26,&stack0x00000028,in_stack_00000020,*(undefined8 *)(*unaff_x26 + 0x1b0))
        ;
      }
    }
  }
  return uVar6;
}


