/*
FUNCTION_NAME: UnityEngine.UIElements.FocusController$$FocusNextInDirection
ENTRY_POINT: 05e2a4b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_UIElements_FocusController__FocusNextInDirection
               (undefined1 param_1 [16],float param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_02b3c81c(*(undefined8 *)(param_3 + 0x2c0));
  FUN_02b3c81c(
              Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_GetEnabledEvaluators__
              );
  *(undefined1 *)(unaff_x21 + 0x340) = 1;
  if ((unaff_x20 == 0) || (*(long *)(unaff_x19 + 0x10) == 0)) goto LAB_05e2a72c;
  fVar13 = *(float *)(unaff_x20 + 0xa0);
  fVar14 = *(float *)(unaff_x20 + 0xa4);
  uVar12 = *(undefined4 *)(unaff_x20 + 0xa8);
  fVar11 = (float)FUN_05dee4dc(*(long *)(unaff_x19 + 0x10),0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05e2a72c;
  FUN_05dee4dc(*(long *)(unaff_x19 + 0x10),0);
  if ((*(long *)(unaff_x19 + 0x10) == 0) ||
     (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x2e8), lVar5 == 0)) goto LAB_05e2a72c;
  uVar4 = FUN_05d7e254(fVar13 - fVar11,fVar14 - param_2,uVar12,lVar5,1,0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05e2a72c;
  plVar6 = (long *)FUN_05ded3a4(*(long *)(unaff_x19 + 0x10),0);
  if (plVar6 == (long *)0x0) {
LAB_05e2a574:
    plVar6 = (long *)0x0;
  }
  else {
    lVar5 = *plVar6;
    bVar1 = *(byte *)(*(long *)PTR_DAT_06320a80 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06320a80))
    goto LAB_05e2a574;
    plVar6 = (long *)(**(code **)(lVar5 + 0x398))(plVar6,*(undefined8 *)(lVar5 + 0x3a0));
  }
  if (-1 < (int)uVar4) {
    lVar5 = FUN_05e29dc0();
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) goto LAB_05e2a72c;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (*(int *)(lVar5 + (ulong)uVar4 * 0x30 + 0x20) == 0x26afb9) {
      if (*(char *)(unaff_x19 + 0x58) != '\0') {
        return;
      }
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05e2a6fc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02b7654c(plVar6,*(long *)
                                    Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                            ,0);
LAB_05e2a6fc:
      in_stack_00000040 = DAT_01031868;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      (*(code *)*puVar7)(plVar6,&stack0x00000030,puVar7[1]);
      return;
    }
  }
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    if (plVar6 != (long *)0x0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
LAB_05e2a72c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = FUN_05de6364(*(long *)(unaff_x19 + 0x10),0);
      FUN_05f55794(&stack0x00000018,uVar8,0);
      uVar3 = in_stack_00000028;
      uVar2 = in_stack_00000020;
      uVar8 = in_stack_00000018;
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05e2a6b0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02b7654c(plVar6,*(long *)
                                    Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                            ,0);
LAB_05e2a6b0:
      in_stack_00000038 = uVar2;
      in_stack_00000030 = uVar8;
      in_stack_00000040 = uVar3;
      (*(code *)*puVar7)(plVar6,&stack0x00000030,puVar7[1]);
    }
    *(undefined1 *)(unaff_x19 + 0x58) = 0;
  }
  return;
}


