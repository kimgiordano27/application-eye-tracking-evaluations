/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream$$ToDebugString
ENTRY_POINT: 0679e530
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


void Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream__ToDebugString(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000068;
  
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List_Enumerator<OvrAvatarComputeSkinnedPrimitive>_get_Current__
                    );
                    /* try { // try from 0679e544 to 0689e54b has its CatchHandler @ 0679e58c */
  thunk_FUN_032e1da0(
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastTriggerInteraction__
                    );
  *(undefined1 *)(unaff_x22 + 0x9e9) = 1;
                    /* try { // try from 0679e558 to 0689e563 has its CatchHandler @ 0679e594 */
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000068 = 0;
                    /* try { // try from 0679e564 to 0689e583 has its CatchHandler @ 0679e3e8 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OvrAvatarComputeSkinnedPrimitive>_get_Current__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_03b1b80c();
  lVar5 = in_stack_00000068;
  lVar2 = *(long *)puVar1;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = FUN_066a6c70(&stack0x00000020,*(long *)(lVar2 + 0xb8) + 0x18,0,0);
  lVar2 = in_stack_00000068;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = uVar3;
    uVar3 = FUN_066a6e48(&stack0x00000020,*(long *)(*(long *)puVar1 + 0xb8) + 0x20,2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    if (in_stack_00000068 != 0) {
      *(undefined4 *)(in_stack_00000068 + 0x20) = unaff_w19;
      *(undefined4 *)(in_stack_00000068 + 0x24) = unaff_s11;
      *(undefined4 *)(in_stack_00000068 + 0x28) = unaff_s10;
      *(undefined4 *)(in_stack_00000068 + 0x2c) = unaff_s9;
      *(undefined4 *)(in_stack_00000068 + 0x30) = unaff_s8;
      FUN_0669e5fc(&stack0x00000020,0,0);
      puVar1 = 
      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastMask__;
      lVar5 = *(long *)
               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastMask__
      ;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar5);
        lVar5 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar2 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar5);
          lVar5 = *(long *)puVar1;
        }
        uVar3 = **(undefined8 **)(lVar5 + 0xb8);
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
                                  );
        FUN_04980210(lVar2,uVar3,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_arSessionOrigin__
                     ,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar4 = lVar2;
        thunk_FUN_0333a630(plVar4,lVar2);
      }
      FUN_03b1b978(&stack0x00000020,lVar2,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_xrOrigin__
                  );
      FUN_066a7708(&stack0x00000020,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


