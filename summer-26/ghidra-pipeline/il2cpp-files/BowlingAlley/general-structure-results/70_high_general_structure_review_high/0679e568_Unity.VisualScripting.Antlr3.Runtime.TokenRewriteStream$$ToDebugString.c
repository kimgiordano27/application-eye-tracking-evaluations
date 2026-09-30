/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream$$ToDebugString
ENTRY_POINT: 0679e568
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1
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
  
  thunk_FUN_032cd7c0();
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OvrAvatarComputeSkinnedPrimitive>_get_Current__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0679e700 to 0689e733 has its CatchHandler @ 0679e7ec */
    FUN_032d5ee8();
  }
                    /* try { // try from 0679e584 to 0689e58b has its CatchHandler @ 0679e598 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0679e544 with catch @ 0679e58c
                       try { // try from 0679e58c to 0689e5af has its CatchHandler @ 0679e3e8 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0679e518 with catch @ 0679e590
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0679e4f8 with catch @ 0679e594
                       catch(type#1 @ 06e40658) { ... } // from try @ 0679e558 with catch @ 0679e594
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0679e4ac with catch @ 0679e598
                       catch(type#1 @ 06e40658) { ... } // from try @ 0679e584 with catch @ 0679e598
                        */
  FUN_03b1b80c();
  lVar5 = in_stack_00000068;
                    /* try { // try from 0679e5b0 to 0689e5b3 has its CatchHandler @ 0679e5d4 */
  lVar2 = *(long *)puVar1;
                    /* try { // try from 0679e5b4 to 0689e5d7 has its CatchHandler @ 0679e3e8 */
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 0679e5b0 with catch @ 0679e5d4 */
                    /* try { // try from 0679e5d8 to 0689e5e3 has its CatchHandler @ 0679e5f8 */
  uVar3 = FUN_066a6c70(&stack0x00000020,*(long *)(lVar2 + 0xb8) + 0x18,0,0);
  lVar2 = in_stack_00000068;
                    /* try { // try from 0679e5e4 to 0689e5ef has its CatchHandler @ 0679e3e8 */
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
                    /* try { // try from 0679e5f0 to 0689e5f7 has its CatchHandler @ 0679e5f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0679e5d8 with catch @ 0679e5f8
                       catch(type#2 @ 00000000) { ... } // from try @ 0679e5f0 with catch @ 0679e5f8
                        */
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
                    /* try { // try from 0679e63c to 0689e6ff has its CatchHandler @ 0679e63c
                       catch() { ... } // from try @ 0679e63c with catch @ 0679e63c
                       catch() { ... } // from try @ 0679e7b8 with catch @ 0679e63c
                       catch() { ... } // from try @ 0679e7e0 with catch @ 0679e63c
                       catch() { ... } // from try @ 0679e808 with catch @ 0679e63c
                       catch() { ... } // from try @ 0679e838 with catch @ 0679e63c */
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


