/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ManagerFromInspector$$ProcessType
ENTRY_POINT: 01438f08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_ManagerFromInspector__ProcessType(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  float fVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong uVar20;
  float fVar21;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  int iStack000000000000002c;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000068;
  
  puVar13 = System_Data_AutoIncrementBigInteger_TypeInfo;
  fVar12 = DAT_0293f7bc;
  iStack000000000000002c = 0;
  while (lVar15 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8), lVar15 != 0) {
    FUN_01320e50(lVar15,*(undefined8 *)StringLiteral_8754);
    FUN_0132138c(unaff_x23,iStack000000000000002c,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    FUN_01436c38(in_stack_00000030,lVar15);
    lVar16 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                          *(undefined4 *)(lVar15 + 0x18));
    lVar17 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                          *(undefined4 *)(lVar15 + 0x18));
    if (0 < *(int *)(lVar15 + 0x18)) {
      uVar20 = 0;
      do {
        FUN_0132138c(lVar15,uVar20 & 0xffffffff,&stack0x00000030,*(undefined8 *)puVar13);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar6 = *(int *)(in_stack_00000030 + 0x1c);
        FUN_0132138c(unaff_x23,iStack000000000000002c,&stack0x00000030,
                     *(undefined8 *)
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                    );
        if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
        goto LAB_014394c0;
        iVar7 = *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
        FUN_0132138c(lVar15,uVar20 & 0xffffffff,&stack0x00000030,*(undefined8 *)puVar13);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar8 = *(int *)(in_stack_00000030 + 0x20);
        FUN_0132138c(lVar15,uVar20 & 0xffffffff,&stack0x00000030,*(undefined8 *)puVar13);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar9 = *(int *)(in_stack_00000030 + 0x14);
        FUN_0132138c(lVar15,uVar20 & 0xffffffff,&stack0x00000030,*(undefined8 *)puVar13);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        piVar1 = (int *)(in_stack_00000030 + 0x18);
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_0268834c((float)(iVar6 - iVar7),(float)iVar8,(float)iVar9,(float)*piVar1,
                     &stack0x00000030,0);
        if (lVar16 == 0) goto LAB_014394c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) {
LAB_014394c4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar11 = (long *)(lVar16 + 0x20 + uVar20 * 0x10);
        plVar11[1] = in_stack_00000038;
        *plVar11 = in_stack_00000030;
        FUN_0132138c(lVar15,uVar20 & 0xffffffff,&stack0x00000068,*(undefined8 *)puVar13);
        if ((in_stack_00000068 == 0) || (lVar17 == 0)) goto LAB_014394c0;
        if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_014394c4;
        *(undefined4 *)(lVar17 + 0x20 + uVar20 * 4) = *(undefined4 *)(in_stack_00000068 + 0x10);
        uVar20 = uVar20 + 1;
        unaff_x23 = in_stack_00000020;
      } while ((long)uVar20 < (long)*(int *)(lVar15 + 0x18));
    }
    if (in_stack_00000010 == 0) break;
    uVar18 = FUN_01325140(in_stack_00000010,*(undefined8 *)StringLiteral_9168);
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    if (lVar15 == 0) break;
    FUN_017b46ec(lVar15,0);
    iVar7 = iStack000000000000002c;
    *(undefined8 *)(lVar15 + 0x28) = uVar18;
    puVar14 = 
    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__;
    FUN_0132138c(unaff_x23,iStack000000000000002c,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    puVar2 = (uint *)(lVar15 + 0x18);
    puVar3 = (uint *)(lVar15 + 0x1c);
    FUN_01437adc(in_stack_00000018,in_stack_00000030,puVar2,puVar3);
    iVar6 = *(int *)(lVar15 + 0x18);
    FUN_0132138c(unaff_x23,iVar7,&stack0x00000030,*(undefined8 *)puVar14);
    if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) break;
    *puVar2 = iVar6 - *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
    FUN_0132138c(unaff_x23,iStack000000000000002c,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    if ((in_stack_00000030 == 0) ||
       (((*(long *)(in_stack_00000030 + 0x20) == 0 ||
         (FUN_0132138c(unaff_x23,iStack000000000000002c,&stack0x00000030,
                       *(undefined8 *)
                        Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                      ), in_stack_00000030 == 0)) || (*(long *)(in_stack_00000030 + 0x20) == 0))))
    break;
    if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
      uVar10 = *puVar3;
      uVar19 = *puVar2;
    }
    else {
      fVar21 = logf((float)(int)*puVar2);
      fVar21 = exp2f((float)(int)(fVar21 / fVar12));
      uVar5 = 0x80000000;
      if (fVar21 != INFINITY) {
        uVar5 = (int)fVar21;
      }
      if (uVar5 < 3) {
        uVar5 = 2;
      }
      FUN_0132138c(unaff_x23,iStack000000000000002c,&stack0x00000030,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                  );
      if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) break;
      uVar10 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x18);
      if ((int)uVar10 <= (int)uVar5) {
        uVar5 = uVar10;
      }
      fVar21 = logf((float)(int)*puVar3);
      fVar21 = exp2f((float)(int)(fVar21 / fVar12));
      uVar19 = 0x80000000;
      if (fVar21 != INFINITY) {
        uVar19 = (int)fVar21;
      }
      if (uVar19 < 3) {
        uVar19 = 2;
      }
      FUN_0132138c(unaff_x23,iStack000000000000002c,&stack0x00000030,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                  );
      if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) break;
      uVar10 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x1c);
      if ((int)uVar10 <= (int)uVar19) {
        uVar19 = uVar10;
      }
      uVar4 = uVar5;
      if ((int)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      uVar10 = (int)uVar4 >> 1;
      if ((int)uVar4 >> 1 <= (int)uVar19) {
        uVar10 = uVar19;
      }
      uVar4 = uVar10;
      if ((int)uVar10 < 0) {
        uVar4 = uVar10 + 1;
      }
      uVar19 = (int)uVar4 >> 1;
      if ((int)uVar4 >> 1 <= (int)uVar5) {
        uVar19 = uVar5;
      }
    }
    *(uint *)(lVar15 + 0x10) = uVar19;
    *(uint *)(lVar15 + 0x14) = uVar10;
    *(long *)(lVar15 + 0x20) = lVar16;
    *(long *)(lVar15 + 0x30) = lVar17;
    FUN_014359a0(lVar15);
    FUN_00bbfcc8(unaff_x22,lVar15,*(undefined8 *)PTR_DAT_033f3448);
    uVar18 = FUN_0132138c(in_stack_00000010,iStack000000000000002c,&stack0x00000030,
                          *(undefined8 *)StringLiteral_4419);
    FUN_01436444(uVar18,lVar15,in_stack_00000030);
    if (3 < *(int *)(in_stack_00000018 + 0x10)) {
      lVar16 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar15 = *(long *)(lVar16 + 0x38);
      if (lVar15 == 0) {
        FUN_00d59478(lVar16);
        lVar15 = *(long *)(lVar16 + 0x38);
      }
      lVar15 = *(long *)(lVar15 + 0x10);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      uVar18 = FUN_01600be4(*(undefined8 *)PTR_DAT_033ee248,**(undefined8 **)(lVar15 + 0xb8),0);
      lVar16 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar15 = *(long *)(lVar16 + 0x38);
      if (lVar15 == 0) {
        FUN_00d59478(lVar16);
        lVar15 = *(long *)(lVar16 + 0x38);
      }
      lVar15 = *(long *)(lVar15 + 0x10);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      FUN_013f38b0(uVar18,**(undefined8 **)(lVar15 + 0xb8),0);
    }
    iStack000000000000002c = iStack000000000000002c + 1;
    if (*(int *)(unaff_x23 + 0x18) <= iStack000000000000002c) {
      FUN_01325140(unaff_x22,
                   *(undefined8 *)
                    Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                  );
      return;
    }
  }
LAB_014394c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


