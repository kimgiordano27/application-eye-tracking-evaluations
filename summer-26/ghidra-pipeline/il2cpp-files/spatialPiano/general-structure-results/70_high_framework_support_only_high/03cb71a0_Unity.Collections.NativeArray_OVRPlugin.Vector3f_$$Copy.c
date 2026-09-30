/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03cb71a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
              (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  puVar2 = (undefined8 *)thunk_FUN_02f453b8();
  uVar6 = puVar2[1];
  uVar4 = *puVar2;
  uVar10 = puVar2[3];
  uVar8 = puVar2[2];
  lVar3 = *(long *)(unaff_x19 + 0x10);
  uVar7 = puVar2[5];
  uVar5 = puVar2[4];
  uVar11 = puVar2[7];
  uVar9 = puVar2[6];
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x40;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      *(undefined8 *)(lVar3 + 0x38) = uVar10;
      *(undefined8 *)(lVar3 + 0x30) = uVar8;
      *(undefined8 *)(lVar3 + 0x48) = uVar7;
      *(undefined8 *)(lVar3 + 0x40) = uVar5;
      *(undefined8 *)(lVar3 + 0x58) = uVar11;
      *(undefined8 *)(lVar3 + 0x50) = uVar9;
    }
    else {
      FUN_03cb70cc();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


