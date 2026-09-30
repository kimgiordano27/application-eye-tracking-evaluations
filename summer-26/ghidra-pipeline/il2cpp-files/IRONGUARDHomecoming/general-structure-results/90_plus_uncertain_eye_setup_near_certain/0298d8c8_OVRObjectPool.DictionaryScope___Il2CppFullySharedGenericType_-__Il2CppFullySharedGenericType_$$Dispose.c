/*
FUNCTION_NAME: OVRObjectPool.DictionaryScope<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$Dispose
ENTRY_POINT: 0298d8c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRObjectPool_DictionaryScope<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__Dispose
          (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,long *param_5
          )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined4 uVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x21 + 0xcff) = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_5 + 0x14) != 2) {
    if (*(int *)((long)param_5 + 0x14) != 1) {
      return 0;
    }
    plVar10 = (long *)param_5[5];
    if (plVar10 == (long *)0x0) goto LAB_0298db34;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0298d970;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_0298d970:
    lVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    param_5[8] = lVar6;
    thunk_FUN_01f51358(param_5 + 8,lVar6);
    *(undefined4 *)((long)param_5 + 0x14) = 2;
  }
  do {
    plVar10 = (long *)param_5[8];
    if (plVar10 == (long *)0x0) goto LAB_0298db34;
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0298d9ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_0298d9ec:
    uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (param_5 != (long *)0x0) {
        (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
        return 0;
      }
      goto LAB_0298db34;
    }
    plVar10 = (long *)param_5[8];
    if (plVar10 == (long *)0x0) goto LAB_0298db34;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0298da6c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_0298da6c:
    (*(code *)*puVar5)(&stack0x00000040,plVar10,puVar5[1]);
    uVar4 = in_stack_00000050;
    uVar3 = in_stack_00000048;
    uVar2 = in_stack_00000040;
    lVar6 = param_5[6];
  } while ((lVar6 != 0) &&
          (uVar8 = (**(code **)(lVar6 + 0x18))
                             (*(undefined8 *)(lVar6 + 0x40),&stack0x00000040,
                              *(undefined8 *)(lVar6 + 0x28)), (uVar8 & 1) == 0));
  lVar6 = param_5[7];
  if (lVar6 != 0) {
    in_stack_00000040 = uVar2;
    in_stack_00000048 = uVar3;
    in_stack_00000050 = uVar4;
    uVar11 = (**(code **)(lVar6 + 0x18))
                       (*(undefined8 *)(lVar6 + 0x40),&stack0x00000040,*(undefined8 *)(lVar6 + 0x28)
                       );
    *(undefined4 *)(param_5 + 3) = uVar11;
    *(undefined4 *)((long)param_5 + 0x1c) = param_3;
    *(undefined4 *)(param_5 + 4) = param_4;
    return 1;
  }
LAB_0298db34:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


