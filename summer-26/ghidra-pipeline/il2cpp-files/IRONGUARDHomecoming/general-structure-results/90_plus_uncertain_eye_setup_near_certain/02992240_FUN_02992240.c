/*
FUNCTION_NAME: FUN_02992240
ENTRY_POINT: 02992240
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02992240(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 local_50 [32];
  
  if ((DAT_04830d1f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830d1f = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar8 = (long *)param_1[4];
    if (plVar8 == (long *)0x0) goto LAB_029924c4;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02992304;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02992304:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    param_1[7] = lVar4;
    thunk_FUN_01f51358(param_1 + 7,lVar4);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_029924c4;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02992380;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_02992380:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_029924c4;
    }
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_029924c4;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02992400;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02992400:
    (*(code *)*puVar3)(local_50,plVar8,puVar3[1]);
    lVar4 = param_1[5];
  } while ((lVar4 != 0) &&
          (uVar6 = (**(code **)(lVar4 + 0x18))
                             (*(undefined8 *)(lVar4 + 0x40),local_50,*(undefined8 *)(lVar4 + 0x28)),
          (uVar6 & 1) == 0));
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    uVar2 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),local_50,*(undefined8 *)(lVar4 + 0x28));
    *(undefined4 *)(param_1 + 3) = uVar2;
    return 1;
  }
LAB_029924c4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


