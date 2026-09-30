/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03ec0e0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor
               (long param_1,long *param_2,ulong param_3)

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
  
  while( true ) {
    (**(code **)(param_1 + 0x198))(param_2,param_3,*(undefined8 *)(param_1 + 0x1a0));
    plVar3 = (long *)FUN_04038d38();
    if (plVar3 == (long *)0x0) break;
    uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if ((uVar4 & 1) != 0) {
      plVar3 = (long *)FUN_04038d38();
      uVar5 = FUN_04038d38();
      uVar6 = FUN_04038d38();
      if (plVar3 == (long *)0x0) break;
      (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar5,uVar6,*(undefined8 *)(*plVar3 + 0x1b0));
    }
    unaff_w21 = unaff_w21 + 1;
    iVar2 = FUN_04038cb0();
    if (iVar2 <= unaff_w21) {
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (((unaff_x19 == 0) || (param_2 = (long *)FUN_04038d38(), unaff_x20 == 0)) ||
       (plVar3 = (long *)FUN_04038d38(), plVar3 == (long *)0x0)) break;
    uVar1 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if (param_2 == (long *)0x0) break;
    param_1 = *param_2;
    param_3 = (ulong)(uVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


