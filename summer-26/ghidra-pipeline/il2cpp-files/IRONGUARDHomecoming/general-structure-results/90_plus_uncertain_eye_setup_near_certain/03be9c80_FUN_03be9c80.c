/*
FUNCTION_NAME: FUN_03be9c80
ENTRY_POINT: 03be9c80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03be9f24) */

void FUN_03be9c80(long *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  long local_98;
  undefined1 auStack_90 [16];
  long local_80;
  undefined1 auStack_78 [16];
  undefined1 local_60 [16];
  
  if ((DAT_04839a20 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_13962);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_13963);
    thunk_FUN_01efb3a4(StringLiteral_13964);
    DAT_04839a20 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_80 = 0;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_02f368c4(*(long *)(param_2 + 0x20),*(undefined8 *)StringLiteral_13963);
  puVar4 = StringLiteral_13964;
  puVar3 = StringLiteral_13962;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03be9d8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03be9d8c:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) {
      iVar11 = 5;
      iVar10 = 5;
      goto joined_r0x03be9e6c;
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03be9de8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03be9de8:
    auVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    local_60 = auVar12;
    lVar7 = FUN_026d32f0(local_60,*(undefined8 *)puVar4);
    auVar12 = local_60;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while (*(int *)(lVar7 + 8) != param_3);
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  local_98 = param_2;
  thunk_FUN_01f51358(&local_98,param_2);
  auStack_90 = auVar12;
  thunk_FUN_01f51358(auStack_90,0);
  iVar11 = 4;
  iVar10 = 4;
  local_80 = local_98;
  auStack_78 = auStack_90;
joined_r0x03be9e6c:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03be9ebc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03be9ebc:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    iVar10 = iVar11;
  }
  if (iVar10 != 5) {
    if (iVar10 == 4) {
      *(undefined1 (*) [16])(param_1 + 1) = auStack_78;
      *param_1 = local_80;
      return;
    }
    if (iVar10 != 0) {
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


