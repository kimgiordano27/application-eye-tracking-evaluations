/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 0317529c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long *plVar4;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x5d0));
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
  thunk_FUN_01ad9084(PTR_DAT_03d80b48);
  thunk_FUN_01ad9084(PTR_DAT_03d80b78);
  *(undefined1 *)(unaff_x26 + 0x12e) = 1;
  uVar1 = thunk_FUN_01afa70c(*unaff_x25,&stack0x0000000c);
  uVar1 = FUN_02ede300(*unaff_x24,uVar1,0);
  lVar2 = thunk_FUN_01afaadc(*unaff_x22);
  FUN_0391fe00(lVar2,uVar1,0);
  if ((lVar2 != 0) &&
     (lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                          ), lVar2 != 0)) {
    FUN_0395a20c(0x3f800000,lVar2,0);
    FUN_0395a360(lVar2,1,0);
    FUN_0395a294(lVar2,0,0);
    FUN_0395a4a4(lVar2,3,0);
    lVar3 = FUN_0391c27c(lVar2,0);
    if (lVar3 != 0) {
      FUN_03929660();
      FUN_0391c27c(lVar2,0);
      FUN_03136e6c();
      lVar3 = FUN_0391c2b8(lVar2,0);
      if (lVar3 != 0) {
        FUN_0391fb70(lVar3,0,0);
        lVar3 = FUN_0391c2b8(lVar2,0);
        if (lVar3 != 0) {
          FUN_0391fb2c(lVar3,*(undefined4 *)(unaff_x20 + 0x3c),0);
          plVar4 = *(long **)(unaff_x20 + 0x68);
          if (plVar4 != (long *)0x0) {
            lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) {
              uVar1 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar1,0);
            }
            if (unaff_w19 < *(uint *)(plVar4 + 3)) {
              plVar4[(long)(int)unaff_w19 + 4] = lVar2;
              thunk_FUN_01b4f09c(plVar4 + (long)(int)unaff_w19 + 4,lVar2);
              return lVar2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


