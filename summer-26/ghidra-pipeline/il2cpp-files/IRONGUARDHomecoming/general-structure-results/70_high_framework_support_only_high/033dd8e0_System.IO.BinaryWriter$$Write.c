/*
FUNCTION_NAME: System.IO.BinaryWriter$$Write
ENTRY_POINT: 033dd8e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033dd9c8) */

undefined8 System_IO_BinaryWriter__Write(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 in_w8;
  long lVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0x545) = in_w8;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_033d442c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    uVar3 = FUN_033d485c(lVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      break;
    }
    uVar4 = FUN_033d4484(lVar2);
    uVar3 = FUN_033ddcd4();
  } while ((uVar3 & 1) == 0);
  plVar5 = (long *)thunk_FUN_01f116d0(lVar2,*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    lVar2 = *(long *)puVar1;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033dd99c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar2,0);
LAB_033dd99c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return uVar4;
}


