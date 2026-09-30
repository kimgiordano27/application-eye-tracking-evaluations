/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 029133d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__MoveNext(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_w8;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar6;
  int unaff_w27;
  int *unaff_x28;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(uint *)(unaff_x21 + 0x20);
  if (uVar1 == in_w8) {
    FUN_029138f4();
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(uint *)(unaff_x21 + 0x20) = uVar1 + 1;
    if (lVar5 == 0) goto LAB_02913544;
    uVar2 = *(uint *)(lVar5 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w27 / (int)uVar2;
    }
    uVar3 = unaff_w27 - iVar4 * uVar2;
    if (uVar2 <= uVar3) goto LAB_02913540;
    lVar6 = *(long *)(unaff_x21 + 0x18);
    unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
  }
  else {
    lVar6 = *(long *)(unaff_x21 + 0x18);
    *(uint *)(unaff_x21 + 0x20) = uVar1 + 1;
  }
  if (lVar6 != 0) {
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar1 * 0x40;
      *(int *)(lVar6 + 0x20) = unaff_w27;
      iVar4 = *unaff_x28;
      *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
      *(int *)(lVar6 + 0x24) = iVar4 + -1;
      uVar9 = unaff_x19[2];
      uVar8 = unaff_x19[5];
      uVar7 = unaff_x19[4];
      uVar11 = unaff_x19[1];
      uVar10 = *unaff_x19;
      *(undefined8 *)(lVar6 + 0x48) = unaff_x19[3];
      *(undefined8 *)(lVar6 + 0x40) = uVar9;
      *(undefined8 *)(lVar6 + 0x58) = uVar8;
      *(undefined8 *)(lVar6 + 0x50) = uVar7;
      *(undefined8 *)(lVar6 + 0x38) = uVar11;
      *(undefined8 *)(lVar6 + 0x30) = uVar10;
      *unaff_x28 = uVar1 + 1;
      return 1;
    }
LAB_02913540:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_02913544:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


