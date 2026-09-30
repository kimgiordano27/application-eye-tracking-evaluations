/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 0696b538
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPoint(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_s3;
  float fVar9;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f8;
  undefined4 in_stack_00000208;
  
  FUN_07d1d778(&stack0x000001e8);
  in_stack_000001b0 = in_stack_000001e8;
  FUN_07d1ce50();
  if (*unaff_x23 == 0) goto LAB_0696bba4;
  FUN_07d1d580(&stack0x00000118,*(float *)(*unaff_x23 + 0x30) * *(float *)(unaff_x20 + 0x18),0);
  in_stack_00000198 = in_stack_00000120;
  in_stack_00000190 = in_stack_00000118;
  in_stack_000001a8 = in_stack_00000130;
  in_stack_000001a0 = in_stack_00000128;
  FUN_07d1cbc4();
  if (((*(long *)(unaff_x20 + 200) == 0) || (*(long *)(unaff_x20 + 0x78) == 0)) ||
     (plVar1 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar1 == (long *)0x0))
  goto LAB_0696bba4;
  fVar9 = *(float *)(*(long *)(unaff_x20 + 200) + 0x4c);
  fVar5 = (float)(**(code **)(*plVar1 + 0x4c8))(plVar1,*(undefined8 *)(*plVar1 + 0x4d0));
  if (*unaff_x23 == 0) goto LAB_0696bba4;
  fVar9 = fVar9 / fVar5;
  fVar5 = *(float *)(*unaff_x23 + 0x48);
  if (fVar9 <= fVar5) {
    fVar5 = fVar9;
  }
  fVar6 = 2.0;
  if (2.0 <= fVar9) {
    fVar6 = fVar5;
  }
  FUN_07d1d580(&stack0x00000170,fVar6,0);
  in_stack_00000158 = in_stack_00000178;
  in_stack_00000150 = in_stack_00000170;
  in_stack_00000168 = in_stack_00000188;
  in_stack_00000160 = in_stack_00000180;
  FUN_07d1c798();
                    /* try { // try from 0696b61c to 06a6b643 has its CatchHandler @ 0696c514 */
  if (*unaff_x23 == 0) goto LAB_0696bba4;
  lVar4 = *(long *)(unaff_x20 + 0x78);
  if (*(int *)(*unaff_x23 + 0x18) != 0) {
    if ((lVar4 == 0) || (plVar1 = *(long **)(lVar4 + 0x80), plVar1 == (long *)0x0))
    goto LAB_0696bba4;
    uVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(*plVar1 + 0x2f0));
    fVar5 = 0.0;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
      fVar5 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
      if (*unaff_x23 == 0) goto LAB_0696bba4;
      fVar6 = fVar5 * 0.125 + DAT_015c5aec;
      fVar9 = 1.0;
      if (fVar6 <= 1.0) {
        fVar9 = fVar6;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar9;
      }
      fVar5 = fVar5 * *(float *)(*unaff_x23 + 0x2c);
    }
    FUN_07d1cd00(&stack0x000001e8);
    uVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                      (&stack0x00000220,0);
    *(undefined4 *)(unaff_x20 + 0x80) = uVar7;
    *(undefined4 *)(unaff_x20 + 0x84) = in_stack_000001f8;
    *(undefined4 *)(unaff_x20 + 0x88) = in_stack_00000208;
    *(undefined4 *)(unaff_x20 + 0x8c) = in_s3;
    FUN_07d1cd00(&stack0x00000118);
    *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000120;
    *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000118;
    *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000130;
    *(undefined8 *)(unaff_x20 + 0xa0) = in_stack_00000128;
    *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000140;
    *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000138;
    *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
    thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
    if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0696bba4;
    fVar6 = fVar5 + fVar5;
    fVar9 = 1.0;
    if (fVar6 <= 1.0) {
      fVar9 = fVar6;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar6) {
      fVar8 = fVar9;
    }
    FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                 *(undefined4 *)(unaff_x20 + 0x88),
                 fVar8 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
    FUN_07d1ce50();
    FUN_07d1d580(&stack0x00000170,0,0);
    FUN_07d1d0d8();
    FUN_07d1d580(&stack0x000000a0,fVar5 * *(float *)(unaff_x20 + 0x1c),0);
    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName();
    goto LAB_0696b854;
  }
  if ((lVar4 == 0) || (plVar1 = *(long **)(lVar4 + 0x80), plVar1 == (long *)0x0)) goto LAB_0696bba4;
  uVar2 = (**(code **)(*plVar1 + 0x518))(plVar1,*(undefined8 *)(*plVar1 + 0x520));
  if ((uVar2 & 1) == 0) {
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar1 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar1 == (long *)0x0))
    goto LAB_0696bba4;
    uVar2 = (**(code **)(*plVar1 + 0x4d8))(plVar1,*(undefined8 *)(*plVar1 + 0x4e0));
    if ((uVar2 & 1) != 0) goto LAB_0696b818;
LAB_0696b84c:
    FUN_0696acf0();
LAB_0696b854:
    uVar7 = *(undefined4 *)(unaff_x19 + 0x28);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
    FUN_07ca4ee0(uVar7,uVar3,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar3);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return;
  }
