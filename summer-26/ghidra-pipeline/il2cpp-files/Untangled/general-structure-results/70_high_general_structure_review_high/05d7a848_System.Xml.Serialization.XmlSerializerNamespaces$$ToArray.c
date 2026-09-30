/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 05d7a848
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d7ab48) */
/* WARNING: Removing unreachable block (ram,0x05d7ab4c) */
/* WARNING: Removing unreachable block (ram,0x05d7ac2c) */

void System_Xml_Serialization_XmlSerializerNamespaces__ToArray
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w25;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05d7a890;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(param_2,param_3,0);
LAB_05d7a890:
  (*(code *)*puVar3)(param_2,puVar3[1]);
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70();
  }
  if ((unaff_w25 != 0x22) && (unaff_w25 != 0)) {
    return;
  }
  if ((unaff_x19 == 0) ||
     ((lVar4 = FUN_05db5294(), lVar4 == 0 ||
      (plVar5 = (long *)FUN_05db98ac(lVar4,0), puVar2 = PTR_DAT_06d01f60, plVar5 == (long *)0x0))))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d03d70) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05d7a930;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)PTR_DAT_06d03d70,0);
LAB_05d7a930:
  plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    lVar4 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05d7a998;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar5,*unaff_x21,0);
LAB_05d7a998:
    uVar9 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_02ef170c(plVar5,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      lVar4 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_05d7ab18;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_05d7a9f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar5,*unaff_x21,1);
LAB_05d7a9f8:
    plVar6 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d75df8 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d75df8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar6);
      }
    }
    lVar4 = FUN_05db5294(in_stack_00000018,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar7 = (long *)FUN_05db9834(lVar4,plVar6[0x10],0);
    if (plVar7 == (long *)0x0) {
      if ((in_stack_00000000 == 0) ||
         (uVar9 = FUN_05db2e00(in_stack_00000000,plVar6[0x10],0), (uVar9 & 1) == 0)) {
        FUN_05eab824();
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d75df8 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d75df8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440();
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == lVar4) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05d7ab34;
    }
  }
LAB_05d7ab18:
  puVar3 = (undefined8 *)FUN_02eea86c(plVar5,lVar4,0);
LAB_05d7ab34:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
}


