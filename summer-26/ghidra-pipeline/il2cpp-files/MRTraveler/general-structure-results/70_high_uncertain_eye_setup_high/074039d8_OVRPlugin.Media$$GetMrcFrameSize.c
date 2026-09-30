/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 074039d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__GetMrcFrameSize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
    thunk_FUN_03d233cc();
    **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
    thunk_FUN_03d233cc(*(undefined8 *)(*unaff_x23 + 0xb8));
    lVar6 = thunk_FUN_03cf5234(*unaff_x23);
    OVRPlugin_Media__GetMrcActivationMode();
    puVar5 = PTR_DAT_08eb6268;
    puVar4 = PTR_DAT_08eb6260;
    puVar3 = PTR_DAT_08eb6258;
    puVar2 = PTR_DAT_08eb6250;
    puVar1 = PTR_DAT_08eb6248;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      lVar7 = *(long *)PTR_DAT_08eb6268;
      uVar10 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *(long *)puVar5;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
      FUN_04d53be0(uVar8,uVar11,*(undefined8 *)puVar4,0);
      uVar10 = FUN_04627894(uVar10,uVar8,*(undefined8 *)puVar1);
      uVar10 = FUN_0463369c(uVar10,*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        thunk_FUN_03d233cc();
        plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        *plVar9 = lVar6;
        thunk_FUN_03d233cc(plVar9,lVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


