/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046da9d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 192
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
          (void)

{
  uint uVar1;
  undefined4 uVar2;
  bool in_NG;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  undefined8 uVar9;
  uint unaff_w24;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int unaff_w28;
  int *piVar13;
  long lStack0000000000000000;
  long in_stack_00000008;
  
  if (!in_NG) {
    uVar10 = 0xffffffff;
    lStack0000000000000000 = in_x10;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) goto LAB_046dabd8;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
      goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
      piVar13 = (int *)(lVar11 + (ulong)unaff_w24 * 0x28 + 0x20);
      uVar12 = (ulong)unaff_w24;
      if (*piVar13 == unaff_w28) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)FUN_02eb80f0(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar5 == (long *)0x0) goto LAB_046dabd8;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined8 *)(lVar11 + uVar12 * 0x28 + 0x28));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_046dabd8;
          lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
          uVar9 = *(undefined8 *)(lVar11 + uVar12 * 0x28 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02ce0978(lVar4);
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_046daae0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02ce0a7c(plVar5,lVar4,0);
LAB_046daae0:
          uVar7 = (*(code *)*puVar3)(plVar5,uVar9);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar10 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_046dabd8;
            if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000000)
            goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
            *(int *)(lVar4 + lStack0000000000000000 * 4 + 0x20) =
                 *(int *)(lVar11 + uVar12 * 0x28 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_046dabd8:
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar10) {
System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose:
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            *(undefined4 *)(lVar4 + uVar10 * 0x28 + 0x24) =
                 *(undefined4 *)(lVar11 + uVar12 * 0x28 + 0x24);
          }
          *piVar13 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar11 = lVar11 + uVar12 * 0x28;
          *(undefined8 *)(lVar11 + 0x30) = 0;
          *(undefined8 *)(lVar11 + 0x28) = 0;
          *(undefined8 *)(lVar11 + 0x40) = 0;
          *(undefined8 *)(lVar11 + 0x38) = 0;
          *(undefined4 *)(lVar11 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = unaff_w24;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar11 + uVar12 * 0x28 + 0x24);
      uVar10 = (ulong)unaff_w24;
      unaff_w24 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return 0;
}


