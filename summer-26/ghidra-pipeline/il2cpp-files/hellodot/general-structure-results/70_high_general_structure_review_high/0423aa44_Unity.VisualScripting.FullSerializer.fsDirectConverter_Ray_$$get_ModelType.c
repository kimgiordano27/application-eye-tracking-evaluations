/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$get_ModelType
ENTRY_POINT: 0423aa44
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__get_ModelType(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int unaff_w19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  code *pcVar9;
  undefined8 unaff_x26;
  long lVar10;
  undefined8 uVar11;
  long unaff_x29;
  
code_r0x0423aa44:
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40);
  *(int *)(unaff_x29 + -0xc) = unaff_w19;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
  (**(code **)(lVar6 + 0x10))(unaff_x26);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  lVar6 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
  if (lVar6 == 0) goto LAB_0423ad04;
  lVar10 = *unaff_x20;
  lVar3 = thunk_FUN_02cea798(lVar6,lVar10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar6,lVar10);
  }
  lVar3 = *unaff_x20;
  plVar4 = (long *)thunk_FUN_02cea798(lVar6,lVar3);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar6,lVar3);
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0423ab0c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar3,0);
LAB_0423ab0c:
  (*(code *)*puVar5)(plVar4,*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                     puVar5[1]);
  FUN_04dc7640();
  FUN_04dc7640();
  FUN_04dc7f18();
  unaff_w19 = unaff_w19 + 1;
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x22 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02ce0978(lVar6);
  }
  iVar2 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  if (unaff_w19 < iVar2 + -1) {
    param_1 = *(long *)(unaff_x22 + 0x20);
    unaff_x26 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x40);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02ce0978();
    }
    goto code_r0x0423aa44;
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  iVar2 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
  lVar3 = *(long *)(unaff_x22 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x22 + 0x20);
  }
  uVar11 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02ce0978(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
  *(int *)(unaff_x29 + -0xc) = iVar2 + -1;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
  (**(code **)(lVar6 + 0x10))(uVar11);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  lVar6 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
  if (lVar6 == 0) {
LAB_0423ad04:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar10 = *unaff_x20;
  lVar3 = thunk_FUN_02cea798(lVar6,lVar10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar6,lVar10);
  }
  lVar3 = *unaff_x20;
  plVar4 = (long *)thunk_FUN_02cea798(lVar6,lVar3);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar6,lVar3);
  }
  lVar6 = *plVar4;
  lVar10 = *(long *)(unaff_x29 + -0x38);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0423ac94;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar3,0);
LAB_0423ac94:
  (*(code *)*puVar5)(plVar4,*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                     puVar5[1]);
  FUN_04dc7640();
  FUN_04dc7f18();
  (**(code **)(*unaff_x21 + 0x168))();
  if (*(long *)(lVar10 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


