/*
FUNCTION_NAME: System.Linq.Enumerable.WhereEnumerableIterator<KeyValuePair<object,-object>>$$.ctor
ENTRY_POINT: 0283c784
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


/* WARNING: Removing unreachable block (ram,0x0283c884) */

void System_Linq_Enumerable_WhereEnumerableIterator<KeyValuePair<object,_object>>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  
  uStack0000000000000090 = in_stack_00000030;
  uStack0000000000000080 = param_3;
  uStack00000000000000a0 = param_2;
  plVar1 = (long *)FUN_029e4ab8(&stack0x000000a0,&stack0x00000080,*(undefined8 *)(param_1 + 0x50));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar1);
                    /* try { // try from 0283c7c0 to 0293c7e7 has its CatchHandler @ 0283c92c */
  uStack00000000000000b0 = unaff_x21[2];
  uStack00000000000000a8 = unaff_x21[1];
  uStack00000000000000a0 = *unaff_x21;
  (**(code **)(*unaff_x20 + 0x838))();
  (**(code **)(*unaff_x20 + 0x198))();
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0283c85c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0283c85c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


