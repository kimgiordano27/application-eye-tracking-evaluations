/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 05e51f00
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>___ctor(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    puVar1 = (undefined8 *)(param_1 + unaff_x22);
    uStack0000000000000010 = puVar1[2];
    uStack0000000000000008 = puVar1[1];
    uStack0000000000000000 = *puVar1;
    if (unaff_x21 == 0) {
LAB_05e51f9c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000020 = uStack0000000000000000;
    in_stack_00000028 = uStack0000000000000008;
    in_stack_00000030 = uStack0000000000000010;
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) goto LAB_05e51f9c;
      if ((uint)unaff_x23 < *(uint *)(lVar3 + 0x18)) {
        puVar1 = (undefined8 *)(lVar3 + unaff_x22);
        uVar5 = puVar1[1];
        uVar4 = *puVar1;
        unaff_x19[2] = puVar1[2];
        unaff_x19[1] = uVar5;
        *unaff_x19 = uVar4;
        return;
      }
      goto LAB_05e51fa0;
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x18;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      return;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_05e51f9c;
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
LAB_05e51fa0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  } while( true );
}


