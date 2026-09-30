/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$.ctor
ENTRY_POINT: 0561ef7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose___ctor
               (undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  byte bStack000000000000008c;
  long in_stack_000000d8;
  
  *(undefined8 *)(param_2 + 0x88) = *param_1;
  LeanTween__value();
  bStack000000000000008c = FUN_05656680();
  bStack000000000000008c = bStack000000000000008c & 1;
  if (*(int *)(*(long *)(unaff_x27 + 0x28) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_05455770(&stack0x0000008c,0);
  if (0xe < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
    LeanTween__value((undefined8 *)(unaff_x20 + 0x90),uVar2);
    if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
      *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)System_Func<ConstructorInfo,_int>_TypeInfo;
      LeanTween__value((undefined8 *)(unaff_x20 + 0x98));
      in_stack_00000028 = *unaff_x25;
      in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0x4c);
      in_stack_00000030 = 0xffffffffffffffff;
      uVar2 = FUN_0551e574(&stack0x00000028,0);
      if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0xa0) = uVar2;
        LeanTween__value((undefined8 *)(unaff_x20 + 0xa0),uVar2);
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
              uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x27 + 0x28),
                                         (long)&stack0x00000008 + 4);
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


