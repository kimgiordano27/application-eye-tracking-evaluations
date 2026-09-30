/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData$$ReplaceTransform
ENTRY_POINT: 0618ed24
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


long * MagicaCloth2_ColliderCollisionConstraint_SerializeData__ReplaceTransform(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x19;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x20);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083d23b8);
  }
  plVar5 = (long *)FUN_0683eca4(uVar13,0);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) !=
        DAT_083d0c20)) goto LAB_0618f260;
  }
  plVar6 = (long *)FUN_0683eca4(DAT_083bc2f0,0);
  uVar13 = DAT_083bd530;
  if (plVar5 == plVar6) {
    plVar5 = (long *)FUN_03398a84(DAT_083c94f8);
    if ((DAT_086e0aec & 1) == 0) {
      FUN_0335b6c8(&DAT_083e9dc8,1);
      DataMemoryBarrier(2,3);
      DAT_086e0aec = 1;
    }
FUN_0618ef04:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    plVar6 = *(long **)(lVar7 + 0xc0);
  }
  else {
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar6 = (long *)FUN_0683eca4(uVar13,0);
    if (plVar5 == plVar6) {
      plVar5 = (long *)FUN_03398a84(DAT_083cdbc8);
      if ((DAT_086e0aed & 1) == 0) {
        FUN_0335b6c8(&DAT_083e9df0,1);
        DataMemoryBarrier(2,3);
        DAT_086e0aed = 1;
      }
      goto FUN_0618ef04;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d23b8);
    }
    plVar6 = (long *)FUN_0683eca4(uVar13,0);
    if (plVar6 == (long *)0x0) {
LAB_0618f268:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar8 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2c0));
    uVar13 = DAT_083bc828;
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_0618f268;
      uVar8 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
      if ((uVar8 & 1) == 0) {
LAB_0618f15c:
        uVar8 = (**(code **)(*plVar5 + 0x5c8))(plVar5,*(undefined8 *)(*plVar5 + 0x5d0));
        if ((uVar8 & 1) == 0) {
switchD_0618f1d8_default:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0338f618();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0338f618();
          }
          plVar5 = (long *)FUN_03398a84();
          if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) != 0) {
            return plVar5;
          }
          FUN_0338f618(*(long *)(unaff_x19 + 0x20));
          return plVar5;
        }
        if (*(int *)(DAT_083cb2f0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar13 = FUN_068666a0(plVar5,0);
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870(DAT_083d23b8);
        }
        uVar4 = FUN_0684a83c(uVar13,0);
        switch(uVar4) {
        case 5:
          uVar13 = DAT_083bd2b0;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          uVar13 = DAT_083bc658;
          break;
        case 7:
          uVar13 = DAT_083bd368;
          break;
        case 0xb:
        case 0xc:
          uVar13 = DAT_083bce28;
          break;
        default:
          goto switchD_0618f1d8_default;
        }
        goto LAB_0618ee2c;
      }
      lVar7 = (**(code **)(*plVar5 + 0x468))(plVar5,*(undefined8 *)(*plVar5 + 0x470));
      uVar13 = DAT_083bcfa8;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d23b8);
      }
      lVar9 = FUN_0683eca4(uVar13,0);
      if (lVar9 != lVar7) goto LAB_0618f15c;
      lVar7 = (**(code **)(*plVar5 + 0x488))(plVar5,*(undefined8 *)(*plVar5 + 0x490));
      uVar13 = DAT_083bca08;
      if (lVar7 == 0) goto LAB_0618f268;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0618f26c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar6 = *(long **)(lVar7 + 0x20);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) !=
            DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar6);
        }
      }
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar10 = (long *)FUN_0683eca4(uVar13,0);
      plVar11 = (long *)FUN_03398188(DAT_083c7dc8,1);
      if (plVar11 == (long *)0x0) goto LAB_0618f268;
      if ((plVar6 != (long *)0x0) &&
         (lVar7 = FUN_0339898c(plVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
        uVar13 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar13,0);
      }
      if ((int)plVar11[3] == 0) goto LAB_0618f26c;
      plVar12 = plVar11 + 4;
      *plVar12 = (long)plVar6;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x978))
                                      (plVar10,plVar11,*(undefined8 *)(*plVar10 + 0x980)),
         plVar10 == (long *)0x0)) goto LAB_0618f268;
      uVar8 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2c0));
      uVar13 = DAT_083bcfa0;
      if ((uVar8 & 1) == 0) goto LAB_0618f15c;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar13 = FUN_0683eca4(uVar13,0);
      plVar5 = plVar6;
      if (*(int *)(DAT_083d0c20 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d0c20);
      }
    }
    else {
LAB_0618ee2c:
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar13 = FUN_0683eca4(uVar13,0);
      if (*(int *)(DAT_083d0c20 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d0c20);
      }
    }
    plVar5 = (long *)FUN_06875bbc(uVar13,plVar5,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618(lVar7);
    }
    plVar6 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar6;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618(lVar7);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_0618f260:
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(plVar5);
    }
  }
  return plVar5;
}


