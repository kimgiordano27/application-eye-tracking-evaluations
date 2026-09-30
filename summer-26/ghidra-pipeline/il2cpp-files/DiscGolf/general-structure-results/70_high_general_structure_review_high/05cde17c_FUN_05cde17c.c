/*
FUNCTION_NAME: FUN_05cde17c
ENTRY_POINT: 05cde17c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_05cde17c(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined4 unaff_w24;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar2 = unaff_x19[10];
  if (lVar2 == 0) {
LAB_05cde478:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar2 + 0x18) != 9) {
                    /* try { // try from 05cde1bc to 05dde1c3 has its CatchHandler @ 05cde8b8 */
    uVar3 = FUN_05ce0cac(lVar2,0x10,0);
    if ((uVar3 & 1) == 0) {
      if (unaff_x19[10] == 0) goto LAB_05cde478;
      uVar3 = FUN_05ce0cac(unaff_x19[10],0x100,0);
      uVar7 = (**(code **)(*unaff_x19 + 0x1c8))();
      if ((uVar3 & 1) != 0) {
        in_stack_00000018 = in_stack_00000008;
      }
    }
    else {
      uVar7 = (**(code **)(*unaff_x19 + 0x1c8))();
      in_stack_00000018 = **(undefined8 **)(*(long *)(unaff_x27 + 0x90) + 0xb8);
    }
    uVar7 = FUN_05cde4d8(uVar7,uVar7,in_stack_00000018);
    lVar2 = thunk_FUN_02dd3144(*unaff_x26);
    FUN_0552aca4(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = uVar7;
    LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar7);
    *(undefined4 *)(lVar2 + 0x18) = unaff_w24;
    if (unaff_x20 == (long *)0x0) goto LAB_05cde478;
    lVar2 = *unaff_x20;
    goto LAB_05cde398;
  }
                    /* try { // try from 05cde190 to 05dde193 has its CatchHandler @ 05cde888 */
                    /* try { // try from 05cde194 to 05dde1a3 has its CatchHandler @ 05cde8d4 */
  uVar3 = thunk_FUN_0536b75c(in_stack_00000010,**(undefined8 **)(*(long *)(unaff_x27 + 0x90) + 0xb8)
                             ,0);
  if ((uVar3 & 1) == 0) {
    uVar7 = FUN_05362cb4(in_stack_00000010,*(undefined8 *)PTR_DAT_069fc220,0);
  }
  else {
    uVar7 = **(undefined8 **)(*(long *)(unaff_x27 + 0x90) + 0xb8);
  }
  uVar4 = FUN_05362cb4(uVar7,in_stack_00000008,0);
  uVar4 = FUN_05cde4d8(uVar4,*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_raycastTriggerInteraction__
                       ,uVar4);
  lVar2 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar4);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w24;
  if (unaff_x20 == (long *)0x0) goto LAB_05cde478;
  (**(code **)(*unaff_x20 + 0x308))();
  uVar3 = FUN_0536c9cc(unaff_x19[0xb],0);
  if ((uVar3 & 1) == 0) {
    if (unaff_x19[0xb] == 0) goto LAB_05cde478;
    uVar3 = FUN_0536bb1c(unaff_x19[0xb],*(undefined8 *)PTR_DAT_069fc220,5,0);
    if ((uVar3 & 1) == 0) goto LAB_05cde2b4;
    uVar6 = unaff_x19[0xb];
  }
  else {
LAB_05cde2b4:
    uVar3 = FUN_05362cb4(uVar7,unaff_x19[0xb],0);
    uVar6 = uVar3;
  }
  uVar7 = FUN_05cde4d8(uVar3,*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_Update__
                       ,uVar6);
  lVar2 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar7);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w24;
  lVar2 = *unaff_x20;
LAB_05cde398:
  uVar7 = (**(code **)(lVar2 + 0x308))();
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_raycastMask__;
  uVar7 = FUN_05cde4d8(uVar7,*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwistGesture>_Update__
                       ,0);
  lVar2 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar7);
  (**(code **)(*unaff_x20 + 0x308))();
  uVar7 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_054f73b4(uVar7,0);
  lVar2 = (**(code **)(*unaff_x20 + 0x428))();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_arSessionOrigin__
    ;
    lVar5 = thunk_FUN_02dd3048(lVar2,uVar7);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(lVar2,uVar7);
    }
  }
  return;
}


