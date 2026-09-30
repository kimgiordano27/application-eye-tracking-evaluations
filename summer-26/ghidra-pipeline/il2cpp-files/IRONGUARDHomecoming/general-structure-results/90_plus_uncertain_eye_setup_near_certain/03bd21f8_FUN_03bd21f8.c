/*
FUNCTION_NAME: FUN_03bd21f8
ENTRY_POINT: 03bd21f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03bd2808) */
/* WARNING: Removing unreachable block (ram,0x03bd273c) */
/* WARNING: Removing unreachable block (ram,0x03bd27d8) */
/* WARNING: Removing unreachable block (ram,0x03bd2824) */
/* WARNING: Removing unreachable block (ram,0x03bd2768) */

void FUN_03bd21f8(uint param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int extraout_var;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110 [16];
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = StringLiteral_13403;
  if ((DAT_0483997c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_13648);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_13649);
    thunk_FUN_01efb3a4(StringLiteral_12330);
    thunk_FUN_01efb3a4(StringLiteral_13650);
    thunk_FUN_01efb3a4(StringLiteral_13651);
    thunk_FUN_01efb3a4(StringLiteral_13451);
    thunk_FUN_01efb3a4(StringLiteral_12326);
    thunk_FUN_01efb3a4(StringLiteral_13652);
    thunk_FUN_01efb3a4(StringLiteral_13403);
    thunk_FUN_01efb3a4(StringLiteral_11898);
    thunk_FUN_01efb3a4(StringLiteral_13653);
    thunk_FUN_01efb3a4(StringLiteral_13654);
    thunk_FUN_01efb3a4(StringLiteral_13400);
    thunk_FUN_01efb3a4(StringLiteral_11579);
    thunk_FUN_01efb3a4(StringLiteral_13655);
    DAT_0483997c = 1;
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar11 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar14 = (long)(int)param_1;
  if (*(char *)(lVar11 + lVar14 * 0xb8 + 0x58) == '\0') {
    return;
  }
  FUN_03b5656c(lVar11 + lVar14 * 0xb8 + 0x78,0);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar11 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  FUN_0332df58(&local_180,lVar11 + lVar14 * 0xb8 + 0x58,*(undefined8 *)StringLiteral_13400);
  uStack_d8 = uStack_178;
  local_e0 = local_180;
  local_d0 = local_170;
  FUN_03b55a9c(&local_e0,0);
  if (extraout_var < 1) goto LAB_03bd276c;
  FUN_02f1e8d4(&local_100,2,0,*(undefined8 *)StringLiteral_13451);
  lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar11 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  auVar15 = FUN_03bc4448(lVar11 + lVar14 * 4 + 0x20);
  FUN_02133788(&local_100,auVar15._0_8_,auVar15._8_8_,0xffffffff,0xffffffff,0,
               *(undefined8 *)StringLiteral_13649);
  uVar12 = local_100;
  if ((param_2 & 1) != 0) {
    uVar5 = FUN_03bd3298(&local_100);
    lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar11 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    pcVar7 = (char *)(lVar11 + lVar14 * 0xb8 + 0x20);
    if (*pcVar7 != '\0') {
      local_110._0_8_ = 0;
      local_110._8_8_ = 0;
      local_110 = FUN_0332ec30(pcVar7,*(undefined8 *)StringLiteral_13654);
      thunk_FUN_01f51358(local_110,0);
      FUN_02134190(&local_100,uVar12 & 0xffffffff,uVar5,local_110._0_8_,local_110._8_8_,
                   *(undefined8 *)StringLiteral_13651);
    }
  }
  uStack_68 = uStack_f8;
  local_70 = local_100;
  uStack_58 = uStack_e8;
  uStack_60 = uStack_f0;
  FUN_02358c40(&local_180,&local_e0,&local_70,0,*(undefined8 *)StringLiteral_13652);
  memcpy(&local_c0,&local_180,0x50);
  uVar6 = FUN_03b56294(&local_c0,0);
  if ((uVar6 & param_2 & 1) != 0) {
    lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&local_180,&local_c0,0x50);
    if (*(uint *)(lVar11 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar11 = lVar11 + lVar14 * 0xb8;
    memcpy((void *)(lVar11 + 0x78),&local_180,0x50);
    thunk_FUN_01f51358(lVar11 + 0xc0,0);
    FUN_03b562c4(&local_70,&local_c0,0);
    uStack_128 = uStack_68;
    local_130 = local_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    plVar8 = (long *)FUN_02f1fc58(&local_130,*(undefined8 *)StringLiteral_13650);
    puVar4 = StringLiteral_13648;
    puVar2 = StringLiteral_11579;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03bd2608;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03bd2608:
      uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar8 == (long *)0x0) break;
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_03bd2708;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_03bd26f0;
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03bd2664;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03bd2664:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar11 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      auVar15 = FUN_03bc4448(lVar11 + lVar14 * 4 + 0x20);
      uVar12 = FUN_023c0864(auVar15._0_8_,auVar15._8_8_,uVar10,*(undefined8 *)puVar2);
      if ((uVar12 & 1) == 0) {
        FUN_03bd3ae8(param_1,uVar10,0,1);
      }
    } while( true );
  }
  goto LAB_03bd2740;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03bd26f0:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03bd2724;
    }
  }
LAB_03bd2708:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03bd2724:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03bd2740:
  FUN_02f1fbf0(&local_100,*(undefined8 *)StringLiteral_12330);
LAB_03bd276c:
  lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  memcpy(&local_180,&local_c0,0x50);
  if (param_1 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + lVar14 * 0xb8;
    memcpy((void *)(lVar11 + 0x78),&local_180,0x50);
    thunk_FUN_01f51358(lVar11 + 0xc0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


