/*
FUNCTION_NAME: FUN_033ffc88
ENTRY_POINT: 033ffc88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 246
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x033ffe14) */

void FUN_033ffc88(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_0483265e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
                      );
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
    DAT_0483265e = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  uVar3 = FUN_033febfc(param_1);
  plVar4 = (long *)FUN_034d3d24(uVar3,2,0);
  uVar3 = FUN_03426d90(0);
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
  FUN_034ccf84(plVar5,plVar4,uVar3,0);
  uVar3 = FUN_033ffecc(param_1);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  (**(code **)(*plVar5 + 0x228))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x230));
  (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto System_Convert__ThrowSByteOverflowException;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
System_Convert__ThrowSByteOverflowException:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  puVar2 = 
  Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x2c);
  uVar3 = FUN_033febfc(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  if ((uVar1 & 1) != 0) {
    FUN_034000e0(uVar3);
    return;
  }
  FUN_03400170();
  return;
}


