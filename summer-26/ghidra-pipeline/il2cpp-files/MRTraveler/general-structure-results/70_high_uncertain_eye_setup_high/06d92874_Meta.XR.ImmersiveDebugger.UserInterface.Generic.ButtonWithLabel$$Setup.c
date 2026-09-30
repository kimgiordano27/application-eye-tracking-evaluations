/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$Setup
ENTRY_POINT: 06d92874
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_13;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__Setup
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long in_x9;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong unaff_d8;
  ulong uVar29;
  float fVar30;
  float fVar31;
  ulong unaff_d9;
  ulong uVar32;
  ulong unaff_d10;
  ulong uVar33;
  float fVar34;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_6) {
      puVar5 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06d928ac;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06d928ac:
  iVar4 = (*(code *)*puVar5)();
  puVar3 = PTR_DAT_08e68f00;
  fVar2 = DAT_018b02e8;
  if (iVar4 == 0) {
    return;
  }
  lVar11 = *(long *)(unaff_x19 + 0x48);
  if (lVar11 != 0) {
    uVar1 = *(uint *)(lVar11 + 0x18);
    uVar29 = unaff_d8;
    uVar32 = unaff_d9;
    uVar33 = unaff_d10;
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) goto LAB_06d92c6c;
        lVar13 = *(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar13 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
        uVar9 = *(undefined8 *)(lVar13 + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar6 = FUN_085decd4(uVar9,0,0);
        fVar21 = (float)param_3;
        fVar24 = (float)param_4;
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(lVar13 + 0x18) == 0) ||
             (lVar7 = FUN_085ecf88(*(long *)(lVar13 + 0x18),0,0), lVar7 == 0))
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          uVar14 = FUN_085eb198(lVar7,0);
          fVar25 = fVar24;
          fVar22 = fVar21;
          uVar15 = FUN_085eb388(lVar7,0);
          if (*(long *)(lVar13 + 0x18) == 0)
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          fVar19 = fVar25;
          fVar31 = fVar22;
          fVar16 = (float)FUN_085eb570(*(long *)(lVar13 + 0x18),0);
          if (*(long *)(lVar13 + 0x18) == 0)
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          fVar34 = *(float *)(lVar13 + 0x20);
          fVar28 = fVar19;
          fVar20 = fVar31;
          fVar17 = (float)FUN_085eb5ec(*(long *)(lVar13 + 0x18),0);
          if (*(long *)(lVar13 + 0x18) == 0)
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          fVar30 = *(float *)(lVar13 + 0x24);
          fVar26 = fVar28;
          fVar23 = fVar20;
          fVar18 = (float)FUN_085eb6ec(*(long *)(lVar13 + 0x18),0);
          lVar10 = *(long *)(lVar13 + 0x18);
          if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          fVar27 = *(float *)(lVar13 + 0x28);
          fVar26 = fVar26 * fVar27;
          fVar23 = fVar23 * fVar27;
          fVar18 = fVar18 * fVar27;
          fVar28 = fVar19 * fVar34 + fVar28 * fVar30 + fVar26;
          fVar31 = fVar31 * fVar34 + fVar20 * fVar30 + fVar23;
          fVar19 = (float)FUN_085ea65c(fVar18,fVar23,fVar26,lVar10,0);
          fVar31 = fVar31 + fVar23;
          fVar28 = fVar28 + fVar26;
          FUN_085ea6e8(fVar16 * fVar34 + fVar17 * fVar30 + fVar18 + fVar19,fVar31,fVar28,lVar10,0);
          lVar10 = *(long *)(lVar13 + 0x18);
          if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          fVar16 = (float)FUN_085eb494(lVar10,0);
          fVar17 = *(float *)(lVar13 + 0x30) * fVar2;
          fVar34 = *(float *)(lVar13 + 0x34) * fVar2;
          fVar19 = fVar2;
          fVar20 = (float)FUN_085d262c(*(float *)(lVar13 + 0x2c) * fVar2,fVar17,fVar34,0);
          FUN_085eb51c((fVar31 * fVar34 + fVar27 * fVar20 + fVar16 * fVar19) - fVar28 * fVar17,
                       (fVar28 * fVar20 + fVar27 * fVar17 + fVar31 * fVar19) - fVar16 * fVar34,
                       (fVar16 * fVar17 + fVar27 * fVar34 + fVar28 * fVar19) - fVar31 * fVar20,
                       ((fVar27 * fVar19 - fVar16 * fVar20) - fVar31 * fVar17) - fVar28 * fVar34,
                       lVar10,0);
          FUN_085eb238(uVar14,fVar21,fVar24,lVar7,0);
          param_3 = (ulong)(uint)fVar22;
          param_4 = (ulong)(uint)fVar25;
          FUN_085eb410(uVar15,lVar7,0);
          uVar29 = unaff_d8 & 0xffffffff;
          uVar32 = unaff_d9 & 0xffffffff;
          uVar33 = unaff_d10 & 0xffffffff;
        }
        uVar1 = *(uint *)(lVar11 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    lVar11 = *(long *)(unaff_x19 + 0x58);
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar1) {
        uVar12 = 0;
        do {
          if (uVar1 <= uVar12) goto LAB_06d92c6c;
          if (*(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20) == 0)
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
          FUN_06d92d08();
          uVar1 = *(uint *)(lVar11 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar1);
      }
      lVar11 = *(long *)(unaff_x19 + 0x58);
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) goto LAB_06d92c6c;
            if (*(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20) == 0)
            goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
            FUN_06d92ef8();
            uVar1 = *(uint *)(lVar11 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
        lVar11 = *(long *)(unaff_x19 + 0x58);
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (0 < (int)uVar1) {
            uVar12 = 0;
            do {
              if (uVar1 <= uVar12) goto LAB_06d92c6c;
              if (*(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20) == 0)
              goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              FUN_06d92fbc(uVar32,uVar29,uVar33);
              uVar1 = *(uint *)(lVar11 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar1);
          }
          lVar11 = *(long *)(unaff_x19 + 0x50);
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            uVar12 = 0;
            do {
              if (uVar1 <= uVar12) {
LAB_06d92c6c:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              if (*(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20) == 0) break;
              FUN_06d93100();
              uVar1 = *(uint *)(lVar11 + 0x18);
              uVar12 = uVar12 + 1;
              if ((int)uVar1 <= (int)uVar12) {
                return;
              }
            } while( true );
          }
        }
      }
    }
  }
Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


