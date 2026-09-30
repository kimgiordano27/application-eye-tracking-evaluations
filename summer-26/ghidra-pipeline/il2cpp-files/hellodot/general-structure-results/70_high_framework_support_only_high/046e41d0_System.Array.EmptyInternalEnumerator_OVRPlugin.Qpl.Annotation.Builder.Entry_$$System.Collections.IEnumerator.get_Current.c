/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046e41d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x21;
  long *plVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  long in_stack_00000008;
  
  if (param_1 != 0) {
    plVar13 = *(long **)(unaff_x19 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (unaff_x21 == (long *)0x0) goto LAB_046e44a8;
      uVar5 = (**(code **)(*unaff_x21 + 0x158))();
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_046e4264;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar7,1);
LAB_046e4264:
      uVar5 = (*(code *)*puVar6)(plVar13);
    }
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (lVar7 == 0) {
LAB_046e44a8:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar15 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)uVar5 / (int)uVar15;
    }
    uVar3 = uVar5 - iVar4 * uVar15;
    if (uVar15 <= uVar3) {
LAB_046e44ac:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar15 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar10 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_046e44a8;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_046e44ac;
        puVar17 = (uint *)(lVar7 + (ulong)uVar15 * 0x28 + 0x20);
        uVar16 = (ulong)uVar15;
        if (*puVar17 == uVar5) {
          plVar13 = *(long **)(unaff_x19 + 0x30);
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)FUN_02eb80f0(*(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                            0x18));
            if (plVar13 == (long *)0x0) goto LAB_046e44a8;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined8 *)(lVar7 + uVar16 * 0x28 + 0x28));
          }
          else {
            if (plVar13 == (long *)0x0) goto LAB_046e44a8;
            lVar8 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
            uVar14 = *(undefined8 *)(lVar7 + uVar16 * 0x28 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02ce0978(lVar8);
            }
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_046e43b0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar8,0);
LAB_046e43b0:
            uVar11 = (*(code *)*puVar6)(plVar13,uVar14);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(unaff_x19 + 0x10);
              if (lVar8 == 0) goto LAB_046e44a8;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_046e44ac;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar16 * 0x28 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x18);
              if (lVar8 == 0) goto LAB_046e44a8;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_046e44ac;
              *(undefined4 *)(lVar8 + uVar10 * 0x28 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar16 * 0x28 + 0x24);
            }
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar7 = lVar7 + uVar16 * 0x28;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined8 *)(lVar7 + 0x40) = 0;
            *(undefined8 *)(lVar7 + 0x38) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar16 * 0x28 + 0x24);
        uVar10 = (ulong)uVar15;
        uVar15 = uVar1;
      } while (-1 < (int)uVar1);
    }
  }
  return 0;
}


