/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$OnTransparencyChanged
ENTRY_POINT: 06d929e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__OnTransparencyChanged
               (float param_1,ulong param_2,ulong param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  uint uVar4;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s9;
  float fVar15;
  float unaff_s10;
  float unaff_s12;
  float unaff_s15;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  uint uStack0000000000000018;
  uint uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while( true ) {
    fVar10 = (float)param_3 * param_4;
    fVar7 = (float)param_2 * param_4;
    param_1 = param_1 * param_4;
    fVar14 = param_5 + param_6 + fVar10;
    fVar15 = param_7 + param_8 + fVar7;
    fVar6 = (float)FUN_085ea65c(param_1,fVar7,fVar10,unaff_x21,0);
    fVar15 = fVar15 + fVar7;
    fVar14 = fVar14 + fVar10;
    FUN_085ea6e8(unaff_s10 * unaff_s15 + unaff_s12 * unaff_s9 + param_1 + fVar6,fVar15,fVar14,
                 unaff_x21,0);
    lVar5 = *(long *)(unaff_x25 + 0x18);
    if (lVar5 == 0) break;
    fVar7 = (float)FUN_085eb494(lVar5,0);
    fVar8 = *(float *)(unaff_x25 + 0x30) * in_stack_00000000._4_4_;
    fVar11 = *(float *)(unaff_x25 + 0x34) * in_stack_00000000._4_4_;
    fVar6 = in_stack_00000000._4_4_;
    fVar10 = (float)FUN_085d262c(*(float *)(unaff_x25 + 0x2c) * in_stack_00000000._4_4_,fVar8,fVar11
                                 ,0);
    FUN_085eb51c((fVar15 * fVar11 + param_4 * fVar10 + fVar7 * fVar6) - fVar14 * fVar8,
                 (fVar14 * fVar10 + param_4 * fVar8 + fVar15 * fVar6) - fVar7 * fVar11,
                 (fVar7 * fVar8 + param_4 * fVar11 + fVar14 * fVar6) - fVar15 * fVar10,
                 ((param_4 * fVar6 - fVar7 * fVar10) - fVar15 * fVar8) - fVar14 * fVar11,lVar5,0);
    FUN_085eb238(uStack000000000000002c,uStack0000000000000028,uStack0000000000000024,unaff_x20,0);
    uVar9 = (ulong)uStack000000000000001c;
    uVar13 = (ulong)uStack0000000000000018;
    FUN_085eb410(uStack0000000000000020,unaff_x20,0);
    do {
      unaff_w23 = unaff_w23 + 1;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w23) {
        lVar5 = *(long *)(unaff_x19 + 0x58);
        if (lVar5 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if ((int)uVar1 < 1) goto LAB_06d92b74;
        uVar4 = 0;
        goto LAB_06d92b4c;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w23) goto LAB_06d92c6c;
      unaff_x25 = *(long *)(unaff_x22 + (long)(int)unaff_w23 * 8 + 0x20);
      if (unaff_x25 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
      uVar3 = *(undefined8 *)(unaff_x25 + 0x18);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar2 = FUN_085decd4(uVar3,0,0);
    } while ((uVar2 & 1) == 0);
    if ((*(long *)(unaff_x25 + 0x18) == 0) ||
       (unaff_x20 = FUN_085ecf88(*(long *)(unaff_x25 + 0x18),0,0), unaff_x20 == 0)) break;
    uStack000000000000002c = FUN_085eb198(unaff_x20,0);
    uVar2 = uVar9;
    uVar12 = uVar13;
    uStack0000000000000020 = FUN_085eb388(unaff_x20,0);
    if (*(long *)(unaff_x25 + 0x18) == 0) break;
    uStack0000000000000018 = (uint)uVar12;
    uStack000000000000001c = (uint)uVar2;
    uStack0000000000000024 = (undefined4)uVar13;
    uStack0000000000000028 = (undefined4)uVar9;
    unaff_s10 = (float)FUN_085eb570(*(long *)(unaff_x25 + 0x18),0);
    if (*(long *)(unaff_x25 + 0x18) == 0) break;
    unaff_s15 = *(float *)(unaff_x25 + 0x20);
    uVar9 = uVar2;
    uVar13 = uVar12;
    unaff_s12 = (float)FUN_085eb5ec(*(long *)(unaff_x25 + 0x18),0);
    if (*(long *)(unaff_x25 + 0x18) == 0) break;
    unaff_s9 = *(float *)(unaff_x25 + 0x24);
    param_2 = uVar9;
    param_3 = uVar13;
    param_1 = (float)FUN_085eb6ec(*(long *)(unaff_x25 + 0x18),0);
    unaff_x21 = *(long *)(unaff_x25 + 0x18);
    if (unaff_x21 == 0) break;
    param_4 = *(float *)(unaff_x25 + 0x28);
    param_5 = (float)uVar12 * unaff_s15;
    param_6 = (float)uVar13 * unaff_s9;
    param_7 = (float)uVar2 * unaff_s15;
    param_8 = (float)uVar9 * unaff_s9;
  }
  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
  while( true ) {
    if (*(long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20) == 0)
    goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
    FUN_06d92d08();
    uVar1 = *(uint *)(lVar5 + 0x18);
    uVar4 = uVar4 + 1;
    if ((int)uVar1 <= (int)uVar4) break;
LAB_06d92b4c:
    if (uVar1 <= uVar4) goto LAB_06d92c6c;
  }
LAB_06d92b74:
  lVar5 = *(long *)(unaff_x19 + 0x58);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) goto LAB_06d92c6c;
        if (*(long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20) == 0)
        goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
        FUN_06d92ef8();
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    lVar5 = *(long *)(unaff_x19 + 0x58);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) goto LAB_06d92c6c;
          if (*(long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20) == 0)
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          FUN_06d92fbc(in_stack_00000010,uStack000000000000000c,uStack0000000000000008);
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar1);
      }
      lVar5 = *(long *)(unaff_x19 + 0x50);
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar4 = 0;
          do {
            if (uVar1 <= uVar4) {
LAB_06d92c6c:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            if (*(long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20) == 0)
            goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
            FUN_06d93100();
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)uVar1);
        }
        return;
      }
    }
  }
Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


