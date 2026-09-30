/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$TryFetchDepthTexture
ENTRY_POINT: 06d76200
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__TryFetchDepthTexture
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  long lVar2;
  long unaff_x25;
  long lVar3;
  long unaff_x27;
  long unaff_x28;
  undefined1 unaff_w29;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  do {
    *(undefined1 *)(unaff_x28 + 0xb5) = unaff_w29;
    do {
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_06d76308:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      fVar5 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06d76308;
      fVar7 = param_2;
      fVar8 = param_3;
      fVar6 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x10),0);
      if (*(char *)(unaff_x28 + 0xb5) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x28 + 0xb5) = unaff_w29;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (unaff_x25 == 0) goto LAB_06d76308;
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x21) {
LAB_06d7633c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(float *)(unaff_x25 + unaff_x21 * 4 + 0x20) =
           1.0 - SQRT((unaff_s14 - in_stack_00000018._4_4_) * (unaff_s14 - in_stack_00000018._4_4_)
                      + (unaff_s9 - unaff_s13) * (unaff_s9 - unaff_s13) +
                        (unaff_s10 - unaff_s12) * (unaff_s10 - unaff_s12)) /
                 SQRT((param_3 - fVar8) * (param_3 - fVar8) +
                      (fVar5 - fVar6) * (fVar5 - fVar6) + (param_2 - fVar7) * (param_2 - fVar7));
      unaff_x21 = unaff_x21 + 1;
      unaff_x27 = unaff_x27 + 0xc;
      if (*unaff_x20 == 0) goto LAB_06d76308;
      if ((long)*(int *)(*unaff_x20 + 0x18) <= (long)unaff_x21) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_08e84e60 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar1 = FUN_07d8b59c();
      if (lVar1 == 0) goto LAB_06d76308;
      lVar3 = *(long *)(unaff_x19 + 0xc0);
      lVar2 = *(long *)(unaff_x19 + 0x18);
      unaff_s10 = fStack0000000000000008;
      unaff_s14 = in_stack_00000000._4_4_;
      FUN_085ec7f8(uStack000000000000000c,lVar1,0);
      if ((lVar2 == 0) || (uVar4 = FUN_085ec8b4(lVar2,0), lVar3 == 0)) goto LAB_06d76308;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_06d7633c;
      lVar3 = lVar3 + unaff_x27;
      *(undefined4 *)(lVar3 + 0x20) = uVar4;
      *(float *)(lVar3 + 0x24) = unaff_s10;
      *(float *)(lVar3 + 0x28) = unaff_s14;
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d76308;
      unaff_x25 = *(long *)(unaff_x19 + 200);
      unaff_s9 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x20),0);
      param_2 = unaff_s10;
      param_3 = unaff_s14;
      unaff_s13 = (float)FUN_085eb198(lVar1,0);
      unaff_s12 = param_2;
      in_stack_00000018._4_4_ = param_3;
    } while (*(char *)(unaff_x28 + 0xb5) != '\0');
    FUN_03c8f898();
  } while( true );
}


