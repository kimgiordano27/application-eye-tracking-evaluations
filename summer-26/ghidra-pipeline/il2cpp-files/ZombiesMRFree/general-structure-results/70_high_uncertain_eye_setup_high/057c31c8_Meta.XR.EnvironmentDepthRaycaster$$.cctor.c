/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.cctor
ENTRY_POINT: 057c31c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  thunk_FUN_0301080c();
  FUN_0579bad0();
  FUN_03bb1674();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = thunk_FUN_0301080c(*unaff_x26);
  FUN_0579bad0();
  if (lVar3 != 0) {
    FUN_03bb1674(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b7d0);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    uVar2 = thunk_FUN_0301080c(*unaff_x25);
    FUN_0579bad0();
    if (lVar3 != 0) {
      FUN_03bb1674(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9cfd8);
      *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
      thunk_FUN_03048534();
      lVar3 = *(long *)(unaff_x20 + 0x18);
      *(undefined4 *)(unaff_x20 + 0x20) = unaff_s11;
      *(undefined4 *)(unaff_x20 + 0x24) = unaff_s10;
      *(undefined4 *)(unaff_x20 + 0x28) = unaff_s9;
      *(undefined4 *)(unaff_x20 + 0x2c) = unaff_s8;
      if (lVar3 == 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + 0x30) = 0;
      puVar1 = PTR_DAT_06f9b578;
      uVar2 = thunk_FUN_0301080c(*unaff_x27);
      FUN_0579bad0();
      FUN_03bb12a4(lVar3,uVar2,0,*(undefined8 *)puVar1);
      lVar3 = *(long *)(unaff_x20 + 0x18);
      uVar2 = thunk_FUN_0301080c(*unaff_x26);
      FUN_0579bad0();
      if (lVar3 != 0) {
        FUN_03bb12a4(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b588);
        lVar3 = *(long *)(unaff_x20 + 0x18);
        uVar2 = thunk_FUN_0301080c(*unaff_x25);
        FUN_0579bad0();
        if (lVar3 != 0) {
          FUN_03bb12a4(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b6f8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


