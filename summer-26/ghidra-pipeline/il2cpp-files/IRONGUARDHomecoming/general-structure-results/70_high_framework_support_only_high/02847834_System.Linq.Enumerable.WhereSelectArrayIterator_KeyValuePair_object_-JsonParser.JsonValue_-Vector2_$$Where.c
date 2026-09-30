/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<KeyValuePair<object,-JsonParser.JsonValue>,-Vector2>$$Where
ENTRY_POINT: 02847834
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0284795c) */

void System_Linq_Enumerable_WhereSelectArrayIterator<KeyValuePair<object,_JsonParser_JsonValue>,_Vector2>__Where
               (long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  
  plVar1 = (long *)FUN_024989d8(*(undefined8 *)(param_1 + 0x28));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar1 = (long *)FUN_029e5aac();
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar1);
    (**(code **)(*unaff_x20 + 0x838))();
    (**(code **)(*unaff_x20 + 0x198))();
    lVar3 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02847934;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02847934:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  return;
}


