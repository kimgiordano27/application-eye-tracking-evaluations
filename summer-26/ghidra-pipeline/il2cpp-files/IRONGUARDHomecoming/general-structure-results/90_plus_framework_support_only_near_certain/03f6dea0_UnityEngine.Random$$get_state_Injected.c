/*
FUNCTION_NAME: UnityEngine.Random$$get_state_Injected
ENTRY_POINT: 03f6dea0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f6e120) */

uint UnityEngine_Random__get_state_Injected(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  undefined8 *unaff_x19;
  long *unaff_x21;
  uint uVar12;
  uint uVar13;
  
  do {
    in_x9 = in_x9 + -1;
    piVar11 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_01ecb238();
      goto LAB_03f6df14;
    }
    plVar6 = (long *)(in_x10 + 2);
    in_x10 = piVar11;
  } while (*plVar6 != param_3);
  puVar5 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
LAB_03f6df14:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar3 = PTR_DAT_045810f0;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f6df8c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03f6df8c:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      uVar13 = 8;
      uVar12 = 8;
      goto joined_r0x03f6e06c;
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_03f6dfec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
FUN_03f6dfec:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = (**(code **)(*plVar7 + 0x248))
                      (plVar7,*(undefined8 *)(*unaff_x21 + 0x50),*(undefined8 *)(*plVar7 + 0x250));
    *unaff_x19 = uVar8;
    thunk_FUN_01f51358();
    uVar8 = *unaff_x19;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03583338(uVar8,0,0);
  } while ((uVar10 & 1) == 0);
  uVar13 = 7;
  uVar12 = 7;
joined_r0x03f6e06c:
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f6e0c4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03f6e0c4:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    uVar12 = uVar13;
  }
  if ((uVar12 | 8) == 8) {
    *unaff_x19 = 0;
    thunk_FUN_01f51358();
    uVar4 = 0;
  }
  return uVar4 & 1;
}


