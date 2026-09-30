/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0144c334
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
          (void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  long unaff_x19;
  uint uVar5;
  long unaff_x25;
  int unaff_w26;
  int *unaff_x27;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000008;
  
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar5 = *(uint *)(unaff_x19 + 0x20);
    if (uVar5 == in_w8) {
      FUN_0144c888();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_0144c4e4;
      uVar1 = *(uint *)(lVar4 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w26 / (int)uVar1;
      }
      uVar2 = unaff_w26 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_0144c4e0;
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      unaff_x27 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar5 + 1;
    }
    if (unaff_x25 == 0) {
LAB_0144c4e4:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(unaff_x25 + 0x18) <= uVar5) goto LAB_0144c4e0;
    lVar4 = (long)(int)uVar5;
  }
  else {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    uVar5 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar5) {
LAB_0144c4e0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar4 = (long)(int)uVar5;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x25 + lVar4 * 0x1c + 0x24);
  }
  lVar4 = unaff_x25 + lVar4 * 0x1c;
  *(int *)(lVar4 + 0x20) = unaff_w26;
  *(int *)(lVar4 + 0x24) = *unaff_x27 + -1;
  *(undefined4 *)(lVar4 + 0x2c) = unaff_s11;
  *(undefined4 *)(lVar4 + 0x30) = unaff_s10;
  *(undefined4 *)(lVar4 + 0x34) = unaff_s9;
  *(undefined4 *)(lVar4 + 0x38) = unaff_s8;
  *(undefined4 *)(lVar4 + 0x28) = in_stack_00000008._4_4_;
  *unaff_x27 = uVar5 + 1;
  return 1;
}


