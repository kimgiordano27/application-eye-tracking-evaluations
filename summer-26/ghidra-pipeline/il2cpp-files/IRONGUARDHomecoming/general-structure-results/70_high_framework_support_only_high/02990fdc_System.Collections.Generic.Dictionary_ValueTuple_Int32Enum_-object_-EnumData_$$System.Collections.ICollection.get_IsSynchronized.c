/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<ValueTuple<Int32Enum,-object>,-EnumData>$$System.Collections.ICollection.get_IsSynchronized
ENTRY_POINT: 02990fdc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Generic_Dictionary<ValueTuple<Int32Enum,_object>,_EnumData>__System_Collections_ICollection_get_IsSynchronized
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long *param_5,long param_6)

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
  long *plVar10;
  undefined4 uVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if ((DAT_04830d17 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830d17 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_5 + 0x14) != 2) {
    if (*(int *)((long)param_5 + 0x14) != 1) {
      return 0;
    }
    plVar10 = (long *)param_5[5];
    if (plVar10 == (long *)0x0) goto LAB_02991260;
    lVar6 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
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
          goto LAB_0299109c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_0299109c:
    lVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    param_5[8] = lVar6;
    thunk_FUN_01f51358(param_5 + 8,lVar6);
    *(undefined4 *)((long)param_5 + 0x14) = 2;
  }
  do {
    plVar10 = (long *)param_5[8];
    if (plVar10 == (long *)0x0) goto LAB_02991260;
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02991118;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_02991118:
    uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (param_5 != (long *)0x0) {
        (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
        return 0;
      }
      goto LAB_02991260;
    }
    plVar10 = (long *)param_5[8];
    if (plVar10 == (long *)0x0) goto LAB_02991260;
    lVar6 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40);
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
          goto LAB_02991198;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_02991198:
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
    *(undefined4 *)((long)param_5 + 0x1c) = param_2;
    *(undefined4 *)(param_5 + 4) = param_3;
    *(undefined4 *)((long)param_5 + 0x24) = param_4;
    return 1;
  }
LAB_02991260:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


