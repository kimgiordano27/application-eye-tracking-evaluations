/*
FUNCTION_NAME: Oculus.Interaction.HandConfidenceVisual$$set_Hand
ENTRY_POINT: 0504c4ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;frame_behavior;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose
*/


/* WARNING: Removing unreachable block (ram,0x0504c604) */
/* WARNING: Removing unreachable block (ram,0x0504c620) */
/* WARNING: Removing unreachable block (ram,0x0504c718) */

void Oculus_Interaction_HandConfidenceVisual__set_Hand(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
code_r0x0504c4ec:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0504c4e0;
LAB_0504c4f8:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0504c5f8;
      lVar4 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_0504c5d0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto Oculus_Interaction_BecomeChildOfTargetOnStart__InjectOptionalKeepWorldPosition;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
Oculus_Interaction_BecomeChildOfTargetOnStart__InjectOptionalKeepWorldPosition:
    (*(code *)*puVar1)();
    FUN_0504b908();
    param_1 = *unaff_x20;
    param_3 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0504c4f8;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0504c4e0:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0504c4ec;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0504c5ec;
    }
  }
LAB_0504c5d0:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_0504c5ec:
  (*(code *)*puVar1)();
LAB_0504c5f8:
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* WARNING: Could not recover jumptable at 0x0504c6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x5a8))(plVar3,*(undefined8 *)(*plVar3 + 0x5b0));
  return;
}


