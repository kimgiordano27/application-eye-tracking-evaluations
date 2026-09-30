/*
FUNCTION_NAME: System.Threading.Tasks.ContinuationTaskFromResultTask<ValueTuple<object,-bool,-bool,-object,-object>>$$.ctor
ENTRY_POINT: 0296f914
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0296fac0) */

void System_Threading_Tasks_ContinuationTaskFromResultTask<ValueTuple<object,_bool,_bool,_object,_object>>___ctor
               (ulong param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    *(undefined1 *)(unaff_x21 + 0xc93) = 1;
  }
  plVar2 = (long *)FUN_0249b418(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar2 + 0x1b8))
                    ((int)param_2[0x7e],*(undefined4 *)((long)param_2 + 0x3f4),plVar2,
                     *(undefined8 *)(*plVar2 + 0x1c0));
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_04224ea4(param_2,0);
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0296fa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x838))(param_2,*(undefined8 *)(*param_2 + 0x840));
      return;
    }
    lVar4 = param_2[0x7e];
    uVar9 = *(undefined4 *)((long)param_2 + 0x3f4);
    (**(code **)(*param_2 + 0x838))(param_2,*(undefined8 *)(*param_2 + 0x840));
    lVar1 = param_2[0x7e];
    uVar8 = *(undefined4 *)((long)param_2 + 0x3f4);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_029e7034((int)lVar4,uVar9,(int)lVar1,uVar8,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar2,param_2,0);
    (**(code **)(*param_2 + 0x198))(param_2,plVar2,*(undefined8 *)(*param_2 + 0x1a0));
    lVar4 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0296fa94;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0296fa94:
    (*(code *)*puVar6)(plVar2,puVar6[1]);
  }
  return;
}


