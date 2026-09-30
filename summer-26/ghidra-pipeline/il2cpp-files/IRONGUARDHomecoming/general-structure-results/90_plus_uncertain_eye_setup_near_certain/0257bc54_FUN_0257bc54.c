/*
FUNCTION_NAME: FUN_0257bc54
ENTRY_POINT: 0257bc54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_0257bc54(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_40;
  long *plStack_38;
  long local_30;
  long local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  if ((DAT_0482fe26 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe26 = 1;
  }
  local_40 = &local_28;
  plStack_38 = &local_30;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    plVar7 = *(long **)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0257bd34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0257bd34:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(local_28 + 0x30) = uVar2;
    thunk_FUN_01f51358();
    *(undefined4 *)(local_28 + 0x10) = 0xfffffffd;
    param_1 = local_28;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0257bdb8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_0257bdb8:
  uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
  if ((uVar5 & 1) == 0) {
    FUN_0257bf38();
    *(undefined8 *)(local_28 + 0x30) = 0;
    thunk_FUN_01f51358((undefined8 *)(local_28 + 0x30),0);
    return 0;
  }
  plVar7 = *(long **)(local_28 + 0x30);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(local_30 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0257be60;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0257be60:
  (*(code *)*puVar1)(&local_78,plVar7,puVar1[1]);
  uStack_58 = uStack_70;
  local_60 = local_78;
  local_50 = local_68;
  *(undefined8 *)(local_28 + 0x48) = local_68;
  *(undefined8 *)(local_28 + 0x40) = uStack_70;
  *(undefined8 *)(local_28 + 0x38) = local_78;
  thunk_FUN_01f51358(local_28 + 0x40,0);
  *(undefined4 *)(local_28 + 0x10) = 1;
  *(undefined4 *)(local_28 + 0x14) = *(undefined4 *)(local_28 + 0x38);
  return 1;
}


