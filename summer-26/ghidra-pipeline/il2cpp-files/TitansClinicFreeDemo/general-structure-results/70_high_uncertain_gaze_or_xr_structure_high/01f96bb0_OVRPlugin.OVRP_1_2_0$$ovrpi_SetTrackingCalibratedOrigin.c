/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 01f96bb0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(void)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  while (in_w8 < in_w9) {
    plVar1 = *(long **)(unaff_x23 + (long)(int)in_w8 * 8 + 0x20);
    if (plVar1 == (long *)0x0) {
LAB_01f96cf4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
    if (unaff_x19 == 0) goto LAB_01f96cf4;
    if (*(uint *)(unaff_x19 + 0x18) <= in_w8) break;
    uVar4 = *(undefined8 *)(unaff_x19 + (long)(int)in_w8 * 8 + 0x20);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f801dc(uVar2,uVar4,0);
    if ((uVar3 & 1) != 0) goto LAB_01f96cb8;
    in_w8 = in_w8 + 1;
    if (unaff_w26 == in_w8) {
      do {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar3 = FUN_01f801dc(in_stack_00000008,0,0);
        if ((uVar3 & 1) == 0) {
LAB_01f96c94:
          uVar3 = FUN_01ee5550(unaff_x22,0,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
            thunk_FUN_01279b34(PTR_DAT_027bc458);
            uVar4 = thunk_FUN_0124bba8();
            FUN_01ee31d4(uVar4,uVar2,0);
            uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1c70);
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar4,uVar2);
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_01f96cf8;
          unaff_x22 = *unaff_x29;
        }
        else {
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_01f96cf8;
          plVar1 = (long *)*unaff_x29;
          if (plVar1 == (long *)0x0) goto LAB_01f96cf4;
          uVar2 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01220628(*unaff_x28);
          }
          uVar3 = FUN_01f801dc(in_stack_00000008,uVar2,0);
          if ((uVar3 & 1) == 0) goto LAB_01f96c94;
        }
LAB_01f96cb8:
        unaff_w27 = unaff_w27 + 1;
        if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w27) {
          return unaff_x22;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_01f96cf8;
        unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w27 * 8 + 0x20);
        plVar1 = (long *)*unaff_x29;
        if (plVar1 == (long *)0x0) goto LAB_01f96cf4;
        unaff_x23 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      } while ((int)unaff_w26 < 1);
      if (unaff_x23 == 0) goto LAB_01f96cf4;
      in_w8 = 0;
    }
    in_w9 = *(uint *)(unaff_x23 + 0x18);
  }
LAB_01f96cf8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


