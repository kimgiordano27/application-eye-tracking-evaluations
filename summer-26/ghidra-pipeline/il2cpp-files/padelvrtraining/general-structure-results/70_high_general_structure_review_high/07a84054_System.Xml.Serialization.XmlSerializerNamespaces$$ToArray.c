/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 07a84054
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07a84498) */
/* WARNING: Removing unreachable block (ram,0x07a84288) */

uint System_Xml_Serialization_XmlSerializerNamespaces__ToArray(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint extraout_w8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  
  (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540(unaff_x22);
  }
  if ((unaff_w25 == 0x1c) || (uVar4 = extraout_w8, unaff_w25 == 0)) {
    if ((*(long *)(unaff_x19 + 0x68) != 0) &&
       (plVar5 = (long *)FUN_07aab47c(*(long *)(unaff_x19 + 0x68),0), plVar5 != (long *)0x0)) {
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x24) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07a840e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar5,*unaff_x24,0);
LAB_07a840e0:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar3 = PTR_DAT_09242668;
      puVar2 = PTR_DAT_091a1508;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      do {
        lVar9 = *plVar5;
        lVar8 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_07a84150;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370(plVar5,lVar8,0);
LAB_07a84150:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_03d2ee44(plVar5,*unaff_x23);
          if (plVar5 == (long *)0x0) goto LAB_07a8427c;
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_07a84254;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_07a8423c;
        }
        lVar9 = *plVar5;
        lVar8 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_07a841b0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370(plVar5,lVar8,1);
LAB_07a841b0:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(plVar7);
        }
        if (plVar7[0xe] != 0) {
          FUN_07a8c4cc();
        }
      } while( true );
    }
    goto LAB_07a844cc;
  }
  goto LAB_07a844ac;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_07a8423c:
    if (*(long *)(piVar11 + -2) == *unaff_x23) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_07a84270;
    }
  }
LAB_07a84254:
  puVar6 = (undefined8 *)FUN_03d8f370(plVar5,*unaff_x23,0);
LAB_07a84270:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_07a8427c:
  if ((*(long *)(unaff_x19 + 0x50) != 0) &&
     (plVar5 = (long *)FUN_07aab47c(*(long *)(unaff_x19 + 0x50),0), plVar5 != (long *)0x0)) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07a842f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar5,*unaff_x24,0);
LAB_07a842f0:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar3 = PTR_DAT_0923b9b8;
    puVar2 = PTR_DAT_091a1508;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07a84360;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar5,lVar8,0);
LAB_07a84360:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_03d2ee44(plVar5,*unaff_x23);
        if (plVar5 == (long *)0x0) goto LAB_07a8448c;
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_07a84464;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_07a8444c;
      }
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_07a843c0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar5,lVar8,1);
LAB_07a843c0:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(plVar7);
      }
      if (plVar7[0xe] != 0) {
        FUN_07a8c5a8();
      }
    } while( true );
  }
LAB_07a844cc:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_07a8444c:
    if (*(long *)(piVar11 + -2) == *unaff_x23) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_07a84480;
    }
  }
LAB_07a84464:
  puVar6 = (undefined8 *)FUN_03d8f370(plVar5,*unaff_x23,0);
LAB_07a84480:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_07a8448c:
  uVar4 = FUN_07bb4960();
  uVar4 = uVar4 ^ 1;
LAB_07a844ac:
  return uVar4 & 1;
}


