/*
FUNCTION_NAME: ModIO.Implementation.Platform.FileStreamWrapper$$get_Position
ENTRY_POINT: 06406394
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x064067d0) */
/* WARNING: Removing unreachable block (ram,0x06406cd8) */
/* WARNING: Removing unreachable block (ram,0x06406dec) */

undefined8 ModIO_Implementation_Platform_FileStreamWrapper__get_Position(void)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar7;
  long *unaff_x24;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x29;
  
code_r0x06406394:
  puVar2 = (undefined8 *)FUN_0338f71c();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)FUN_0339898c();
      if (plVar4 == (long *)0x0) goto LAB_064067c4;
      lVar5 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_064066a8;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x29 + 0x870)) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_06406408;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06406408:
    plVar4 = (long *)(*(code *)*puVar2)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    lVar5 = (**(code **)(*unaff_x19 + 0x728))();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar8 = *(long **)(lVar5 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x20 + 0xd78);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d23b8);
    }
    uVar9 = FUN_0683eca4(uVar9,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c(uVar9,uVar9);
    }
    lVar5 = (**(code **)(*plVar8 + 0x218))(plVar8,uVar9,0,*(undefined8 *)(*plVar8 + 0x220));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    if (0 < (int)uVar9) {
      lVar7 = 0;
      do {
        if ((uint)uVar9 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        plVar8 = *(long **)(lVar5 + 0x20 + lVar7 * 8);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        bVar1 = *(byte *)(*(long *)(unaff_x21 + 0xef0) + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)(unaff_x21 + 0xef0))) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar8);
        }
        if ((plVar8[2] != 0) && (*(int *)(plVar8[2] + 0x10) != 0)) {
          uVar9 = (**(code **)(*unaff_x22 + 0x1c8))();
          uVar3 = FUN_0666e3cc(uVar9,plVar8[2],1,0);
          if ((uVar3 & 1) != 0) {
            (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            break;
          }
          uVar9 = *(undefined8 *)(lVar5 + 0x18);
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar9);
    }
    lVar5 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 == 0) goto code_r0x06406394;
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *(long *)(unaff_x29 + 0x870)) {
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
      if (uVar3 == 0) goto code_r0x06406394;
    }
    puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_064067b8;
    }
  }
LAB_064066a8:
  puVar2 = (undefined8 *)FUN_0338f71c(plVar4,DAT_083cc7a8,0);
LAB_064067b8:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
LAB_064067c4:
  if (*(int *)(DAT_083cde50 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_06405be8();
  uVar9 = FUN_06407000();
  return uVar9;
}


