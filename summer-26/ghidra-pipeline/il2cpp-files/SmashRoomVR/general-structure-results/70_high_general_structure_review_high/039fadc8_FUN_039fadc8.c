/*
FUNCTION_NAME: FUN_039fadc8
ENTRY_POINT: 039fadc8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_039fadc8(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined4 uVar16;
  long local_140;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *plStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_03daf4c0;
  if ((DAT_03ffcdbe & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2343);
    thunk_FUN_01ad9084(PTR_DAT_03db0150);
    thunk_FUN_01ad9084(PTR_DAT_03db0158);
    thunk_FUN_01ad9084(PTR_DAT_03db0160);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03dafe58);
    thunk_FUN_01ad9084(PTR_DAT_03daf4c0);
    thunk_FUN_01ad9084(PTR_DAT_03dade18);
    thunk_FUN_01ad9084(PTR_DAT_03daff60);
    DAT_03ffcdbe = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = (long *)0x0;
  uStack_80 = 0;
  local_b0._8_8_ = 0;
  local_b0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar3 = PTR_DAT_03db0150;
  puVar2 = PTR_DAT_03dade18;
  FUN_03aeee50(&local_118,0);
  uVar12 = (ulong)&local_f0 | 8;
  iVar13 = 0;
  uStack_88 = uStack_110;
  local_90 = local_118;
  local_78 = plStack_100;
  uStack_80 = local_108;
  local_70 = local_f8;
LAB_039faef0:
  do {
    do {
      uVar5 = FUN_0276a5b8(&local_90,*(undefined8 *)puVar3);
      plVar4 = local_78;
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (local_78 == (long *)0x0) goto LAB_039fb284;
      plVar6 = (long *)(**(code **)(*local_78 + 0x438))
                                 (local_78,6,*(undefined8 *)(*local_78 + 0x440));
    } while (plVar6 == (long *)0x0);
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  } while ((((*(byte *)(*plVar6 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) ||
           (lVar15 = plVar6[5], lVar15 == 0)) ||
          ((*(int *)(lVar15 + 0x7c) < 0 || (*(long *)(lVar15 + 0x10) == 0))));
  bVar1 = *(byte *)(*(long *)StringLiteral_2343 + 0x130);
  if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_2343)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(plVar4);
  }
  if (lVar15 == 0) {
LAB_039fb284:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = FUN_039fa778(lVar15);
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0._8_8_ = 0;
  local_b0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_d0 = *(undefined8 *)(lVar15 + 0x110);
  thunk_FUN_01b4f09c(&local_d0);
  local_f0 = uVar7;
  thunk_FUN_01b4f09c(&local_f0,uVar7);
  lVar9 = *(long *)(lVar15 + 0x120);
  if (lVar9 == 0) {
    uStack_c8 = 0;
  }
  else {
    if (lVar9 == 0) goto LAB_039fb284;
    uStack_c8 = FUN_03a01d08(lVar9,0);
  }
  thunk_FUN_01b4f09c(&uStack_c8);
  if (*(int *)(*(long *)PTR_DAT_03daff60 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar9 = lVar15 + 0x140;
  local_c0 = FUN_039ff05c(lVar9,0);
  thunk_FUN_01b4f09c(&local_c0,local_c0);
  uVar16 = FUN_03a9029c(plVar4,0);
  local_b8 = CONCAT44(local_b8._4_4_,uVar16);
  local_b0 = FUN_039fefcc(lVar9,0);
  local_a0 = FUN_039ff014(lVar9,0);
  if (*(int *)(lVar15 + 0x84) == 0) {
    uStack_e8 = uVar7;
    thunk_FUN_01b4f09c(uVar12,uVar7);
    local_140 = *(long *)(lVar15 + 0x10);
    iVar14 = iVar13;
  }
  else {
    lVar9 = *(long *)(lVar15 + 0x10);
    if (lVar9 == 0) goto LAB_039faef0;
    uVar10 = 0;
    local_140 = lVar9;
    do {
      while (uVar8 = uVar10, *(int *)(lVar9 + 0x34) != 0) {
        lVar9 = *(long *)(lVar9 + 0x28);
        if (lVar9 == 0) goto LAB_039fb204;
      }
      uVar11 = *(undefined8 *)(lVar9 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03922f24(uVar11,0,0);
      uVar11 = uVar7;
      if ((uVar5 & 1) == 0) {
        uVar11 = *(undefined8 *)(lVar9 + 0x38);
      }
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar11,uVar10,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(uVar10,0,0);
        uVar8 = uVar11;
        if ((uVar5 & 1) != 0) {
          uStack_e8 = uVar10;
          thunk_FUN_01b4f09c(uVar12);
          local_d8 = local_140;
          thunk_FUN_01b4f09c(&local_d8);
          if (*(int *)(*(long *)PTR_DAT_03dafe58 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_039fb290(plVar4,lVar15,&local_f0,param_1,iVar13);
          iVar13 = iVar13 + 1;
          local_140 = lVar9;
        }
      }
      lVar9 = *(long *)(lVar9 + 0x28);
      uVar10 = uVar8;
    } while (lVar9 != 0);
LAB_039fb204:
    if (local_140 == 0) goto LAB_039faef0;
    uStack_e8 = uVar8;
    thunk_FUN_01b4f09c(uVar12);
    iVar14 = iVar13;
  }
  local_d8 = local_140;
  thunk_FUN_01b4f09c(&local_d8,local_140);
  if (*(int *)(*(long *)PTR_DAT_03dafe58 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar13 = iVar14 + 1;
  FUN_039fb290(plVar4,lVar15,&local_f0,param_1,iVar14);
  goto LAB_039faef0;
}


