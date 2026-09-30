/*
FUNCTION_NAME: FUN_03a13a90
ENTRY_POINT: 03a13a90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void FUN_03a13a90(long param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_200 [272];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffce9c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db0920);
    thunk_FUN_01ad9084(PTR_DAT_03db0a50);
    thunk_FUN_01ad9084(PTR_DAT_03db0a58);
    thunk_FUN_01ad9084(PTR_DAT_03db0928);
    thunk_FUN_01ad9084(PTR_DAT_03db0930);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2275);
    thunk_FUN_01ad9084(PTR_DAT_03dade20);
    DAT_03ffce9c = 1;
  }
  puVar7 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  local_b8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  lVar13 = *(long *)((long)param_2 + 0x88);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(lVar13,0,0);
  lVar11 = *(long *)puVar7;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar11);
  }
  auVar15 = UnityEngine_UIElements_UIR_Utility__HasMappedBufferRange(uVar8 & 1,0);
  if (lVar13 == 0) goto LAB_03a13e50;
  auVar15 = FUN_0391f968(*(undefined8 *)(lVar13 + 0x20),0,0);
  uVar10 = auVar15._0_8_;
  if (((uVar10 & 1) == 0) || (uVar10 = 0, *(long *)(param_1 + 0x28) == 0)) {
    auVar15._8_8_ = auVar15._8_8_;
    auVar15._0_8_ = uVar10;
    uVar12 = 0;
    uVar10 = 0;
    uVar14 = 0;
  }
  else {
    auVar15 = FUN_03a020d8(*(long *)(param_1 + 0x28),lVar13,*(undefined8 *)(param_1 + 0x110),0);
    puVar6 = StringLiteral_2275;
    uVar10 = auVar15._8_8_;
    lVar11 = auVar15._0_8_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar10;
    auVar15 = auVar16 << 0x40;
    if (lVar11 == 0) goto LAB_03a13e50;
    uVar14 = *(undefined4 *)(lVar11 + 0x1c);
    iVar1 = *(int *)(lVar11 + 0x38);
    lVar9 = *(long *)StringLiteral_2275;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar9 = *(long *)puVar6;
      uVar10 = extraout_x1;
    }
    iVar2 = **(int **)(lVar9 + 0xb8);
    if (DAT_03ffce6e == '\0') {
      thunk_FUN_01ad9084(puVar6);
      lVar9 = *(long *)puVar6;
      DAT_03ffce6e = '\x01';
      uVar10 = extraout_x1_00;
    }
    auVar15._8_8_ = uVar10;
    auVar15._0_8_ = lVar9;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      auVar15 = thunk_FUN_01ac7298();
    }
    puVar6 = PTR_DAT_03dade20;
    uVar10 = auVar15._8_8_;
    if (iVar1 == iVar2) {
      if (*(int *)(*(long *)PTR_DAT_03dade20 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        uVar10 = extraout_x1_01;
      }
      if (DAT_03ffcb01 == '\0') {
        thunk_FUN_01ad9084(PTR_DAT_03dade20);
        DAT_03ffcb01 = '\x01';
        uVar10 = extraout_x1_02;
      }
      lVar11 = *(long *)puVar6;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar11 = *(long *)puVar6;
        uVar10 = extraout_x1_03;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10;
      auVar15 = auVar3 << 0x40;
      if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_03a13e50;
      auVar15 = FUN_03ab4f34(**(long **)(lVar11 + 0xb8),*(undefined8 *)(lVar13 + 0x20),0);
      uVar10 = auVar15._0_8_;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_03a13e50;
      auVar15 = FUN_039fb6c8(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),
                             *(undefined8 *)(lVar13 + 0x20),uVar10 & 0xffffffff,0,0);
    }
    else {
      uVar10 = (ulong)*(uint *)(lVar11 + 0x38);
    }
    uVar12 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
    memcpy(auStack_200,param_2,0x110);
    auVar15 = FUN_03a18738(param_1,auStack_200,uVar12,uVar10 & 0xffffffff,uVar14,(long)&local_b8 + 4
                           ,&local_b8);
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      UnityEngine_UIElements_UIR_Utility__HasMappedBufferRange(iVar1 <= iVar2 + 1,0);
      lVar13 = *(long *)(param_1 + 0x18);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = extraout_x1_04;
      auVar15 = auVar4 << 0x40;
      if (lVar13 != 0) {
        if (iVar1 != *(int *)(lVar13 + 0x18)) {
          iVar1 = *(int *)(lVar13 + 0x18) + -1;
          *(int *)(param_1 + 200) = iVar1;
          if ((local_b8._4_4_ != 0) && ((int)local_b8 != 0)) {
            System_Collections_Generic_ObjectEqualityComparer<OVRPassthroughLayer_SerializedSurfaceGeometry>__IndexOf
                      (local_b0,lVar13,iVar1,*(undefined8 *)PTR_DAT_03db0a50);
            uStack_e8 = uStack_88;
            local_f0 = local_90;
            uStack_d8 = uStack_78;
            local_e0 = uStack_80;
            uStack_c8 = uStack_68;
            local_d0 = local_70;
            auVar16 = FUN_01f1d914(local_b0._0_8_,local_b0._8_8_,0,local_b8._4_4_,
                                   *(undefined8 *)PTR_DAT_03db0930);
            local_a0 = FUN_01f1d834(local_a0._0_8_,local_a0._8_8_,0,local_b8 & 0xffffffff,
                                    *(undefined8 *)PTR_DAT_03db0928);
            uVar10 = CONCAT44(0,*(uint *)(param_1 + 200));
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar10;
            auVar15 = auVar5 << 0x40;
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_03a13e50;
            uStack_88 = uStack_e8;
            local_90 = local_f0;
            uStack_78 = uStack_d8;
            uStack_80 = local_e0;
            uStack_68 = uStack_c8;
            local_70 = local_d0;
            local_b0 = auVar16;
            FUN_02c5ecdc(*(long *)(param_1 + 0x18),uVar10,local_b0,*(undefined8 *)PTR_DAT_03db0a58);
          }
        }
        return;
      }
    }
  }
LAB_03a13e50:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178(auVar15._0_8_,auVar15._8_8_);
}


