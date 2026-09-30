/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$UnsafeElementAt
ENTRY_POINT: 0477e508
PROGRAM: waitwhat-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__UnsafeElementAt
               (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  do {
    (**(code **)(*unaff_x23 + 0x1a8))
              (unaff_x23,unaff_x24,param_1,*(undefined8 *)(*unaff_x23 + 0x1b0));
    do {
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
      if (((unaff_x19 == 0) || (plVar3 = (long *)FUN_04907a44(), unaff_x20 == 0)) ||
         (plVar4 = (long *)FUN_04907a44(), plVar4 == (long *)0x0)) goto LAB_0477e570;
      uVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (plVar3 == (long *)0x0) goto LAB_0477e570;
      (**(code **)(*plVar3 + 0x198))(plVar3,uVar1 & 1,*(undefined8 *)(*plVar3 + 0x1a0));
      plVar3 = (long *)FUN_04907a44();
      if (plVar3 == (long *)0x0) goto LAB_0477e570;
      uVar5 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    } while ((uVar5 & 1) == 0);
    unaff_x23 = (long *)FUN_04907a44();
    unaff_x24 = FUN_04907a44();
    param_1 = FUN_04907a44();
  } while (unaff_x23 != (long *)0x0);
LAB_0477e570:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }

  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


