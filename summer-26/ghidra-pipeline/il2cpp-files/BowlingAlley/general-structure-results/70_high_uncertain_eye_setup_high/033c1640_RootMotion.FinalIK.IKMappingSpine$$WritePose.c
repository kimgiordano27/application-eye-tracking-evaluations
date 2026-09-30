/*
FUNCTION_NAME: RootMotion.FinalIK.IKMappingSpine$$WritePose
ENTRY_POINT: 033c1640
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void RootMotion_FinalIK_IKMappingSpine__WritePose(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 in_stack_00000008;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_072798f8);
  thunk_FUN_032e1da0(PTR_DAT_0727a148);
  thunk_FUN_032e1da0(PTR_DAT_072794f0);
  thunk_FUN_032e1da0(PTR_DAT_0727a150);
  thunk_FUN_032e1da0(PTR_DAT_0727a130);
  thunk_FUN_032e1da0(PTR_DAT_0727a158);
  thunk_FUN_032e1da0(PTR_DAT_0727a160);
  *(undefined1 *)(unaff_x21 + 0x7f4) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar2 = OVRPlugin_OVRP_1_58_0___cctor();
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb23f0(*(undefined8 *)PTR_DAT_0727a160,0);
      lVar3 = FUN_05dc47ec(0);
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a140);
      FUN_04bf4290();
      if (lVar3 != 0) {
        FUN_0498244c(lVar3,uVar4,*(undefined8 *)PTR_DAT_0727a150);
        return;
      }
    }
    else {
      lVar3 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar3 != 0) {
        uVar4 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727a158,*(undefined8 *)(lVar3 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb2a00(uVar4,0);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar2 = FUN_06be9890(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_0727a130 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          in_stack_00000008 = FUN_06bfc8dc(0);
          iVar1 = FUN_06bfc03c(&stack0x00000008,0);
          if (lVar3 == 0) goto LAB_033c1828;
          uVar4 = FUN_033c5300(lVar3,iVar1 + 1);
          FUN_06beab84(lVar3,uVar4,0);
        }
        return;
      }
    }
  }
LAB_033c1828:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


