/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<DataPoint<int>,-float>$$Where
ENTRY_POINT: 02844078
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028441c4) */

void System_Linq_Enumerable_WhereSelectArrayIterator<DataPoint<int>,_float>__Where
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  
  uVar2 = (**(code **)(param_1 + 0x1b8))(param_2,param_3,unaff_w21,*(undefined8 *)(param_1 + 0x1c0))
  ;
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_04224ea4();
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0284418c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x838))();
      return;
    }
    lVar3 = unaff_x20[0x7e];
    (**(code **)(*unaff_x20 + 0x838))();
    lVar1 = unaff_x20[0x7e];
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029e57b8((int)lVar3,(int)lVar1,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar5);
    (**(code **)(*unaff_x20 + 0x198))();
    lVar3 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0284419c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0284419c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


