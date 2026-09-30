/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequest$$set_uri
ENTRY_POINT: 041985ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 139
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04198620) */

void UnityEngine_Networking_UnityWebRequest__set_uri(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto code_r0x04198594;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x04198594:
    (*(code *)*puVar1)();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar5 = *plVar2;
    __cxa_end_catch();
    FUN_025ecf24(&stack0x00000040,*(undefined8 *)PTR_DAT_0458def8);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar5);
    }
    FUN_04199edc();
    FUN_04199f14();
    return;
  }
  FUN_025ecf24(&stack0x00000040,*(undefined8 *)PTR_DAT_0458def8);
                    /* WARNING: Subroutine does not return */
  FUN_01fbfd14(param_1);
}


