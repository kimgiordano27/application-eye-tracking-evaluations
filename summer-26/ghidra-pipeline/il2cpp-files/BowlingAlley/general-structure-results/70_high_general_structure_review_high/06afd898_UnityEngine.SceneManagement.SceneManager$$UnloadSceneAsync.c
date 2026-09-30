/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$UnloadSceneAsync
ENTRY_POINT: 06afd898
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


void UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  float *pfVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000054;
  long in_stack_00000058;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_5 + 0x4f0));
  thunk_FUN_032e1da0(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRRaycast>__ctor__);
  thunk_FUN_032e1da0(PTR_DAT_0727adb0);
  thunk_FUN_032e1da0(PTR_DAT_0727adc0);
  thunk_FUN_032e1da0(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRTrackedImage>__ctor__);
  *(undefined1 *)(unaff_x20 + 0x3e9) = 1;
  iStack0000000000000054 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0.0;
  in_stack_00000020 = 0;
  fStack0000000000000028 = 0.0;
  fStack000000000000002c = 0.0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0.0;
  in_stack_00000008 = 0;
  if (*(int *)(unaff_x19 + 0xa0) == 0) {
    if (*(long *)(unaff_x19 + 0xf0) != 0) {
      FUN_04b19bd4(*(long *)(unaff_x19 + 0xf0),0,
                   *(undefined8 *)
                    Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                  );
      return;
    }
    goto LAB_06afdd8c;
  }
  lVar2 = FUN_06afd40c();
  in_stack_00000058 = lVar2;
  uVar3 = FUN_06afdd90();
  if ((uVar3 & 1) == 0) {
    fVar9 = (float)FUN_06bf1588(0);
    if (lVar2 == 0) goto LAB_06afdd8c;
    param_2 = *(float *)(unaff_x19 + 0xf8);
    param_3 = *(float *)(lVar2 + 0x68);
    if (param_3 < fVar9 - param_2) {
      if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_06afdd8c;
      FUN_04b19bd4(*(long *)(unaff_x19 + 0xf0),0,
                   *(undefined8 *)
                    Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                  );
    }
    puVar1 = PTR_DAT_072794f0;
    uVar11 = *(undefined8 *)(unaff_x19 + 200);
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06bece64(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 0xd0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06bece64(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 0xd8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06bece64(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  else {
    *(undefined8 *)(unaff_x19 + 200) = in_stack_00000048;
    thunk_FUN_0333a630();
    *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_00000040;
    thunk_FUN_0333a630();
    *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000038;
    thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0xd8));
    uVar8 = FUN_06bf1588(0);
    *(undefined4 *)(unaff_x19 + 0xf8) = uVar8;
  }
  if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_06afdd8c;
  fVar9 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0xd8),0);
  if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06afdd8c;
  fVar13 = param_2;
  fVar12 = param_3;
  fVar10 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 200),0);
  if (DAT_076cd827 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    DAT_076cd827 = '\x01';
  }
  fVar9 = fVar9 - fVar10;
  param_2 = param_2 - fVar13;
  param_3 = param_3 - fVar12;
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  fVar13 = SQRT(param_3 * param_3 + fVar9 * fVar9 + param_2 * param_2);
  if (fVar13 <= DAT_013a01c0) {
    if (DAT_076cd829 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_072795b0);
      DAT_076cd829 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
    fStack0000000000000028 = *pfVar6;
    fStack000000000000002c = pfVar6[1];
    in_stack_00000030 = pfVar6[2];
  }
  else {
    fStack0000000000000028 = fVar9 / fVar13;
    fStack000000000000002c = param_2 / fVar13;
    in_stack_00000030 = param_3 / fVar13;
  }
  uVar14 = (ulong)(uint)in_stack_00000030;
  uVar4 = (ulong)(uint)fStack000000000000002c;
  if ((uVar3 & 1) != 0) {
    if (*(char *)(unaff_x19 + 0x4c) == '\0') {
      bVar5 = true;
    }
    else {
      if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06afdd8c;
      fVar9 = (float)FUN_06bf4ce0(*(long *)(unaff_x19 + 200),0);
      fVar13 = (float)uVar4;
      fVar12 = (float)uVar14 * in_stack_00000030;
      uVar4 = (ulong)(uint)fVar12;
      bVar5 = *(float *)(unaff_x19 + 0x54) <
              fVar12 + fStack0000000000000028 * fVar9 + fVar13 * fStack000000000000002c;
      param_4 = fStack0000000000000028;
    }
    if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_06afdd8c;
    FUN_04b19bd4(*(long *)(unaff_x19 + 0xf0),bVar5,
                 *(undefined8 *)
                  Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                );
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06afdd8c;
  uVar3 = FUN_06be9adc(*(long *)(unaff_x19 + 0x20),0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_06afdd8c;
  uVar11 = FUN_06bf4868(*(long *)(unaff_x19 + 0xd8),0);
  if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_06afdd8c;
  uVar3 = uVar4;
  uVar15 = uVar14;
  uVar8 = FUN_06bf2fbc(*(long *)(unaff_x19 + 0xd8),0);
  fVar9 = (float)uVar3;
  in_stack_00000018 = CONCAT44(fVar9,uVar8);
  fVar13 = (float)uVar15;
  in_stack_00000020 = CONCAT44(param_4,fVar13);
  if (iStack0000000000000054 - 1U < 2) {
    if (lVar2 == 0) goto LAB_06afdd8c;
    fVar12 = (float)FUN_06afc700(lVar2,*(undefined8 *)(unaff_x19 + 0xd0),iStack0000000000000054 == 2
                                );
    if ((*(char *)(lVar2 + 0x5c) != '\0') &&
       (fVar10 = fVar13 * in_stack_00000030,
       *(float *)(lVar2 + 100) <
       (fVar9 * -fStack000000000000002c - fVar12 * fStack0000000000000028) - fVar10)) {
      uVar8 = FUN_06afdf3c();
      in_stack_00000008 = CONCAT44(fVar10,uVar8);
      in_stack_00000010 = fVar13;
      FUN_06adb398(&stack0x00000028,&stack0x00000008,&stack0x00000018,0);
    }
  }
  lVar7 = *(long *)(unaff_x19 + 0x58);
  FUN_066146ac(uVar11,uVar4,uVar14,0);
  if (lVar7 == 0) goto LAB_06afdd8c;
  FUN_04ad83a8(lVar7,*(undefined8 *)PTR_DAT_0727adc0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06afdd8c;
  FUN_04ad7094(in_stack_00000018 & 0xffffffff,in_stack_00000018._4_4_,in_stack_00000020 & 0xffffffff
               ,in_stack_00000020._4_4_,*(long *)(unaff_x19 + 0x60),
               *(undefined8 *)
                Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRTrackedImage>__ctor__);
  if (*(char *)(unaff_x19 + 0x80) == '\0') {
    if (lVar2 == 0) goto LAB_06afdd8c;
    if (*(char *)(lVar2 + 0x6c) == '\0') goto LAB_06afdcd4;
    lVar7 = *(long *)(unaff_x19 + 0x58);
    uVar11 = FUN_06bdff00(0);
    if (lVar7 == 0) goto LAB_06afdd8c;
    FUN_06ae6f1c(uVar11,*(undefined4 *)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x74),lVar7,0);
    lVar7 = *(long *)(unaff_x19 + 0x60);
  }
  else {
LAB_06afdcd4:
    if ((*(long *)(unaff_x19 + 0x58) == 0) ||
       (FUN_04ad8400(0x3f800000,*(long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_0727adb0),
       lVar2 == 0)) goto LAB_06afdd8c;
    lVar7 = *(long *)(unaff_x19 + 0x60);
    if (*(char *)(lVar2 + 0x6c) == '\0') {
      if (lVar7 == 0) goto LAB_06afdd8c;
      fVar9 = 1.0;
      goto LAB_06afdd60;
    }
  }
  fVar9 = (float)FUN_06bdff00(0);
  if (lVar7 != 0) {
    fVar9 = fVar9 * *(float *)(lVar2 + 0x70);
LAB_06afdd60:
    FUN_04ad7160(fVar9,lVar7,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRRaycast>__ctor__);
    return;
  }
LAB_06afdd8c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


