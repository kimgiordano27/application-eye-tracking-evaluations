/*
FUNCTION_NAME: FUN_034ecaa4
ENTRY_POINT: 034ecaa4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x034ecf04) */
/* WARNING: Removing unreachable block (ram,0x034ecefc) */
/* WARNING: Removing unreachable block (ram,0x034ece4c) */

void FUN_034ecaa4(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 local_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_03d94ed8;
  if ((DAT_03ff6cb6 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d92de8);
    thunk_FUN_01ad9084(PTR_DAT_03d92e10);
    thunk_FUN_01ad9084(PTR_DAT_03d951d0);
    thunk_FUN_01ad9084(PTR_DAT_03d951d8);
    thunk_FUN_01ad9084(PTR_DAT_03d92df0);
    thunk_FUN_01ad9084(PTR_DAT_03d94ef8);
    thunk_FUN_01ad9084(PTR_DAT_03d951e0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d94ed8);
    thunk_FUN_01ad9084(PTR_DAT_03d91708);
    thunk_FUN_01ad9084(PTR_DAT_03d951c8);
    thunk_FUN_01ad9084(PTR_DAT_03d92490);
    DAT_03ff6cb6 = 1;
  }
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_034e8838();
  if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    local_80 = FUN_034e87a8();
    lVar7 = FUN_02d98200(local_80,0,*(undefined8 *)PTR_DAT_03d951c8);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar7 == 0) {
LAB_034ecef8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03922f24(uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      if (param_2 == 0) goto LAB_034ecef8;
      uVar13 = *(undefined8 *)(param_2 + 0x78);
      plVar8 = (long *)FUN_03448874(0);
      FUN_034ea910(&local_70);
      uStack_98 = uStack_68;
      local_a0 = local_70;
      uVar12 = local_a0;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      local_a0._0_4_ = (int)local_70;
      bVar1 = 1 < (int)local_a0;
      local_a0 = uVar12;
      if (bVar1) {
        uVar5 = FUN_0299486c(&local_a0,uVar13,*(undefined8 *)PTR_DAT_03d951d0);
        FUN_02994b10(&local_a0,0,uVar5,*(undefined8 *)PTR_DAT_03d951d8);
      }
      local_b0 = FUN_034e8608(lVar7);
      puVar4 = PTR_DAT_03d92de8;
      puVar3 = PTR_DAT_03d92490;
      if (0 < local_b0._12_4_) {
        iVar15 = 0;
        do {
          uVar12 = FUN_02d98200(local_b0,iVar15,*(undefined8 *)puVar3);
          FUN_029940fc(&local_a0,uVar12,*(undefined8 *)puVar4);
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_b0._12_4_);
      }
      uStack_168 = uStack_98;
      local_170 = local_a0;
      uStack_158 = uStack_88;
      uStack_160 = uStack_90;
      if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      auVar16 = FUN_03442d08(*(long *)(lVar7 + 0x20),0);
      uStack_68 = uStack_168;
      local_70 = local_170;
      uStack_58 = uStack_158;
      uStack_60 = uStack_160;
      uVar6 = FUN_01eec560(&local_70,auVar16._0_8_,auVar16._8_8_,&local_c8,&uStack_120,uVar13,0,
                           *(undefined8 *)PTR_DAT_03d951e0);
      if ((uVar6 & 1) != 0) {
        puVar14 = (undefined4 *)(lVar7 + 0xa0);
        local_148[0] = *puVar14;
        uVar6 = FUN_034e787c(local_148);
        if ((uVar6 & 1) != 0) {
          local_148[0] = *puVar14;
          FUN_034ea308(local_148);
        }
        FUN_0347a4b4(&local_70,&uStack_120,0);
        puVar3 = PTR_DAT_03d94ef8;
        uStack_138 = uStack_68;
        local_140 = local_70;
        uVar12 = local_140;
        uStack_128 = uStack_58;
        local_130 = uStack_60;
        local_140._0_4_ = (int)local_70;
        bVar1 = 0 < (int)local_140;
        local_140 = uVar12;
        if (bVar1) {
          iVar15 = 0;
          do {
            uVar12 = FUN_0299389c(&local_140,iVar15,*(undefined8 *)puVar3);
            uVar5 = FUN_034ea578(uVar12,*puVar14,0);
            *puVar14 = uVar5;
            if ((uVar6 & 1) == 0) {
              uVar12 = FUN_034e6754(lVar7);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar9 = FUN_0391f968(uVar12,0,0);
              if ((uVar9 & 1) != 0) {
                uVar12 = FUN_034e6754(lVar7);
                FUN_034eaa88(puVar14,uVar12);
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)local_140);
        }
        local_148[0] = *puVar14;
        uStack_188 = uStack_c0;
        local_190 = local_c8;
        local_180 = local_b8;
        FUN_034eaf10(local_148,&local_190);
        FUN_0347a75c(&uStack_120,0);
      }
      FUN_02994db0(&local_a0,*(undefined8 *)PTR_DAT_03d92e10);
      if (plVar8 != (long *)0x0) {
        lVar7 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_034ececc;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ae9f78(plVar8,*(long *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0
                              );
LAB_034ececc:
        (*(code *)*puVar10)(plVar8,puVar10[1]);
      }
    }
  }
  return;
}


