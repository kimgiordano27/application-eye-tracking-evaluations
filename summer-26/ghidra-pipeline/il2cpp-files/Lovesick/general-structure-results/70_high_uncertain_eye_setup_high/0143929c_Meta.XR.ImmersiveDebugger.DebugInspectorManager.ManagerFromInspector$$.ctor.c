/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ManagerFromInspector$$.ctor
ENTRY_POINT: 0143929c
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_ManagerFromInspector___ctor(float param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  uint unaff_w19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long lVar15;
  long unaff_x25;
  long unaff_x26;
  ulong uVar16;
  undefined8 *unaff_x29;
  float fVar17;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000068;
  
code_r0x0143929c:
  uVar4 = 0x80000000;
  if (param_1 != INFINITY) {
    uVar4 = (int)param_1;
  }
  if (uVar4 < 3) {
    uVar4 = 2;
  }
  FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
               *(undefined8 *)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
              );
  if ((in_stack_00000030 != 0) && (*(long *)(in_stack_00000030 + 0x20) != 0)) {
    uVar14 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x1c);
    if ((int)uVar14 <= (int)uVar4) {
      uVar4 = uVar14;
    }
    uVar14 = unaff_w19;
    if ((int)unaff_w19 < 0) {
      uVar14 = unaff_w19 + 1;
    }
    uVar9 = (int)uVar14 >> 1;
    if ((int)uVar14 >> 1 <= (int)uVar4) {
      uVar9 = uVar4;
    }
    uVar4 = uVar9;
    if ((int)uVar9 < 0) {
      uVar4 = uVar9 + 1;
    }
    uVar14 = (int)uVar4 >> 1;
    if ((int)uVar4 >> 1 <= (int)unaff_w19) {
      uVar14 = unaff_w19;
    }
    do {
      *(uint *)(unaff_x26 + 0x10) = uVar14;
      *(uint *)(unaff_x26 + 0x14) = uVar9;
      *(long *)(unaff_x26 + 0x20) = unaff_x24;
      *(long *)(unaff_x26 + 0x30) = unaff_x25;
      FUN_014359a0(unaff_x26);
      FUN_00bbfcc8(in_stack_00000008,unaff_x26,*(undefined8 *)PTR_DAT_033f3448);
      uVar12 = FUN_0132138c(unaff_x21,in_stack_00000028._4_4_,&stack0x00000030,
                            *(undefined8 *)StringLiteral_4419);
      FUN_01436444(uVar12,unaff_x26,in_stack_00000030);
      if (3 < *(int *)(in_stack_00000018 + 0x10)) {
        lVar15 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        lVar13 = *(long *)(lVar15 + 0x38);
        if (lVar13 == 0) {
          FUN_00d59478(lVar15);
          lVar13 = *(long *)(lVar15 + 0x38);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          lVar13 = FUN_00d5941c();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          lVar13 = FUN_00d5941c();
        }
        uVar12 = FUN_01600be4(*(undefined8 *)PTR_DAT_033ee248,**(undefined8 **)(lVar13 + 0xb8),0);
        lVar15 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        lVar13 = *(long *)(lVar15 + 0x38);
        if (lVar13 == 0) {
          FUN_00d59478(lVar15);
          lVar13 = *(long *)(lVar15 + 0x38);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          lVar13 = FUN_00d5941c();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          lVar13 = FUN_00d5941c();
        }
        FUN_013f38b0(uVar12,**(undefined8 **)(lVar13 + 0xb8),0);
      }
      in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
      if (*(int *)(unaff_x23 + 0x18) <= in_stack_00000028._4_4_) {
        FUN_01325140(in_stack_00000008,
                     *(undefined8 *)
                      Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                    );
        return;
      }
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
      if (lVar13 == 0) break;
      FUN_01320e50(lVar13,*(undefined8 *)StringLiteral_8754);
      FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                  );
      FUN_01436c38(in_stack_00000030,lVar13);
      unaff_x24 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                               *(undefined4 *)(lVar13 + 0x18));
      unaff_x25 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                               *(undefined4 *)(lVar13 + 0x18));
      if (0 < *(int *)(lVar13 + 0x18)) {
        uVar16 = 0;
        do {
          FUN_0132138c(lVar13,uVar16 & 0xffffffff,&stack0x00000030,*unaff_x29);
          if (in_stack_00000030 == 0) goto LAB_014394c0;
          iVar5 = *(int *)(in_stack_00000030 + 0x1c);
          FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                       *(undefined8 *)
                        Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                      );
          if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
          goto LAB_014394c0;
          iVar6 = *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
          FUN_0132138c(lVar13,uVar16 & 0xffffffff,&stack0x00000030,*unaff_x29);
          if (in_stack_00000030 == 0) goto LAB_014394c0;
          iVar7 = *(int *)(in_stack_00000030 + 0x20);
          FUN_0132138c(lVar13,uVar16 & 0xffffffff,&stack0x00000030,*unaff_x29);
          if (in_stack_00000030 == 0) goto LAB_014394c0;
          iVar8 = *(int *)(in_stack_00000030 + 0x14);
          FUN_0132138c(lVar13,uVar16 & 0xffffffff,&stack0x00000030,*unaff_x29);
          if (in_stack_00000030 == 0) goto LAB_014394c0;
          piVar1 = (int *)(in_stack_00000030 + 0x18);
          in_stack_00000030 = 0;
          in_stack_00000038 = 0;
          FUN_0268834c((float)(iVar5 - iVar6),(float)iVar7,(float)iVar8,(float)*piVar1,
                       &stack0x00000030,0);
          if (unaff_x24 == 0) goto LAB_014394c0;
          if (*(uint *)(unaff_x24 + 0x18) <= uVar16) {
LAB_014394c4:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar10 = (long *)(unaff_x24 + 0x20 + uVar16 * 0x10);
          plVar10[1] = in_stack_00000038;
          *plVar10 = in_stack_00000030;
          FUN_0132138c(lVar13,uVar16 & 0xffffffff,&stack0x00000068,*unaff_x29);
          if ((in_stack_00000068 == 0) || (unaff_x25 == 0)) goto LAB_014394c0;
          if (*(uint *)(unaff_x25 + 0x18) <= uVar16) goto LAB_014394c4;
          *(undefined4 *)(unaff_x25 + 0x20 + uVar16 * 4) = *(undefined4 *)(in_stack_00000068 + 0x10)
          ;
          uVar16 = uVar16 + 1;
          unaff_x23 = in_stack_00000020;
        } while ((long)uVar16 < (long)*(int *)(lVar13 + 0x18));
      }
      if (in_stack_00000010 == 0) break;
      uVar12 = FUN_01325140(in_stack_00000010,*(undefined8 *)StringLiteral_9168);
      unaff_x26 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
      if (unaff_x26 == 0) break;
      FUN_017b46ec(unaff_x26,0);
      *(undefined8 *)(unaff_x26 + 0x28) = uVar12;
      puVar11 = 
      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__;
      FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                  );
      puVar2 = (uint *)(unaff_x26 + 0x18);
      puVar3 = (uint *)(unaff_x26 + 0x1c);
      FUN_01437adc(in_stack_00000018,in_stack_00000030,puVar2,puVar3);
      iVar5 = *(int *)(unaff_x26 + 0x18);
      FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,*(undefined8 *)puVar11);
      if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) break;
      *puVar2 = iVar5 - *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
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
      break;
      unaff_x21 = in_stack_00000010;
      if (*(char *)(in_stack_00000018 + 0x14) != '\0')
      goto Meta_XR_ImmersiveDebugger_DebugInspectorManager_ManagerFromInspector__GetCountPerType;
      uVar9 = *puVar3;
      uVar14 = *puVar2;
    } while( true );
  }
LAB_014394c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
Meta_XR_ImmersiveDebugger_DebugInspectorManager_ManagerFromInspector__GetCountPerType:
  fVar17 = logf((float)(int)*puVar2);
  fVar17 = exp2f((float)(int)(fVar17 / unaff_s8));
  unaff_w19 = 0x80000000;
  if (fVar17 != INFINITY) {
    unaff_w19 = (int)fVar17;
  }
  if (unaff_w19 < 3) {
    unaff_w19 = 2;
  }
  FUN_0132138c(unaff_x23,in_stack_00000028._4_4_,&stack0x00000030,
               *(undefined8 *)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
              );
  if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)) goto LAB_014394c0;
  uVar4 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x18);
  if ((int)uVar4 <= (int)unaff_w19) {
    unaff_w19 = uVar4;
  }
  fVar17 = logf((float)(int)*puVar3);
  param_1 = exp2f((float)(int)(fVar17 / unaff_s8));
  goto code_r0x0143929c;
}


