/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$.cctor
ENTRY_POINT: 05d46760
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_2_0___cctor(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar1 = FUN_059693f4(*unaff_x24,param_1,0);
  lVar2 = thunk_FUN_0301080c(*unaff_x23);
  FUN_068f8d14(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_03c732ac(lVar2,*(undefined8 *)PTR_DAT_06f70a48), lVar2 != 0)) {
    FUN_06974748(0x3f800000,lVar2,0);
    FUN_06974924(lVar2,1,0);
    UnityEngine_UIElements_Experimental_Easing__InElastic(lVar2,0,0);
    FUN_06974aa4(lVar2,3,0);
    lVar3 = FUN_068f5d7c(lVar2,0);
    if (lVar3 != 0) {
      FUN_06904d10();
      FUN_068f5d7c(lVar2,0);
      FUN_05cb1b24();
      FUN_06975558(lVar2,0);
      lVar3 = FUN_068f5db8(lVar2,0);
      if (lVar3 != 0) {
        FUN_068f8b44(lVar3,0,0);
        lVar3 = FUN_068f5db8(lVar2,0);
        if (lVar3 != 0) {
          FUN_068f8b00(lVar3,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


