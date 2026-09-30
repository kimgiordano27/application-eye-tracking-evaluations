/*
FUNCTION_NAME: MagicaCloth2.SelfCollisionConstraint.SerializeData$$GetSyncPartner
ENTRY_POINT: 06199414
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long * MagicaCloth2_SelfCollisionConstraint_SerializeData__GetSyncPartner(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  
  FUN_033b9870();
  plVar5 = (long *)FUN_0683eca4();
  lVar6 = FUN_03398188(DAT_083c7dc8,1);
  if (lVar6 != 0) {
    if ((unaff_x21 != 0) && (lVar7 = FUN_0339898c(), lVar7 == 0)) {
      uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar9,0);
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar10 = (long *)(lVar6 + 0x20);
    *plVar10 = unaff_x21;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((plVar5 != (long *)0x0) &&
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x978))
                                   (plVar5,lVar6,*(undefined8 *)(*plVar5 + 0x980)),
       plVar5 != (long *)0x0)) {
      uVar8 = (**(code **)(*plVar5 + 0x2b8))();
      uVar9 = DAT_083bcfa0;
      if ((uVar8 & 1) == 0) {
        uVar8 = (**(code **)(*unaff_x20 + 0x5c8))();
        if ((uVar8 & 1) == 0) {
switchD_061995ac_default:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0338f618();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
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
        uVar9 = FUN_068666a0();
        if (*(int *)(*(long *)(unaff_x25 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870(*(long *)(unaff_x25 + 0x3b8));
        }
        uVar4 = FUN_0684a83c(uVar9,0);
        switch(uVar4) {
        case 5:
          lVar6 = *(long *)(unaff_x25 + 0x3b8);
          uVar9 = DAT_083bd2b0;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar6 = *(long *)(unaff_x25 + 0x3b8);
          uVar9 = DAT_083bc658;
          break;
        case 7:
          lVar6 = *(long *)(unaff_x25 + 0x3b8);
          uVar9 = DAT_083bd368;
          break;
        case 0xb:
        case 0xc:
          lVar6 = *(long *)(unaff_x25 + 0x3b8);
          uVar9 = DAT_083bce28;
          break;
        default:
          goto switchD_061995ac_default;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_0683eca4(uVar9,0);
        if (*(int *)(*(long *)(unaff_x24 + 0xc20) + 0xe0) == 0) {
          FUN_033b9870(*(long *)(unaff_x24 + 0xc20));
        }
      }
      else {
        if (*(int *)(*(long *)(unaff_x25 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_0683eca4(uVar9,0);
        if (*(int *)(*(long *)(unaff_x24 + 0xc20) + 0xe0) == 0) {
          FUN_033b9870(*(long *)(unaff_x24 + 0xc20));
        }
      }
      plVar5 = (long *)FUN_06875bbc(uVar9);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618(lVar6);
      }
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar5);
        }
      }
      return plVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


