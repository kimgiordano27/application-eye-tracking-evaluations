/*
FUNCTION_NAME: EasyRoads3Dv3.ERConnectionSibling$$GetPostPosition
ENTRY_POINT: 03e9b064
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void EasyRoads3Dv3_ERConnectionSibling__GetPostPosition(double param_1,double param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  int iVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  long in_stack_00000000;
  double in_stack_00000008;
  
  if (!in_ZR) {
    param_1 = param_2;
  }
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  iVar9 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar9 = (int)param_1;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_03e9adf0;
  FUN_04de82e0(*(long *)(unaff_x19 + 0x30),1,*unaff_x28);
  FUN_04ed6ef8();
  puVar2 = PTR_DAT_0848bda8;
  FUN_04ed85b4();
  lVar8 = *(long *)(unaff_x19 + 0x38);
  uVar4 = thunk_FUN_03ac74bc(*unaff_x25);
  FUN_04ed63fc(uVar4,*(undefined8 *)PTR_DAT_0848ba80);
  if (lVar8 == 0) goto LAB_03e9adf0;
  lVar6 = *(long *)(lVar8 + 0x10);
  lVar7 = *unaff_x29;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar6 == 0) goto LAB_03e9adf0;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
    puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_03afed3c(puVar5,uVar4);
  }
  else {
    FUN_04de85b0(lVar8,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
  puVar3 = PTR_DAT_0848e940;
  FUN_04ed8658();
  if ((*(long *)(unaff_x19 + 0x38) == 0) ||
     (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x38),0,*unaff_x28), lVar8 == 0))
  goto LAB_03e9adf0;
  FUN_04ed6ef8();
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_03e9adf0;
  lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x30),1,*unaff_x28);
  if (((*(long *)(unaff_x19 + 0x30) == 0) ||
      (lVar6 = FUN_04de82e0(*(long *)(unaff_x19 + 0x30),1,*unaff_x28), lVar6 == 0)) || (lVar8 == 0))
  goto LAB_03e9adf0;
  FUN_04ed85b4(lVar8,iVar9,*(int *)(lVar6 + 0x18) - iVar9,*(undefined8 *)puVar2);
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),0,*unaff_x28), lVar8 == 0))
  goto LAB_03e9adf0;
  iVar9 = *(int *)(lVar8 + 0x18);
  if (DAT_08975452 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08975452 = '\x01';
  }
  fVar12 = (float)(int)((float)iVar9 * 0.5);
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar11 = (double)fVar12;
  dVar10 = modf(dVar11,&stack0x00000008);
  if (0.0 <= fVar12) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_03e9b298;
    }
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_03e9b298:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar10;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  iVar9 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar9 = (int)dVar11;
  }
  if (in_stack_00000000 == 0) goto LAB_03e9adf0;
  *(undefined4 *)(in_stack_00000000 + 0x18) = 0;
  *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03e9adf0;
  uVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),0,*unaff_x28);
  FUN_04ed6ef8(in_stack_00000000,uVar4,*unaff_x26);
  FUN_04ed85b4(in_stack_00000000,0,iVar9 + -1,*(undefined8 *)puVar2);
  lVar8 = *(long *)(unaff_x19 + 0x38);
  uVar4 = thunk_FUN_03ac74bc(*unaff_x25);
  FUN_04ed63fc(uVar4,*(undefined8 *)PTR_DAT_0848ba80);
  if (lVar8 == 0) goto LAB_03e9adf0;
  lVar6 = *(long *)(lVar8 + 0x10);
  lVar7 = *unaff_x29;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar6 == 0) goto LAB_03e9adf0;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
    puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_03afed3c(puVar5,uVar4);
  }
  else {
    FUN_04de85b0(lVar8,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
  FUN_04ed8658(in_stack_00000000,*(undefined8 *)puVar3);
  if ((*(long *)(unaff_x19 + 0x38) == 0) ||
     (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x38),1,*unaff_x28), lVar8 == 0))
  goto LAB_03e9adf0;
  FUN_04ed6ef8(lVar8,in_stack_00000000,*unaff_x26);
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03e9adf0;
  lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),0,*unaff_x28);
  if (((*(long *)(unaff_x19 + 0x28) == 0) ||
      (lVar6 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),0,*unaff_x28), lVar6 == 0)) || (lVar8 == 0))
  goto LAB_03e9adf0;
  FUN_04ed85b4(lVar8,iVar9,*(int *)(lVar6 + 0x18) - iVar9,*(undefined8 *)puVar2);
  if (*(int *)(unaff_x19 + 0x2d4) != 1) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),1,*unaff_x28), lVar8 == 0))
  goto LAB_03e9adf0;
  iVar9 = *(int *)(lVar8 + 0x18);
  if (DAT_08975452 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08975452 = '\x01';
  }
  fVar12 = (float)(int)((float)iVar9 * 0.5);
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar11 = (double)fVar12;
  dVar10 = modf(dVar11,&stack0x00000008);
  if (0.0 <= fVar12) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_03e9b500;
    }
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_03e9b500:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar10;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  iVar9 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar9 = (int)dVar11;
  }
  if (in_stack_00000000 == 0) goto LAB_03e9adf0;
  *(undefined4 *)(in_stack_00000000 + 0x18) = 0;
  *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03e9adf0;
  uVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),1,*unaff_x28);
  FUN_04ed6ef8(in_stack_00000000,uVar4,*unaff_x26);
  puVar2 = PTR_DAT_0848bda8;
  FUN_04ed85b4(in_stack_00000000,0,iVar9 + -1,*(undefined8 *)PTR_DAT_0848bda8);
  lVar8 = *(long *)(unaff_x19 + 0x40);
  uVar4 = thunk_FUN_03ac74bc(*unaff_x25);
  FUN_04ed63fc(uVar4,*(undefined8 *)PTR_DAT_0848ba80);
  if (lVar8 == 0) goto LAB_03e9adf0;
  lVar6 = *(long *)(lVar8 + 0x10);
  lVar7 = *unaff_x29;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar6 == 0) goto LAB_03e9adf0;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
    puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_03afed3c(puVar5,uVar4);
  }
  else {
    FUN_04de85b0(lVar8,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
  puVar3 = PTR_DAT_0848e940;
  FUN_04ed8658(in_stack_00000000,*(undefined8 *)PTR_DAT_0848e940);
  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
     (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x40),0,*unaff_x28), lVar8 == 0))
  goto LAB_03e9adf0;
  FUN_04ed6ef8(lVar8,in_stack_00000000,*unaff_x26);
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03e9adf0;
  lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),1,*unaff_x28);
  if (((*(long *)(unaff_x19 + 0x28) == 0) ||
      (lVar6 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),1,*unaff_x28), lVar6 == 0)) || (lVar8 == 0))
  goto LAB_03e9adf0;
  FUN_04ed85b4(lVar8,iVar9,*(int *)(lVar6 + 0x18) - iVar9,*(undefined8 *)puVar2);
  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
     (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x30),0,*unaff_x28), lVar8 == 0))
  goto LAB_03e9adf0;
  iVar9 = *(int *)(lVar8 + 0x18);
  if (DAT_08975452 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08975452 = '\x01';
  }
  fVar12 = (float)(int)((float)iVar9 * 0.5);
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar11 = (double)fVar12;
  dVar10 = modf(dVar11,&stack0x00000008);
  if (0.0 <= fVar12) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_03e9b744;
    }
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_03e9b744:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar10;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  *(undefined4 *)(in_stack_00000000 + 0x18) = 0;
  *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
  iVar9 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar9 = (int)dVar11;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x30),0,*unaff_x28);
    FUN_04ed6ef8(in_stack_00000000,uVar4,*unaff_x26);
    FUN_04ed85b4(in_stack_00000000,0,iVar9 + -1,*(undefined8 *)puVar2);
    lVar8 = *(long *)(unaff_x19 + 0x40);
    uVar4 = thunk_FUN_03ac74bc(*unaff_x25);
    FUN_04ed63fc(uVar4,*(undefined8 *)PTR_DAT_0848ba80);
    if (lVar8 != 0) {
      lVar6 = *(long *)(lVar8 + 0x10);
      lVar7 = *unaff_x29;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = uVar4;
          thunk_FUN_03afed3c(puVar5,uVar4);
        }
        else {
          FUN_04de85b0(lVar8,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        FUN_04ed8658(in_stack_00000000,*(undefined8 *)puVar3);
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x40),1,*unaff_x28), lVar8 != 0)) {
          FUN_04ed6ef8(lVar8,in_stack_00000000,*unaff_x26);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x30),0,*unaff_x28);
            if (((*(long *)(unaff_x19 + 0x30) != 0) &&
                (lVar6 = FUN_04de82e0(*(long *)(unaff_x19 + 0x30),0,*unaff_x28), lVar6 != 0)) &&
               (lVar8 != 0)) {
              FUN_04ed85b4(lVar8,iVar9,*(int *)(lVar6 + 0x18) - iVar9,*(undefined8 *)puVar2);
              return;
            }
          }
        }
      }
    }
  }
LAB_03e9adf0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


