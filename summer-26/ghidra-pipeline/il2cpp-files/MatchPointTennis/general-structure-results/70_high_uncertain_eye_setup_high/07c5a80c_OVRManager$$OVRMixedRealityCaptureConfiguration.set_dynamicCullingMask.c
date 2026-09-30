/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask
ENTRY_POINT: 07c5a80c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(void)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s15;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  undefined8 in_stack_00000068;
  
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c5a800 with catch @ 07c5a80c
                        */
  fStack000000000000000c = unaff_s8;
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c5a740 with catch @ 07c5a810
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c5a73c with catch @ 07c5a814
                        */
  FUN_09516a44();
  in_stack_00000068._4_4_ = in_stack_00000068._4_4_ * DAT_01c768e0;
  fVar2 = (float)FUN_09536010(0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  fVar2 = (float)FUN_09516af4(in_stack_00000068._4_4_ * fVar2,fStack0000000000000010,
                              fStack0000000000000014,in_stack_00000018,0);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = fStack0000000000000010, fVar7 = fStack0000000000000014, fVar8 = in_stack_00000018,
     fVar3 = (float)FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
    fVar6 = (fVar2 * fVar4 + in_stack_00000018 * fVar7 + fStack0000000000000014 * fVar8) -
            fStack0000000000000010 * fVar3;
    fVar5 = (fStack0000000000000014 * fVar3 +
            in_stack_00000018 * fVar4 + fStack0000000000000010 * fVar8) - fVar2 * fVar7;
    FUN_0953a29c((fStack0000000000000010 * fVar7 + in_stack_00000018 * fVar3 + fVar2 * fVar8) -
                 fStack0000000000000014 * fVar4,fVar5,fVar6,
                 ((in_stack_00000018 * fVar8 - fVar2 * fVar3) - fStack0000000000000010 * fVar4) -
                 fStack0000000000000014 * fVar7,lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_09539d64(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fVar7 = fStack000000000000000c + fVar6;
        fVar8 = unaff_s9 + fVar5;
        fVar4 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
        FUN_09539e3c((unaff_s15 + fVar2) - fVar4,fVar8 - fVar5,fVar7 - fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


