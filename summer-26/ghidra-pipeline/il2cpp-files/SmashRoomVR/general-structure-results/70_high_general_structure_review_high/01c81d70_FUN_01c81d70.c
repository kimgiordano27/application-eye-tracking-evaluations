/*
FUNCTION_NAME: FUN_01c81d70
ENTRY_POINT: 01c81d70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_01c81d70(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  if ((DAT_03fed7d9 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_231);
    thunk_FUN_01ad9084(StringLiteral_398);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03fed7d9 = 1;
  }
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  uStack_d0 = 0;
  fVar11 = (float)FUN_03925e44(0);
  lVar9 = 0x60;
  if (1.0 <= fVar11) {
    lVar9 = 0x48;
  }
  fVar18 = *(float *)((long)param_4 + lVar9);
  fVar11 = (float)FUN_03925ca4(0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar7 = (ulong)(uint)*(float *)((long)param_4 + 0x4c);
  if (fVar11 - *(float *)((long)param_4 + 0x4c) < fVar18) {
    return;
  }
  if (((char)param_4[0x25] == '\0') && (*(char *)((long)param_4 + 0x5d) != '\0')) {
    if (*(char *)((long)param_4 + 0x171) != '\0') {
      return;
    }
    lVar9 = FUN_01c71b24(0);
    lVar10 = param_4[0x1e];
    lVar4 = FUN_0391c27c(param_4,0);
    if ((lVar4 != 0) && (FUN_03928d34(lVar4,0), lVar9 != 0)) {
      FUN_01c71c98(lVar9,lVar10,0);
      *(undefined1 *)((long)param_4 + 0x171) = 1;
      return;
    }
    goto LAB_01c823e4;
  }
  lVar9 = param_4[0x2d];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(lVar9,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_4[0x2d] == 0) goto LAB_01c823e4;
    if (*(char *)(param_4[0x2d] + 0x29) != '\0') {
      lVar9 = FUN_01c71b24(0);
      lVar10 = param_4[0x1e];
      lVar4 = FUN_0391c27c(param_4,0);
      if ((lVar4 != 0) && (FUN_03928d34(lVar4,0), lVar9 != 0)) {
        FUN_01c71c98(lVar9,lVar10,0);
        return;
      }
      goto LAB_01c823e4;
    }
  }
  lVar9 = FUN_01c71b24(0);
  lVar10 = param_4[0x1c];
  lVar4 = FUN_0391c27c(param_4,0);
  if ((lVar4 == 0) || (FUN_03928d34(lVar4,0), lVar9 == 0)) goto LAB_01c823e4;
  uVar3 = (ulong)*(uint *)(param_4 + 0x1d);
  FUN_01c71c98(lVar9,lVar10,0);
  lVar9 = param_4[5];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(lVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if ((param_4[5] == 0) || (param_4[6] == 0)) goto LAB_01c823e4;
    param_3 = (ulong)DAT_00b55290;
    uVar7 = (ulong)DAT_00b555e0;
    FUN_01c4f6c0(param_3,uVar7,param_3,param_4[6],*(undefined4 *)(param_4[5] + 0x20),0);
  }
  if (*(char *)((long)param_4 + 0x5e) == '\0') {
    if (*(char *)((long)param_4 + 0x5f) != '\0') {
      fVar11 = (float)FUN_03925e44(0);
      uVar7 = 0x3f800000;
      if (fVar11 < 1.0) goto LAB_01c81f68;
    }
    if (param_4[0x15] == 0) goto LAB_01c823e4;
    uVar14 = FUN_03928d34(param_4[0x15],0);
    if (param_4[0x15] == 0) goto LAB_01c823e4;
    uVar3 = uVar7;
    uVar5 = param_3;
    uVar15 = FUN_039291ac(param_4[0x15],0);
    lVar9 = param_4[7];
    uVar13 = FUN_03920150((int)param_4[0x12],0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    }
    uVar7 = FUN_039558d0(uVar14,uVar7,param_3,uVar15,uVar3,uVar5,(int)lVar9,&local_e0,uVar13,1,0);
    if ((uVar7 & 1) != 0) {
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      uStack_98 = uStack_c8;
      uStack_a0 = uStack_d0;
      uStack_8c = uStack_bc;
      local_94 = local_c4;
      uStack_90 = uStack_c0;
      (**(code **)(*param_4 + 0x338))(param_4,&local_b0,*(undefined8 *)(*param_4 + 0x340));
    }
  }
  else {
LAB_01c81f68:
    if (param_4[0x15] == 0) goto LAB_01c823e4;
    lVar9 = param_4[0x1a];
    uVar14 = FUN_03928d34(param_4[0x15],0);
    if (param_4[0x15] == 0) goto LAB_01c823e4;
    uVar5 = uVar7;
    uVar16 = param_3;
    uVar15 = FUN_039274a0(param_4[0x15],0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar9 = FUN_01f259b0(uVar14,uVar7,param_3,uVar15,uVar5,uVar16,uVar3,lVar9,
                         *(undefined8 *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    fVar11 = (float)uVar7;
    fVar18 = (float)param_3;
    if (lVar9 == 0) goto LAB_01c823e4;
    lVar4 = FUN_01ed7390(lVar9,*(undefined8 *)StringLiteral_231);
    if ((param_4[0x15] == 0) || (fVar12 = (float)FUN_039291ac(param_4[0x15],0), lVar4 == 0))
    goto LAB_01c823e4;
    fVar17 = *(float *)((long)param_4 + 100);
    FUN_0395ae9c(fVar12 * fVar17,fVar11 * fVar17,fVar18 * fVar17,lVar4,2,0);
    plVar6 = (long *)FUN_01ed712c(lVar9,*(undefined8 *)StringLiteral_398);
    uVar7 = FUN_03923030(plVar6,0);
    if (((uVar7 & 1) != 0) && (*(char *)((long)param_4 + 0x5e) == '\0')) {
      if (plVar6 == (long *)0x0) goto LAB_01c823e4;
      (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03923030(plVar6,0);
    lVar4 = lVar9;
    if ((uVar7 & 1) == 0) {
      lVar4 = 0;
    }
    if (((uVar7 & 1) != 0) && (*(char *)((long)param_4 + 0x6c) != '\0')) {
      lVar9 = param_4[0xe];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03922f24(lVar9,0,0);
      if ((uVar7 & 1) != 0) {
        param_4[0xe] = param_4[0x15];
        thunk_FUN_01b4f09c(param_4 + 0xe);
      }
      if (plVar6 == (long *)0x0) goto LAB_01c823e4;
      FUN_01c813b4(plVar6,param_4[0x15]);
      lVar9 = lVar4;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a44(0x41a00000,lVar9,0);
  }
  (**(code **)(*param_4 + 0x328))(param_4,*(undefined8 *)(*param_4 + 0x330));
  *(undefined1 *)(param_4 + 0x25) = 0;
  if (*(char *)((long)param_4 + 0x5c) == '\0') {
    *(undefined1 *)((long)param_4 + 0x129) = 1;
LAB_01c822e0:
    *(char *)(param_4 + 0x2c) = (char)param_4[0x20];
    if ((char)param_4[0x20] != '\0') {
      lVar9 = param_4[0x2d];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0391f968(lVar9,0,0);
      if ((uVar7 & 1) != 0) {
        plVar6 = (long *)param_4[0x2d];
        if (plVar6 == (long *)0x0) goto LAB_01c823e4;
        (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      }
    }
  }
  else {
    iVar2 = (**(code **)(*param_4 + 0x378))(param_4,*(undefined8 *)(*param_4 + 0x380));
    if (iVar2 < 1) {
      *(undefined1 *)(param_4 + 0x25) = 0;
      goto LAB_01c822e0;
    }
    (**(code **)(*param_4 + 0x388))(param_4,*(undefined8 *)(*param_4 + 0x390));
    *(undefined1 *)(param_4 + 0x25) = 1;
  }
  if (param_4[0x26] != 0) {
    FUN_0392e738(param_4[0x26],0);
  }
  uVar13 = FUN_03925ca4(0);
  *(undefined4 *)((long)param_4 + 0x4c) = uVar13;
  if (param_4[0x2f] != 0) {
    if (param_4[0x18] == 0) {
LAB_01c823e4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0391fb70(param_4[0x18],0,0);
    FUN_03920de8(param_4,param_4[0x2f],0);
  }
  lVar9 = *param_4;
  if (*(char *)((long)param_4 + 0x5c) == '\0') {
    pcVar8 = *(code **)(lVar9 + 0x3c8);
    uVar14 = *(undefined8 *)(lVar9 + 0x3d0);
  }
  else {
    pcVar8 = *(code **)(lVar9 + 0x3d8);
    uVar14 = *(undefined8 *)(lVar9 + 0x3e0);
  }
  lVar9 = (*pcVar8)(param_4,uVar14);
  param_4[0x2f] = lVar9;
  thunk_FUN_01b4f09c(param_4 + 0x2f,lVar9);
  FUN_03920cb0(param_4,param_4[0x2f],0);
  return;
}


