/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<KeyValuePair<object,-JsonParser.JsonValue>,-ValueTuple<object,-object>>$$.ctor
ENTRY_POINT: 02846378
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0284649c) */

void System_Linq_Enumerable_WhereSelectArrayIterator<KeyValuePair<object,_JsonParser_JsonValue>,_ValueTuple<object,_object>>___ctor
               (long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  
  (**(code **)(param_1 + 0x838))();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_029e5aac();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar2);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar1 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02846474;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02846474:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


