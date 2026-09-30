/*
FUNCTION_NAME: FUN_020298e0
ENTRY_POINT: 020298e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 232
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x02029eb0) */
/* WARNING: Removing unreachable block (ram,0x0202a04c) */

long FUN_020298e0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = Method_Oculus_Platform_Request<ShareMediaResult>__ctor__;
  puVar5 = Method_Oculus_Platform_Request<SendInvitesResult>__ctor__;
  puVar4 = Method_Oculus_Platform_Request<SdkAccountList>__ctor__;
  puVar3 = Method_Oculus_Platform_Request<RejoinDialogResult>__ctor__;
  puVar2 = Method_Oculus_Platform_Request<PurchaseList>__ctor__;
  if ((DAT_0482f0a9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<string>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<SdkAccountList>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<PurchaseList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<SystemVoipState>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<User>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<User>_OnComplete__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ShareMediaResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<SendInvitesResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<RejoinDialogResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<UserAccountAgeCategory>__ctor__);
    DAT_0482f0a9 = 1;
  }
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_02e6b19c(uVar7,uVar17,*(undefined8 *)puVar3,0);
  plVar8 = (long *)FUN_0230b420(param_2,uVar7,*(undefined8 *)puVar4);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_02e6b19c(uVar7,param_3,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_0230b420(param_2,uVar7,*(undefined8 *)puVar4);
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_03077408(lVar10,*(undefined8 *)puVar6);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_02029abc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar8,*(long *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__,0);
LAB_02029abc:
  puVar4 = Method_Oculus_Platform_Request<User>__ctor__;
  puVar3 = Method_Oculus_Platform_Request<string>__ctor__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar8 = (long *)(*(code *)*puVar11)(plVar8,puVar11[1]);
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar14 = *plVar8;
    lVar13 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02029b34;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,0);
LAB_02029b34:
    uVar15 = (*(code *)*puVar11)(plVar8,puVar11[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return lVar10;
      }
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 == 0) goto LAB_02029f70;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar8;
    lVar13 = *(long *)puVar4;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02029b90;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,0);
LAB_02029b90:
    (*(code *)*puVar11)(&local_180,plVar8,puVar11[1]);
    uStack_138 = uStack_178;
    local_140 = local_180;
    local_130 = local_170;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02029c08;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__,0
                          );
LAB_02029c08:
    plVar12 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar14 = *plVar12;
      lVar13 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02029c68;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar13,0);
LAB_02029c68:
      uVar15 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar15 & 1) == 0) goto LAB_02029e44;
      lVar14 = *plVar12;
      lVar13 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02029cc4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar13,0);
LAB_02029cc4:
      (*(code *)*puVar11)(&local_180,plVar12,puVar11[1]);
      uStack_158 = uStack_178;
      local_160 = local_180;
      local_150 = local_170;
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
      uStack_178 = uStack_138;
      local_180 = local_140;
      local_170 = local_130;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uStack_118 = uStack_138;
      local_120 = local_140;
      local_110 = local_130;
      uVar7 = FUN_02b4a820(lVar13,&local_120,*(undefined8 *)puVar3);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uStack_118 = uStack_158;
      local_120 = local_160;
      local_110 = local_150;
      if (*(long *)(param_3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uStack_1a8 = uStack_158;
      local_1b0 = local_160;
      local_1a0 = local_150;
      uVar17 = FUN_02b4a820(*(long *)(param_3 + 0x10),&local_1b0,*(undefined8 *)puVar3);
      uVar15 = FUN_0202a128(uVar17,uVar7,uVar17);
    } while ((uVar15 & 1) == 0);
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_d8 = uStack_138;
    local_e0 = local_140;
    uStack_f8 = uStack_158;
    local_100 = local_160;
    local_f0 = local_150;
    local_d0 = local_130;
    FUN_0289091c(&local_1b0,&local_e0,&local_100,
                 *(undefined8 *)Method_Oculus_Platform_Request<UserAccountAgeCategory>__ctor__);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uStack_b8 = uStack_1a8;
    local_c0 = local_1b0;
    uStack_a8 = uStack_198;
    local_b0 = local_1a0;
    uStack_98 = uStack_188;
    local_a0 = local_190;
    lVar13 = *(long *)(lVar10 + 0x10);
    lVar14 = *(long *)Method_Oculus_Platform_Request<User>_OnComplete__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      lVar13 = lVar13 + (long)(int)uVar1 * 0x30;
      *(undefined8 *)(lVar13 + 0x38) = uStack_198;
      *(undefined8 *)(lVar13 + 0x30) = local_1a0;
      *(undefined8 *)(lVar13 + 0x48) = uStack_188;
      *(undefined8 *)(lVar13 + 0x40) = local_190;
      *(undefined8 *)(lVar13 + 0x28) = uStack_1a8;
      *(undefined8 *)(lVar13 + 0x20) = local_1b0;
    }
    else {
      uStack_88 = uStack_1a8;
      local_90 = local_1b0;
      uStack_78 = uStack_198;
      uStack_80 = local_1a0;
      uStack_68 = uStack_188;
      local_70 = local_190;
      FUN_03077d08(lVar10,&local_90,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
LAB_02029e44:
    if (plVar12 != (long *)0x0) {
      lVar13 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02029ea0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01ecb238(plVar12,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_02029ea0:
      (*(code *)*puVar11)(plVar12,puVar11[1]);
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_02029f8c;
    }
  }
LAB_02029f70:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar8,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02029f8c:
  (*(code *)*puVar11)(plVar8,puVar11[1]);
  return lVar10;
}


