/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 033fa6e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fa764) */

void OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000050;
  
code_r0x033fa6e0:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_033fa6d4;
  do {
    puVar2 = (undefined8 *)FUN_01dde8fc(unaff_x21,param_3,0);
    while( true ) {
      (*(code *)*puVar2)(unaff_x21,unaff_x23,unaff_x22,1,puVar2[1]);
      do {
        do {
          uVar1 = FUN_02c52b88(&stack0x00000040,*unaff_x24);
          unaff_x21 = in_stack_00000050;
          if ((uVar1 & 1) == 0) {
            FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
            return;
          }
          in_stack_00000028 = 0;
        } while (((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x38) != 0)) &&
                (uVar1 = FUN_02b258e8(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028
                                      ,*unaff_x26), (uVar1 & 1) != 0));
        in_stack_00000020 = 0;
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_02b258e8(*(long *)(unaff_x19 + 0x38),unaff_x21,&stack0x00000020,*unaff_x26);
        }
      } while (in_stack_00000028 == in_stack_00000020);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      param_1 = *unaff_x21;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x22 = in_stack_00000020;
      unaff_x23 = in_stack_00000028;
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_033fa6d4:
      if (*(long *)(in_x10 + -2) != param_3) goto code_r0x033fa6e0;
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    }
  } while( true );
}


