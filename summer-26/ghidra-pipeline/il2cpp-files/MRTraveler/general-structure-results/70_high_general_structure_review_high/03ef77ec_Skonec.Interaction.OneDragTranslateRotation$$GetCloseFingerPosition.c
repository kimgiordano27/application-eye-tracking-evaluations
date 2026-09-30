/*
FUNCTION_NAME: Skonec.Interaction.OneDragTranslateRotation$$GetCloseFingerPosition
ENTRY_POINT: 03ef77ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2
*/


void Skonec_Interaction_OneDragTranslateRotation__GetCloseFingerPosition(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  long unaff_x20;
  long unaff_x23;
  long *unaff_x24;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  FUN_085df98c();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  _in_stack_00000010 = FUN_07c93eac();
  thunk_FUN_03d233cc(&stack0x00000010,0);
  auVar1 = _in_stack_00000010;
  uVar6 = in_stack_00000018;
  plVar8 = in_stack_00000010;
  if (DAT_0940ffed == '\0') {
    FUN_03c8f898(PTR_DAT_08e69640);
    DAT_0940ffed = '\x01';
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0940ffee == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffee = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ef78f0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e69648,0);
LAB_03ef78f0:
    iVar2 = (*(code *)*puVar3)(plVar8,uVar6 & 0xffff,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 8) = auVar1;
      thunk_FUN_03d233cc(unaff_x19 + 8,0);
      FUN_03f04fac(unaff_x19 + 2);
      return;
    }
  }
  if (*(char *)(unaff_x23 + 0xfef) == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    *(undefined1 *)(unaff_x23 + 0xfef) = 1;
  }
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_03ef7984;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e69648,2);
LAB_03ef7984:
    (*(code *)*puVar3)(plVar8,uVar6 & 0xffff,puVar3[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(char *)(unaff_x20 + 0x25) != '\0') {
    if (*(long *)(unaff_x20 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_03ef66d4();
  }
  *unaff_x19 = 0xfffffffe;
  if (DAT_0940fff2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69650);
    DAT_0940fff2 = '\x01';
  }
  plVar8 = *(long **)(unaff_x19 + 2);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e69650) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_03ef7a3c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e69650,2);
LAB_03ef7a3c:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  return;
}


