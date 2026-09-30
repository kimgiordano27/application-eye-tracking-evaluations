/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 06211248
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06211560) */
/* WARNING: Removing unreachable block (ram,0x06211564) */
/* WARNING: Removing unreachable block (ram,0x06211644) */

void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w25;
  long *unaff_x26;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  plVar3 = (long *)thunk_FUN_03010710();
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_062112a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,*unaff_x26,0);
LAB_062112a8:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fc8594();
  }
  if ((unaff_w25 != 0x22) && (unaff_w25 != 0)) {
    return;
  }
  if ((unaff_x19 == 0) ||
     ((lVar7 = FUN_0624bcac(), lVar7 == 0 ||
      (plVar3 = (long *)FUN_062502c4(lVar7,0), puVar2 = PTR_DAT_06f70b30, plVar3 == (long *)0x0))))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar7 = *plVar3;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06f80980) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_06211348;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,*(long *)PTR_DAT_06f80980,0);
LAB_06211348:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  do {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_062113b0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,*unaff_x21,0);
LAB_062113b0:
    uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_03010710(plVar3,*(undefined8 *)puVar2);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar3;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_06211530;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06211410;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,*unaff_x21,1);
LAB_06211410:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06fcc048 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06fcc048))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar5);
      }
    }
    lVar7 = FUN_0624bcac(in_stack_00000018,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    plVar6 = (long *)FUN_0625024c(lVar7,plVar5[0x10],0);
    if (plVar6 == (long *)0x0) {
      if ((in_stack_00000000 == 0) ||
         (uVar9 = FUN_06249818(in_stack_00000000,plVar5[0x10],0), (uVar9 & 1) == 0)) {
        FUN_063420f0();
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06fcc048 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06fcc048))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884();
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == lVar7) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0621154c;
    }
  }
LAB_06211530:
  puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,lVar7,0);
LAB_0621154c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


