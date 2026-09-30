/*
FUNCTION_NAME: System.Array$$IndexOf<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03518a48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 System_Array__IndexOf<ProbeVolumeBakingSet_SerializedPerSceneCellList>(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int in_w8;
  long lVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  lVar2 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar9 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
    plVar3 = (long *)FUN_0332a010(*(undefined8 *)(lVar9 + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_03518e18;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))();
    if ((uVar4 & 1) != 0) {
      uVar5 = 0;
      uVar10 = 1;
      goto LAB_03518d78;
    }
    lVar9 = *(long *)(unaff_x21 + 0x38);
  }
  lVar2 = *(long *)(lVar9 + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar2 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar2 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (**(char **)(lVar2 + 0xb8) == '\0') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_050e4454(uVar5,0);
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar2);
    }
    uVar6 = thunk_FUN_02f1863c();
    uVar4 = FUN_050edfb8(uVar5,uVar6,0);
    if ((uVar4 & 1) == 0) goto LAB_03518d2c;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uVar5 = thunk_FUN_02f1863c();
    uVar4 = FUN_061841b4(uVar5,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      uVar10 = 2;
      goto LAB_03518d78;
    }
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uVar5 = thunk_FUN_02f1863c();
    if (*(int *)(*(long *)PTR_DAT_067cad10 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067cad10);
    }
    plVar3 = (long *)FUN_0617622c(uVar5,0);
    if (plVar3 != (long *)0x0) {
      plVar7 = (long *)thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar2 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067cad80) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_03518da0;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)PTR_DAT_067cad80,1);
LAB_03518da0:
      (*(code *)*puVar8)(plVar3);
      lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c(lVar2);
      }
      if (plVar7 == (long *)0x0) {
LAB_03518e18:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar7);
      }
      puVar8 = (undefined8 *)thunk_FUN_02f453b8();
      uVar10 = 0;
      uVar5 = 1;
      uVar6 = *puVar8;
      uVar1 = *(undefined4 *)(puVar8 + 2);
      unaff_x20[1] = puVar8[1];
      *unaff_x20 = uVar6;
      *(undefined4 *)(unaff_x20 + 2) = uVar1;
      goto LAB_03518d78;
    }
  }
  else {
LAB_03518d2c:
    if (*(int *)(*(long *)PTR_DAT_067cad10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar2 = FUN_034feab4(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar2 != 0) {
      FUN_034e16d0();
      uVar10 = 0;
      uVar5 = 1;
      goto LAB_03518d78;
    }
  }
  uVar5 = 0;
  uVar10 = 3;
LAB_03518d78:
  *unaff_x19 = uVar10;
  return uVar5;
}


