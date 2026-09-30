/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$OnEnable
ENTRY_POINT: 014afe04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;frame_behavior;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014aff48) */
/* WARNING: Removing unreachable block (ram,0x014b010c) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__OnEnable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar7;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w27;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 014afe0c to 015afe63 has its CatchHandler @ 014b03c8 */
  lVar7 = *unaff_x29;
  FUN_01299bc0(in_stack_00000050,*unaff_x22,&stack0x00000010,*unaff_x23);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_02089b24(lVar7,in_stack_00000010,0);
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0129de0c(in_stack_00000050,*unaff_x22,*(undefined8 *)StringLiteral_587);
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = FUN_012998a8(in_stack_00000050,*(undefined8 *)PTR_DAT_033f0390);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01311764(lVar7,&stack0x00000010,*(undefined8 *)PTR_DAT_033f41b0);
  puVar3 = Method_System_Reflection_Emit_TypeBuilder_get_UnderlyingSystemType__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__;
  puVar1 = UnityEngine_EventSystems_IDeselectHandler_TypeInfo;
                    /* try { // try from 014afe94 to 015afebf has its CatchHandler @ 014b03c0 */
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000020;
  while (uVar4 = FUN_012c2b80(&stack0x00000030,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
    uVar5 = FUN_00bc3fa8(&stack0x00000030,*(undefined8 *)puVar1);
    plVar6 = (long *)*unaff_x29;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 014afef4 to 015aff03 has its CatchHandler @ 014b039c */
    FUN_01299bc0(in_stack_00000050,uVar5,&stack0x00000010,*unaff_x23);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 014aff10 to 015aff13 has its CatchHandler @ 014b03ac */
    FUN_0200a0ac(lVar7,uVar5,in_stack_00000010,0);
  }
  if (unaff_w27 < 0) {
    FUN_012c2b7c(&stack0x00000030,
                 *(undefined8 *)Method_System_Collections_Hashtable_HashtableEnumerator_get_Key__);
  }
                    /* try { // try from 014aff44 to 015aff4f has its CatchHandler @ 014b0398 */
  uVar5 = (**(code **)(*unaff_x20 + 0x188))();
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  puVar1 = System_SystemException_TypeInfo;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 014aff84 to 015aff8f has its CatchHandler @ 014b0394 */
  FUN_012d1810(lVar7);
                    /* try { // try from 014affa8 to 015affaf has its CatchHandler @ 014b0398 */
  if (*(int *)(*(long *)Method_System_IO_BinaryReader_ReadString__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 014affb4 to 015affbb has its CatchHandler @ 014b0384 */
                    /* try { // try from 014affc0 to 015affc7 has its CatchHandler @ 014b0380 */
  FUN_014e0a9c(uVar5,lVar7,0);
  plVar6 = (long *)*unaff_x29;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 014affd8 to 015affdf has its CatchHandler @ 014b037c */
  (**(code **)(*plVar6 + 0x2b8))(plVar6,0xffffffff,*(undefined8 *)(*plVar6 + 0x2c0));
  plVar6 = (long *)*unaff_x29;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
                    /* try { // try from 014afff8 to 015afffb has its CatchHandler @ 014b0370 */
  uVar4 = thunk_FUN_015fe514(uVar5,*(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                             ,0);
  if ((uVar4 & 1) == 0) {
    plVar6 = (long *)*unaff_x29;
                    /* try { // try from 014b0010 to 015b0033 has its CatchHandler @ 014b038c */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar4 = thunk_FUN_015fe514(uVar5,*(undefined8 *)StringLiteral_7622,0);
    if ((uVar4 & 1) == 0) goto LAB_014af9d0;
  }
  plVar6 = (long *)*unaff_x29;
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_016f4a88(lVar7);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = (**(code **)(*plVar6 + 0x2f8))(plVar6,lVar7,*unaff_x29,*(undefined8 *)(*plVar6 + 0x300));
  lVar7 = FUN_014df900(uVar5,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000028 = FUN_017e7d88(lVar7,0);
  uVar4 = FUN_016a1310(&stack0x00000028,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_010bbddc(unaff_x19 + 2,&stack0x00000028);
    return;
  }
  FUN_016a13e0(&stack0x00000028,0);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_014af9d0:
  plVar6 = (long *)unaff_x20[0x1d];
  if (plVar6 == (long *)0x0) {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f27fc(lVar7);
    FUN_012345d4();
  }
  else {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f4a88(lVar7);
    uVar5 = (**(code **)(*plVar6 + 0x2d8))
                      (plVar6,lVar7,unaff_x20[0x1d],*(undefined8 *)(*plVar6 + 0x2e0));
    lVar7 = FUN_014df900(uVar5,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000028 = FUN_017e7d88(lVar7,0);
    uVar4 = FUN_016a1310(&stack0x00000028,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2,&stack0x00000028);
      return;
    }
    FUN_016a13e0(&stack0x00000028,0);
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(unaff_x19 + 2,0);
  return;
}


