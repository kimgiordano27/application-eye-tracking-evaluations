/*
FUNCTION_NAME: Unity.Services.Multiplayer.ModuleRegistry$$.ctor
ENTRY_POINT: 077c3a54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void Unity_Services_Multiplayer_ModuleRegistry___ctor(ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  int in_stack_00000010;
  
  if ((param_1 & 1) == 0) {
    uVar8 = thunk_FUN_03af1434(PTR_DAT_08494cc0);
    uVar3 = thunk_FUN_03aed0c4(uVar8,*(undefined8 *)*unaff_x21);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_07fde6e8,0);
    }
  }
  iVar2 = in_stack_00000010;
  uVar8 = *unaff_x21;
  *(undefined8 *)(&stack0x00000000 + (long)in_stack_00000010 * 8) = uVar8;
  in_stack_00000010 = in_stack_00000010 + 1;
  __cxa_end_catch();
  if ((param_1 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *(long *)(unaff_x20 + 0x50);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar8,*(undefined8 *)(lVar7 + 0x28))
      ;
    }
    in_stack_00000010 = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(uVar8);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *(long *)(unaff_x20 + 0xd8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar5 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
  lVar7 = FUN_03522c98(8,uVar5,lVar7,uVar8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar1 = *(int *)(lVar7 + 0x8c);
  lVar6 = thunk_FUN_03af1434(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar6 = thunk_FUN_03af1434(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  if (iVar1 == *(int *)(*(long *)(lVar6 + 0xb8) + 0x20)) {
    if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_077bbc90();
    thunk_FUN_03af1434(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo);
    FUN_077c3668();
  }
  lVar6 = *(long *)(unaff_x20 + 0x50);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),lVar7,*(undefined8 *)(lVar6 + 0x28));
  }
  in_stack_00000010 = iVar2;
  uVar8 = thunk_FUN_03af1434(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(lVar7,uVar8);
}


