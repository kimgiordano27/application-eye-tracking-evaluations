/*
FUNCTION_NAME: System.Net.WebCompletionSource<__Il2CppFullySharedGenericType>$$TrySetCompleted
ENTRY_POINT: 0283b110
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0283b27c) */

void System_Net_WebCompletionSource<__Il2CppFullySharedGenericType>__TrySetCompleted
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_x9;
  ulong uVar5;
  code *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  
  uStack00000000000000d0 = param_1;
  (*in_x10)(param_2,param_3,*(undefined8 *)(in_x9 + 0x840));
  uVar4 = unaff_x22[2];
  uVar8 = unaff_x22[1];
  uVar7 = *unaff_x22;
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  in_stack_000000c8 = in_stack_00000088;
  in_stack_000000c0 = in_stack_00000080;
  uStack00000000000000d0 = in_stack_00000090;
  in_stack_000000a0 = uVar7;
  in_stack_000000a8 = uVar8;
  in_stack_000000b0 = uVar4;
  plVar2 = (long *)FUN_029e4ab8(&stack0x000000c0,&stack0x000000a0,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar2);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar1 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0283b250;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0283b250:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


