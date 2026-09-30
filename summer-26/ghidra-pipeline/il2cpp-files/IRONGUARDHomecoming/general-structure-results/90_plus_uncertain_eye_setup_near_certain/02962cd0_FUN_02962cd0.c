/*
FUNCTION_NAME: FUN_02962cd0
ENTRY_POINT: 02962cd0
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


undefined8 FUN_02962cd0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_04830c3e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c3e = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar9 = (long *)param_1[4];
    if (plVar9 == (long *)0x0) goto LAB_02962f0c;
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02962d90;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02962d90:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    param_1[7] = lVar5;
    thunk_FUN_01f51358(param_1 + 7,lVar5);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar9 = (long *)param_1[7];
                    /* try { // try from 02962dbc to 02a62dff has its CatchHandler @ 02962e64 */
    if (plVar9 == (long *)0x0) goto LAB_02962f0c;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02962e0c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02962e0c:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_02962f0c;
    }
    plVar9 = (long *)param_1[7];
    if (plVar9 == (long *)0x0) goto LAB_02962f0c;
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02962e8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02962e8c:
    uVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    lVar5 = param_1[5];
  } while ((lVar5 != 0) &&
          (uVar7 = (**(code **)(lVar5 + 0x18))
                             (*(undefined8 *)(lVar5 + 0x40),uVar3,*(undefined8 *)(lVar5 + 0x28)),
          (uVar7 & 1) == 0));
  lVar5 = param_1[6];
  if (lVar5 != 0) {
    uVar2 = (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),uVar3,*(undefined8 *)(lVar5 + 0x28));
    *(undefined2 *)(param_1 + 3) = uVar2;
    return 1;
  }
LAB_02962f0c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


