/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 02b8074c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 157
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__get_Current(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar8;
  uint uVar9;
  ulong unaff_x25;
  uint uVar10;
  ulong unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  
code_r0x02b8074c:
  uVar9 = (uint)unaff_x25;
  uVar10 = (uint)unaff_x26;
  plVar3 = (long *)Unity_XR_CoreUtils_Collections_SerializableDictionary<object,_bool>__OnAfterDeserialize
                             (*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18));
  if (plVar3 == (long *)0x0) {
LAB_02b80898:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1b8))
                    (plVar3,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28));
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar10 < 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_02b80898;
        if ((uint)in_stack_00000000 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x20 * 0x18 + 0x24) + 1;
          goto LAB_02b80850;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_02b80898;
        if (uVar10 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar10 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x20 * 0x18 + 0x24);
LAB_02b80850:
          lVar6 = unaff_x27 + unaff_x20 * 0x18;
          *in_stack_00000008 = *(undefined8 *)(lVar6 + 0x30);
          thunk_FUN_01e10808();
          *unaff_x28 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar6 + 0x30) = 0;
          *(undefined4 *)(lVar6 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_02b8089c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    do {
      uVar9 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
      unaff_x20 = (ulong)uVar9;
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar10 = (uint)unaff_x25;
      if ((int)uVar9 < 0) {
        *in_stack_00000008 = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_02b80898;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_02b8089c;
      unaff_x28 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
      unaff_x25 = unaff_x20;
    } while (*unaff_x28 != unaff_w29);
    plVar3 = *(long **)(unaff_x19 + 0x30);
    if (plVar3 == (long *)0x0) break;
    if (plVar3 == (long *)0x0) goto LAB_02b80898;
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
    uVar8 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8(lVar6);
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b80790;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(plVar3,lVar6,0);
LAB_02b80790:
    uVar4 = (*(code *)*puVar2)(plVar3,uVar8);
  } while( true );
  param_1 = *(long *)(in_stack_00000010 + 0x20);
  goto code_r0x02b8074c;
}