LAB_0696b818:
  if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
  fVar5 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
  if (fVar5 < 0.5) {
    if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
    if (*(float *)(*(long *)(unaff_x20 + 0x70) + 0xa4) < 0.5) goto LAB_0696b84c;
  }
  lVar4 = *(long *)(unaff_x20 + 0x78);
  if (*(char *)(unaff_x20 + 0x20) == '\0') {
    if ((lVar4 == 0) || (plVar1 = *(long **)(lVar4 + 0x80), plVar1 == (long *)0x0))
    goto LAB_0696bba4;
    uVar2 = (**(code **)(*plVar1 + 0x518))(plVar1,*(undefined8 *)(*plVar1 + 0x520));
    fVar5 = 0.0;
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar1 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar1 == (long *)0x0))
      goto LAB_0696bba4;
      fVar5 = (float)(**(code **)(*plVar1 + 0x528))(plVar1,*(undefined8 *)(*plVar1 + 0x530));
      fVar5 = fVar5 * *(float *)(unaff_x20 + 0x10);
    }
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar1 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar1 == (long *)0x0))
    goto LAB_0696bba4;
    uVar2 = (**(code **)(*plVar1 + 0x4d8))(plVar1,*(undefined8 *)(*plVar1 + 0x4e0));
    fVar9 = 0.0;
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar1 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar1 == (long *)0x0))
      goto LAB_0696bba4;
      fVar9 = (float)(**(code **)(*plVar1 + 0x4e8))(plVar1,*(undefined8 *)(*plVar1 + 0x4f0));
      fVar9 = fVar9 * *(float *)(unaff_x20 + 0x14);
    }
    if (*unaff_x23 == 0) goto LAB_0696bba4;
    fVar5 = fVar5 + fVar9;
    in_s3 = 0;
    fVar9 = 1.0;
    if (fVar5 <= 1.0) {
      fVar9 = fVar5;
    }
    fVar8 = *(float *)(unaff_x19 + 0x28);
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar9;
    }
    fVar5 = 1.0;
    if (fVar8 <= 1.0) {
      fVar5 = fVar8;
    }
    fVar9 = 0.0;
    if (0.0 <= fVar8) {
      fVar9 = fVar5;
    }
    fVar5 = *(float *)(unaff_x20 + 0xd0) +
            (fVar6 * *(float *)(*unaff_x23 + 0x2c) - *(float *)(unaff_x20 + 0xd0)) * fVar9;
  }
  else {
    if ((lVar4 == 0) || (plVar1 = *(long **)(lVar4 + 0x80), plVar1 == (long *)0x0))
    goto LAB_0696bba4;
    uVar2 = (**(code **)(*plVar1 + 0x518))(plVar1,*(undefined8 *)(*plVar1 + 0x520));
    fVar9 = 0.0;
    if ((uVar2 & 1) != 0) {
      fVar9 = *(float *)(unaff_x20 + 0x10);
    }
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar1 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar1 == (long *)0x0))
    goto LAB_0696bba4;
    uVar2 = (**(code **)(*plVar1 + 0x4d8))(plVar1,*(undefined8 *)(*plVar1 + 0x4e0));
    fVar5 = 0.0;
    if ((uVar2 & 1) != 0) {
      fVar5 = *(float *)(unaff_x20 + 0x14);
    }
    if (*unaff_x23 == 0) goto LAB_0696bba4;
    fVar9 = fVar9 + fVar5;
    fVar6 = 1.0;
    if (fVar9 <= 1.0) {
      fVar6 = fVar9;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar9) {
      fVar5 = fVar6;
    }
    fVar5 = fVar5 * *(float *)(*unaff_x23 + 0x2c);
  }
  *(float *)(unaff_x20 + 0xd0) = fVar5;
  FUN_07d1cd00(&stack0x000001e8);
  uVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                    (&stack0x00000220,0);
  *(undefined4 *)(unaff_x20 + 0x80) = uVar7;
  *(undefined4 *)(unaff_x20 + 0x84) = in_stack_000001f8;
  *(undefined4 *)(unaff_x20 + 0x88) = in_stack_00000208;
  *(undefined4 *)(unaff_x20 + 0x8c) = in_s3;
  FUN_07d1cd00(&stack0x00000118);
  *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000120;
  *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000118;
  *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000130;
  *(undefined8 *)(unaff_x20 + 0xa0) = in_stack_00000128;
  *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000140;
  *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000138;
  *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
  thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
  if (*(long *)(unaff_x20 + 200) != 0) {
    fVar9 = *(float *)(unaff_x20 + 0xd0);
    fVar5 = 1.0;
    if (fVar9 <= 1.0) {
      fVar5 = fVar9;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar9) {
      fVar6 = fVar5;
    }
    FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                 *(undefined4 *)(unaff_x20 + 0x88),
                 fVar6 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
    in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 0x98);
    in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 0x90);
    in_stack_000000f8 = *(undefined8 *)(unaff_x20 + 0xa8);
    in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 0xa0);
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0xb8);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0xb0);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0xc0);
    FUN_07d1ce50();
    if (*(long *)(unaff_x20 + 0x70) != 0) {
      fVar9 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
      fVar9 = fVar9 * DAT_015c58f8;
      fVar5 = 1.0;
      if (fVar9 <= 1.0) {
        fVar5 = fVar9;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar9) {
        fVar6 = fVar5;
      }
      fVar5 = *(float *)(unaff_x20 + 0xd0) * fVar6;
      *(float *)(unaff_x20 + 0x60) = fVar5;
      *(float *)(unaff_x20 + 100) = *(float *)(unaff_x20 + 0xd0) * (1.0 - fVar6);
      FUN_07d1d580(&stack0x00000170,*(float *)(unaff_x20 + 0x1c) * fVar5,0);
      in_stack_000000c8 = in_stack_00000178;
      in_stack_000000c0 = in_stack_00000170;
      in_stack_000000d8 = in_stack_00000188;
      in_stack_000000d0 = in_stack_00000180;
      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                ();
      FUN_07d1d580(&stack0x000000a0,*(float *)(unaff_x20 + 100) * *(float *)(unaff_x20 + 0x1c),0);
      FUN_07d1d0d8();
      goto LAB_0696b854;
    }
  }
LAB_0696bba4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


