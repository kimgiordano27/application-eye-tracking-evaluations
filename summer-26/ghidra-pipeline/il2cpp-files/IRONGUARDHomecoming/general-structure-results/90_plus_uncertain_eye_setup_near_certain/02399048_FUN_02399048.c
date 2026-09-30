/*
FUNCTION_NAME: FUN_02399048
ENTRY_POINT: 02399048
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x023992b8) */

void FUN_02399048(undefined8 param_1,undefined8 ****param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 ***local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = *(long **)(param_3 + 0x38);
  local_50 = param_2;
  if (plVar7 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar7 = *(long **)(param_3 + 0x38);
    if (plVar7 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar7 = *(long **)(param_3 + 0x38);
    }
  }
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    plVar7 = *(long **)(param_3 + 0x38);
  }
  iVar1 = *(int *)(lVar5 + 0xfc);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    plVar7 = *(long **)(param_3 + 0x38);
  }
  if (-1 < *(int *)(*plVar7 + 0x28)) {
    param_2 = &local_50;
  }
  FUN_01f09244(lVar5,plVar7[1],auStack_90 + -((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0),param_2,0,
               &local_88);
  plVar7 = local_88;
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02399190;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02399190:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar8 & 1) == 0) break;
    lVar5 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_023991ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_023991ec:
    (*(code *)*puVar6)(&local_88,plVar7,puVar6[1]);
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    FUN_03b4ee48(&local_70,param_1,0);
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0239927c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0239927c:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


