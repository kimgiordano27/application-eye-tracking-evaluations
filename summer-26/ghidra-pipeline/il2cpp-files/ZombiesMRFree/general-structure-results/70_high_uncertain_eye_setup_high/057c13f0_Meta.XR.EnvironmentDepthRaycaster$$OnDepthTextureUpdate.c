/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDepthTextureUpdate
ENTRY_POINT: 057c13f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__OnDepthTextureUpdate(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x6f8));
  FUN_02fe925c(PTR_DAT_06f9b578);
  FUN_02fe925c(PTR_DAT_06f9b588);
  FUN_02fe925c(PTR_DAT_06f9cfd8);
  FUN_02fe925c(PTR_DAT_06f9b7c8);
  FUN_02fe925c(PTR_DAT_06f9b7d0);
  FUN_02fe925c(PTR_DAT_06f9b598);
  FUN_02fe925c(PTR_DAT_06f9b5a8);
  FUN_02fe925c(PTR_DAT_06f9b708);
  *(undefined1 *)(unaff_x22 + 0x210) = 1;
  puVar1 = PTR_DAT_06f9b7c8;
  puVar4 = PTR_DAT_06f9b708;
  puVar3 = PTR_DAT_06f9b5a8;
  puVar2 = PTR_DAT_06f9b598;
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (lVar6 != 0) {
    uVar5 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9b598);
    FUN_0579bad0();
    FUN_03bb1674(lVar6,uVar5,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_0579bad0();
    if (lVar6 == 0) goto LAB_057c168c;
    FUN_03bb1674(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_06f9b7d0);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
    FUN_0579bad0();
    if (lVar6 == 0) goto LAB_057c168c;
    FUN_03bb1674(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_06f9cfd8);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
  thunk_FUN_03048534((long *)(unaff_x20 + 0x18));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x20) = unaff_s11;
  *(undefined4 *)(unaff_x20 + 0x24) = unaff_s10;
  *(undefined4 *)(unaff_x20 + 0x28) = unaff_s9;
  *(undefined4 *)(unaff_x20 + 0x2c) = unaff_s8;
  if (lVar6 == 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  puVar1 = PTR_DAT_06f9b578;
  uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
  FUN_0579bad0();
  FUN_03bb12a4(lVar6,uVar5,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
  FUN_0579bad0();
  if (lVar6 != 0) {
    FUN_03bb12a4(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_06f9b588);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
    FUN_0579bad0();
    if (lVar6 != 0) {
      FUN_03bb12a4(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_06f9b6f8);
      return;
    }
  }
LAB_057c168c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


