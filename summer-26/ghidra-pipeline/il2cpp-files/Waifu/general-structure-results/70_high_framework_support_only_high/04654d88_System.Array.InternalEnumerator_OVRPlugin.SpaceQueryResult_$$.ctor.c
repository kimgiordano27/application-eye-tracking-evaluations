/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04654d88
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  int *unaff_x20;
  int iVar4;
  
  plVar1 = (long *)FUN_03398a84(*(undefined8 *)(param_1 + 0x6e0));
  FUN_0667dab4(plVar1,0);
  if (plVar1 != (long *)0x0) {
    FUN_06677200(plVar1,0x28,0);
    iVar4 = 0;
    while( true ) {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0338f618();
      }
      if (*unaff_x20 <= iVar4) break;
      if (iVar4 != 0) {
        FUN_06677200(plVar1,0x2c,0);
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0338f618();
      }
      plVar2 = (long *)FUN_04653658();
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
        FUN_066772ac(plVar1,uVar3);
      }
      iVar4 = iVar4 + 1;
    }
    uVar3 = FUN_06677200(plVar1,0x29,0);
                    /* WARNING: Could not recover jumptable at 0x04654e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x168))(uVar3,*(undefined8 *)(*plVar1 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


