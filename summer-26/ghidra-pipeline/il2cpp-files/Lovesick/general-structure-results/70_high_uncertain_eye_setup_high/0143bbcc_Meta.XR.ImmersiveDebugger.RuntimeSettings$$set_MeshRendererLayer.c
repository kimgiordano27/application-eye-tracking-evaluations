/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_MeshRendererLayer
ENTRY_POINT: 0143bbcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x19;
  int iVar6;
  undefined8 *unaff_x22;
  float fVar7;
  int iVar8;
  float fVar9;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000b8;
  uint in_stack_000000d8;
  
  fVar9 = *(float *)(param_1 + 0x7bc);
  iVar6 = 0;
  do {
    FUN_0132138c(unaff_x19,iVar6,&stack0x00000098,*unaff_x22);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    uVar5 = *(uint *)(in_stack_00000098 + 0x10);
    in_stack_000000d8 = uVar5;
    FUN_0132138c(unaff_x19,iVar6,&stack0x00000098,*unaff_x22);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x14);
    if (in_stack_00000068._4_4_ <= *(int *)(in_stack_00000098 + 0x14)) {
      in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
    }
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar7 = logf((float)(int)uVar5);
      fVar7 = exp2f((float)(int)(fVar7 / fVar9));
      uVar5 = 0x80000000;
      if (fVar7 != INFINITY) {
        uVar5 = (int)fVar7;
      }
      if (uVar5 < 3) {
        uVar5 = 2;
      }
    }
    if ((int)in_stack_00000088._4_4_ <= (int)uVar5) {
      uVar5 = in_stack_00000088._4_4_;
    }
    in_stack_000000d8 = uVar5;
    FUN_0132138c(in_stack_00000080,iVar6,&stack0x00000098,*unaff_x22);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    *(uint *)(in_stack_00000098 + 0x10) = uVar5;
    FUN_0132138c(in_stack_00000080,iVar6,&stack0x00000098,*unaff_x22);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    iVar1 = *(int *)(in_stack_00000098 + 0x10);
    FUN_0132138c(in_stack_00000080,iVar6,&stack0x00000098,*unaff_x22);
    if ((in_stack_00000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
    iVar8 = *(int *)(in_stack_00000098 + 0x14);
    FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
    FUN_01435f44((float)iVar1,(float)iVar8,in_stack_00000090);
    puVar2 = StringLiteral_4419;
    iVar6 = iVar6 + 1;
    unaff_x19 = in_stack_00000080;
  } while (iVar6 < *(int *)(in_stack_00000080 + 0x18));
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar6 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar6,&stack0x00000098,*unaff_x22);
      lVar3 = in_stack_00000098;
      uVar4 = FUN_0132138c(in_stack_00000078,iVar6,&stack0x00000098,*(undefined8 *)puVar2);
      FUN_01436444(uVar4,lVar3,in_stack_00000098);
      FUN_0132138c(in_stack_00000080,iVar6,&stack0x00000098,*unaff_x22);
      if (in_stack_00000098 == 0) {
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_014359a0();
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_stack_00000080 + 0x18));
  }
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


