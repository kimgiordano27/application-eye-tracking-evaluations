/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 0531b844
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetControllerHapticsAmplitudeEnvelope(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar20;
  float extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined8 in_d3;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  float in_stack_00000098;
  float fStack000000000000009c;
  float in_stack_000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  float in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  float fStack0000000000000108;
  float fStack000000000000010c;
  float fStack0000000000000110;
  undefined8 uStack0000000000000114;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xfb8));
  FUN_02f08768(UnityEngine_UIElements_DefaultGroupManager_TypeInfo);
  FUN_02f08768(Unity_Hierarchy_DefaultHierarchySearchQueryParser_TypeInfo);
  FUN_02f08768(UnityEngine_InputSystem_DefaultInputActions_TypeInfo);
  FUN_02f08768(UnityEngine_UIElements_UIR_DefaultElementBuilder_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x236) = 1;
  puVar8 = UnityEngine_InputSystem_DefaultInputActions_TypeInfo;
  puVar7 = UnityEngine_UIElements_UIR_DefaultElementBuilder_TypeInfo;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0.0;
  fStack000000000000009c = 0.0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0.0;
  in_stack_000000a0 = 0.0;
  fStack00000000000000a4 = 0.0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0.0;
  uStack00000000000000dc = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  uStack00000000000000ec = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  uStack00000000000000fc = 0;
  in_stack_000000f0 = 0;
  uStack00000000000000b4 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0;
  if (unaff_x19 != 0) {
    lVar14 = FUN_033d910c();
    uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
    FUN_039eecf8(uVar15,*(undefined8 *)puVar8);
    if (lVar14 != 0) {
      *(undefined8 *)(lVar14 + 0x20) = uVar15;
      puVar9 = UnityEngine_UIElements_DefaultGroupManager_TypeInfo;
      puVar8 = UnityEngine_UIElements_DefaultEventSystem_TypeInfo;
      puVar7 = System_ComponentModel_DefaultEventAttribute_TypeInfo;
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        FUN_039f0278(&stack0x00000040,*(long *)(unaff_x20 + 0x20),
                     *(undefined8 *)Unity_Hierarchy_DefaultHierarchySearchQueryParser_TypeInfo);
        uVar6 = DAT_011b0504;
        in_stack_000000c8 = CONCAT44(fStack000000000000004c,uStack0000000000000048);
        in_stack_000000d0 = CONCAT44(fStack0000000000000054,fStack0000000000000050);
        in_stack_000000c0 = in_stack_00000040;
        in_stack_000000d8 = in_stack_00000058;
        in_stack_000000e0 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
        in_stack_000000e8 = uStack0000000000000068;
        uStack00000000000000ec = uStack000000000000006c;
        in_stack_000000f8 = (undefined4)in_stack_00000078;
        uStack00000000000000fc = (undefined4)((ulong)in_stack_00000078 >> 0x20);
        in_stack_000000f0 = in_stack_00000070;
        while( true ) {
          fVar26 = (float)in_d3;
          uVar16 = FUN_04adaa38(&stack0x000000c0,*(undefined8 *)puVar8);
          if ((uVar16 & 1) == 0) {
            FUN_04adaa34(&stack0x000000c0,*(undefined8 *)puVar7);
            return lVar14;
          }
          auVar29._4_8_ = in_stack_000000f0;
          auVar29._0_4_ = uStack00000000000000ec;
          auVar29._12_4_ = in_stack_000000f8;
          in_stack_00000098 = in_stack_000000d8;
          in_stack_00000090 = in_stack_000000d0;
          in_stack_000000a8 = (float)in_stack_000000e8;
          in_stack_000000a0 = (float)in_stack_000000e0;
          fStack00000000000000a4 = (float)((ulong)in_stack_000000e0 >> 0x20);
          auVar5._8_4_ = in_stack_000000e8;
          auVar5._0_8_ = in_stack_000000e0;
          uStack00000000000000b4 = auVar29._8_8_;
          uStack00000000000000ac = uStack00000000000000ec;
          in_stack_000000b0 = (undefined4)in_stack_000000f0;
          fStack0000000000000108 = in_stack_000000d8;
          in_stack_00000100 = in_stack_000000d0;
          uStack0000000000000114 = auVar5._4_8_;
          fStack0000000000000110 = in_stack_000000a0;
          FUN_052c2dcc(&stack0x00000040,*(undefined8 *)(unaff_x20 + 0x28),&stack0x00000100,0);
          fVar13 = in_stack_00000058;
          fVar12 = fStack0000000000000054;
          fVar11 = fStack0000000000000050;
          fVar10 = fStack000000000000004c;
          auVar4._4_4_ = fStack0000000000000050;
          auVar4._0_4_ = fStack000000000000004c;
          in_stack_00000080 = in_stack_00000040;
          uVar16 = CONCAT44(0,fStack0000000000000054);
          in_stack_00000088 = uStack0000000000000048;
          auVar24 = ZEXT816(0);
          auVar30 = ZEXT416(uVar6);
          FUN_060df604(uVar6,0);
          auVar4._8_8_ = 0;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar16;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar16;
          in_stack_00000100 = in_stack_00000080;
          auVar28._4_4_ = fVar26;
          auVar28._0_4_ = fVar26;
          auVar28._8_4_ = fVar26;
          auVar28._12_4_ = fVar26;
          fStack0000000000000108 = (float)in_stack_00000088;
          auVar22._4_4_ = fVar26;
          auVar22._0_4_ = extraout_s0;
          auVar22._8_4_ = extraout_var;
          auVar22._12_4_ = extraout_var_00;
          auVar29 = NEON_ext(auVar28,auVar22,4,1);
          fVar23 = auVar24._0_4_;
          fVar21 = auVar30._0_4_;
          auVar30._4_4_ = fVar26;
          auVar30._0_4_ = extraout_s0;
          auVar30._8_4_ = fVar23;
          auVar30._12_4_ = extraout_var_00;
          auVar24._4_4_ = fVar26;
          auVar24._0_4_ = extraout_s0;
          auVar24._8_4_ = fVar23;
          auVar24._12_4_ = extraout_var_00;
          auVar30 = NEON_ext(auVar30,auVar24,4,1);
          fVar20 = auVar30._4_4_;
          auVar22 = NEON_ext(auVar2,auVar3,4,1);
          fVar27 = fVar12 * auVar30._12_4_;
          in_d3 = CONCAT44(fVar27,fVar11 * fVar20);
          auVar22 = NEON_ext(auVar22,auVar4,0xc,1);
          auVar25._4_4_ = fVar21;
          auVar25._0_4_ = fVar20;
          auVar25._8_4_ = fVar20;
          auVar25._12_4_ = auVar30._12_4_;
          auVar30 = NEON_rev64(auVar25,4);
          fStack000000000000010c =
               (fVar13 * extraout_s0 + fVar10 * auVar29._0_4_ + fVar11 * fVar20) -
               auVar22._0_4_ * auVar30._0_4_;
          fStack0000000000000110 =
               (fVar11 * fVar26 + fVar13 * fVar21 + fVar27) - auVar22._4_4_ * auVar30._4_4_;
          uStack0000000000000114 =
               CONCAT44(((fVar13 * fVar26 - fVar10 * auVar29._12_4_) - fVar11 * fVar21) -
                        auVar22._0_4_ * auVar30._12_4_,
                        (fVar13 * fVar23 + fVar12 * auVar29._8_4_ + fVar10 * fVar21) -
                        auVar22._8_4_ * auVar30._8_4_);
          FUN_052c2bc0(&stack0x00000040,*(undefined8 *)(unaff_x20 + 0x28),&stack0x00000100,0);
          in_stack_00000090 = in_stack_00000040;
          lVar17 = *(long *)(lVar14 + 0x20);
          in_stack_00000098 = (float)uStack0000000000000048;
          fStack00000000000000a4 = fStack0000000000000054;
          in_stack_000000a8 = in_stack_00000058;
          fStack000000000000009c = fStack000000000000004c;
          in_stack_000000a0 = fStack0000000000000050;
          if (lVar17 == 0) break;
          lVar18 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)puVar9;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar18 == 0) break;
          uVar1 = *(uint *)(lVar17 + 0x18);
          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar1 * 0x2c;
            *(uint *)(lVar17 + 0x18) = uVar1 + 1;
            *(ulong *)(lVar18 + 0x28) = CONCAT44(fStack000000000000004c,uStack0000000000000048);
            *(undefined8 *)(lVar18 + 0x20) = in_stack_00000040;
            *(ulong *)(lVar18 + 0x38) = CONCAT44(uStack00000000000000ac,in_stack_00000058);
            *(ulong *)(lVar18 + 0x30) = CONCAT44(fStack0000000000000054,fStack0000000000000050);
            *(undefined8 *)(lVar18 + 0x44) = uStack00000000000000b4;
            *(ulong *)(lVar18 + 0x3c) = CONCAT44(in_stack_000000b0,uStack00000000000000ac);
          }
          else {
            uStack0000000000000064 = (undefined4)uStack00000000000000b4;
            uStack0000000000000068 = (undefined4)((ulong)uStack00000000000000b4 >> 0x20);
            uStack0000000000000060 = in_stack_000000b0;
            FUN_039ef5b4(lVar17,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


