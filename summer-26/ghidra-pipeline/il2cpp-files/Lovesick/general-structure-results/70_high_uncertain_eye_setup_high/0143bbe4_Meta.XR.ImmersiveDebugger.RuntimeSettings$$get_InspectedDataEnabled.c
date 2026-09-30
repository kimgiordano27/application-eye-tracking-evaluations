/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_InspectedDataEnabled
ENTRY_POINT: 0143bbe4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x19;
  int unaff_w20;
  int iVar5;
  undefined8 *unaff_x22;
  float fVar6;
  int iVar7;
  float unaff_s10;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000b8;
  uint in_stack_000000d8;
  
  do {
    FUN_0132138c(unaff_x19,unaff_w20,&stack0x00000098,*unaff_x22);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    uVar4 = *(uint *)(in_stack_00000098 + 0x10);
    in_stack_000000d8 = uVar4;
    FUN_0132138c(unaff_x19,unaff_w20,&stack0x00000098,*unaff_x22);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x14);
    if (in_stack_00000068._4_4_ <= *(int *)(in_stack_00000098 + 0x14)) {
      in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
    }
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar6 = logf((float)(int)uVar4);
      fVar6 = exp2f((float)(int)(fVar6 / unaff_s10));
      uVar4 = 0x80000000;
      if (fVar6 != INFINITY) {
        uVar4 = (int)fVar6;
      }
      if (uVar4 < 3) {
        uVar4 = 2;
      }
    }
    if ((int)in_stack_00000088._4_4_ <= (int)uVar4) {
      uVar4 = in_stack_00000088._4_4_;
    }
    in_stack_000000d8 = uVar4;
    FUN_0132138c();
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    *(uint *)(in_stack_00000098 + 0x10) = uVar4;
    FUN_0132138c();
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    iVar5 = *(int *)(in_stack_00000098 + 0x10);
    FUN_0132138c();
    if ((in_stack_00000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
    iVar7 = *(int *)(in_stack_00000098 + 0x14);
    FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
    FUN_01435f44((float)iVar5,(float)iVar7,in_stack_00000090);
    puVar1 = StringLiteral_4419;
    unaff_w20 = unaff_w20 + 1;
    unaff_x19 = in_stack_00000080;
  } while (unaff_w20 < *(int *)(in_stack_00000080 + 0x18));
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar5 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar5,&stack0x00000098,*unaff_x22);
      lVar2 = in_stack_00000098;
      uVar3 = FUN_0132138c(in_stack_00000078,iVar5,&stack0x00000098,*(undefined8 *)puVar1);
      FUN_01436444(uVar3,lVar2,in_stack_00000098);
      FUN_0132138c(in_stack_00000080,iVar5,&stack0x00000098,*unaff_x22);
      if (in_stack_00000098 == 0) {
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_014359a0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_stack_00000080 + 0x18));
  }
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


