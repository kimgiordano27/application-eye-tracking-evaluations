/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$ChangePhaseOfInteraction
ENTRY_POINT: 02031924
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_InputSystem_InputActionState__ChangePhaseOfInteraction
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar9 = *(long **)(unaff_x19 + 0x5b0);
  FUN_01320e50(param_2,*param_1);
  puVar1 = PTR_DAT_033eb8c0;
  iVar3 = 0;
  while( true ) {
    if ((DAT_037809fe & 1) == 0) {
      thunk_FUN_00d48444(puVar1);
      DAT_037809fe = 1;
    }
    iVar2 = 0;
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x18);
    }
    if (iVar2 <= iVar3) break;
    lVar4 = FUN_0202c368();
    if (lVar4 == 0) goto LAB_02031b44;
    iVar2 = *(int *)(lVar4 + 0x10);
    if (iVar2 == 9) {
      if (unaff_x24 == (long *)0x0) goto LAB_02031b44;
      FUN_0160cd0c();
    }
    else if (iVar2 == 0xd) {
      if (unaff_x24 == (long *)0x0) goto LAB_02031b44;
      iVar2 = FUN_0160b5d0();
      if (0 < iVar2) {
        FUN_00ac20f0(param_2,*(undefined4 *)(unaff_x23 + 0x18),*(undefined8 *)StringLiteral_4747);
        (**(code **)(*unaff_x24 + 0x168))();
        FUN_00ac1158();
        FUN_0160bae4();
      }
      iVar2 = *(int *)(lVar4 + 0x2c);
      if ((unaff_x21 != (long *)0x0) && (-1 < iVar2)) {
        in_stack_00000018._4_4_ = iVar2;
        thunk_FUN_00d61fa0(*plVar9,(long)&stack0x00000018 + 4);
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x308))();
        if (plVar5 == (long *)0x0) goto LAB_02031b44;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*plVar9 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        piVar6 = (int *)thunk_FUN_00d624a0();
        iVar2 = *piVar6;
      }
      FUN_00ac20f0(param_2,-5 - iVar2,*(undefined8 *)StringLiteral_4747);
    }
    else {
      if (iVar2 != 0xc) {
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar7 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar8 = thunk_FUN_00d48444(Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_HasValue__
                                  );
        FUN_016f2f28(uVar7,uVar8,0);
        uVar8 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_131__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,uVar8);
      }
      if (unaff_x24 == (long *)0x0) goto LAB_02031b44;
      FUN_0160c430();
    }
    iVar3 = iVar3 + 1;
  }
  if (unaff_x24 != (long *)0x0) {
    iVar3 = FUN_0160b5d0();
    if (0 < iVar3) {
      FUN_00ac20f0(param_2,*(undefined4 *)(unaff_x23 + 0x18),*(undefined8 *)StringLiteral_4747);
      (**(code **)(*unaff_x24 + 0x168))();
      FUN_00ac1158();
    }
    FUN_0160eb0c();
    *(undefined8 *)(in_stack_00000008 + 0x18) = param_2;
    *(undefined8 *)(in_stack_00000008 + 0x20) = in_stack_00000010;
    *(long *)(in_stack_00000008 + 0x10) = unaff_x23;
    return;
  }
LAB_02031b44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


