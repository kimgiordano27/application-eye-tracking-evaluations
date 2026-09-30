/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Avatar_LaunchAvatarEditor
ENTRY_POINT: 0731356c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Platform_CAPI__ovr_Avatar_LaunchAvatarEditor(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(unaff_x21 + 0x548);
  puVar6 = *(undefined8 **)(unaff_x22 + 0xb58);
  if ((*(byte *)(unaff_x20 + 0xf74) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb2548);
    FUN_03c8f898(PTR_DAT_08eb1b58);
    *(undefined1 *)(unaff_x20 + 0xf74) = 1;
  }
  plVar1 = (long *)FUN_03c8f97c(*puVar5,2);
  lVar2 = thunk_FUN_03cf5234(*puVar6);
  OVRPlugin_Media__GetMrcActivationMode(lVar2,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_07313670:
    uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_03d233cc(plVar1 + 4,lVar2);
    lVar2 = thunk_FUN_03cf5234(*puVar6);
    OVRPlugin_Media__GetMrcActivationMode(lVar2,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07313670;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar2;
      thunk_FUN_03d233cc(plVar1 + 5,lVar2);
      *(long *)(param_1 + 0x20) = (long)plVar1;
      thunk_FUN_03d233cc((long *)(param_1 + 0x20),plVar1);
      thunk_FUN_085db0ec(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


