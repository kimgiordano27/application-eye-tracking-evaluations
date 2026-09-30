/*
FUNCTION_NAME: System.IO.BinaryWriter$$Write
ENTRY_POINT: 033dd5c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033dd7e0) */

bool System_IO_BinaryWriter__Write(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  undefined4 unaff_w22;
  int unaff_w23;
  int iVar9;
  int unaff_w24;
  
  for (; unaff_w23 != unaff_w24; unaff_w24 = unaff_w24 + 1) {
    if (*unaff_x21 == 0) goto LAB_033dd7d8;
    FUN_033dccfc(*unaff_x21,unaff_w24 + -1);
    if (*unaff_x21 == 0) goto LAB_033dd7d8;
    FUN_033dccfc(*unaff_x21,unaff_w24);
    uVar5 = FUN_033ddcd4();
    if ((uVar5 & 1) == 0) {
      if (unaff_w24 != unaff_w23) goto LAB_033dd694;
      break;
    }
  }
  if (*unaff_x21 == 0) {
LAB_033dd7d8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_033dccfc(*unaff_x21,unaff_w22);
  uVar3 = FUN_033dda8c();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  thunk_FUN_01f51358();
LAB_033dd694:
  if ((*unaff_x21 == 0) || (*(int *)(unaff_x19 + 0x30) != 0)) {
LAB_033dd6a4:
    bVar2 = *(int *)(unaff_x19 + 0x30) == 0;
  }
  else {
    lVar4 = FUN_033d442c();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      uVar5 = FUN_033d485c(lVar4);
      if ((uVar5 & 1) == 0) {
        iVar9 = 0xf;
        goto LAB_033dd708;
      }
      FUN_033d4484(lVar4);
      uVar5 = FUN_033dde18();
    } while ((uVar5 & 1) != 0);
    iVar9 = 0xe;
LAB_033dd708:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar6 = (long *)thunk_FUN_01f116d0(lVar4,*(undefined8 *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_033dd770;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_033dd770:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
    if ((iVar9 == 0xf) || (iVar9 == 0)) {
      uVar5 = FUN_033dde18();
      if ((uVar5 & 1) == 0) {
        if (*(int *)(unaff_x19 + 0x30) == 2) {
          *(undefined4 *)(unaff_x19 + 0x30) = 1;
          return false;
        }
      }
      else if ((*(long *)(unaff_x19 + 0x20) == 0) || (uVar5 = FUN_033dde18(), (uVar5 & 1) != 0))
      goto LAB_033dd6a4;
    }
    bVar2 = false;
  }
  return bVar2;
}


