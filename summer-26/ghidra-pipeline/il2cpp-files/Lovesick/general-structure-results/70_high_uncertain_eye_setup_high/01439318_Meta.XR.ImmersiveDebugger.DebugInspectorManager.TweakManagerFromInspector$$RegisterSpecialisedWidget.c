/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.TweakManagerFromInspector$$RegisterSpecialisedWidget
ENTRY_POINT: 01439318
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_TweakManagerFromInspector__RegisterSpecialisedWidget
               (void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint in_w8;
  long lVar12;
  uint in_w9;
  uint uVar13;
  uint unaff_w19;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar14;
  long unaff_x25;
  long unaff_x26;
  ulong uVar15;
  undefined8 *unaff_x29;
  float fVar16;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000068;
  
code_r0x01439318:
  uVar13 = (int)in_w9 >> 1;
  if ((int)in_w9 >> 1 <= (int)unaff_w19) {
    uVar13 = unaff_w19;
  }
  do {
    *(uint *)(unaff_x26 + 0x10) = uVar13;
    *(uint *)(unaff_x26 + 0x14) = in_w8;
    *(long *)(unaff_x26 + 0x20) = unaff_x24;
    *(long *)(unaff_x26 + 0x30) = unaff_x25;
    FUN_014359a0(unaff_x26);
    FUN_00bbfcc8(unaff_x22,unaff_x26,*(undefined8 *)PTR_DAT_033f3448);
    uVar11 = FUN_0132138c(unaff_x21,in_stack_00000028._4_4_,&stack0x00000030,
                          *(undefined8 *)StringLiteral_4419);
    FUN_01436444(uVar11,unaff_x26,in_stack_00000030);
    if (3 < *(int *)(in_stack_00000018 + 0x10)) {
      lVar14 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar12 = *(long *)(lVar14 + 0x38);
      if (lVar12 == 0) {
        FUN_00d59478(lVar14);
        lVar12 = *(long *)(lVar14 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      uVar11 = FUN_01600be4(*(undefined8 *)PTR_DAT_033ee248,**(undefined8 **)(lVar12 + 0xb8),0);
      lVar14 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar12 = *(long *)(lVar14 + 0x38);
      if (lVar12 == 0) {
        FUN_00d59478(lVar14);
        lVar12 = *(long *)(lVar14 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      FUN_013f38b0(uVar11,**(undefined8 **)(lVar12 + 0xb8),0);
    }
    in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
    if (*(int *)(unaff_x23 + 0x18) <= in_stack_00000028._4_4_) {
      FUN_01325140(unaff_x22,
                   *(undefined8 *)
                    Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                  );
      return;
    }
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    if (lVar12 == 0) goto LAB_014394c0;
    FUN_01320e50(lVar12,*(undefined8 *)StringLiteral_8754);
    FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    FUN_01436c38(in_stack_00000030,lVar12);
    unaff_x24 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                             *(undefined4 *)(lVar12 + 0x18));
    unaff_x25 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                             *(undefined4 *)(lVar12 + 0x18));
    if (0 < *(int *)(lVar12 + 0x18)) {
      uVar15 = 0;
      do {
        FUN_0132138c(lVar12,uVar15 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar4 = *(int *)(in_stack_00000030 + 0x1c);
        FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                     *(undefined8 *)
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                    );
        if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
        goto LAB_014394c0;
        iVar5 = *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
        FUN_0132138c(lVar12,uVar15 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar6 = *(int *)(in_stack_00000030 + 0x20);
        FUN_0132138c(lVar12,uVar15 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        iVar7 = *(int *)(in_stack_00000030 + 0x14);
        FUN_0132138c(lVar12,uVar15 & 0xffffffff,&stack0x00000030,*unaff_x29);
        if (in_stack_00000030 == 0) goto LAB_014394c0;
        piVar1 = (int *)(in_stack_00000030 + 0x18);
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_0268834c((float)(iVar4 - iVar5),(float)iVar6,(float)iVar7,(float)*piVar1,
                     &stack0x00000030,0);
        if (unaff_x24 == 0) goto LAB_014394c0;
        if (*(uint *)(unaff_x24 + 0x18) <= uVar15) {
LAB_014394c4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9 = (long *)(unaff_x24 + 0x20 + uVar15 * 0x10);
        plVar9[1] = in_stack_00000038;
        *plVar9 = in_stack_00000030;
        FUN_0132138c(lVar12,uVar15 & 0xffffffff,&stack0x00000068,*unaff_x29);
        if ((in_stack_00000068 == 0) || (unaff_x25 == 0)) goto LAB_014394c0;
        if (*(uint *)(unaff_x25 + 0x18) <= uVar15) goto LAB_014394c4;
        *(undefined4 *)(unaff_x25 + 0x20 + uVar15 * 4) = *(undefined4 *)(in_stack_00000068 + 0x10);
        uVar15 = uVar15 + 1;
        unaff_x23 = in_stack_00000020;
      } while ((long)uVar15 < (long)*(int *)(lVar12 + 0x18));
    }
    if (in_stack_00000010 == 0) goto LAB_014394c0;
    uVar11 = FUN_01325140(in_stack_00000010,*(undefined8 *)StringLiteral_9168);
    unaff_x26 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    if (unaff_x26 == 0) goto LAB_014394c0;
    FUN_017b46ec(unaff_x26,0);
    *(undefined8 *)(unaff_x26 + 0x28) = uVar11;
    puVar10 = 
    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__;
    FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                 *(undefined8 *)
                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                );
    puVar2 = (uint *)(unaff_x26 + 0x18);
    puVar3 = (uint *)(unaff_x26 + 0x1c);
    FUN_01437adc(in_stack_00000018,in_stack_00000030,puVar2,puVar3);
    iVar4 = *(int *)(unaff_x26 + 0x18);
    FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,*(undefined8 *)puVar10);
    if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) goto LAB_014394c0;
    *puVar2 = iVar4 - *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
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
    unaff_x21 = in_stack_00000010;
    unaff_x22 = in_stack_00000008;
    if (*(char *)(in_stack_00000018 + 0x14) != '\0') break;
    in_w8 = *puVar3;
    uVar13 = *puVar2;
  } while( true );
  fVar16 = logf((float)(int)*puVar2);
  fVar16 = exp2f((float)(int)(fVar16 / unaff_s8));
  unaff_w19 = 0x80000000;
  if (fVar16 != INFINITY) {
    unaff_w19 = (int)fVar16;
  }
  if (unaff_w19 < 3) {
    unaff_w19 = 2;
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
  uVar13 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x18);
  if ((int)uVar13 <= (int)unaff_w19) {
    unaff_w19 = uVar13;
  }
  fVar16 = logf((float)(int)*puVar3);
  fVar16 = exp2f((float)(int)(fVar16 / unaff_s8));
  uVar13 = 0x80000000;
  if (fVar16 != INFINITY) {
    uVar13 = (int)fVar16;
  }
  if (uVar13 < 3) {
    uVar13 = 2;
  }
  FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
               *(undefined8 *)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
              );
  if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) goto LAB_014394c0;
  uVar8 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x1c);
  if ((int)uVar8 <= (int)uVar13) {
    uVar13 = uVar8;
  }
  uVar8 = unaff_w19;
  if ((int)unaff_w19 < 0) {
    uVar8 = unaff_w19 + 1;
  }
  in_w8 = (int)uVar8 >> 1;
  if ((int)uVar8 >> 1 <= (int)uVar13) {
    in_w8 = uVar13;
  }
  in_w9 = in_w8;
  if ((int)in_w8 < 0) {
    in_w9 = in_w8 + 1;
  }
  goto code_r0x01439318;
}


