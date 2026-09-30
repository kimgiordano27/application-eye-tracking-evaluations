/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$UpdateBackground
ENTRY_POINT: 06d92a7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__UpdateBackground
               (float param_1,ulong param_2,ulong param_3,float param_4,float param_5)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float fVar18;
  ulong unaff_d10;
  ulong unaff_d11;
  float unaff_s12;
  float fVar19;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while( true ) {
    fVar10 = (float)param_2;
    fVar16 = (float)unaff_d11;
    fVar7 = (float)unaff_d10;
    fVar18 = (float)param_3;
    FUN_085eb51c((fVar7 * fVar18 + param_5 + unaff_s8 * param_4) - fVar16 * fVar10,
                 (fVar16 * param_1 + unaff_s12 * fVar10 + fVar7 * param_4) - unaff_s8 * fVar18,
                 (unaff_s8 * fVar10 + unaff_s12 * fVar18 + fVar16 * param_4) - fVar7 * param_1,
                 ((unaff_s12 * param_4 - unaff_s8 * param_1) - fVar7 * fVar10) - fVar16 * fVar18,
                 unaff_x21,0);
    FUN_085eb238(uStack000000000000002c,fStack0000000000000028,fStack0000000000000024,unaff_x20,0);
    uVar13 = (ulong)(uint)fStack000000000000001c;
    uVar15 = (ulong)(uint)fStack0000000000000018;
    FUN_085eb410(uStack0000000000000020,unaff_x20,0);
    do {
      unaff_w23 = unaff_w23 + 1;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w23) {
        lVar4 = *(long *)(unaff_x19 + 0x58);
        if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if ((int)uVar1 < 1) goto LAB_06d92b74;
        uVar5 = 0;
        goto LAB_06d92b4c;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w23) goto LAB_06d92c6c;
      lVar4 = *(long *)(unaff_x22 + (long)(int)unaff_w23 * 8 + 0x20);
      if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
      uVar3 = *(undefined8 *)(lVar4 + 0x18);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar2 = FUN_085decd4(uVar3,0,0);
      fStack0000000000000028 = (float)uVar13;
      fStack0000000000000024 = (float)uVar15;
    } while ((uVar2 & 1) == 0);
    if ((*(long *)(lVar4 + 0x18) == 0) ||
       (unaff_x20 = FUN_085ecf88(*(long *)(lVar4 + 0x18),0,0), unaff_x20 == 0)) break;
    uStack000000000000002c = FUN_085eb198(unaff_x20,0);
    fStack0000000000000018 = fStack0000000000000024;
    fStack000000000000001c = fStack0000000000000028;
    uStack0000000000000020 = FUN_085eb388(unaff_x20,0);
    if (*(long *)(lVar4 + 0x18) == 0) break;
    fVar10 = fStack0000000000000018;
    fVar18 = fStack000000000000001c;
    fVar7 = (float)FUN_085eb570(*(long *)(lVar4 + 0x18),0);
    if (*(long *)(lVar4 + 0x18) == 0) break;
    fVar19 = *(float *)(lVar4 + 0x20);
    fVar16 = fVar10;
    fVar11 = fVar18;
    fVar8 = (float)FUN_085eb5ec(*(long *)(lVar4 + 0x18),0);
    if (*(long *)(lVar4 + 0x18) == 0) break;
    fVar17 = *(float *)(lVar4 + 0x24);
    fVar14 = fVar16;
    fVar12 = fVar11;
    fVar9 = (float)FUN_085eb6ec(*(long *)(lVar4 + 0x18),0);
    lVar6 = *(long *)(lVar4 + 0x18);
    if (lVar6 == 0) break;
    unaff_s12 = *(float *)(lVar4 + 0x28);
    fVar14 = fVar14 * unaff_s12;
    fVar12 = fVar12 * unaff_s12;
    fVar9 = fVar9 * unaff_s12;
    fVar16 = fVar10 * fVar19 + fVar16 * fVar17 + fVar14;
    fVar18 = fVar18 * fVar19 + fVar11 * fVar17 + fVar12;
    fVar10 = (float)FUN_085ea65c(lVar6,0);
    unaff_d10 = (ulong)(uint)(fVar18 + fVar12);
    unaff_d11 = (ulong)(uint)(fVar16 + fVar14);
    FUN_085ea6e8(fVar7 * fVar19 + fVar8 * fVar17 + fVar9 + fVar10,lVar6,0);
    unaff_x21 = *(long *)(lVar4 + 0x18);
    if (unaff_x21 == 0) break;
    unaff_s8 = (float)FUN_085eb494(unaff_x21,0);
    param_2 = (ulong)(uint)(*(float *)(lVar4 + 0x30) * in_stack_00000000._4_4_);
    param_3 = (ulong)(uint)(*(float *)(lVar4 + 0x34) * in_stack_00000000._4_4_);
    param_4 = in_stack_00000000._4_4_;
    param_1 = (float)FUN_085d262c(*(float *)(lVar4 + 0x2c) * in_stack_00000000._4_4_,0);
    param_5 = unaff_s12 * param_1;
  }
  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
  while( true ) {
    if (*(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20) == 0)
    goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
    FUN_06d92d08();
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar5 = uVar5 + 1;
    if ((int)uVar1 <= (int)uVar5) break;
LAB_06d92b4c:
    if (uVar1 <= uVar5) goto LAB_06d92c6c;
  }
LAB_06d92b74:
  lVar4 = *(long *)(unaff_x19 + 0x58);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) goto LAB_06d92c6c;
        if (*(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20) == 0)
        goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
        FUN_06d92ef8();
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    lVar4 = *(long *)(unaff_x19 + 0x58);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar5 = 0;
        do {
          if (uVar1 <= uVar5) goto LAB_06d92c6c;
          if (*(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20) == 0)
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          FUN_06d92fbc(in_stack_00000010,uStack000000000000000c,uStack0000000000000008);
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar1);
      }
      lVar4 = *(long *)(unaff_x19 + 0x50);
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar1) {
          uVar5 = 0;
          do {
            if (uVar1 <= uVar5) {
LAB_06d92c6c:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            if (*(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20) == 0)
            goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
            FUN_06d93100();
            uVar1 = *(uint *)(lVar4 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uVar1);
        }
        return;
      }
    }
  }
Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


