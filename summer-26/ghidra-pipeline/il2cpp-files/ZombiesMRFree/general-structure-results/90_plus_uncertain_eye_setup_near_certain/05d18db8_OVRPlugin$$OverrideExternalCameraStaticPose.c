/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 05d18db8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  float fVar5;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  FUN_02fe925c(PTR_DAT_06fb5c00);
  *(undefined1 *)(unaff_x22 + 0x894) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  if (unaff_x19 != 0) {
    lVar1 = FUN_068f5d7c();
    if (DAT_0738e666 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e666 = '\x01';
    }
    if (lVar1 != 0) {
      fVar5 = *(float *)(unaff_x20 + 0x28);
      lVar3 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      FUN_06904aa4(fVar5 * *(float *)(lVar3 + 0xc),fVar5 * *(float *)(lVar3 + 0x10),
                   fVar5 * *(float *)(lVar3 + 0x14),lVar1,0);
      uVar2 = FUN_068f5d7c();
      uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x14);
      uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
      FUN_05cc3dc8(&stack0x00000020);
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = (undefined4)uStack0000000000000034;
      in_stack_00000058 = SUB84(uStack0000000000000034,4);
      in_stack_00000050 = uStack0000000000000030;
      FUN_05cb1b24(uVar2,&stack0x00000040,0,0);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if (lVar1 != 0) {
        lVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb5c00);
        FUN_05d18ef8(lVar3,lVar1);
        plVar4 = (long *)(unaff_x19 + 0x48);
        *plVar4 = lVar3;
        thunk_FUN_03048534(plVar4,lVar3);
        *(bool *)(unaff_x19 + 0x38) = *plVar4 != 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


