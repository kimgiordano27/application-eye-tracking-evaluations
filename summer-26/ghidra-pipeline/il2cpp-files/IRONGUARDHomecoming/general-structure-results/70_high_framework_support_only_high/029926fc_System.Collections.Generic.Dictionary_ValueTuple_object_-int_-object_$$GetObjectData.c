/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<ValueTuple<object,-int>,-object>$$GetObjectData
ENTRY_POINT: 029926fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Collections_Generic_Dictionary<ValueTuple<object,_int>,_object>__GetObjectData(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe08));
  *(undefined1 *)(unaff_x21 + 0xd21) = 1;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)unaff_x19 + 0x14) != 2) {
    if (*(int *)((long)unaff_x19 + 0x14) != 1) {
      return 0;
    }
    plVar11 = (long *)unaff_x19[4];
    if (plVar11 == (long *)0x0) goto LAB_02992958;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02992798;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02992798:
    lVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    unaff_x19[7] = lVar7;
    thunk_FUN_01f51358(unaff_x19 + 7,lVar7);
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  }
  do {
    plVar11 = (long *)unaff_x19[7];
    if (plVar11 == (long *)0x0) goto LAB_02992958;
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02992814;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_02992814:
    uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_02992958;
    }
    plVar11 = (long *)unaff_x19[7];
    if (plVar11 == (long *)0x0) goto LAB_02992958;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02992894;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02992894:
    (*(code *)*puVar6)(&stack0x00000040,plVar11,puVar6[1]);
    uVar4 = in_stack_00000050;
    uVar3 = in_stack_00000048;
    uVar2 = in_stack_00000040;
    lVar7 = unaff_x19[5];
  } while ((lVar7 != 0) &&
          (uVar9 = (**(code **)(lVar7 + 0x18))
                             (*(undefined8 *)(lVar7 + 0x40),&stack0x00000040,
                              *(undefined8 *)(lVar7 + 0x28)), (uVar9 & 1) == 0));
  lVar7 = unaff_x19[6];
  if (lVar7 != 0) {
    in_stack_00000040 = uVar2;
    in_stack_00000048 = uVar3;
    in_stack_00000050 = uVar4;
    uVar5 = (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),&stack0x00000040,*(undefined8 *)(lVar7 + 0x28))
    ;
    *(undefined4 *)(unaff_x19 + 3) = uVar5;
    return 1;
  }
LAB_02992958:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


