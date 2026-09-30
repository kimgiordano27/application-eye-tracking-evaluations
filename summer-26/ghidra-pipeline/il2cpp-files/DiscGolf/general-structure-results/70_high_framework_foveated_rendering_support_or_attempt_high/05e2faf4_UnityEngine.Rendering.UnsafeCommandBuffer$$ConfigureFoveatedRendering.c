/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 05e2faf4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_7;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering
               (ulong param_1,uint *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long *unaff_x23;
  uint uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0dd00);
    *(undefined1 *)(unaff_x22 + 0x92e) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = *param_2;
  lVar6 = (long)(int)param_2[1];
  if ((int)uVar4 < 0x53424955) {
    if ((int)uVar4 < 0x42595446) {
      if (uVar4 == 0x42495420) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = param_2[3];
        if (uVar4 != 1) {
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            uVar4 = param_2[3];
          }
          FUN_05d798d0(lVar6 + unaff_x20,param_2[2],uVar4,unaff_w19,0);
          return;
        }
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = param_2[2];
        bVar1 = unaff_w19 != 0;
LAB_05e2fc70:
        FUN_05d796d8(lVar6 + unaff_x20,uVar4,bVar1,0);
        return;
      }
      if (uVar4 == 0x42595445) goto LAB_05e2fc18;
      goto LAB_05e2fcec;
    }
    if (uVar4 != 0x494e5420) {
      if (uVar4 == 0x53424954) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = param_2[3];
        if (uVar4 != 1) {
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            uVar4 = param_2[3];
          }
          FUN_05d79a98(lVar6 + unaff_x20,param_2[2],uVar4,unaff_w19,0);
          return;
        }
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = param_2[2];
        bVar1 = 0 < unaff_w19;
        goto LAB_05e2fc70;
      }
      goto LAB_05e2fcec;
    }
LAB_05e2fc20:
    *(int *)(lVar6 + unaff_x20) = unaff_w19;
  }
  else {
    if (uVar4 < 0x53485255) {
      if (uVar4 == 0x53425954) {
LAB_05e2fc18:
        *(char *)(lVar6 + unaff_x20) = (char)unaff_w19;
        return;
      }
      uVar5 = 0x53485254;
    }
    else {
      if (uVar4 == 0x55494e54) goto LAB_05e2fc20;
      uVar5 = 0x55534854;
    }
    if (uVar4 != uVar5) {
LAB_05e2fcec:
      thunk_FUN_02dfd288(PTR_DAT_06a0dd00);
      FUN_0297e1b4();
      uStack000000000000000c = *param_2;
      uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0dd10);
      uVar2 = thunk_FUN_02dd2d7c(uVar2,&stack0x0000000c);
      uVar3 = thunk_FUN_02dfd288(Method_System_Collections_Generic_List<VolumeComponent>_RemoveAll__
                                );
      uVar2 = FUN_0536388c(uVar3,uVar2,0);
      thunk_FUN_02dfd288(PTR_DAT_069fcb10);
      uVar3 = thunk_FUN_02dd3144();
      Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                (uVar3,uVar2,0);
      uVar2 = thunk_FUN_02dfd288(Method_System_Collections_Generic_List<VolumeComponent>_ToArray__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,uVar2);
    }
    *(short *)(lVar6 + unaff_x20) = (short)unaff_w19;
  }
  return;
}


