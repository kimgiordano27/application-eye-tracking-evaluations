/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$set_CloseCollidersCacheSize
ENTRY_POINT: 069a5288
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


undefined8
Oculus_Interaction_Surfaces_PhysicsLayerSurface__set_CloseCollidersCacheSize(undefined8 *param_1)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  ulong in_x9;
  int *piVar10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  long *plVar11;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long in_stack_00000018;
  
code_r0x069a5288:
  puVar1 = (ulong *)((long)param_1 + in_x11);
  do {
    cVar7 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar2) {
      *puVar1 = *puVar1 | in_x12 << (in_x9 & 0x3f);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_069a4d8c:
  plVar11 = *(long **)(unaff_x19 + 0x58);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(unaff_x23 + 0x870)) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_069a4de8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x23 + 0x870),0);
LAB_069a4de8:
  uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
  if ((uVar9 & 1) == 0) {
    FUN_069a56d4();
    puVar3 = (undefined8 *)(in_stack_00000018 + 0x58);
    *puVar3 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar3 >> 0x12 & 0x7fff);
      do {
        cVar7 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar3 >> 0xc & 0x3f);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
LAB_069a4ed0:
    do {
      plVar11 = *(long **)(in_stack_00000018 + 0x50);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)(unaff_x23 + 0x870)) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_069a4f28;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x23 + 0x870),0);
LAB_069a4f28:
      uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if ((uVar9 & 1) == 0) {
        FUN_069a5788();
        puVar3 = (undefined8 *)(in_stack_00000018 + 0x50);
        *puVar3 = 0;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar3 >> 0x12 & 0x7fff);
          do {
            cVar7 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar2) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar3 >> 0xc & 0x3f);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        return 0;
      }
      plVar11 = *(long **)(in_stack_00000018 + 0x50);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)(unaff_x21 + 0x650)) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_069a4f94;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x21 + 0x650),0);
LAB_069a4f94:
      plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((*(ulong *)(unaff_x22 + 0x10) & 0xff) == 0) {
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          if (((*(byte *)(DAT_083cdd08 + 0x130) <= *(byte *)(lVar8 + 0x130)) &&
              (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_083cdd08 + 0x130) * 8 + -8)
               == DAT_083cdd08)) ||
             ((*(byte *)(DAT_083cdd10 + 0x130) <= *(byte *)(lVar8 + 0x130) &&
              (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_083cdd10 + 0x130) * 8 + -8)
               == DAT_083cdd10)))) goto LAB_069a51f8;
        }
        lVar8 = *(long *)(in_stack_00000018 + 0x40);
        cVar7 = '\0';
        if (lVar8 != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          cVar7 = *(char *)(lVar8 + 0x20);
        }
        if (cVar7 != '\0') {
          lVar8 = FUN_0335b6c8(&DAT_083c9fc0,1);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar4 = FUN_067d14f8(0);
          if (plVar11 != (long *)0x0) {
            plVar11 = (long *)FUN_0339a700(*plVar11 + 0x20);
            if (plVar11 != (long *)0x0) {
              uVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              uVar6 = FUN_0335b6c8(&DAT_0843d2b8,1);
              uVar4 = FUN_0693b820(uVar6,uVar4,uVar5,0);
              FUN_0335b6c8(&DAT_083cde88,1);
              uVar5 = FUN_03398a84();
              FUN_068cc73c(uVar5,uVar4,0);
              uVar4 = FUN_0335b6c8(&DAT_084224c8,1);
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar5,uVar4);
            }
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        goto LAB_069a4ed0;
      }
      lVar8 = FUN_069a53e4(plVar11,*(undefined8 *)(in_stack_00000018 + 0x40),
                           *(ulong *)(unaff_x22 + 0x10) >> 0x20);
      if (lVar8 != 0) {
        plVar11 = (long *)(in_stack_00000018 + 0x18);
        *plVar11 = lVar8;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
          do {
            cVar7 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar2) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
        return 1;
      }
    } while( true );
  }
  plVar11 = *(long **)(in_stack_00000018 + 0x58);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 == 0) goto LAB_069a5170;
  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
  goto LAB_069a5158;
LAB_069a51f8:
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_083c30c8) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_069a5244;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083c30c8,0);
LAB_069a5244:
  uVar4 = (*(code *)*puVar3)(plVar11,puVar3[1]);
  puVar3 = (undefined8 *)(in_stack_00000018 + 0x58);
  *puVar3 = uVar4;
  unaff_x19 = in_stack_00000018;
  if (DAT_08908cd0 != 0) goto code_r0x069a5268;
  goto LAB_069a4d8c;
code_r0x069a5268:
  in_x9 = (ulong)puVar3 >> 0xc;
  in_x11 = 0x464e0;
  in_x12 = 1;
  param_1 = &DAT_086f67d0 + ((ulong)puVar3 >> 0x12 & 0x7fff);
  goto code_r0x069a5288;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_069a5158:
    if (*(long *)(piVar10 + -2) == *(long *)(unaff_x21 + 0x650)) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_069a518c;
    }
  }
LAB_069a5170:
  puVar3 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x21 + 0x650),0);
LAB_069a518c:
  uVar4 = (*(code *)*puVar3)(plVar11,puVar3[1]);
  puVar3 = (undefined8 *)(in_stack_00000018 + 0x18);
  *puVar3 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar3 >> 0x12 & 0x7fff);
    do {
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar3 >> 0xc & 0x3f);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


