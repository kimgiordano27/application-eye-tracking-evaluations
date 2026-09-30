/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<RuleMatcher>$$System.Collections.ICollection.CopyTo
ENTRY_POINT: 02568b74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Collections_ObjectModel_ReadOnlyCollection<RuleMatcher>__System_Collections_ICollection_CopyTo
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long in_x11;
  long *plVar9;
  long in_stack_00000018;
  long in_stack_00000028;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01ecb238();
      goto LAB_02568ba4;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02568ba4:
  uVar4 = (*(code *)*puVar3)();
  *(undefined8 *)(in_stack_00000028 + 0x30) = uVar4;
  thunk_FUN_01f51358();
  plVar9 = *(long **)(in_stack_00000028 + 0x30);
  *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffd;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02568c28;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02568c28:
  uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if ((uVar7 & 1) == 0) {
    FUN_02568dbc();
    *(undefined8 *)(in_stack_00000028 + 0x30) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x30),0);
    uVar4 = 0;
  }
  else {
    plVar9 = *(long **)(in_stack_00000028 + 0x30);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02568cb4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,1);
LAB_02568cb4:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar9);
    }
    puVar5 = (undefined4 *)thunk_FUN_01f11920(plVar9);
    uVar1 = *puVar5;
    uVar4 = 1;
    *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
    *(undefined4 *)(in_stack_00000028 + 0x14) = uVar1;
  }
  return uVar4;
}


