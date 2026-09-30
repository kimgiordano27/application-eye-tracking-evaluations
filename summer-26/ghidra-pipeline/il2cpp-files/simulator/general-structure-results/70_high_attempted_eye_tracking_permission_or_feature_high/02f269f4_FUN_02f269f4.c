/*
FUNCTION_NAME: FUN_02f269f4
ENTRY_POINT: 02f269f4
PROGRAM: simulator-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;ray_interaction;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_02f269f4(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  if ((DAT_036ca1ae & 1) == 0) {
    FUN_018c48dc(PTR_DAT_03495530);
    FUN_018c48dc(PTR_DAT_03496878);
    DAT_036ca1ae = 1;
  }
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x32) == '\0')) {
    if (*(char *)(param_1 + 0x30) == '\0') {
LAB_02f26b9c:
      if (DAT_036ca1cf == '\0') {
        FUN_018c48dc(PTR_DAT_034c8240);
        DAT_036ca1cf = '\x01';
      }
      if (**(long **)(*(long *)PTR_DAT_034c8240 + 0xb8) == 0) goto LAB_02f26c20;
      FUN_02f219b8();
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_03495530 + 0xe0) == 0) {
        thunk_FUN_018cd5b0();
      }
      uVar4 = FUN_030809dc(uVar8,0,0);
      if ((uVar4 & 1) != 0) goto LAB_02f26b9c;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
                        (*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x58) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x58) + 0x90);
        if (iVar3 == iVar1) {
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__get_gazeAssistanceColliderFixedSize
                    (*(long *)(param_1 + 0x20),iVar1,0);
          return;
        }
      }
    }
    goto LAB_02f26c20;
  }
  if (*(char *)(param_1 + 0x35) != '\0') {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02f26c20;
    FUN_02e81d44(*(long *)(param_1 + 0x20),**(undefined8 **)(*(long *)PTR_DAT_03496878 + 0xb8),0);
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
LAB_02f26aa0:
    if (DAT_036ca1cf == '\0') {
      FUN_018c48dc(PTR_DAT_034c8240);
      DAT_036ca1cf = '\x01';
    }
    plVar5 = (long *)**(long **)(*(long *)PTR_DAT_034c8240 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_02f26c20;
    uVar2 = *(undefined1 *)(param_1 + 0x33);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    pcVar7 = *(code **)(*plVar5 + 0x178);
    uVar8 = *(undefined8 *)(*plVar5 + 0x180);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03495530 + 0xe0) == 0) {
      thunk_FUN_018cd5b0();
    }
    uVar4 = FUN_030809dc(uVar8,0,0);
    if ((uVar4 & 1) != 0) goto LAB_02f26aa0;
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 == (long *)0x0) goto LAB_02f26c20;
    uVar2 = *(undefined1 *)(param_1 + 0x33);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    pcVar7 = *(code **)(*plVar5 + 0x238);
    uVar8 = *(undefined8 *)(*plVar5 + 0x240);
  }
  (*pcVar7)(plVar5,uVar6,uVar2,uVar8);
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
                      (*(long *)(param_1 + 0x20),0);
    if (*(long *)(param_1 + 0x58) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x58) + 0x90);
      if (iVar3 != iVar1) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_02f26c20;
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__get_gazeAssistanceColliderFixedSize
                  (*(long *)(param_1 + 0x20),iVar1,0);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_03090a44(*(long *)(param_1 + 0x40),0);
        FUN_02f26240(param_1,*(undefined8 *)(param_1 + 0x58));
        return;
      }
    }
  }
LAB_02f26c20:
                    /* WARNING: Subroutine does not return */
  FUN_018c4afc();
}


