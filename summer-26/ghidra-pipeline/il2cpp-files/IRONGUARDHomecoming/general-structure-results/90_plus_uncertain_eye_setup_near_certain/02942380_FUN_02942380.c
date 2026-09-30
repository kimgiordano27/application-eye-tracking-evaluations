/*
FUNCTION_NAME: FUN_02942380
ENTRY_POINT: 02942380
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


undefined8 FUN_02942380(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 local_40;
  
  if ((DAT_04830bfa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830bfa = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar11 = (long *)param_1[8];
    if (plVar11 == (long *)0x0) goto LAB_029425e0;
    lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02942444;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
LAB_02942444:
    lVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    param_1[10] = lVar6;
    thunk_FUN_01f51358(param_1 + 10,lVar6);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  while (plVar11 = (long *)param_1[10], plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_029424c0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_029424c0:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      break;
    }
    plVar11 = (long *)param_1[10];
    if (plVar11 == (long *)0x0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02942540;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
LAB_02942540:
    (*(code *)*puVar5)(&local_60,plVar11,puVar5[1]);
    uVar4 = local_40;
    lVar3 = lStack_48;
    lVar2 = lStack_50;
    lVar7 = lStack_58;
    lVar6 = local_60;
    lVar8 = param_1[9];
    if (lVar8 == 0) break;
    uVar9 = (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),&local_60,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar9 & 1) != 0) {
      *(undefined4 *)(param_1 + 7) = uVar4;
      param_1[6] = lVar3;
      param_1[5] = lVar2;
      param_1[4] = lVar7;
      param_1[3] = lVar6;
      return 1;
    }
  }
LAB_029425e0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


