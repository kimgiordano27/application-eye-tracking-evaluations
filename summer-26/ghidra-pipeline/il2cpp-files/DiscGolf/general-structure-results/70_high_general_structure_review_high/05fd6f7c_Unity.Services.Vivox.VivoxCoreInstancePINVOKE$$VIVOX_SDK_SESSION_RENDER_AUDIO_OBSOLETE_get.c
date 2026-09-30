/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VIVOX_SDK_SESSION_RENDER_AUDIO_OBSOLETE_get
ENTRY_POINT: 05fd6f7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VIVOX_SDK_SESSION_RENDER_AUDIO_OBSOLETE_get
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  *(undefined1 *)(unaff_x26 + 0x854) = 1;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (unaff_w24 == 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((unaff_x22 != 0) && (lVar1 = FUN_05fc7b04(), lVar1 != 0)) {
      lVar2 = *unaff_x20;
      FUN_05f87d0c(&stack0x00000028,*(undefined8 *)(lVar1 + 0xb8),0);
      if (lVar2 != 0) {
        FUN_0637df1c(lVar2,unaff_w19);
        return;
      }
    }
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (unaff_w24 != 1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0f5d8);
      FUN_0297e1b4();
      uVar3 = thunk_FUN_02dfd288(Method_UnityEngine_AndroidJavaObject_Call<double>__);
      uVar3 = thunk_FUN_02dd2d7c(uVar3,&stack0x00000028);
      uVar4 = thunk_FUN_02dfd288(Method_System_Collections_ArrayList_ToArray__);
      uVar3 = FUN_0536388c(uVar4,uVar3,0);
      thunk_FUN_02dfd288(PTR_DAT_069fcb10);
      uVar4 = thunk_FUN_02dd3144();
      Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                (uVar4,uVar3,0);
      uVar3 = thunk_FUN_02dfd288(Method_System_Collections_ArrayList_get_Item__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar3);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((unaff_x22 != 0) && (lVar1 = FUN_05fc7ed0(), lVar1 != 0)) {
      lVar2 = *unaff_x20;
      if ((unaff_x21 & 1) == 0) {
        if (lVar2 != 0) {
          FUN_0637df54(lVar2,unaff_w19,*(undefined8 *)(lVar1 + 0x50),0,0);
          return;
        }
      }
      else if (lVar2 != 0) {
        FUN_0637df9c(lVar2,unaff_w19,*(undefined8 *)(lVar1 + 0x50),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


