/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyMesh
ENTRY_POINT: 0770e488
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__DestroyMesh(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  undefined1 auVar7 [16];
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  
  FUN_04447ba8(PTR_DAT_09f30680);
  FUN_04447ba8(PTR_DAT_09f2f6b8);
  FUN_04447ba8(PTR_DAT_09f30688);
  FUN_04447ba8(PTR_DAT_09f30690);
  FUN_04447ba8(PTR_DAT_09f30698);
  *(undefined1 *)(unaff_x23 + 0xf1) = 1;
  lVar3 = *unaff_x22;
  in_stack_00000010 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x22;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar4 = System_Array_EmptyInternalEnumerator<Binding_Baselib_Socket_Handle>__MoveNext();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_07a5bcfc(&stack0x00000018,0);
    uVar5 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30698,uVar5,0);
    FUN_076f1130(uVar5,0);
  }
  else if ((unaff_x19 != 0) && (unaff_w20 != 0)) {
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(in_stack_00000010 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar2 = Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update
                      (*(long *)(in_stack_00000010 + 0x20),0);
    if (iVar2 < unaff_w20) {
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(in_stack_00000010 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uStack000000000000000c =
           Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update
                     (*(long *)(in_stack_00000010 + 0x20),0);
      puVar1 = PTR_DAT_09f1e5b8;
      uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),(long)&stack0x00000008 + 4
                                );
      iStack0000000000000008 = unaff_w20;
      uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
      uVar5 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f30690,uVar5,uVar6,0);
      FUN_076efc9c(uVar5,0);
    }
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(in_stack_00000010 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    auVar7 = Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update
                       (*(long *)(in_stack_00000010 + 0x20),0);
    if (auVar7._0_4_ <= unaff_w20) {
      unaff_w20 = auVar7._0_4_;
    }
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(auVar7._0_8_,auVar7._8_8_,unaff_w20);
    }
    if (*(long *)(in_stack_00000010 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(0,auVar7._8_8_,unaff_w20);
    }
    uVar4 = FUN_076fe870();
    if ((uVar4 & 1) == 0) {
      FUN_076f1130(*(undefined8 *)PTR_DAT_09f30688,0);
    }
  }
  return;
}


