/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$LoadOVRPlugin
ENTRY_POINT: 022df2c0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_XR_Oculus_NativeMethods__LoadOVRPlugin(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  long unaff_x23;
  long unaff_x24;
  long lVar4;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  if (unaff_x24 != 0) {
    FUN_01b2ac40();
    lVar4 = *(long *)(unaff_x23 + 0x48);
    uVar1 = FUN_022e12b4();
    if (lVar4 != 0) {
      FUN_01b2ac40(lVar4,uVar1,*unaff_x26);
      lVar4 = *(long *)(unaff_x23 + 0x48);
      uVar1 = FUN_022e14cc();
      if ((lVar4 != 0) && (FUN_01b2ac40(lVar4,uVar1,*unaff_x26), unaff_x22 != 0)) {
        FUN_01b2ac40();
        lVar3 = *(long *)(unaff_x21 + 0x48);
        lVar4 = thunk_FUN_0124bba8(*unaff_x27);
        FUN_02292194(lVar4,0);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_027d3528;
          thunk_FUN_01286abc();
          uVar1 = thunk_FUN_0124bba8(*unaff_x28);
          FUN_0180e430();
          *(undefined8 *)(lVar4 + 0x40) = uVar1;
          thunk_FUN_01286abc((undefined8 *)(lVar4 + 0x40),uVar1);
          lVar2 = *(long *)(lVar4 + 0x48);
          uVar1 = Unity_XR_Oculus_NativeMethods__GetShouldRestartSession();
          if (lVar2 != 0) {
            FUN_01b2ac40(lVar2,uVar1,*unaff_x26);
            lVar2 = *(long *)(lVar4 + 0x48);
            uVar1 = FUN_022e18a0();
            if ((lVar2 != 0) && (FUN_01b2ac40(lVar2,uVar1,*unaff_x26), lVar3 != 0)) {
              FUN_01b2ac40(lVar3,lVar4,*unaff_x26);
              FUN_022870cc();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


