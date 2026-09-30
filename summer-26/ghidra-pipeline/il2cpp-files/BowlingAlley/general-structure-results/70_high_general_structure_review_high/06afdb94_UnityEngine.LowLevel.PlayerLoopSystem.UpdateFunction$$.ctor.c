/*
FUNCTION_NAME: UnityEngine.LowLevel.PlayerLoopSystem.UpdateFunction$$.ctor
ENTRY_POINT: 06afdb94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction___ctor
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined4 uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  undefined4 uStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000050;
  
  if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_06afdd8c;
  FUN_04b19bd4(*(long *)(unaff_x19 + 0xf0),1,
               *(undefined8 *)
                Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
              );
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06afdd8c;
  uVar1 = FUN_06be9adc(*(long *)(unaff_x19 + 0x20),0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_06afdd8c;
  uVar5 = FUN_06bf4868(*(long *)(unaff_x19 + 0xd8),0);
  if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_06afdd8c;
  uVar6 = param_2;
  uVar8 = param_3;
  uStack0000000000000018 = FUN_06bf2fbc(*(long *)(unaff_x19 + 0xd8),0);
  fVar4 = (float)uVar6;
  fVar7 = (float)uVar8;
  fStack000000000000001c = fVar4;
  fStack0000000000000020 = fVar7;
  uStack0000000000000024 = param_4;
  if (in_stack_00000050._4_4_ - 1U < 2) {
    if (unaff_x20 == 0) goto LAB_06afdd8c;
    fVar3 = (float)FUN_06afc700();
    if ((*(char *)(unaff_x20 + 0x5c) != '\0') &&
       (*(float *)(unaff_x20 + 100) <
        (fVar4 * -fStack000000000000002c - fVar3 * fStack0000000000000028) -
        fVar7 * in_stack_00000030)) {
      fStack000000000000000c = fVar7 * in_stack_00000030;
      uStack0000000000000008 = FUN_06afdf3c();
      in_stack_00000010 = fVar7;
      FUN_06adb398(&stack0x00000028,&stack0x00000008,&stack0x00000018,0);
    }
  }
  lVar2 = *(long *)(unaff_x19 + 0x58);
  FUN_066146ac(uVar5,param_2,param_3,0);
  if (lVar2 == 0) goto LAB_06afdd8c;
  FUN_04ad83a8(lVar2,*(undefined8 *)PTR_DAT_0727adc0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06afdd8c;
  FUN_04ad7094(uStack0000000000000018,fStack000000000000001c,fStack0000000000000020,
               uStack0000000000000024,*(long *)(unaff_x19 + 0x60),
               *(undefined8 *)
                Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRTrackedImage>__ctor__);
  if (*(char *)(unaff_x19 + 0x80) == '\0') {
    if (unaff_x20 == 0) goto LAB_06afdd8c;
    if (*(char *)(unaff_x20 + 0x6c) == '\0') goto LAB_06afdcd4;
    lVar2 = *(long *)(unaff_x19 + 0x58);
    uVar5 = FUN_06bdff00(0);
    if (lVar2 == 0) goto LAB_06afdd8c;
    FUN_06ae6f1c(uVar5,*(undefined4 *)(unaff_x20 + 0x70),*(undefined4 *)(unaff_x20 + 0x74),lVar2,0);
    lVar2 = *(long *)(unaff_x19 + 0x60);
  }
  else {
LAB_06afdcd4:
    if ((*(long *)(unaff_x19 + 0x58) == 0) ||
       (FUN_04ad8400(0x3f800000,*(long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_0727adb0),
       unaff_x20 == 0)) goto LAB_06afdd8c;
    lVar2 = *(long *)(unaff_x19 + 0x60);
    if (*(char *)(unaff_x20 + 0x6c) == '\0') {
      if (lVar2 == 0) goto LAB_06afdd8c;
      fVar4 = 1.0;
      goto LAB_06afdd60;
    }
  }
  fVar4 = (float)FUN_06bdff00(0);
  if (lVar2 != 0) {
    fVar4 = fVar4 * *(float *)(unaff_x20 + 0x70);
LAB_06afdd60:
    FUN_04ad7160(fVar4,lVar2,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRRaycast>__ctor__);
    return;
  }
LAB_06afdd8c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


