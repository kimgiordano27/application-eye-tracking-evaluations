/*
FUNCTION_NAME: FUN_03b1f4c0
ENTRY_POINT: 03b1f4c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03b1f7a0) */
/* WARNING: Removing unreachable block (ram,0x03b1f764) */

long FUN_03b1f4c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar1 = StringLiteral_11608;
  if ((DAT_048393ae & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_11608);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_11609);
    thunk_FUN_01efb3a4(StringLiteral_11610);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_11611);
    DAT_048393ae = 1;
  }
  local_38 = 0;
  iVar3 = FUN_022f1850(param_1,*(undefined8 *)puVar1);
  if (iVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_01f08890(*(undefined8 *)StringLiteral_11611,iVar3);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_11609) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03b1f5c4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_1,*(long *)StringLiteral_11609,0);
LAB_03b1f5c4:
  plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
  puVar2 = StringLiteral_11610;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = 0;
  do {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b1f638;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03b1f638:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_03b1f758;
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_03b1f730;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b1f694;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03b1f694:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    FUN_03b25478(&local_80);
    uStack_58 = uStack_78;
    local_60 = local_80;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar7 = lVar4 + (long)(int)uVar10 * 0x20;
    *(undefined8 *)(lVar7 + 0x28) = uStack_78;
    *(undefined8 *)(lVar7 + 0x20) = local_80;
    *(undefined8 *)(lVar7 + 0x38) = uStack_68;
    *(undefined8 *)(lVar7 + 0x30) = uStack_70;
    thunk_FUN_01f51358(lVar7 + 0x20,0);
    uVar10 = uVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03b1f74c;
    }
  }
LAB_03b1f730:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03b1f74c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_03b1f758:
  local_38 = lVar4;
  thunk_FUN_01f51358(&local_38,lVar4);
  return local_38;
}


