/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPlugin.Qpl.Annotation.Builder.Entry>$$ToArray
ENTRY_POINT: 040ae914
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__ToArray(void)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x040ae914:
  uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
  do {
    iVar2 = (int)uVar3;
    uVar6 = (uint)unaff_x22;
    if ((int)uVar6 < iVar2) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) {
LAB_040ae9c8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_040ae9cc:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar5 = lVar4 + (long)(int)uVar6 * (long)(int)unaff_x23;
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
      uVar8 = *(undefined8 *)(lVar5 + 0x38);
      uVar7 = *(undefined8 *)(lVar5 + 0x30);
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_040ae9cc;
      lVar4 = lVar4 + (int)unaff_w21 * unaff_x23;
      unaff_w21 = unaff_w21 + 1;
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar4 + 0x28) = uVar10;
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      thunk_FUN_02f411dc(lVar4 + 0x20,0);
      iVar2 = *(int *)(unaff_x19 + 0x18);
      uVar6 = uVar6 + 1;
    }
    if (iVar2 <= (int)uVar6) {
      FUN_05624da8(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar2 - unaff_w21,0);
      iVar2 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar2 - unaff_w21;
    }
    lVar4 = (long)(int)uVar6 * (long)(int)unaff_x23 + 0x20;
    unaff_x22 = (long)(int)uVar6;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_040ae9c8;
      if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_040ae9cc;
      puVar1 = (undefined8 *)(lVar5 + lVar4);
      if (unaff_x20 == 0) goto LAB_040ae9c8;
      in_stack_00000060 = *puVar1;
      in_stack_00000068 = puVar1[1];
      in_stack_00000070 = puVar1[2];
      in_stack_00000078 = puVar1[3];
      in_stack_00000080 = puVar1[4];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) == 0) goto code_r0x040ae914;
      uVar3 = (ulong)*(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      lVar4 = lVar4 + 0x28;
    } while (unaff_x22 < (long)uVar3);
  } while( true );
}


