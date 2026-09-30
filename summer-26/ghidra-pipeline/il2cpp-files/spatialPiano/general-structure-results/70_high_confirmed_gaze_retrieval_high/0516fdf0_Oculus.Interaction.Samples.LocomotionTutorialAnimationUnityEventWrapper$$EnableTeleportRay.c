/*
FUNCTION_NAME: Oculus.Interaction.Samples.LocomotionTutorialAnimationUnityEventWrapper$$EnableTeleportRay
ENTRY_POINT: 0516fdf0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose
*/


undefined2
Oculus_Interaction_Samples_LocomotionTutorialAnimationUnityEventWrapper__EnableTeleportRay(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long unaff_x19;
  uint unaff_w20;
  undefined2 uStack000000000000000c;
  
  uVar2 = FUN_0516f8d4();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x80);
    iVar1 = *(int *)(unaff_x19 + 0x8c);
    FUN_02a7da48(uVar3);
    FUN_02e4c5e4(uVar3,(long)iVar1);
    uVar3 = FUN_0516f348();
    uVar4 = thunk_FUN_02f6ef30(System_Collections_Generic_Dictionary<int,_HierarchyNode>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,uVar4);
  }
  if (*(int *)(*(long *)
                System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_051a13d0(0x66 < unaff_w20,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x10) = 10;
  uVar5 = 8;
  if ((*(int *)(unaff_x19 + 0x28) == 0) && (uVar5 = 0xc, *(char *)(unaff_x19 + 0x71) != '\0')) {
    uVar5 = 8;
  }
  *(undefined4 *)(unaff_x19 + 0x24) = uVar5;
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
  }
  uStack000000000000000c = 0;
  FUN_03e15c2c(&stack0x0000000c,0x66 < unaff_w20,*(undefined8 *)PTR_DAT_067d1728);
  return uStack000000000000000c;
}


