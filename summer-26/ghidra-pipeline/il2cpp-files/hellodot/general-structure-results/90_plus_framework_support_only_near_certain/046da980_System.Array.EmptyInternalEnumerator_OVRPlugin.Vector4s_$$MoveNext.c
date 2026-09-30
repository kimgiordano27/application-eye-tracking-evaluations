/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 046da980
PROGRAM: hellodot-libil2cpp.so
SCORE: 192
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_8
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__MoveNext(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  long in_stack_00000008;
  
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar13 = *(uint *)(lVar7 + 0x18);
    param_1 = param_1 & 0x7fffffff;
    iVar4 = 0;
    if (uVar13 != 0) {
      iVar4 = (int)param_1 / (int)uVar13;
    }
    uVar3 = param_1 - iVar4 * uVar13;
    if (uVar13 <= uVar3) {
System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar13 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar14 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_046dabd8;
        if (*(uint *)(lVar7 + 0x18) <= uVar13)
        goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
        puVar16 = (uint *)(lVar7 + (ulong)uVar13 * 0x28 + 0x20);
        uVar15 = (ulong)uVar13;
        if (*puVar16 == param_1) {
          plVar8 = *(long **)(unaff_x19 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_02eb80f0(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                           0x18));
            if (plVar8 == (long *)0x0) goto LAB_046dabd8;
            uVar10 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined8 *)(lVar7 + uVar15 * 0x28 + 0x28));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_046dabd8;
            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
            uVar12 = *(undefined8 *)(lVar7 + uVar15 * 0x28 + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02ce0978(lVar6);
            }
            lVar9 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_046daae0;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_02ce0a7c(plVar8,lVar6,0);
LAB_046daae0:
            uVar10 = (*(code *)*puVar5)(plVar8,uVar12);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar14 < 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              if (lVar6 == 0) goto LAB_046dabd8;
              if (*(uint *)(lVar6 + 0x18) <= uVar3)
              goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
              *(int *)(lVar6 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0x28 + 0x24) + 1
              ;
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if (lVar6 == 0) goto LAB_046dabd8;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar14)
              goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
              *(undefined4 *)(lVar6 + uVar14 * 0x28 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0x28 + 0x24);
            }
            *puVar16 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar7 = lVar7 + uVar15 * 0x28;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined8 *)(lVar7 + 0x40) = 0;
            *(undefined8 *)(lVar7 + 0x38) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar13;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar15 * 0x28 + 0x24);
        uVar14 = (ulong)uVar13;
        uVar13 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_046dabd8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


