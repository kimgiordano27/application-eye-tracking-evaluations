/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStatePose
ENTRY_POINT: 0697aa98
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStatePose(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *unaff_x24;
  long lStack0000000000000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  
  lVar6 = *param_1;
  lStack0000000000000008 = lVar6;
  __cxa_end_catch();
  plVar1 = (long *)thunk_FUN_03ac73c0(*in_stack_00000010,*unaff_x24);
  *in_stack_00000018 = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0697a9e0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(plVar1,*unaff_x24,0);
LAB_0697a9e0:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8(lVar6);
}


