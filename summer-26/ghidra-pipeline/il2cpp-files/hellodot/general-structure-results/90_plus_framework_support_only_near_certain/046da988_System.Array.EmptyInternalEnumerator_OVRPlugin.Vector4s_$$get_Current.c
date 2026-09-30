/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 046da988
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__get_Current(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int in_w9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long in_stack_00000008;
  
  uVar5 = (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar14 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {
System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar14 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar15 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_046dabd8;
        if (*(uint *)(lVar8 + 0x18) <= uVar14)
        goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
        puVar17 = (uint *)(lVar8 + (ulong)uVar14 * 0x28 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar17 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_02eb80f0(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                           0x18));
            if (plVar9 == (long *)0x0) goto LAB_046dabd8;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + uVar16 * 0x28 + 0x28));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_046dabd8;
            lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar8 + uVar16 * 0x28 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02ce0978(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_046daae0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar7,0);
LAB_046daae0:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar13);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar15 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_046dabd8;
              if (*(uint *)(lVar7 + 0x18) <= uVar3)
              goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x28 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_046dabd8;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar15)
              goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
              *(undefined4 *)(lVar7 + uVar15 * 0x28 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x28 + 0x24);
            }
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar8 = lVar8 + uVar16 * 0x28;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined8 *)(lVar8 + 0x40) = 0;
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar16 * 0x28 + 0x24);
        uVar15 = (ulong)uVar14;
        uVar14 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_046dabd8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


