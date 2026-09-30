/*
FUNCTION_NAME: FUN_03bc88b4
ENTRY_POINT: 03bc88b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03bc8d14) */
/* WARNING: Removing unreachable block (ram,0x03bc8d0c) */
/* WARNING: Removing unreachable block (ram,0x03bc8c5c) */

void FUN_03bc88b4(long param_1,long param_2)

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
  
  puVar2 = StringLiteral_13393;
  if ((DAT_048398fa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_12325);
    thunk_FUN_01efb3a4(StringLiteral_12330);
    thunk_FUN_01efb3a4(StringLiteral_13488);
    thunk_FUN_01efb3a4(StringLiteral_13489);
    thunk_FUN_01efb3a4(StringLiteral_12326);
    thunk_FUN_01efb3a4(StringLiteral_13397);
    thunk_FUN_01efb3a4(StringLiteral_13490);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(StringLiteral_13393);
    thunk_FUN_01efb3a4(StringLiteral_11600);
    thunk_FUN_01efb3a4(StringLiteral_13487);
    thunk_FUN_01efb3a4(StringLiteral_12036);
    DAT_048398fa = 1;
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
    thunk_FUN_01ee6d7c();
  }
  uVar6 = Unity_Mathematics_uint2__op_Division();
  if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    local_80 = FUN_03bc45b8();
    lVar7 = FUN_02617b44(local_80,0,*(undefined8 *)StringLiteral_13487);
    puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    if (lVar7 == 0) {
LAB_03bc8d08:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      if (param_2 == 0) goto LAB_03bc8d08;
      uVar13 = *(undefined8 *)(param_2 + 0x78);
      plVar8 = (long *)FUN_03b2468c(0);
      FUN_03bc6720(&local_70);
      uStack_98 = uStack_68;
      local_a0 = local_70;
      uVar12 = local_a0;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      local_a0._0_4_ = (int)local_70;
      bVar1 = 1 < (int)local_a0;
      local_a0 = uVar12;
      if (bVar1) {
        uVar5 = FUN_02f1f6ac(&local_a0,uVar13,*(undefined8 *)StringLiteral_13488);
        FUN_02f1f950(&local_a0,0,uVar5,*(undefined8 *)StringLiteral_13489);
      }
      local_b0 = FUN_03bc4418(lVar7);
      puVar4 = StringLiteral_12325;
      puVar3 = StringLiteral_12036;
      if (0 < local_b0._12_4_) {
        iVar15 = 0;
        do {
          uVar12 = FUN_02617b44(local_b0,iVar15,*(undefined8 *)puVar3);
          FUN_02f1ef3c(&local_a0,uVar12,*(undefined8 *)puVar4);
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_b0._12_4_);
      }
      uStack_168 = uStack_98;
      local_170 = local_a0;
      uStack_158 = uStack_88;
      uStack_160 = uStack_90;
      if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      auVar16 = FUN_03b1eb20(*(long *)(lVar7 + 0x20),0);
      uStack_68 = uStack_168;
      local_70 = local_170;
      uStack_58 = uStack_158;
      uStack_60 = uStack_160;
      uVar6 = FUN_02357418(&local_70,auVar16._0_8_,auVar16._8_8_,&local_c8,&uStack_120,uVar13,0,
                           *(undefined8 *)StringLiteral_13490);
      if ((uVar6 & 1) != 0) {
        puVar14 = (undefined4 *)(lVar7 + 0xa0);
        local_148[0] = *puVar14;
        uVar6 = FUN_03bc368c(local_148);
        if ((uVar6 & 1) != 0) {
          local_148[0] = *puVar14;
          FUN_03bc6118(local_148);
        }
        FUN_03b562c4(&local_70,&uStack_120,0);
        puVar3 = StringLiteral_13397;
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
            uVar12 = FUN_02f1e6dc(&local_140,iVar15,*(undefined8 *)puVar3);
            uVar5 = FUN_03bc6388(uVar12,*puVar14,0);
            *puVar14 = uVar5;
            if ((uVar6 & 1) == 0) {
              uVar12 = FUN_03bc2564(lVar7);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar9 = FUN_04073094(uVar12,0,0);
              if ((uVar9 & 1) != 0) {
                uVar12 = FUN_03bc2564(lVar7);
                FUN_03bc6898(puVar14,uVar12);
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)local_140);
        }
        local_148[0] = *puVar14;
        uStack_188 = uStack_c0;
        local_190 = local_c8;
        local_180 = local_b8;
        Unity_Mathematics_uint2x3__op_Equality(local_148,&local_190);
        FUN_03b5656c(&uStack_120,0);
      }
      FUN_02f1fbf0(&local_a0,*(undefined8 *)StringLiteral_12330);
      if (plVar8 != (long *)0x0) {
        lVar7 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03bc8cdc;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar8,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03bc8cdc:
        (*(code *)*puVar10)(plVar8,puVar10[1]);
      }
    }
  }
  return;
}


