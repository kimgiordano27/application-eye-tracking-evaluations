/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_54
ENTRY_POINT: 067ff5d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_54
               (long param_1,undefined4 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((DAT_076e0c37 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727fc10);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                      );
    DAT_076e0c37 = 1;
  }
  in_stack_00000038 = 0;
  if (*(long *)(param_1 + 200) == 0) goto LAB_067ff7e0;
  uVar3 = FUN_05188410(*(long *)(param_1 + 200),param_2,
                       *(undefined8 *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>__ctor__
                      );
  puVar1 = 
  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
  ;
  if ((uVar3 & 1) != 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
LAB_067ff6ec:
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_06c51cc8(0,0,0,0,0,&stack0x00000020,0);
    if (*(int *)(*(long *)PTR_DAT_0727fc10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06c51a84(0);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__
                              );
    FUN_06c51f88(0x3f800000,uVar4,0);
    lVar7 = *(long *)(param_1 + 200);
    in_stack_00000038 = uVar4;
  }
  else {
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar2 = FUN_06c525ac(param_2,0);
    if (iVar2 == 0) goto LAB_067ff6ec;
    if ((param_4 & 1) == 0) {
      return;
    }
    uVar6 = 8;
    if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
      uVar6 = 10;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_06c525e8(param_2,uVar6,&stack0x00000038,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 200);
  }
  uVar4 = in_stack_00000038;
  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                            );
  FUN_067f6cd4(uVar5,param_2,param_1,uVar4);
  if (lVar7 != 0) {
    FUN_0518821c(lVar7,param_2,uVar5,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                );
    return;
  }
LAB_067ff7e0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


