/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 03cb8004
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_03cb7778(param_1,param_2,*(undefined8 *)(in_x9 + 0x78));
  lVar2 = *(long *)(unaff_x19 + 0x10);
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w21;
  if (iVar1 != 0 && (int)unaff_w21 <= *(int *)(unaff_x19 + 0x18)) {
    FUN_050f7d68(lVar2,unaff_w21,lVar2,unaff_w21 + 1,iVar1,0);
    lVar2 = *(long *)(unaff_x19 + 0x10);
  }
  if (lVar2 != 0) {
    if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
      uVar6 = unaff_x20[5];
      uVar5 = unaff_x20[4];
      uVar4 = unaff_x20[7];
      uVar3 = unaff_x20[6];
      uVar7 = *unaff_x20;
      uVar9 = unaff_x20[3];
      uVar8 = unaff_x20[2];
      lVar2 = lVar2 + (long)(int)unaff_w21 * 0x40;
      *(undefined8 *)(lVar2 + 0x28) = unaff_x20[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar7;
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      *(undefined8 *)(lVar2 + 0x30) = uVar8;
      *(undefined8 *)(lVar2 + 0x48) = uVar6;
      *(undefined8 *)(lVar2 + 0x40) = uVar5;
      *(undefined8 *)(lVar2 + 0x58) = uVar4;
      *(undefined8 *)(lVar2 + 0x50) = uVar3;
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


