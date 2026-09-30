/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$Reset
ENTRY_POINT: 02b80740
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 157
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__Reset(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar9;
  ulong unaff_x25;
  ulong uVar10;
  uint uVar11;
  long unaff_x27;
  int *piVar12;
  int unaff_w29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  
  do {
    while( true ) {
      do {
        uVar10 = unaff_x25;
        uVar1 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
        unaff_x20 = (ulong)uVar1;
        if ((int)uVar1 < 0) {
          *in_stack_00000008 = 0;
          return 0;
        }
        unaff_x27 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x27 == 0) goto LAB_02b80898;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar1) goto LAB_02b8089c;
        piVar12 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
        unaff_x25 = unaff_x20;
      } while (*piVar12 != unaff_w29);
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) break;
      if (plVar5 == (long *)0x0) goto LAB_02b80898;
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
      uVar9 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02b80790;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar5,lVar4,0);
LAB_02b80790:
      uVar7 = (*(code *)*puVar3)(plVar5,uVar9);
      if ((uVar7 & 1) != 0) goto LAB_02b807ec;
    }
    plVar5 = (long *)Unity_XR_CoreUtils_Collections_SerializableDictionary<object,_bool>__OnAfterDeserialize
                               (*(undefined8 *)
                                 (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar5 == (long *)0x0) goto LAB_02b80898;
    uVar7 = (**(code **)(*plVar5 + 0x1b8))
                      (plVar5,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28));
  } while ((uVar7 & 1) == 0);
LAB_02b807ec:
  uVar11 = (uint)uVar10;
  if ((int)uVar11 < 0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_02b80898;
    if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_02b8089c;
    *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
         *(int *)(unaff_x27 + unaff_x20 * 0x18 + 0x24) + 1;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) {
LAB_02b80898:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar11) {
LAB_02b8089c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *(undefined4 *)(lVar4 + (uVar10 & 0xffffffff) * 0x18 + 0x24) =
         *(undefined4 *)(unaff_x27 + unaff_x20 * 0x18 + 0x24);
  }
  lVar4 = unaff_x27 + unaff_x20 * 0x18;
  *in_stack_00000008 = *(undefined8 *)(lVar4 + 0x30);
  thunk_FUN_01e10808();
  *piVar12 = -1;
  uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined4 *)(lVar4 + 0x24) = uVar2;
  *(uint *)(unaff_x19 + 0x24) = uVar1;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


