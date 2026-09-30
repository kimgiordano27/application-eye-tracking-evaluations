/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 0561f02c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__Invoke
               (undefined8 param_1)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  long in_stack_000000d8;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x20 + 0xa0) = param_1;
    LeanTween__value((undefined8 *)(unaff_x20 + 0xa0),param_1);
    if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0xa8) =
           *(undefined8 *)System_Func<DataObject,_SessionProperty>_TypeInfo;
      LeanTween__value((undefined8 *)(unaff_x20 + 0xa8));
      in_stack_00000010 = *unaff_x24;
      in_stack_00000020 = *(undefined4 *)(unaff_x19 + 0x50);
      in_stack_00000018 = 0xffffffffffffffff;
      uVar2 = FUN_0551e574(&stack0x00000010,0);
      if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0xb0) = uVar2;
        LeanTween__value((undefined8 *)(unaff_x20 + 0xb0),uVar2);
        puVar1 = System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo;
        if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)PTR_DAT_06a01850;
          LeanTween__value((undefined8 *)(unaff_x20 + 0xb8));
          in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x19 + 0x54);
          uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x27 + 0x28),(long)&stack0x00000008 + 4);
          uVar2 = FUN_0536388c(*(undefined8 *)puVar1,uVar2,0);
          if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
            LeanTween__value();
            FUN_0536dde4();
            if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8) {
              return;
            }
            goto LAB_0561f184;
          }
        }
      }
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_0561f184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


