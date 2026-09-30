/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 07c5bbf8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 116
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering(void)

{
  undefined4 *puVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s14;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x23 + 0xf43) = 1;
  puVar1 = *(undefined4 **)(*unaff_x21 + 0xb8);
  fVar5 = (float)puVar1[1];
  fVar6 = (float)puVar1[2];
  FUN_09516bac(*puVar1,0);
  fVar4 = (float)FUN_09516eb8(0);
  if (*(char *)(unaff_x22 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x22 + 0xf42) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  if (fVar7 <= unaff_s14) {
    if (*(char *)(unaff_x23 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x23 + 0xf43) = 1;
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar4 = fVar4 / fVar7;
    fVar5 = fVar5 / fVar7;
    fVar6 = fVar6 / fVar7;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar7 = *(float *)(unaff_x19 + 0x28);
    FUN_07c57588(fVar4 * fVar7,fVar5 * fVar7,fVar6 * fVar7,&stack0x00000030,
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x10),4);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 != 0) {
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
      in_stack_00000080 = in_stack_00000050;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),&stack0x00000060,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


