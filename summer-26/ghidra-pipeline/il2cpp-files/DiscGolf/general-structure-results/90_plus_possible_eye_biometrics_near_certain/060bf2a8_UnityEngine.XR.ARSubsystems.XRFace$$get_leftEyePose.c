/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose
ENTRY_POINT: 060bf2a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 149
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x060bf3e4) */
/* WARNING: Removing unreachable block (ram,0x060bf474) */

void UnityEngine_XR_ARSubsystems_XRFace__get_leftEyePose
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong in_stack_00000018;
  long *in_stack_00000028;
  
code_r0x060bf2a8:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_060bf29c;
LAB_060bf2b4:
  puVar2 = (undefined8 *)FUN_02dd004c(unaff_x23,param_3,0);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    plVar1 = in_stack_00000028;
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000028 == (long *)0x0) goto LAB_060bf3d8;
      lVar4 = *in_stack_00000028;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_060bf3b0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *in_stack_00000028;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_060bf334;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000028,*unaff_x25,0);
LAB_060bf334:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e935dc();
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_1 = *in_stack_00000028;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x23 = in_stack_00000028;
    if (in_x9 == 0) goto LAB_060bf2b4;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_060bf29c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x060bf2a8;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_060bf3cc;
    }
  }
LAB_060bf3b0:
  puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000028,*(long *)PTR_DAT_069fbff0,0);
LAB_060bf3cc:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_060bf3d8:
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  LeanTween__value();
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x18);
  puVar2 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(unaff_x20 + 0x18) & 0xff) != 0) {
    puVar2 = &stack0x00000018;
  }
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *puVar2;
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    puVar2 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *puVar2;
  return;
}


