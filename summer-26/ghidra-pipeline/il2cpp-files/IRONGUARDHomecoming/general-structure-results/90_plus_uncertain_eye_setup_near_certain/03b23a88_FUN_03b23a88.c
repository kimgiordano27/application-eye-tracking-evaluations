/*
FUNCTION_NAME: FUN_03b23a88
ENTRY_POINT: 03b23a88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03b242c8) */
/* WARNING: Removing unreachable block (ram,0x03b241ac) */
/* WARNING: Removing unreachable block (ram,0x03b242dc) */
/* WARNING: Removing unreachable block (ram,0x03b23d80) */
/* WARNING: Removing unreachable block (ram,0x03b23f94) */
/* WARNING: Removing unreachable block (ram,0x03b242d0) */
/* WARNING: Removing unreachable block (ram,0x03b24308) */
/* WARNING: Removing unreachable block (ram,0x03b242f8) */

void FUN_03b23a88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 auStack_670 [128];
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5c8 [296];
  undefined1 auStack_4a0 [296];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  char local_22c [4];
  undefined1 auStack_228 [184];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [104];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_0483939a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_11610);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_11678);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(StringLiteral_11679);
    thunk_FUN_01efb3a4(StringLiteral_11680);
    thunk_FUN_01efb3a4(StringLiteral_11681);
    DAT_0483939a = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_22c[0] = '\0';
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  plVar7 = (long *)FUN_03b2468c();
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  memset(auStack_228,0,0x128);
  plVar14 = (long *)(param_1 + 0x60);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = (uint)(*plVar14 == 0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_04073094(uVar15,0,0);
  puVar5 = StringLiteral_11679;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    auVar16 = FUN_03b1eab0();
    FUN_025de060(&local_378,auVar16._0_8_,auVar16._8_8_,*(undefined8 *)StringLiteral_11681);
    uStack_f8 = uStack_370;
    local_100 = local_378;
    uStack_e8 = uStack_360;
    local_f0 = uStack_368;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memmove(auStack_170,(void *)(*(long *)(param_1 + 0x20) + 0x30),0x60);
    thunk_FUN_01f51358(auStack_168,0);
    plVar9 = (long *)FUN_025de0b4(&local_100,*(undefined8 *)puVar5);
    puVar4 = StringLiteral_11610;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03b23c88;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03b23c88:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_03b23dbc;
        lVar11 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 == 0) goto LAB_03b23d48;
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_03b23d30;
      }
      lVar11 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03b23ce4;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03b23ce4:
      lVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar13 = *(uint *)(lVar11 + 200) >> 1 & 1 | uVar13;
      *(uint *)(lVar11 + 200) = *(uint *)(lVar11 + 200) & 0xfffffff8;
    } while( true );
  }
  FUN_025de00c(&local_378,param_1,*(undefined8 *)StringLiteral_11680);
  uStack_f8 = uStack_370;
  local_100 = local_378;
  uStack_e8 = uStack_360;
  local_f0 = uStack_368;
  uVar13 = uVar13 | (*(uint *)(param_1 + 200) & 2) >> 1;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xfffffff8;
  goto LAB_03b23dbc;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar12 = piVar12 + 4;
    if (uVar8 == 0) break;
LAB_03b23d30:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03b23d64;
    }
  }
LAB_03b23d48:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03b23d64:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03b23dbc:
  local_22c[0] = '\0';
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  if (*plVar14 != 0) {
    FUN_03b34c24(&local_378,*plVar14 + 0x40,0);
    memcpy(&local_e0,&local_378,0x80);
    if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03b351f0(*plVar14,uVar13,&local_250,local_22c,0);
    FUN_03b3d908(auStack_228,*plVar14,uVar13,0);
    if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03b34a54(*plVar14 + 0x40,0);
  }
  plVar9 = (long *)FUN_025de0b4(&local_100,*(undefined8 *)puVar5);
  puVar4 = StringLiteral_11610;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03b23ea8;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03b23ea8:
    uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar8 & 1) == 0) break;
    lVar11 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03b23f04;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03b23f04:
    uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    FUN_03b3daa4(auStack_228,uVar15,0);
  } while( true );
  if (plVar9 != (long *)0x0) {
    lVar11 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03b23f7c;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03b23f7c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  lVar11 = *plVar14;
  if (lVar11 == 0) {
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11678);
    FUN_03b34c1c(lVar11,0);
    *plVar14 = lVar11;
    thunk_FUN_01f51358(plVar14,lVar11);
    lVar11 = *plVar14;
    memcpy(&local_378,auStack_228,0x128);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(auStack_4a0,&local_378,0x128);
    FUN_03b3420c(lVar11,auStack_4a0,0);
  }
  else {
    memcpy(auStack_5c8,auStack_228,0x128);
    FUN_03b34248(lVar11,auStack_5c8,0);
  }
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_04073094(uVar15,0,0);
  if ((uVar8 & 1) != 0) {
    plVar9 = (long *)FUN_025de0b4(&local_100,*(undefined8 *)puVar5);
    puVar5 = StringLiteral_11610;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03b240c0;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03b240c0:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_03b241a0;
        lVar11 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 == 0) goto LAB_03b24178;
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_03b24160;
      }
      lVar11 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03b2411c;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_03b2411c:
      lVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(long *)(lVar11 + 0x60) = *plVar14;
      thunk_FUN_01f51358();
    } while( true );
  }
  goto LAB_03b241c4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar12 = piVar12 + 4;
    if (uVar8 == 0) break;
LAB_03b24160:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03b24194;
    }
  }
LAB_03b24178:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03b24194:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03b241a0:
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = *(undefined8 *)(param_1 + 0x60);
  thunk_FUN_01f51358();
LAB_03b241c4:
  cVar6 = local_22c[0];
  lVar11 = *plVar14;
  memcpy(&local_378,&local_e0,0x80);
  uStack_5e8 = uStack_248;
  local_5f0 = local_250;
  uStack_5d8 = uStack_238;
  uStack_5e0 = local_240;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  memcpy(auStack_670,&local_378,0x80);
  uStack_688 = uStack_5e8;
  local_690 = local_5f0;
  uStack_678 = uStack_5d8;
  uStack_680 = uStack_5e0;
  FUN_03b35bd0(lVar11,cVar6 != '\0',auStack_670,&local_690,uVar13,0);
  FUN_03b34a54(&local_e0,0);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03b24290;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03b24290:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  return;
}


