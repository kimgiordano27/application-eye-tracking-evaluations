/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$UnsafeElementAt
ENTRY_POINT: 03ec0e84
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__UnsafeElementAt
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x25;
  long unaff_x29;
  
  while( true ) {
    (**(code **)(param_1 + 0x1a8))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x1b0));
    do {
                    /* try { // try from 03ec0e90 to 03fc0e93 has its CatchHandler @ 03ec0ea0 */
                    /* try { // try from 03ec0e94 to 03fc0ebf has its CatchHandler @ 03ec0b84 */
      unaff_w21 = unaff_w21 + 1;
      iVar2 = FUN_04038cb0();
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03ec0e90 with catch @ 03ec0ea0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03ec0cec with catch @ 03ec0ea4
                        */
      if (iVar2 <= unaff_w21) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03ec0d2c with catch @ 03ec0ea8
                       catch(type#1 @ 0638da48) { ... } // from try @ 03ec0de8 with catch @ 03ec0ea8
                        */
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (((unaff_x19 == 0) || (plVar3 = (long *)FUN_04038d38(), unaff_x20 == 0)) ||
         (plVar4 = (long *)FUN_04038d38(), plVar4 == (long *)0x0)) goto LAB_03ec0edc;
      uVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (plVar3 == (long *)0x0) goto LAB_03ec0edc;
      (**(code **)(*plVar3 + 0x198))(plVar3,uVar1 & 1,*(undefined8 *)(*plVar3 + 0x1a0));
      plVar3 = (long *)FUN_04038d38();
      if (plVar3 == (long *)0x0) goto LAB_03ec0edc;
      uVar5 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    } while ((uVar5 & 1) == 0);
    param_2 = (long *)FUN_04038d38();
    param_3 = FUN_04038d38();
    param_4 = FUN_04038d38();
    if (param_2 == (long *)0x0) break;
    param_1 = *param_2;
  }
LAB_03ec0edc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


