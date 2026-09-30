/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Label$$set_Content
ENTRY_POINT: 06d92850
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Label__set_Content
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
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
  float fVar29;
  float fVar30;
  ulong unaff_d8;
  float fVar31;
  float fVar32;
  ulong unaff_d9;
  ulong uVar33;
  ulong unaff_d10;
  ulong uVar34;
  float fVar35;
  
  plVar11 = *(long **)(param_1 + 0xa0);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e71528) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06d928ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e71528,0);
LAB_06d928ac:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    puVar3 = PTR_DAT_08e68f00;
    fVar2 = DAT_018b02e8;
    if (iVar4 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x48);
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar9 = unaff_d8;
        uVar33 = unaff_d9;
        uVar34 = unaff_d10;
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) goto LAB_06d92c6c;
            lVar15 = *(long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
            if (lVar15 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
            uVar12 = *(undefined8 *)(lVar15 + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar6 = FUN_085decd4(uVar12,0,0);
            fVar23 = (float)param_3;
            fVar26 = (float)param_4;
            if ((uVar6 & 1) != 0) {
              if ((*(long *)(lVar15 + 0x18) == 0) ||
                 (lVar7 = FUN_085ecf88(*(long *)(lVar15 + 0x18),0,0), lVar7 == 0))
              goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              uVar16 = FUN_085eb198(lVar7,0);
              fVar27 = fVar26;
              fVar24 = fVar23;
              uVar17 = FUN_085eb388(lVar7,0);
              if (*(long *)(lVar15 + 0x18) == 0)
              goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              fVar21 = fVar27;
              fVar32 = fVar24;
              fVar18 = (float)FUN_085eb570(*(long *)(lVar15 + 0x18),0);
              if (*(long *)(lVar15 + 0x18) == 0)
              goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              fVar35 = *(float *)(lVar15 + 0x20);
              fVar30 = fVar21;
              fVar22 = fVar32;
              fVar19 = (float)FUN_085eb5ec(*(long *)(lVar15 + 0x18),0);
              if (*(long *)(lVar15 + 0x18) == 0)
              goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              fVar31 = *(float *)(lVar15 + 0x24);
              fVar28 = fVar30;
              fVar25 = fVar22;
              fVar20 = (float)FUN_085eb6ec(*(long *)(lVar15 + 0x18),0);
              lVar13 = *(long *)(lVar15 + 0x18);
              if (lVar13 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              fVar29 = *(float *)(lVar15 + 0x28);
              fVar28 = fVar28 * fVar29;
              fVar25 = fVar25 * fVar29;
              fVar20 = fVar20 * fVar29;
              fVar30 = fVar21 * fVar35 + fVar30 * fVar31 + fVar28;
              fVar32 = fVar32 * fVar35 + fVar22 * fVar31 + fVar25;
              fVar21 = (float)FUN_085ea65c(fVar20,fVar25,fVar28,lVar13,0);
              fVar32 = fVar32 + fVar25;
              fVar30 = fVar30 + fVar28;
              FUN_085ea6e8(fVar18 * fVar35 + fVar19 * fVar31 + fVar20 + fVar21,fVar32,fVar30,lVar13,
                           0);
              lVar13 = *(long *)(lVar15 + 0x18);
              if (lVar13 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              fVar18 = (float)FUN_085eb494(lVar13,0);
              fVar19 = *(float *)(lVar15 + 0x30) * fVar2;
              fVar35 = *(float *)(lVar15 + 0x34) * fVar2;
              fVar21 = fVar2;
              fVar22 = (float)FUN_085d262c(*(float *)(lVar15 + 0x2c) * fVar2,fVar19,fVar35,0);
              FUN_085eb51c((fVar32 * fVar35 + fVar29 * fVar22 + fVar18 * fVar21) - fVar30 * fVar19,
                           (fVar30 * fVar22 + fVar29 * fVar19 + fVar32 * fVar21) - fVar18 * fVar35,
                           (fVar18 * fVar19 + fVar29 * fVar35 + fVar30 * fVar21) - fVar32 * fVar22,
                           ((fVar29 * fVar21 - fVar18 * fVar22) - fVar32 * fVar19) - fVar30 * fVar35
                           ,lVar13,0);
              FUN_085eb238(uVar16,fVar23,fVar26,lVar7,0);
              param_3 = (ulong)(uint)fVar24;
              param_4 = (ulong)(uint)fVar27;
              FUN_085eb410(uVar17,lVar7,0);
              uVar9 = unaff_d8 & 0xffffffff;
              uVar33 = unaff_d9 & 0xffffffff;
              uVar34 = unaff_d10 & 0xffffffff;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar1);
        }
        lVar8 = *(long *)(unaff_x19 + 0x58);
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar1) {
            uVar14 = 0;
            do {
              if (uVar1 <= uVar14) goto LAB_06d92c6c;
              if (*(long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20) == 0)
              goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
              FUN_06d92d08();
              uVar1 = *(uint *)(lVar8 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)uVar1);
          }
          lVar8 = *(long *)(unaff_x19 + 0x58);
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar1) {
              uVar14 = 0;
              do {
                if (uVar1 <= uVar14) goto LAB_06d92c6c;
                if (*(long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20) == 0)
                goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                FUN_06d92ef8();
                uVar1 = *(uint *)(lVar8 + 0x18);
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar1);
            }
            lVar8 = *(long *)(unaff_x19 + 0x58);
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (0 < (int)uVar1) {
                uVar14 = 0;
                do {
                  if (uVar1 <= uVar14) goto LAB_06d92c6c;
                  if (*(long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20) == 0)
                  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  FUN_06d92fbc(uVar33,uVar9,uVar34);
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < (int)uVar1);
              }
              lVar8 = *(long *)(unaff_x19 + 0x50);
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if ((int)uVar1 < 1) {
                  return;
                }
                uVar14 = 0;
                do {
                  if (uVar1 <= uVar14) {
LAB_06d92c6c:
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb38();
                  }
                  if (*(long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20) == 0) break;
                  FUN_06d93100();
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  uVar14 = uVar14 + 1;
                  if ((int)uVar1 <= (int)uVar14) {
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
  }
  return;
}


