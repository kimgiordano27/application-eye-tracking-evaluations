/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 02b80694
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__Dispose(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong uVar8;
  ulong unaff_x21;
  undefined8 uVar9;
  uint unaff_w25;
  uint uVar10;
  uint unaff_w26;
  long lVar11;
  int *piVar12;
  int unaff_w29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  
  do {
    uVar10 = unaff_w25;
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_02b80898;
    if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_02b8089c;
    piVar12 = (int *)(lVar11 + (ulong)uVar10 * (unaff_x21 & 0xffffffff) + 0x20);
    uVar8 = (ulong)uVar10;
    if (*piVar12 == unaff_w29) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)Unity_XR_CoreUtils_Collections_SerializableDictionary<object,_bool>__OnAfterDeserialize
                                   (*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18))
        ;
        if (plVar4 == (long *)0x0) goto LAB_02b80898;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar11 + uVar8 * unaff_x21 + 0x28));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_02b80898;
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
        uVar9 = *(undefined8 *)(lVar11 + uVar8 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01dde7f8(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02b80790;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01dde8fc(plVar4,lVar3,0);
LAB_02b80790:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar9);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)unaff_w26 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_02b80898;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_02b8089c;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar11 + uVar8 * 0x18 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_02b80898:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w26) {
LAB_02b8089c:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w26 * 0x18 + 0x24) =
               *(undefined4 *)(lVar11 + uVar8 * 0x18 + 0x24);
        }
        lVar11 = lVar11 + uVar8 * 0x18;
        *in_stack_00000008 = *(undefined8 *)(lVar11 + 0x30);
        thunk_FUN_01e10808();
        *piVar12 = -1;
        uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined4 *)(lVar11 + 0x24) = uVar1;
        *(uint *)(unaff_x19 + 0x24) = uVar10;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w25 = *(uint *)(lVar11 + uVar8 * unaff_x21 + 0x24);
    unaff_w26 = uVar10;
    if ((int)unaff_w25 < 0) {
      *in_stack_00000008 = 0;
      return 0;
    }
  } while( true );
}


