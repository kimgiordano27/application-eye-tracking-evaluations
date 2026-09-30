/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity.<TryToLoadUserAvatar>d__22$$System.IDisposable.Dispose
ENTRY_POINT: 06e79b14
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_Shared_AvatarEntity_<TryToLoadUserAvatar>d__22__System_IDisposable_Dispose
               (long param_1)

{
  long lVar1;
  long in_x9;
  uint in_w10;
  int in_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar3 = in_w10;
    if (-1 < in_w11) {
      uVar2 = *(undefined8 *)(in_x9 + 0x28);
      uVar4 = *(undefined4 *)(in_x9 + 0x30);
      uVar5 = *(undefined4 *)(in_x9 + 0x34);
      uVar6 = *(undefined4 *)(in_x9 + 0x38);
      uVar7 = *(undefined4 *)(in_x9 + 0x3c);
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      FUN_05816ce8(uVar4,uVar5,uVar6,uVar7,&stack0x00000008,uVar2,
                   *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
      *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      uVar3 = unaff_w23;
LAB_06e79b90:
      return uVar3 < unaff_w22;
    }
    if (unaff_w22 <= uVar3) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_06e79b90;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = uVar3 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    in_x9 = lVar1 + (long)(int)uVar3 * 0x20;
    in_w11 = *(int *)(in_x9 + 0x20);
    in_w10 = uVar3 + 1;
    unaff_w23 = uVar3;
  } while( true );
}


