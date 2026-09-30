/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 05d42ef8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar8;
  
  do {
    thunk_FUN_03048534();
    uVar1 = (int)unaff_x23 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)uVar1) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) {
LAB_05d42f24:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    unaff_x23 = (long)(int)uVar1;
    plVar8 = (long *)(unaff_x19 + unaff_x23 * 8 + 0x20);
    lVar4 = *plVar8;
    if (lVar4 == 0) goto LAB_05d42f28;
    lVar4 = FUN_02fe9340(*unaff_x22,*(undefined4 *)(lVar4 + 0x18));
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_05d42f24;
    lVar5 = *plVar8;
    if (lVar5 == 0) {
LAB_05d42f28:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar2) {
      uVar6 = 0;
      do {
        if (uVar2 <= uVar6) goto LAB_05d42f24;
        if (unaff_x20 == 0) goto LAB_05d42f28;
        lVar7 = (long)(int)uVar6;
        uVar3 = *(uint *)(lVar5 + lVar7 * 4 + 0x20);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d42f24;
        if (lVar4 == 0) goto LAB_05d42f28;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05d42f24;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar4 + lVar7 * 4 + 0x20) =
             *(undefined4 *)(unaff_x20 + (long)(int)uVar3 * 4 + 0x20);
      } while ((int)uVar6 < (int)uVar2);
    }
    if (unaff_x21 == 0) goto LAB_05d42f28;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_05d42f24;
    *(long *)(unaff_x21 + unaff_x23 * 8 + 0x20) = lVar4;
  } while( true );
}


