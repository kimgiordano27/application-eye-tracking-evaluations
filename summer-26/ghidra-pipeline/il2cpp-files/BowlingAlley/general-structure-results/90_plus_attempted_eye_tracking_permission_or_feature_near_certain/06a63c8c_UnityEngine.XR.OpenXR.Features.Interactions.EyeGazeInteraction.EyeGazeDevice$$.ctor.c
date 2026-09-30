/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 06a63c8c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (long param_1,undefined8 param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((*(byte *)(unaff_x22 + 0xda4) & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider>_get_provider__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRCameraSubsystem,_XRCameraSubsystemDescriptor,_XRCameraSubsystem_Provider>__ctor__
                      );
    *(undefined1 *)(unaff_x22 + 0xda4) = 1;
  }
  if (param_4 == 1) {
    bVar1 = *(byte *)(param_1 + 0x24) >> 1;
joined_r0x06a63cdc:
    if ((bVar1 & 1) == 0) {
      return;
    }
  }
  else if (param_4 == 0) {
    bVar1 = *(byte *)(param_1 + 0x24);
    goto joined_r0x06a63cdc;
  }
  if (*(int *)(param_1 + 0x20) == 2) {
    uVar6 = param_3 & 4;
    uVar2 = param_3 >> 3 & 1;
    if (uVar2 != 0 || (param_3 & 4) != 0) {
      lVar3 = *(long *)(param_1 + 0x58);
      if (lVar3 == 0) goto LAB_06a63df0;
      lVar4 = *(long *)(param_1 + 0x60);
      uVar5 = *(undefined8 *)(lVar3 + 0x98);
      uVar8 = *(undefined8 *)(lVar3 + 0x90);
      uVar7 = *(undefined8 *)(lVar3 + 0x88);
      uVar9 = *(undefined8 *)(lVar3 + 0x68);
      uStack0000000000000018 = (undefined4)*(undefined8 *)(lVar3 + 0x80);
      uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x80) >> 0x20);
      uStack0000000000000010 = (undefined4)*(undefined8 *)(lVar3 + 0x78);
      uStack0000000000000014 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar3 + 0x70);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
      goto joined_r0x06a63d68;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 1) {
      return;
    }
    uVar6 = param_3 & 1;
    uVar2 = param_3 >> 1 & 1;
    if (uVar2 != 0 || (param_3 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x58);
      if (lVar3 == 0) goto LAB_06a63df0;
      uVar8 = *(undefined8 *)(lVar3 + 0x58);
      uVar7 = *(undefined8 *)(lVar3 + 0x50);
      uVar5 = *(undefined8 *)(lVar3 + 0x60);
      uVar9 = *(undefined8 *)(lVar3 + 0x30);
      lVar4 = *(long *)(param_1 + 0x60);
      uStack0000000000000018 = (undefined4)*(undefined8 *)(lVar3 + 0x48);
      uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20);
      uStack0000000000000010 = (undefined4)*(undefined8 *)(lVar3 + 0x40);
      uStack0000000000000014 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar3 + 0x38);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
joined_r0x06a63d68:
      if (lVar4 == 0) goto LAB_06a63df0;
      *(undefined8 *)(lVar4 + 0x40) = uVar5;
      *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(ulong *)(lVar4 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      *(ulong *)(lVar4 + 0x18) = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      *(undefined8 *)(lVar4 + 0x10) = uVar9;
    }
  }
  if ((uVar2 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    FUN_04af799c(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x60),
                 *(undefined8 *)
                  Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider>_get_provider__
                );
  }
  if ((uVar6 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    if (*(long *)(param_1 + 0x60) == 0) {
LAB_06a63df0:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_04af8374();
  }
  return;
}


