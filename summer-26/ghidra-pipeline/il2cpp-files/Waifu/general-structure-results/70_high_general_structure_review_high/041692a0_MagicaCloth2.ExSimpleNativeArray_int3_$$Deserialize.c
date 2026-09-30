/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<int3>$$Deserialize
ENTRY_POINT: 041692a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long MagicaCloth2_ExSimpleNativeArray<int3>__Deserialize(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  
  FUN_0338f674();
  if (unaff_x20 != (long *)0x0) {
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_083c2c70) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_041690dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c();
LAB_041690dc:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 != 0) {
      iVar2 = 0;
      bVar14 = true;
      plVar12 = (long *)0x0;
      do {
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_083c2c70) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0416914c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c();
LAB_0416914c:
        iVar3 = (*(code *)*puVar4)();
        if (iVar3 <= iVar2) {
          lVar8 = **(long **)(unaff_x19 + 0x38);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0338f618(lVar8);
          }
          lVar8 = FUN_0339898c(plVar12,lVar8);
          lVar11 = **(long **)(unaff_x19 + 0x38);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0338f618(lVar11);
          }
          if (lVar8 == 0) {
            return 0;
          }
          lVar7 = FUN_0339898c(lVar8,lVar11);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec(lVar8,lVar11);
          }
          return lVar7;
        }
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_083c3a00) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041691ac;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c();
LAB_041691ac:
        uVar5 = (*(code *)*puVar4)();
        plVar6 = (long *)FUN_0339898c(uVar5,DAT_083cc390);
        plVar13 = plVar12;
        if (plVar6 != (long *)0x0) {
          lVar8 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_083cc390) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04169218;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc390,0);
LAB_04169218:
          (*(code *)*puVar4)(plVar6,puVar4[1]);
          bVar1 = !bVar14;
          plVar13 = plVar6;
          bVar14 = false;
          if (bVar1) {
            plVar13 = plVar12;
          }
        }
        iVar2 = iVar2 + 1;
        plVar12 = plVar13;
      } while( true );
    }
  }
  return 0;
}


