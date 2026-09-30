/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Toggle$$OnStateChanged
ENTRY_POINT: 014535e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Toggle__OnStateChanged
               (ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  while( true ) {
    FUN_026883a8(param_1,param_2,param_3);
    fVar7 = (float)FUN_026884c4(&stack0x00000030,0);
    fVar8 = (float)FUN_026884c4(&stack0x00000060,0);
    FUN_026884cc(fVar7 * fVar8,&stack0x00000030,0);
    fVar7 = (float)FUN_026884d4(&stack0x00000030,0);
    fVar8 = (float)FUN_026884d4(&stack0x00000060,0);
    FUN_026884dc(fVar7 * fVar8,&stack0x00000030,0);
    if (unaff_x21 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x25) goto LAB_01453888;
    lVar4 = unaff_x21 + unaff_x25 * 0x10;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000038;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000030;
    lVar4 = *(long *)(unaff_x20 + 0x30);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x25) goto LAB_01453888;
    if (unaff_x23 == 0) break;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01453888;
    lVar1 = unaff_x25 * 4;
    lVar2 = unaff_x25 * 4;
    unaff_x25 = unaff_x25 + 1;
    *(undefined4 *)(unaff_x23 + lVar2 + 0x20) = *(undefined4 *)(lVar4 + lVar1 + 0x20);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if (lVar4 == 0) break;
    if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x25) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if (lVar4 != 0) {
        uVar5 = 0;
        goto LAB_014536ac;
      }
      break;
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_x25) goto LAB_01453888;
    lVar4 = lVar4 + unaff_x25 * 0x10;
    in_stack_00000038 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000030 = *(undefined8 *)(lVar4 + 0x20);
    fVar7 = (float)FUN_02688390(&stack0x00000060,0);
    fVar8 = (float)FUN_02688390(&stack0x00000030,0);
    fVar6 = (float)FUN_026884c4(&stack0x00000060,0);
    FUN_02688398(fVar7 + fVar8 * fVar6,&stack0x00000030,0);
    fVar7 = (float)FUN_026883a0(&stack0x00000060,0);
    fVar8 = (float)FUN_026883a0(&stack0x00000030,0);
    fVar6 = (float)FUN_026884d4(&stack0x00000060,0);
    param_1 = (ulong)(uint)(fVar7 + fVar8 * fVar6);
    param_2 = &stack0x00000030;
    param_3 = 0;
  }
LAB_01453884:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_014536ac:
  if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar5) {
    lVar4 = thunk_FUN_00d62348(*unaff_x24);
    if (lVar4 != 0) {
      FUN_01435978();
      *(undefined4 *)(lVar4 + 0x10) = uStack000000000000004c;
      *(long *)(lVar4 + 0x20) = unaff_x21;
      *(undefined8 *)(lVar4 + 0x28) = unaff_x22;
      *(long *)(lVar4 + 0x30) = unaff_x23;
      *(undefined4 *)(lVar4 + 0x14) = uStack0000000000000048;
      FUN_014359a0(lVar4,0);
      return lVar4;
    }
    goto LAB_01453884;
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_01453888:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar4 = lVar4 + uVar5 * 0x10;
  in_stack_00000028 = *(undefined8 *)(lVar4 + 0x28);
  in_stack_00000020 = *(undefined8 *)(lVar4 + 0x20);
  fVar7 = (float)FUN_02688390(&stack0x00000050,0);
  fVar8 = (float)FUN_02688390(&stack0x00000020,0);
  fVar6 = (float)FUN_026884c4(&stack0x00000050,0);
  FUN_02688398(fVar7 + fVar8 * fVar6,&stack0x00000020,0);
  fVar7 = (float)FUN_026883a0(&stack0x00000050,0);
  fVar8 = (float)FUN_026883a0(&stack0x00000020,0);
  fVar6 = (float)FUN_026884d4(&stack0x00000050,0);
  FUN_026883a8(fVar7 + fVar8 * fVar6,&stack0x00000020,0);
  fVar7 = (float)FUN_026884c4(&stack0x00000020,0);
  fVar8 = (float)FUN_026884c4(&stack0x00000050,0);
  FUN_026884cc(fVar7 * fVar8,&stack0x00000020,0);
  fVar7 = (float)FUN_026884d4(&stack0x00000020,0);
  fVar8 = (float)FUN_026884d4(&stack0x00000050,0);
  FUN_026884dc(fVar7 * fVar8,&stack0x00000020,0);
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (unaff_x21 == 0)) goto LAB_01453884;
  uVar3 = (int)uVar5 + (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x18);
  if (*(uint *)(unaff_x21 + 0x18) <= uVar3) goto LAB_01453888;
  lVar4 = unaff_x21 + (long)(int)uVar3 * 0x10;
  *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
  *(undefined8 *)(lVar4 + 0x20) = in_stack_00000020;
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (lVar4 = *(long *)(unaff_x19 + 0x30), lVar4 == 0))
  goto LAB_01453884;
  if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_01453888;
  if (unaff_x23 == 0) goto LAB_01453884;
  uVar3 = (int)uVar5 + (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x18);
  if (*(uint *)(unaff_x23 + 0x18) <= uVar3) goto LAB_01453888;
  lVar1 = uVar5 * 4;
  uVar5 = uVar5 + 1;
  *(undefined4 *)(unaff_x23 + (long)(int)uVar3 * 4 + 0x20) = *(undefined4 *)(lVar4 + lVar1 + 0x20);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 == 0) goto LAB_01453884;
  goto LAB_014536ac;
}


