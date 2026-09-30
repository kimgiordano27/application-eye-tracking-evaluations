/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 0566ee2c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0566f058) */

void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor(code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int iVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  plVar2 = (long *)(*param_1)();
  puVar1 = PTR_DAT_091a1508;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar8 = 0;
  do {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0566ee9c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar2,*(long *)puVar1,0);
LAB_0566ee9c:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_0566f000;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0566ef20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar2,lVar4,0);
LAB_0566ef20:
    (*(code *)*puVar3)(&stack0x00000030,plVar2,puVar3[1]);
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000080 = in_stack_00000050;
    if (iVar8 == 0) {
      *(undefined8 *)(unaff_x21 + 0x28) = in_stack_00000050;
      *(undefined8 *)(unaff_x21 + 0x10) = in_stack_00000038;
      *(undefined8 *)(unaff_x21 + 8) = in_stack_00000030;
      *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000048;
      *(undefined8 *)(unaff_x21 + 0x18) = in_stack_00000040;
      thunk_FUN_03d1023c(unaff_x21 + 0x20,0);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 0x30);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(uint *)(lVar4 + 0x18) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar4 = lVar4 + (long)(int)(iVar8 - 1U) * 0x28;
      *(undefined8 *)(lVar4 + 0x40) = in_stack_00000050;
      *(undefined8 *)(lVar4 + 0x28) = in_stack_00000038;
      *(undefined8 *)(lVar4 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar4 + 0x38) = in_stack_00000048;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_00000040;
      thunk_FUN_03d1023c(lVar4 + 0x38,0);
    }
    iVar8 = iVar8 + 1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0566f01c;
    }
  }
LAB_0566f000:
  puVar3 = (undefined8 *)FUN_03d8f370(plVar2,*unaff_x23,0);
LAB_0566f01c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


