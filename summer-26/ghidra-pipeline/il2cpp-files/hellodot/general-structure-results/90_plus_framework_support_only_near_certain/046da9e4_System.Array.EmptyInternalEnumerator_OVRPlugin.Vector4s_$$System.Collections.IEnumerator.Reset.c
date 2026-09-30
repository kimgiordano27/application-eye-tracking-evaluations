/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 046da9e4
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_Reset(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  uint unaff_w24;
  uint uVar9;
  uint unaff_w25;
  long lVar10;
  ulong uVar11;
  int unaff_w28;
  int *piVar12;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    uVar9 = unaff_w24;
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_046dabd8;
    if (*(uint *)(lVar10 + 0x18) <= uVar9)
    goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
    piVar12 = (int *)(lVar10 + (ulong)uVar9 * (unaff_x20 & 0xffffffff) + 0x20);
    uVar11 = (ulong)uVar9;
    if (*piVar12 == unaff_w28) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_02eb80f0(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar4 == (long *)0x0) goto LAB_046dabd8;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar10 + uVar11 * unaff_x20 + 0x28));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_046dabd8;
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
        uVar8 = *(undefined8 *)(lVar10 + uVar11 * unaff_x20 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02ce0978(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_046daae0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar3,0);
LAB_046daae0:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar8);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)unaff_w25 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_046dabd8;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000)
          goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar10 + uVar11 * 0x28 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_046dabd8:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w25) {
System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w25 * 0x28 + 0x24) =
               *(undefined4 *)(lVar10 + uVar11 * 0x28 + 0x24);
        }
        *piVar12 = -1;
        uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
        lVar10 = lVar10 + uVar11 * 0x28;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        *(undefined4 *)(lVar10 + 0x24) = uVar1;
        *(uint *)(unaff_x19 + 0x24) = uVar9;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w24 = *(uint *)(lVar10 + uVar11 * unaff_x20 + 0x24);
    unaff_w25 = uVar9;
    if ((int)unaff_w24 < 0) {
      return 0;
    }
  } while( true );
}


