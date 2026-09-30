/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 090a1ebc
PROGRAM: Hyper-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_foveatedRenderingSupported(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  *(undefined1 *)(unaff_x22 + 0x280) = 1;
  lVar3 = *unaff_x23;
  if (unaff_x20 != 0) {
    lVar3 = unaff_x20;
  }
  lVar2 = thunk_FUN_04983f60(*unaff_x21);
  FUN_0a17c2c0(lVar2,lVar3,0);
  if ((lVar2 != 0) && (lVar3 = FUN_0a17b7e4(lVar2,0), puVar1 = PTR_DAT_0ac78ea0, lVar3 != 0)) {
    FUN_0a18ac70();
    FUN_0a17ba14(lVar2,0,0);
    lVar3 = FUN_05bde8d8(lVar2,*(undefined8 *)puVar1);
    if ((unaff_x19 != 0) && (uVar4 = FUN_05b00274(), puVar1 = PTR_DAT_0ac78d28, lVar3 != 0)) {
      *(undefined8 *)(lVar3 + 200) = uVar4;
      thunk_FUN_049ee3d8();
      uVar4 = FUN_05b00274();
      FUN_0717c458(lVar3,uVar4,*(undefined8 *)puVar1);
      FUN_0a17ba14(lVar2,1,0);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


