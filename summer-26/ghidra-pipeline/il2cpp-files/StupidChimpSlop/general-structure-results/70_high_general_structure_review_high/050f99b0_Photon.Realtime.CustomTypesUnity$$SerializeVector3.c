/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeVector3
ENTRY_POINT: 050f99b0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x050f9bc8) */
/* WARNING: Removing unreachable block (ram,0x050f9c64) */
/* WARNING: Removing unreachable block (ram,0x050f9d74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Photon_Realtime_CustomTypesUnity__SerializeVector3(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  int unaff_w21;
  char cStack000000000000004c;
  long *in_stack_00000050;
  long *in_stack_00000058;
  
  FUN_02d4dc40(PTR_DAT_066600a0);
  *(undefined1 *)(unaff_x20 + 0x96c) = 1;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000058 = (long *)0x0;
  cStack000000000000004c = '\0';
  if (unaff_w21 == 0) {
    return;
  }
  uVar7 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06660090);
  uVar8 = FUN_0579fc8c(uVar7,0);
  uVar6 = FUN_050f98e8(uVar8,unaff_w21);
  lVar9 = FUN_0579f260(0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  plVar10 = (long *)FUN_057a011c(lVar9,0);
  puVar5 = PTR_DAT_066600a0;
  puVar4 = PTR_DAT_06660098;
  puVar3 = PTR_DAT_066479b0;
  do {
    in_stack_00000058 = plVar10;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar13 = *plVar10;
    lVar9 = *(long *)puVar3;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_050f9a98;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d87540(plVar10,lVar9,0);
LAB_050f9a98:
    uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    plVar10 = in_stack_00000058;
    puVar2 = PTR_DAT_066479a8;
    if ((uVar14 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_02d8a53c(in_stack_00000058,*(undefined8 *)PTR_DAT_066479a8);
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 == 0) goto LAB_050f9d24;
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar13 = *in_stack_00000058;
    lVar9 = *(long *)puVar3;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_050f9b00;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d87540(in_stack_00000058,lVar9,1);
LAB_050f9b00:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar9 = *plVar12;
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268(plVar12);
    }
    uVar14 = (**(code **)(lVar9 + 0x1a8))(plVar12,*(undefined8 *)(lVar9 + 0x1b0));
    if ((uVar14 & 1) == 0) {
      cStack000000000000004c = '\0';
      in_stack_00000050 = plVar12;
      FUN_05065dd8(plVar12,&stack0x0000004c,0);
      (**(code **)(*plVar12 + 0x208))(plVar12,uVar7,*(undefined8 *)puVar5,uVar6,0);
      if (cStack000000000000004c != '\0') {
        RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(in_stack_00000050,0);
      }
    }
    else {
      (**(code **)(*plVar12 + 0x208))(plVar12,uVar7,*(undefined8 *)puVar5,uVar6,0);
    }
    uVar14 = FUN_0579f4fc(0);
    plVar10 = in_stack_00000058;
    if ((uVar14 & 1) != 0) {
      (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      plVar10 = in_stack_00000058;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_050f9d40;
    }
  }
LAB_050f9d24:
  puVar11 = (undefined8 *)FUN_02d87540(plVar10,*(long *)puVar2,0);
LAB_050f9d40:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


