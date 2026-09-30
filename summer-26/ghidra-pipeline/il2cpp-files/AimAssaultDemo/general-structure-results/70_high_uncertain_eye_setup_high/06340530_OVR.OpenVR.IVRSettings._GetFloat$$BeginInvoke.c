/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetFloat$$BeginInvoke
ENTRY_POINT: 06340530
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRSettings__GetFloat__BeginInvoke(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_037aeb94();
  lVar2 = thunk_FUN_037788cc(*unaff_x22);
  FUN_0639a788(lVar2,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_063406e4:
    uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,0);
  }
  puVar1 = PTR_DAT_07db47d8;
  if (5 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[9] = lVar2;
    thunk_FUN_037aeb94(unaff_x19 + 9,lVar2);
    lVar2 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_0639d6e0(lVar2,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_063406e4;
    puVar1 = PTR_DAT_07db47f0;
    if (6 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[10] = lVar2;
      thunk_FUN_037aeb94(unaff_x19 + 10,lVar2);
      lVar2 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
      FUN_0639fed4(lVar2,0);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_063406e4;
      puVar1 = PTR_DAT_07db47c0;
      if (7 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0xb] = lVar2;
        thunk_FUN_037aeb94(unaff_x19 + 0xb,lVar2);
        lVar2 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
        OVRPlugin__SetExternalLayerDynresEnabled(lVar2,0);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_063406e4;
        puVar1 = PTR_DAT_07db47f8;
        if (8 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0xc] = lVar2;
          thunk_FUN_037aeb94(unaff_x19 + 0xc,lVar2);
          lVar2 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
          FUN_063a0960(lVar2,0);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_063406e4;
          if (9 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0xd] = lVar2;
            thunk_FUN_037aeb94(unaff_x19 + 0xd,lVar2);
            *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = unaff_x19;
            thunk_FUN_037aeb94();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


