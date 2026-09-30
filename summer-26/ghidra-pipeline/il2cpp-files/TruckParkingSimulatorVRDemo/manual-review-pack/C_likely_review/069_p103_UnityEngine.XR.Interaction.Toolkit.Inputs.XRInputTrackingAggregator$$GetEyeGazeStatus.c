/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 025c7f84
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int iVar10;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  thunk_FUN_011f4b58(PTR_DAT_02ae3aa0);
  thunk_FUN_011f4b58(PTR_DAT_02ae3d58);
  thunk_FUN_011f4b58(PTR_DAT_02ab7b60);
  *(undefined1 *)(unaff_x22 + 0xdb6) = 1;
  puVar4 = PTR_DAT_02ae3d58;
  puVar3 = PTR_DAT_02ae3d38;
  puVar2 = PTR_DAT_02ac3968;
  puVar1 = PTR_DAT_02ab7b60;
  in_stack_00000028 = unaff_x20[0x10];
  iVar9 = (int)((ulong)in_stack_00000028 >> 0x20);
  if (0 < iVar9) {
    iVar10 = 0;
    while( true ) {
      in_stack_00000020 = unaff_x20[0xf];
      FUN_01e5b570(&stack0x00000008,&stack0x00000020,iVar10,*(undefined8 *)puVar4);
      uVar7 = in_stack_00000008;
      uVar5 = FUN_0251c700(*(undefined8 *)(*(long *)puVar2 + 0xb8),in_stack_00000008,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_011ea084(*(long *)puVar1);
      }
      uVar6 = FUN_022c3ebc(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        in_stack_00000008 = *unaff_x20;
        in_stack_00000010 = unaff_x20[1];
        uVar5 = thunk_FUN_011f4b58(PTR_DAT_02adf038);
        uVar5 = thunk_FUN_01268a94(uVar5,&stack0x00000008);
        uVar8 = thunk_FUN_011f4b58(PTR_DAT_02ae3d60);
        uVar7 = FUN_0215aa94(uVar8,uVar7,uVar5);
        thunk_FUN_011f4b58(PTR_DAT_02ac3708);
        uVar5 = thunk_FUN_01268e40();
        FUN_022ad36c(uVar5,uVar7,0);
        uVar7 = thunk_FUN_011f4b58(PTR_DAT_02ae3d68);
                    /* WARNING: Subroutine does not return */
        FUN_012195a4(uVar5,uVar7);
      }
      uVar7 = FUN_022d5d6c(uVar5,0);
      in_stack_00000028 = unaff_x20[0x10];
      in_stack_00000020 = unaff_x20[0xf];
      FUN_01e5b570(&stack0x00000008,&stack0x00000020,iVar10,*(undefined8 *)puVar4);
      if (0 < (int)((ulong)in_stack_00000018 >> 0x20)) {
        FUN_017b6bb8(uVar7,in_stack_00000010,in_stack_00000018,*(undefined8 *)puVar3);
      }
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      (**(code **)(*unaff_x21 + 0x238))();
      if (iVar9 + -1 == iVar10) break;
      in_stack_00000028 = unaff_x20[0x10];
      iVar10 = iVar10 + 1;
    }
  }
  return;
}


