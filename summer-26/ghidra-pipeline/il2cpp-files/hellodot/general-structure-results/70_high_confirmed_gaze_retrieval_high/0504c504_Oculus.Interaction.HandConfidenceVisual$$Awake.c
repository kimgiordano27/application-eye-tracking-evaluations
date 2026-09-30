/*
FUNCTION_NAME: Oculus.Interaction.HandConfidenceVisual$$Awake
ENTRY_POINT: 0504c504
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;frame_behavior;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose
*/


/* WARNING: Removing unreachable block (ram,0x0504c604) */
/* WARNING: Removing unreachable block (ram,0x0504c620) */
/* WARNING: Removing unreachable block (ram,0x0504c718) */

void Oculus_Interaction_HandConfidenceVisual__Awake(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
FUN_0504c514:
  uVar1 = (*(code *)*param_1)();
  if ((uVar1 & 1) != 0) {
    lVar4 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto Oculus_Interaction_BecomeChildOfTargetOnStart__InjectOptionalKeepWorldPosition;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
Oculus_Interaction_BecomeChildOfTargetOnStart__InjectOptionalKeepWorldPosition:
    (*(code *)*puVar2)();
    FUN_0504b908();
    lVar4 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_0504c514;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_02ce0a7c();
    goto FUN_0504c514;
  }
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0504c5ec;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0504c5ec:
    (*(code *)*puVar2)();
  }
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0504c6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x5a8))(plVar3,*(undefined8 *)(*plVar3 + 0x5b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


