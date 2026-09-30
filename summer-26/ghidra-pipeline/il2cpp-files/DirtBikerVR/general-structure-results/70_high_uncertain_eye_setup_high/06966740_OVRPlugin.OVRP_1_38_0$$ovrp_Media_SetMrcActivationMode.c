/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcActivationMode
ENTRY_POINT: 06966740
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcActivationMode(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 *in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_00000178;
  long in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 *in_stack_000001b8;
  long in_stack_000001c0;
  
  if ((*(byte *)(unaff_x20 + 0xb9) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b59b8);
    FUN_03a8a718(PTR_DAT_084b59c0);
    FUN_03a8a718(PTR_DAT_084b59c8);
    FUN_03a8a718(PTR_DAT_084b59d0);
    *(undefined1 *)(unaff_x20 + 0xb9) = 1;
  }
  in_stack_000001b0 = 0;
  in_stack_000001b8 = (undefined8 *)0x0;
  in_stack_000001c0 = 0;
  in_stack_000001a0 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_00000178 = (undefined8 *)0x0;
  in_stack_00000170 = 0;
  FUN_06936c78(param_1,0);
  puVar3 = PTR_DAT_084b59d0;
  puVar2 = PTR_DAT_084b59c0;
  puVar1 = PTR_DAT_084b59b8;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar4 != 0)) {
    uVar5 = FUN_06936c7c(lVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0xe8) == 0)) ||
         (lVar7 = *(long *)(*(long *)(lVar4 + 0xe8) + 0x40), lVar7 == 0)) goto LAB_06966c34;
      if (*(char *)(lVar7 + 0x138) != '\0') {
        uVar8 = FUN_06926524(lVar4,0);
        *(undefined4 *)(param_1 + 0xa0) = uVar8;
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_06966c34;
        FUN_04de90b8(&stack0x00000120,*(long *)(param_1 + 0x50),*(undefined8 *)puVar3);
        in_stack_000001c0 = in_stack_00000130;
        in_stack_00000168 = &stack0x000001b0;
        in_stack_000001b8 = in_stack_00000128;
        in_stack_000001b0 = in_stack_00000120;
        in_stack_00000160 = 0;
        while (uVar5 = FUN_061c1964(&stack0x000001b0,*(undefined8 *)puVar2),
              lVar4 = in_stack_000001c0, (uVar5 & 1) != 0) {
          if (in_stack_000001c0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar5 = FUN_07d1b874(in_stack_000001c0,0);
          if ((uVar5 & 1) == 0) {
            FUN_07d1c280(lVar4,0);
          }
          uVar6 = FUN_07d1c660(lVar4,0);
          *(undefined8 *)(param_1 + 0x70) = uVar6;
          thunk_FUN_03afed3c(param_1 + 0x70,0);
          uVar6 = FUN_07d1c63c(lVar4,0);
          *(undefined8 *)(param_1 + 0x78) = uVar6;
          thunk_FUN_03afed3c(param_1 + 0x78,0);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar4 = *(long *)(lVar4 + 0x40);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          fVar20 = *(float *)(lVar4 + 0x13c);
          fVar19 = *(float *)(lVar4 + 0x130);
          uVar5 = FUN_07d1d058(param_1 + 0x70,0);
          if ((uVar5 & 1) == 0) {
            FUN_07d1d094(param_1 + 0x70,1,0);
          }
          *(float *)(param_1 + 0x68) = fVar20 * *(float *)(param_1 + 0x24);
          FUN_07d1cd00(&stack0x00000120,param_1 + 0x78,0);
          in_stack_00000198 = in_stack_00000148;
          in_stack_00000190 = in_stack_00000140;
          in_stack_00000178 = in_stack_00000128;
          in_stack_00000170 = in_stack_00000120;
          in_stack_00000188 = in_stack_00000138;
          in_stack_00000180 = in_stack_00000130;
          in_stack_000001a0 = in_stack_00000150;
          lVar4 = in_stack_00000130;
          uVar6 = in_stack_00000140;
          fVar9 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                                   (&stack0x00000170,0);
          uVar15 = *(undefined8 *)(param_1 + 0x38);
          uVar14 = *(undefined8 *)(param_1 + 0x30);
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          uVar11 = *(undefined8 *)(param_1 + 0x40);
          fVar21 = *(float *)(param_1 + 0x68);
          fVar10 = (float)FUN_07ca8818(0);
          fVar10 = fVar10 * 7.0;
          fVar20 = 1.0;
          if (fVar21 <= 1.0) {
            fVar20 = fVar21;
          }
          fVar16 = (float)uVar14;
          fVar17 = (float)((ulong)uVar14 >> 0x20);
          fVar18 = (float)uVar15;
          fVar13 = 0.0;
          if (0.0 <= fVar21) {
            fVar13 = fVar20;
          }
          fVar20 = 1.0;
          if (fVar10 <= 1.0) {
            fVar20 = fVar10;
          }
          fVar21 = 0.0;
          if (0.0 <= fVar10) {
            fVar21 = fVar20;
          }
          fVar20 = (float)lVar4 +
                   ((fVar17 + ((float)((ulong)uVar11 >> 0x20) - fVar17) * fVar13) - (float)lVar4) *
                   fVar21;
          FUN_07d1d778(&stack0x00000120,
                       CONCAT44(fVar20,fVar9 + ((fVar16 + ((float)uVar11 - fVar16) * fVar13) - fVar9
                                               ) * fVar21),fVar20,
                       (float)uVar6 +
                       ((fVar18 + ((float)uVar12 - fVar18) * fVar13) - (float)uVar6) * fVar21,0);
          in_stack_00000108 = in_stack_00000148;
          in_stack_00000100 = in_stack_00000140;
          in_stack_000000e8 = in_stack_00000128;
          in_stack_000000e0 = in_stack_00000120;
          in_stack_000000f8 = in_stack_00000138;
          in_stack_000000f0 = in_stack_00000130;
          in_stack_00000110 = in_stack_00000150;
          FUN_07d1ce50(param_1 + 0x78,&stack0x000000e0,0);
          fVar20 = *(float *)(param_1 + 0x28);
          FUN_07d1c8b8(&stack0x000000c0,param_1 + 0x78,0);
          in_stack_00000128 = in_stack_000000c8;
          in_stack_00000120 = in_stack_000000c0;
          in_stack_00000138 = in_stack_000000d8;
          in_stack_00000130 = in_stack_000000d0;
          *(undefined8 **)(param_1 + 0x88) = in_stack_000000c8;
          *(undefined8 *)(param_1 + 0x80) = in_stack_000000c0;
          *(undefined8 *)(param_1 + 0x98) = in_stack_000000d8;
          *(long *)(param_1 + 0x90) = in_stack_000000d0;
          thunk_FUN_03afed3c(param_1 + 0x88,0);
          fVar20 = fVar19 * (fVar20 + -1.0);
          FUN_07d1d488(fVar20 + *(float *)(param_1 + 0x58),param_1 + 0x80,0);
          FUN_07d1d478(fVar20 + *(float *)(param_1 + 0x5c),param_1 + 0x80,0);
          in_stack_000000a8 = *(undefined8 *)(param_1 + 0x88);
          in_stack_000000a0 = *(undefined8 *)(param_1 + 0x80);
          in_stack_000000b8 = *(undefined8 *)(param_1 + 0x98);
          in_stack_000000b0 = *(undefined8 *)(param_1 + 0x90);
          FUN_07d1c9b4(param_1 + 0x78,&stack0x000000a0,0);
          fVar20 = *(float *)(param_1 + 0x2c);
          FUN_07d1caf0(&stack0x00000080,param_1 + 0x78,0);
          in_stack_000000c8 = in_stack_00000088;
          in_stack_000000c0 = in_stack_00000080;
          in_stack_000000d8 = in_stack_00000098;
          in_stack_000000d0 = in_stack_00000090;
          *(undefined8 **)(param_1 + 0x88) = in_stack_00000088;
          *(undefined8 *)(param_1 + 0x80) = in_stack_00000080;
          *(undefined8 *)(param_1 + 0x98) = in_stack_00000098;
          *(long *)(param_1 + 0x90) = in_stack_00000090;
          thunk_FUN_03afed3c(param_1 + 0x88,0);
          fVar19 = fVar19 * (fVar20 + -1.0);
          FUN_07d1d488(fVar19 + *(float *)(param_1 + 0x60),param_1 + 0x80,0);
          FUN_07d1d478(fVar19 + *(float *)(param_1 + 100),param_1 + 0x80,0);
          in_stack_00000068 = *(undefined8 *)(param_1 + 0x88);
          in_stack_00000060 = *(undefined8 *)(param_1 + 0x80);
          in_stack_00000078 = *(undefined8 *)(param_1 + 0x98);
          in_stack_00000070 = *(undefined8 *)(param_1 + 0x90);
          FUN_07d1cbc4(param_1 + 0x78,&stack0x00000060,0);
        }
        goto LAB_06966c00;
      }
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_04de90b8(&stack0x00000120,*(long *)(param_1 + 0x50),*(undefined8 *)puVar3);
      in_stack_000001c0 = in_stack_00000130;
      in_stack_000001b8 = in_stack_00000128;
      in_stack_000001b0 = in_stack_00000120;
      in_stack_00000120 = 0;
      in_stack_00000128 = &stack0x000001b0;
      while (uVar5 = FUN_061c1964(&stack0x000001b0,*(undefined8 *)puVar2), lVar4 = in_stack_000001c0
            , (uVar5 & 1) != 0) {
        if (in_stack_000001c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = FUN_07d1b874(in_stack_000001c0,0);
        if ((uVar5 & 1) != 0) {
          FUN_07d1c440(lVar4,0);
        }
        FUN_07d1c660(lVar4,0);
        FUN_07d1d094(&stack0x00000208,0,0);
      }
LAB_06966c00:
      FUN_061c1960(&stack0x000001b0,*(undefined8 *)puVar1);
      return;
    }
  }
LAB_06966c34:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


