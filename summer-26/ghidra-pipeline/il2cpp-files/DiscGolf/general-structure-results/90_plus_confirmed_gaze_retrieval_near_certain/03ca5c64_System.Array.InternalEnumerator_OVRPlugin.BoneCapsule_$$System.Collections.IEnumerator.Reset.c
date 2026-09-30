/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03ca5c64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 169
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03ca5d3c) */

void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000018;
  
LAB_03ca5c74:
  do {
    (*(code *)*param_1)(unaff_x21,param_1[1]);
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_03ca5820();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03ca5be0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*unaff_x23,0);
LAB_03ca5be0:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_03ca5cf0;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x21 = in_stack_00000018;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          param_1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03ca5c74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,lVar2,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext;
    }
  }
LAB_03ca5cf0:
  puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*unaff_x22,0);
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


