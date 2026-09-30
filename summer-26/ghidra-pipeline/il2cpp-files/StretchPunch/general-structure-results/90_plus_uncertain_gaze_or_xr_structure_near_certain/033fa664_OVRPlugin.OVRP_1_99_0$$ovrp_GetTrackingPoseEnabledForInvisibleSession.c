/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 033fa664
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fa764) */

void OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000050;
  
  do {
    if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
       (uVar3 = FUN_02b258e8(*(long *)(unaff_x20 + 0x38),unaff_x21,&stack0x00000028,*unaff_x26),
       (uVar3 & 1) == 0)) {
      in_stack_00000020 = 0;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_02b258e8(*(long *)(unaff_x19 + 0x38),unaff_x21,&stack0x00000020,*unaff_x26);
      }
      lVar2 = in_stack_00000028;
      lVar1 = in_stack_00000020;
      if (in_stack_00000028 != in_stack_00000020) {
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar5 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_033fa708;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01dde8fc(unaff_x21,*unaff_x25,0);
LAB_033fa708:
        (*(code *)*puVar4)(unaff_x21,lVar2,lVar1,1,puVar4[1]);
      }
    }
    uVar3 = FUN_02c52b88(&stack0x00000040,*unaff_x24);
    if ((uVar3 & 1) == 0) {
      FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
      return;
    }
    in_stack_00000028 = 0;
    unaff_x21 = in_stack_00000050;
  } while( true );
}


