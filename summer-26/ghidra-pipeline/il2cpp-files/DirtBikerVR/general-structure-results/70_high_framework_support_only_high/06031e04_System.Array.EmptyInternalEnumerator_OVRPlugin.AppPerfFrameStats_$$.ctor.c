/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$.ctor
ENTRY_POINT: 06031e04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>___ctor(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  
  if ((*(ushort *)(unaff_x25 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_03ac73c0(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40();
  }
  thunk_FUN_03afed3c();
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_060316b0();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_0675ff58(uVar4,0);
    if (in_stack_00000008 == 0) goto LAB_06031fcc;
    lVar1 = FUN_0664f828(in_stack_00000008,*(undefined8 *)PTR_DAT_08496a48,uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090(lVar5);
    }
    if (lVar1 == 0) {
      FUN_06771ef4(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = thunk_FUN_03ac73c0(lVar1,lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(lVar1,lVar5);
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        System_Array_EmptyInternalEnumerator<OVRLocatable_TrackingSpacePose>___cctor();
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
  }
  lVar1 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar1 = FUN_066ebd18(0);
  if (lVar1 != 0) {
    FUN_05d5d9b4();
    return;
  }
LAB_06031fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


