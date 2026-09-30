/*
FUNCTION_NAME: System.Guid$$TryParseGuid
ENTRY_POINT: 0346373c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Guid__TryParseGuid(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x21 + 0x969) = 1;
  plVar5 = *(long **)(unaff_x20 + 0x18);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_034637a4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_034637a4:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = *(long **)(unaff_x20 + 0x10);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0346380c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,0);
LAB_0346380c:
                    /* WARNING: Could not recover jumptable at 0x03463820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(plVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


