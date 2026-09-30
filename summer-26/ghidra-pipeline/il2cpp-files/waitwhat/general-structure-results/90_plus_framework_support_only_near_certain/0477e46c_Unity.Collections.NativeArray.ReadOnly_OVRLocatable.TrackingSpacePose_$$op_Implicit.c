/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRLocatable.TrackingSpacePose>$$op_Implicit
ENTRY_POINT: 0477e46c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void Unity_Collections_NativeArray_ReadOnly<OVRLocatable_TrackingSpacePose>__op_Implicit
               (long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x25;
  long unaff_x29;
  
  while (plVar3 = (long *)FUN_04907a44(), plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if (param_1 == (long *)0x0) break;
    (**(code **)(*param_1 + 0x198))(param_1,uVar1 & 1,*(undefined8 *)(*param_1 + 0x1a0));
    plVar3 = (long *)FUN_04907a44();
    if (plVar3 == (long *)0x0) break;
    uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if ((uVar4 & 1) != 0) {
      plVar3 = (long *)FUN_04907a44();
      uVar5 = FUN_04907a44();
      uVar6 = FUN_04907a44();
      if (plVar3 == (long *)0x0) break;
      (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar5,uVar6,*(undefined8 *)(*plVar3 + 0x1b0));
    }
    unaff_w21 = unaff_w21 + 1;
    iVar2 = FUN_049079b8();
    if (iVar2 <= unaff_w21) {
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return;
      }
      goto 
      Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
      ;
    }
    if ((unaff_x19 == 0) || (param_1 = (long *)FUN_04907a44(), unaff_x20 == 0)) break;
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }

  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


