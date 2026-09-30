/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.GridSliceResizer$$OnDrawGizmosSelected
ENTRY_POINT: 01475eb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_GridSliceResizer__OnDrawGizmosSelected(undefined8 param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x28;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  
  iVar4 = (**(code **)(in_x9 + 0x1a8))(param_1,*(undefined8 *)(in_x9 + 0x1b0));
  if (0 < *(int *)(unaff_x20 + 0x18)) {
    if (unaff_x21 == 0) goto LAB_01476220;
    fVar15 = 2.0 / (float)unaff_w22;
    fVar16 = 2.0 / (float)iVar4;
    lVar10 = 0;
    do {
      uVar9 = (uint)lVar10;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_0147621c;
      puVar1 = (ulong *)(unaff_x21 + 0x20 + lVar10 * 0x10);
      in_stack_00000068 = puVar1[1];
      in_stack_00000060 = *puVar1;
      fVar12 = (float)FUN_02688390(&stack0x00000060,0);
      FUN_02688398(fVar15 + fVar12,&stack0x00000060,0);
      fVar12 = (float)FUN_026883a0(&stack0x00000060,0);
      FUN_026883a8(fVar16 + fVar12,&stack0x00000060,0);
      fVar12 = (float)FUN_026884c4(&stack0x00000060,0);
      FUN_026884cc(fVar12 - (fVar15 + fVar15),&stack0x00000060,0);
      fVar12 = (float)FUN_026884d4(&stack0x00000060,0);
      FUN_026884dc(fVar12 - (fVar16 + fVar16),&stack0x00000060,0);
      if ((*(long *)(unaff_x19 + 0x38) == 0) || (lVar7 = *(long *)(unaff_x19 + 0x30), lVar7 == 0))
      goto LAB_01476220;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0147621c;
      plVar11 = *(long **)(*(long *)(unaff_x19 + 0x38) + 0x20);
      uVar13 = in_stack_00000060 & 0xffffffff;
      uVar2 = in_stack_00000060._4_4_;
      uVar8 = *(undefined8 *)(lVar7 + lVar10 * 8 + 0x20);
      uVar14 = in_stack_00000068 & 0xffffffff;
      uVar3 = in_stack_00000068._4_4_;
      _uStack0000000000000050 = 0;
      _uStack0000000000000058 = 0;
      FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000050,0);
      uStack0000000000000040 = 0;
      uStack0000000000000044 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000040,0);
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      uStack0000000000000038 = 0;
      uStack000000000000003c = 0;
      FUN_0268834c(0,0,0,0,&stack0x00000030,0);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if (lVar7 == 0) goto LAB_01476220;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0147621c;
      lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_01476220;
      uVar5 = FUN_0268b6ac(lVar7,0);
      lVar7 = thunk_FUN_00d62348(*unaff_x28);
      if (lVar7 == 0) goto LAB_01476220;
      FUN_013e7d0c(uVar13,uVar2,uVar14,uVar3,uStack0000000000000050,uStack0000000000000054,
                   uStack0000000000000058,uStack000000000000005c,lVar7,uVar8,1,0,uVar5,0);
      if (plVar11 == (long *)0x0) goto LAB_01476220;
      lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar6 == 0) goto LAB_01476224;
      if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_0147621c;
      plVar11[lVar10 + 4] = lVar7;
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < *(int *)(unaff_x20 + 0x18));
  }
  lVar10 = *(long *)(unaff_x19 + 0x38);
  uVar8 = FUN_00da4fb8(*(undefined8 *)Method_System_Xml_Schema_Compiler_CompileAttribute__,1);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x28) = uVar8;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      plVar11 = *(long **)(*(long *)(unaff_x19 + 0x38) + 0x28);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5607);
      if ((lVar10 != 0) && (FUN_013e7004(lVar10,0), plVar11 != (long *)0x0)) {
        lVar7 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
        if (lVar7 == 0) {
LAB_01476224:
          uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar8,0);
        }
        if ((int)plVar11[3] == 0) {
LAB_0147621c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar11[4] = lVar10;
        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28), lVar10 != 0)) {
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0147621c;
          if (*(long *)(lVar10 + 0x20) != 0) {
            *(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x10) = *(undefined8 *)(unaff_x19 + 0x40);
            if (*(long *)(lVar10 + 0x20) != 0) {
              *(undefined1 *)(*(long *)(lVar10 + 0x20) + 0x18) = 0;
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                           UnityEngine_UIElements_EventCallbackListPool_TypeInfo);
              if (lVar10 != 0) {
                FUN_01320e50(lVar10,*(undefined8 *)
                                     Method_System_Xml_Schema_XsdBuilder_BuildElement_MinOccurs__);
                FUN_01322050(lVar10,*(undefined8 *)(unaff_x19 + 0x30),
                             *(undefined8 *)StringLiteral_4785);
                if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                   (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28), lVar7 != 0)) {
                  if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0147621c;
                  if (*(long *)(lVar7 + 0x20) != 0) {
                    *(long *)(*(long *)(lVar7 + 0x20) + 0x20) = lVar10;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01476220:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


