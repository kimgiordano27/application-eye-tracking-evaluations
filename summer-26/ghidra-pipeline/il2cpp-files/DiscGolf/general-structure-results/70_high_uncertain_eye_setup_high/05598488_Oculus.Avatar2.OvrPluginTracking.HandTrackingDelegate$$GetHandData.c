/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.HandTrackingDelegate$$GetHandData
ENTRY_POINT: 05598488
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate__GetHandData(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar7;
  uint uVar8;
  
  FUN_055848a4();
  FUN_055848a4();
  if (unaff_x19 != (long *)0x0) {
    uVar2 = FUN_0550190c();
    if (((uVar2 & 1) == 0) || (uVar2 = (**(code **)(*unaff_x19 + 0x458))(), (uVar2 & 1) == 0)) {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar4 = FUN_0547e2f8(0);
      uVar5 = thunk_FUN_02dfd288(Unity_Netcode_NetworkUpdateLoop_NetworkUpdate_var);
      uVar4 = FUN_055873e0(uVar5,uVar4);
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar5 = thunk_FUN_02dd3144();
      FUN_0544bf54(uVar5,uVar4,0);
      uVar4 = thunk_FUN_02dfd288(OVRAnchor_FetchOptions_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar4);
    }
    if (unaff_x21 != (long *)0x0) {
      uVar2 = FUN_0550190c();
      if (((uVar2 & 1) != 0) && (uVar2 = (**(code **)(*unaff_x21 + 0x448))(), (uVar2 & 1) != 0)) {
        (**(code **)(*unaff_x21 + 0x4c8))();
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
        }
        uVar2 = FUN_055006dc();
        if ((uVar2 & 1) != 0) {
          *unaff_x20 = unaff_x21;
LAB_05598624:
          LeanTween__value();
          return 1;
        }
      }
      lVar3 = (**(code **)(*unaff_x21 + 0x938))();
      puVar1 = PTR_DAT_069fb9c0;
      if (lVar3 != 0) {
        uVar6 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar6) {
          uVar8 = 0;
          do {
            if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            plVar7 = *(long **)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_05598640;
            uVar2 = (**(code **)(*plVar7 + 0x448))(plVar7,*(undefined8 *)(*plVar7 + 0x450));
            if ((uVar2 & 1) != 0) {
              (**(code **)(*plVar7 + 0x4c8))(plVar7,*(undefined8 *)(*plVar7 + 0x4d0));
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
              }
              uVar2 = FUN_055006dc();
              if ((uVar2 & 1) != 0) {
                *unaff_x20 = plVar7;
                goto LAB_05598624;
              }
            }
            uVar6 = *(uint *)(lVar3 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar6);
        }
        *unaff_x20 = 0;
        LeanTween__value();
        return 0;
      }
    }
  }
LAB_05598640:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


