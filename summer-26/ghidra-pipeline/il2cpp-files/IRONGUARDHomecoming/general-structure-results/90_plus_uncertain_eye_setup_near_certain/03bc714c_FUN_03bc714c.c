/*
FUNCTION_NAME: FUN_03bc714c
ENTRY_POINT: 03bc714c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bc7564) */

void FUN_03bc714c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong extraout_x1;
  long lVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  
  if ((DAT_048398ef & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_13453);
    thunk_FUN_01efb3a4(StringLiteral_13454);
    thunk_FUN_01efb3a4(StringLiteral_13455);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(StringLiteral_13456);
    thunk_FUN_01efb3a4(StringLiteral_13393);
    thunk_FUN_01efb3a4(StringLiteral_11904);
    DAT_048398ef = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  *(undefined1 *)(param_1 + 0x95) = 1;
  plVar4 = (long *)FUN_03b2468c(0);
  FUN_03bc6f50(param_1);
  FUN_03bc25a8(param_1);
  FUN_03bc2d98(param_1);
  FUN_03bc3558(param_1);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_03bc7268;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
FUN_03bc7268:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  puVar1 = StringLiteral_13393;
  lVar8 = *(long *)StringLiteral_13393;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *(long *)puVar1;
  }
  lVar7 = *(long *)(lVar8 + 0xb8);
  if (*(int *)(lVar7 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x90);
  }
  puVar2 = StringLiteral_13454;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  puVar3 = StringLiteral_13455;
  FUN_0226f474(lVar7 + 8,lVar7,param_1,10,*(undefined8 *)puVar2);
  uVar11 = 0;
  iVar15 = 1;
LAB_03bc72f0:
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar1;
  }
  piVar9 = *(int **)(lVar8 + 0xb8);
  iVar10 = *piVar9;
  uVar14 = uVar11;
  if (iVar15 < iVar10) {
    do {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *(long *)puVar1;
      }
      lVar7 = *(long *)(lVar8 + 0xb8);
      lVar12 = *(long *)(lVar7 + 8);
      if (lVar12 == 0) goto LAB_03bc755c;
      if (*(uint *)(lVar12 + 0x18) <= (uint)uVar14) {
LAB_03bc7560:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar13 = *(long *)(lVar12 + uVar14 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_03bc755c;
      if (*(uint *)(lVar12 + 0x18) <= (uint)(uVar14 + 1)) goto LAB_03bc7560;
      lVar12 = *(long *)(lVar12 + (uVar14 + 1 & 0xffffffff) * 8 + 0x20);
      if (lVar12 == 0) goto LAB_03bc755c;
      if (*(int *)(lVar13 + 0x90) <= *(int *)(lVar12 + 0x90)) goto LAB_03bc73b4;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      FUN_0229549c(*(undefined8 *)(lVar7 + 8),uVar14 + 1 & 0xffffffff,uVar14 & 0xffffffff,
                   *(undefined8 *)puVar3);
      if ((long)(uVar14 + 1) < 2) goto LAB_03bc73b4;
      lVar8 = *(long *)puVar1;
      uVar14 = uVar14 - 1;
    } while( true );
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar1;
    piVar9 = *(int **)(lVar8 + 0xb8);
    iVar10 = *piVar9;
  }
  if (iVar10 == 1) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar1;
      piVar9 = *(int **)(lVar8 + 0xb8);
    }
    if (*(long *)(piVar9 + 4) == 0) {
      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_13453);
      FUN_02b89800(uVar6,0,*(undefined8 *)StringLiteral_13456,0);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *(long *)puVar1;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
      *puVar5 = uVar6;
      thunk_FUN_01f51358(puVar5,uVar6);
      lVar8 = *(long *)puVar1;
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar1;
    }
    FUN_03bc760c(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10));
    lVar8 = *(long *)puVar1;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = Unity_Mathematics_uint2__op_Division();
  if ((uVar11 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_04073094(uVar6,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_03bc755c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03b1eb20(*(long *)(param_1 + 0x20),0);
      if (extraout_x1 >> 0x20 == 0) {
        FUN_03bc76c0(param_1);
        goto LAB_03bc74e8;
      }
    }
    if (*(char *)(param_1 + 0x58) == '\0') {
      FUN_03bc3810(param_1);
    }
  }
LAB_03bc74e8:
  Unity_Mathematics_uint2x4___ctor(param_1);
  if (DAT_0483998c == '\0') {
    thunk_FUN_01efb3a4(StringLiteral_13425);
    DAT_0483998c = '\x01';
  }
  if (**(long **)(*(long *)StringLiteral_13425 + 0xb8) != 0) {
    FUN_03bc78b4(**(long **)(*(long *)StringLiteral_13425 + 0xb8),param_1);
    return;
  }
  return;
LAB_03bc73b4:
  iVar15 = iVar15 + 1;
  uVar11 = uVar11 + 1;
  goto LAB_03bc72f0;
}


