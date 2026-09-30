/*
FUNCTION_NAME: FUN_034e6798
ENTRY_POINT: 034e6798
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_034e6798(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_130 [88];
  undefined1 auStack_d8 [88];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_03ff6ca0 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_140);
    thunk_FUN_01ad9084(PTR_DAT_03d94ed0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d94ed8);
    thunk_FUN_01ad9084(PTR_DAT_03d94ee0);
    thunk_FUN_01ad9084(StringLiteral_4909);
    thunk_FUN_01ad9084(PTR_DAT_03d94ee8);
    thunk_FUN_01ad9084(StringLiteral_602);
    thunk_FUN_01ad9084(PTR_DAT_03d94ef0);
    DAT_03ff6ca0 = 1;
  }
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (*(char *)(param_1 + 0x96) == '\0') {
    plVar10 = (long *)(param_1 + 0x20);
    lVar11 = *plVar10;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03922f24(lVar11,0,0);
    puVar4 = PTR_DAT_03d94ed8;
    if ((uVar6 & 1) == 0) {
      uVar15 = 0;
      do {
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)puVar4;
        }
        auVar17._8_8_ = local_70._8_8_;
        auVar17._0_8_ = local_70._0_8_;
        piVar9 = *(int **)(lVar11 + 0xb8);
        if (*piVar9 <= (int)uVar15) goto LAB_034e6af8;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          piVar9 = *(int **)(*(long *)puVar4 + 0xb8);
        }
        auVar2._8_8_ = local_80._8_8_;
        auVar2._0_8_ = local_80._0_8_;
        auVar1._8_8_ = local_70._8_8_;
        auVar1._0_8_ = local_70._0_8_;
        lVar11 = *(long *)(piVar9 + 2);
        if (lVar11 == 0) goto LAB_034e6ca0;
        local_70 = auVar1;
        local_80 = auVar2;
        if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_034e6ca4;
        lVar11 = *(long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_034e6ca0;
        uVar12 = *(undefined8 *)(lVar11 + 0x20);
        lVar11 = *plVar10;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03922f24(uVar12,lVar11,0);
        if ((uVar6 & 1) != 0) {
          lVar11 = *(long *)puVar4;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar11 = *(long *)puVar4;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_034e6ca0;
          if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_034e6ca4;
          uVar12 = *(undefined8 *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_0391f968(uVar12,param_1,0);
          if ((uVar6 & 1) != 0) goto LAB_034e6970;
        }
        uVar15 = uVar15 + 1;
      } while( true );
    }
  }
  return;
LAB_034e6970:
  lVar11 = *plVar10;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar7 = FUN_01f25754(lVar11,*(undefined8 *)PTR_DAT_03d94ed0);
  *plVar10 = lVar7;
  thunk_FUN_01b4f09c(plVar10,lVar7);
  if (lVar11 != 0) {
    auVar17 = FUN_03442c98(lVar11,0);
    puVar5 = PTR_DAT_03d94ee8;
    puVar4 = StringLiteral_602;
    if (0 < auVar17._12_4_) {
      iVar14 = 0;
      do {
        local_70 = auVar17;
        auVar17 = FUN_03442c98(lVar11,0);
        local_70 = auVar17;
        lVar7 = FUN_02d98200(local_70,iVar14,*(undefined8 *)puVar5);
        if (lVar7 == 0) goto LAB_034e6ca0;
        iVar16 = 0;
        while( true ) {
          auVar17 = FUN_034467e0(lVar7,0);
          local_80 = auVar17;
          if (auVar17._12_4_ <= iVar16) break;
          if (*plVar10 == 0) goto LAB_034e6ca0;
          auVar17 = FUN_03442c98(*plVar10,0);
          local_70 = auVar17;
          uVar12 = FUN_02d98200(local_70,iVar14,*(undefined8 *)puVar5);
          auVar17 = FUN_03442c98(lVar11,0);
          local_70 = auVar17;
          lVar7 = FUN_02d98200(local_70,iVar14,*(undefined8 *)puVar5);
          if (lVar7 == 0) goto LAB_034e6ca0;
          auVar17 = FUN_034467e0(lVar7,0);
          local_80 = auVar17;
          FUN_02d967d0(auStack_d8,local_80,iVar16,*(undefined8 *)puVar4);
          memcpy(auStack_130,auStack_d8,0x58);
          FUN_0344c0b8(uVar12,iVar16,auStack_130,0);
          iVar16 = iVar16 + 1;
          auVar17 = FUN_03442c98(lVar11,0);
          local_70 = auVar17;
          lVar7 = FUN_02d98200(local_70,iVar14,*(undefined8 *)puVar5);
          if (lVar7 == 0) goto LAB_034e6ca0;
        }
        iVar14 = iVar14 + 1;
        auVar17 = FUN_03442c98(lVar11,0);
      } while (iVar14 < auVar17._12_4_);
    }
LAB_034e6af8:
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    local_70 = auVar17;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_034e6ca0;
      FUN_034fe53c(*(long *)(param_1 + 0x30),*plVar10,0);
    }
    puVar4 = PTR_DAT_03d94ef0;
    puVar3 = StringLiteral_140;
    uVar15 = *(uint *)(param_1 + 0x28);
    if (uVar15 < 2) {
      FUN_034e99c8(param_1);
      if (*(long *)(param_1 + 0x98) == 0) {
        FUN_034e9b98(param_1);
      }
    }
    else if (uVar15 == 2) {
      lVar11 = *(long *)(param_1 + 0x50);
      if ((lVar11 != 0) && (uVar15 = *(uint *)(lVar11 + 0x18), 0 < (int)uVar15)) {
        lVar7 = 0;
        do {
          if (uVar15 <= (uint)lVar7) {
LAB_034e6ca4:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar13 = *(long *)(lVar11 + 0x20 + lVar7 * 8);
          if (lVar13 == 0) goto LAB_034e6ca0;
          uVar12 = *(undefined8 *)(lVar13 + 0x30);
          uVar6 = FUN_02ee6cf0(uVar12,0);
          if ((uVar6 & 1) == 0) {
            if (*plVar10 == 0) goto LAB_034e6ca0;
            lVar8 = Unity_Mathematics_math__min(*plVar10,uVar12,0,0);
            if (lVar8 != 0) {
              uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
              FUN_0251b808(uVar12,lVar13,*(undefined8 *)puVar4,0);
              FUN_03440dd8(lVar8,uVar12,0);
              uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
              FUN_0251b808(uVar12,lVar13,*(undefined8 *)puVar4,0);
              FUN_03440d28(lVar8,uVar12,0);
              uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
              FUN_0251b808(uVar12,lVar13,*(undefined8 *)puVar4,0);
              FUN_03440c78(lVar8,uVar12,0);
            }
          }
          uVar15 = *(uint *)(lVar11 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar15);
      }
    }
    else if (uVar15 == 3) {
      FUN_034e99c8(param_1);
    }
    *(undefined1 *)(param_1 + 0x96) = 1;
    return;
  }
LAB_034e6ca0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


