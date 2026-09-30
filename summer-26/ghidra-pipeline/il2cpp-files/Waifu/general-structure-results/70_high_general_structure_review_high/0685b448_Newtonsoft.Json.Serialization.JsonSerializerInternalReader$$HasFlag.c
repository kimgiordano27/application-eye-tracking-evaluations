/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 0685b448
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(long *param_1)

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
  int unaff_w19;
  ulong uVar12;
  uint unaff_w20;
  undefined8 *puVar13;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x26;
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
                    /* catch() { ... } // from try @ 0685b270 with catch @ 0685b448 */
                    /* catch() { ... } // from try @ 0685b25c with catch @ 0685b44c */
                    /* catch() { ... } // from try @ 0685b250 with catch @ 0685b450 */
  if (0 < unaff_w19) {
    uVar12 = 0;
    do {
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
        lVar5 = FUN_0339a700(*plVar9 + 0x20);
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if ((lVar5 != 0) &&
           (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*param_1 + 0x40)), lVar6 == 0)) {
          uVar8 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar8,0);
        }
        if (*(uint *)(param_1 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        plVar9 = param_1 + uVar12 + 4;
        *plVar9 = lVar5;
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
  }
  if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
    uVar12 = 0;
    uVar10 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar13 = (undefined8 *)(unaff_x24 + uVar12 * 8 + 0x20);
      plVar9 = (long *)*puVar13;
      if (*(int *)(DAT_083d0c20 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (plVar9 != (long *)0x0) {
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_083d0b70 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_083d0b70 + 0x130) * 8 + -8) !=
            DAT_083d0b70)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar9);
        }
      }
      uVar10 = Newtonsoft_Json_Schema_JsonSchema__get_MinimumItems(plVar9,unaff_w20,3,param_1);
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
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
          puVar13 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          *puVar13 = uVar8;
          if (DAT_08908cd0 != 0) {
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
  lVar5 = FUN_03398188(DAT_083c7980,*(undefined4 *)(unaff_x23 + 0x18));
  FUN_068537e0(*(undefined8 *)(unaff_x23 + 0x10),0,lVar5,0,*(undefined4 *)(unaff_x23 + 0x18),0);
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


