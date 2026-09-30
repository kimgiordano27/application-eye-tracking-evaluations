/*
FUNCTION_NAME: System.IO.BinaryWriter$$Write
ENTRY_POINT: 033dd690
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033dd7e0) */

bool System_IO_BinaryWriter__Write(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  int iVar8;
  
  thunk_FUN_01f51358();
  if ((*unaff_x21 == 0) || (*(int *)(unaff_x19 + 0x30) != 0)) {
LAB_033dd6a4:
    bVar2 = *(int *)(unaff_x19 + 0x30) == 0;
  }
  else {
    lVar3 = FUN_033d442c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      uVar4 = FUN_033d485c(lVar3);
      if ((uVar4 & 1) == 0) {
        iVar8 = 0xf;
        goto LAB_033dd708;
      }
      FUN_033d4484(lVar3);
      uVar4 = FUN_033dde18();
    } while ((uVar4 & 1) != 0);
    iVar8 = 0xe;
LAB_033dd708:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar5 = (long *)thunk_FUN_01f116d0(lVar3,*(undefined8 *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_033dd770;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_033dd770:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if ((iVar8 == 0xf) || (iVar8 == 0)) {
      uVar4 = FUN_033dde18();
      if ((uVar4 & 1) == 0) {
        if (*(int *)(unaff_x19 + 0x30) == 2) {
          *(undefined4 *)(unaff_x19 + 0x30) = 1;
          return false;
        }
      }
      else if ((*(long *)(unaff_x19 + 0x20) == 0) || (uVar4 = FUN_033dde18(), (uVar4 & 1) != 0))
      goto LAB_033dd6a4;
    }
    bVar2 = false;
  }
  return bVar2;
}


