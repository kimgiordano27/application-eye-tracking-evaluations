/*
FUNCTION_NAME: FUN_0293ff3c
ENTRY_POINT: 0293ff3c
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


undefined8
FUN_0293ff3c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long *param_5,long param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_04830bea & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830bea = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_5 + 0x14) != 2) {
    if (*(int *)((long)param_5 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_5[5];
    if (plVar7 == (long *)0x0) goto LAB_02940178;
    lVar3 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02940004;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02940004:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_5[7] = lVar3;
    thunk_FUN_01f51358(param_5 + 7,lVar3);
    *(undefined4 *)((long)param_5 + 0x14) = 2;
  }
  while (plVar7 = (long *)param_5[7], plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          uVar9 = param_2;
          uVar10 = param_3;
          uVar11 = param_4;
          goto LAB_02940080;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
    uVar9 = param_2;
    uVar10 = param_3;
    uVar11 = param_4;
LAB_02940080:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_5 != (long *)0x0) {
        (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
        return 0;
      }
      break;
    }
    plVar7 = (long *)param_5[7];
    if (plVar7 == (long *)0x0) break;
    lVar3 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02940100;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02940100:
    uVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = param_5[6];
    if (lVar3 == 0) break;
    param_2 = uVar9;
    param_3 = uVar10;
    param_4 = uVar11;
    uVar5 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_5 + 3) = uVar8;
      *(int *)((long)param_5 + 0x1c) = (int)uVar9;
      *(int *)(param_5 + 4) = (int)uVar10;
      *(int *)((long)param_5 + 0x24) = (int)uVar11;
      return 1;
    }
  }
LAB_02940178:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


