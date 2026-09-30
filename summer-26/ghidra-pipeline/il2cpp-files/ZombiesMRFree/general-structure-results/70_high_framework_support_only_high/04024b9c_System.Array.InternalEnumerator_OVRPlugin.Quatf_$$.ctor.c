/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 04024b9c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>___ctor(void)

{
  byte bVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar5;
  int unaff_w22;
  int iVar6;
  
  if (in_ZR || in_NG != in_OV) {
    thunk_FUN_03037804(PTR_DAT_06f7a510);
    uVar4 = thunk_FUN_0301080c();
    uVar3 = thunk_FUN_03037804(PTR_DAT_06f6e3c0);
    FUN_05a662f0(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar4);
  }
  if (unaff_w21 == 0) {
    plVar5 = (long *)(unaff_x19 + 4);
    lVar2 = *plVar5;
    if (lVar2 == 0) {
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      goto LAB_04024d14;
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(lVar2 + 0x20);
    thunk_FUN_03048534(unaff_x19 + 2);
    lVar2 = *(long *)(unaff_x19 + 4);
    if (lVar2 == 0) {
LAB_04024d6c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar6 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar6 != 0) {
      NodeCanvas_Tasks_Actions_FadeOut___ctor(lVar2,1,lVar2,0,iVar6,0);
      if (*plVar5 == 0) goto LAB_04024d6c;
      lVar2 = *(long *)(unaff_x20 + 0x20);
      bVar1 = *(byte *)(lVar2 + 0x135);
      iVar6 = *(int *)(*plVar5 + 0x18) + -1;
      goto joined_r0x04024cb4;
    }
    *plVar5 = 0;
LAB_04024c00:
    uVar4 = 0;
  }
  else {
    if (unaff_w22 - 1U == 1) {
      unaff_x19[4] = 0;
      unaff_x19[5] = 0;
      goto LAB_04024c00;
    }
    if (unaff_w22 - 1U == unaff_w21) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      iVar6 = unaff_w22 + -2;
      bVar1 = *(byte *)(lVar2 + 0x135);
joined_r0x04024cb4:
      if ((bVar1 & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      FUN_03b11190(unaff_x19 + 4,iVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
      goto LAB_04024d14;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    uVar4 = FUN_02fe9340(lVar2,unaff_w22 + -2);
    if ((int)unaff_w21 < 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = unaff_w21 - 1;
      NodeCanvas_Tasks_Actions_FadeOut___ctor(*(undefined8 *)(unaff_x19 + 4),0,uVar4,0,iVar6,0);
    }
    NodeCanvas_Tasks_Actions_FadeOut___ctor
              (*(undefined8 *)(unaff_x19 + 4),unaff_w21,uVar4,iVar6,*unaff_x19 + ~unaff_w21,0);
    *(undefined8 *)(unaff_x19 + 4) = uVar4;
  }
  thunk_FUN_03048534(unaff_x19 + 4,uVar4);
LAB_04024d14:
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


