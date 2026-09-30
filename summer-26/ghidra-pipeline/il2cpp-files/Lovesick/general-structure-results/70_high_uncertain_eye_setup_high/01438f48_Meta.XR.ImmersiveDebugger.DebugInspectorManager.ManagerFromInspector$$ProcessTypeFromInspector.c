/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ManagerFromInspector$$ProcessTypeFromInspector
ENTRY_POINT: 01438f48
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_ManagerFromInspector__ProcessTypeFromInspector
               (void)

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
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  long unaff_x23;
  long unaff_x26;
  ulong uVar18;
  undefined8 *unaff_x29;
  float fVar19;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000068;
  
  do {
    FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    FUN_01436c38(in_stack_00000030,unaff_x26);
    lVar13 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                          *(undefined4 *)(unaff_x26 + 0x18));
    lVar14 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                          *(undefined4 *)(unaff_x26 + 0x18));
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      uVar18 = 0;
      do {
        FUN_0132138c(unaff_x26,uVar18 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar6 = *(int *)(in_stack_00000030 + 0x1c);
        FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                     *(undefined8 *)
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                    );
        if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
        goto LAB_014394c0;
        iVar7 = *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
        FUN_0132138c(unaff_x26,uVar18 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar8 = *(int *)(in_stack_00000030 + 0x20);
        FUN_0132138c(unaff_x26,uVar18 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar9 = *(int *)(in_stack_00000030 + 0x14);
        FUN_0132138c(unaff_x26,uVar18 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        piVar1 = (int *)(in_stack_00000030 + 0x18);
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_0268834c((float)(iVar6 - iVar7),(float)iVar8,(float)iVar9,(float)*piVar1,
                     &stack0x00000030,0);
        if (lVar13 == 0) goto LAB_014394c0;
        if (*(uint *)(lVar13 + 0x18) <= uVar18) {
LAB_014394c4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar11 = (long *)(lVar13 + 0x20 + uVar18 * 0x10);
        plVar11[1] = in_stack_00000038;
        *plVar11 = in_stack_00000030;
        FUN_0132138c(unaff_x26,uVar18 & 0xffffffff,&stack0x00000068,*unaff_x29);
        if ((in_stack_00000068 == 0) || (lVar14 == 0)) goto LAB_014394c0;
        if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_014394c4;
        *(undefined4 *)(lVar14 + 0x20 + uVar18 * 4) = *(undefined4 *)(in_stack_00000068 + 0x10);
        uVar18 = uVar18 + 1;
        unaff_x23 = in_stack_00000020;
      } while ((long)uVar18 < (long)*(int *)(unaff_x26 + 0x18));
    }
    if (in_stack_00000010 == 0) goto LAB_014394c0;
    uVar15 = FUN_01325140(in_stack_00000010,*(undefined8 *)StringLiteral_9168);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    if (lVar16 == 0) goto LAB_014394c0;
    FUN_017b46ec(lVar16,0);
    *(undefined8 *)(lVar16 + 0x28) = uVar15;
    puVar12 = 
    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__;
    FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    puVar2 = (uint *)(lVar16 + 0x18);
    puVar3 = (uint *)(lVar16 + 0x1c);
    FUN_01437adc(in_stack_00000018,in_stack_00000030,puVar2,puVar3);
    iVar6 = *(int *)(lVar16 + 0x18);
    FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,*(undefined8 *)puVar12);
    if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) goto LAB_014394c0;
    *puVar2 = iVar6 - *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
    FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    if ((in_stack_00000030 == 0) ||
       (((*(long *)(in_stack_00000030 + 0x20) == 0 ||
         (FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                       *(undefined8 *)
                        Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                      ), in_stack_00000030 == 0)) || (*(long *)(in_stack_00000030 + 0x20) == 0))))
    goto LAB_014394c0;
    if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
      uVar10 = *puVar3;
      uVar17 = *puVar2;
    }
    else {
      fVar19 = logf((float)(int)*puVar2);
      fVar19 = exp2f((float)(int)(fVar19 / unaff_s8));
      uVar5 = 0x80000000;
      if (fVar19 != INFINITY) {
        uVar5 = (int)fVar19;
      }
      if (uVar5 < 3) {
        uVar5 = 2;
      }
      FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                  );
      if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) {
LAB_014394c0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x18);
      if ((int)uVar10 <= (int)uVar5) {
        uVar5 = uVar10;
      }
      fVar19 = logf((float)(int)*puVar3);
      fVar19 = exp2f((float)(int)(fVar19 / unaff_s8));
      uVar17 = 0x80000000;
      if (fVar19 != INFINITY) {
        uVar17 = (int)fVar19;
      }
      if (uVar17 < 3) {
        uVar17 = 2;
      }
      FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                  );
      if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) goto LAB_014394c0;
      uVar10 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x1c);
      if ((int)uVar10 <= (int)uVar17) {
        uVar17 = uVar10;
      }
      uVar4 = uVar5;
      if ((int)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      uVar10 = (int)uVar4 >> 1;
      if ((int)uVar4 >> 1 <= (int)uVar17) {
        uVar10 = uVar17;
      }
      uVar4 = uVar10;
      if ((int)uVar10 < 0) {
        uVar4 = uVar10 + 1;
      }
      uVar17 = (int)uVar4 >> 1;
      if ((int)uVar4 >> 1 <= (int)uVar5) {
        uVar17 = uVar5;
      }
    }
    *(uint *)(lVar16 + 0x10) = uVar17;
    *(uint *)(lVar16 + 0x14) = uVar10;
    *(long *)(lVar16 + 0x20) = lVar13;
    *(long *)(lVar16 + 0x30) = lVar14;
    FUN_014359a0(lVar16);
    FUN_00bbfcc8(in_stack_00000008,lVar16,*(undefined8 *)PTR_DAT_033f3448);
    uVar15 = FUN_0132138c(in_stack_00000010,in_stack_00000028._4_4_,&stack0x00000030,
                          *(undefined8 *)StringLiteral_4419);
    FUN_01436444(uVar15,lVar16,in_stack_00000030);
    if (3 < *(int *)(in_stack_00000018 + 0x10)) {
      lVar14 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar13 = *(long *)(lVar14 + 0x38);
      if (lVar13 == 0) {
        FUN_00d59478(lVar14);
        lVar13 = *(long *)(lVar14 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c();
      }
      uVar15 = FUN_01600be4(*(undefined8 *)PTR_DAT_033ee248,**(undefined8 **)(lVar13 + 0xb8),0);
      lVar14 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar13 = *(long *)(lVar14 + 0x38);
      if (lVar13 == 0) {
        FUN_00d59478(lVar14);
        lVar13 = *(long *)(lVar14 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c();
      }
      FUN_013f38b0(uVar15,**(undefined8 **)(lVar13 + 0xb8),0);
    }
    in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
    if (*(int *)(unaff_x23 + 0x18) <= in_stack_00000028._4_4_) {
      FUN_01325140(in_stack_00000008,
                   *(undefined8 *)
                    Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                  );
      return;
    }
    unaff_x26 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    if (unaff_x26 == 0) goto LAB_014394c0;
    FUN_01320e50(unaff_x26,*(undefined8 *)StringLiteral_8754);
  } while( true );
}


