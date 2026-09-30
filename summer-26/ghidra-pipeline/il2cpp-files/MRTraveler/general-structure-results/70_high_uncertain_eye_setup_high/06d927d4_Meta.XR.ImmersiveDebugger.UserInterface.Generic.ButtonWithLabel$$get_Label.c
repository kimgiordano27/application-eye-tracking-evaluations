/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$get_Label
ENTRY_POINT: 06d927d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_14;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__get_Label
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
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
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  ulong uVar37;
  float fVar38;
  
  if ((DAT_09419a59 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e71528);
    FUN_03c8f898(PTR_DAT_08e68f00);
    DAT_09419a59 = 1;
  }
  lVar5 = FUN_085dbb5c(param_4,0);
  if (lVar5 != 0) {
    FUN_085ecd7c(lVar5,0);
    uVar23 = FUN_06d92c70(param_4);
    uVar27 = param_2;
    uVar31 = param_3;
    if (*(char *)(param_4 + 0x40) != '\0') {
      FUN_06d91cbc(param_4);
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      plVar11 = *(long **)(*(long *)(param_4 + 0x28) + 0xa0);
      if (plVar11 != (long *)0x0) {
        lVar5 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e71528) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06d928ac;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e71528,0);
LAB_06d928ac:
        iVar4 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        puVar3 = PTR_DAT_08e68f00;
        fVar2 = DAT_018b02e8;
        if (iVar4 != 0) {
          lVar5 = *(long *)(param_4 + 0x48);
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar9 = param_2;
            uVar36 = uVar23;
            uVar37 = param_3;
            if (0 < (int)uVar1) {
              uVar14 = 0;
              do {
                if (uVar1 <= uVar14) goto LAB_06d92c6c;
                lVar15 = *(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
                if (lVar15 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                uVar12 = *(undefined8 *)(lVar15 + 0x18);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar7 = FUN_085decd4(uVar12,0,0);
                fVar24 = (float)uVar27;
                fVar28 = (float)uVar31;
                if ((uVar7 & 1) != 0) {
                  if ((*(long *)(lVar15 + 0x18) == 0) ||
                     (lVar8 = FUN_085ecf88(*(long *)(lVar15 + 0x18),0,0), lVar8 == 0))
                  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  uVar16 = FUN_085eb198(lVar8,0);
                  fVar29 = fVar28;
                  fVar25 = fVar24;
                  uVar17 = FUN_085eb388(lVar8,0);
                  if (*(long *)(lVar15 + 0x18) == 0)
                  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  fVar21 = fVar29;
                  fVar35 = fVar25;
                  fVar18 = (float)FUN_085eb570(*(long *)(lVar15 + 0x18),0);
                  if (*(long *)(lVar15 + 0x18) == 0)
                  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  fVar38 = *(float *)(lVar15 + 0x20);
                  fVar33 = fVar21;
                  fVar22 = fVar35;
                  fVar19 = (float)FUN_085eb5ec(*(long *)(lVar15 + 0x18),0);
                  if (*(long *)(lVar15 + 0x18) == 0)
                  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  fVar34 = *(float *)(lVar15 + 0x24);
                  fVar30 = fVar33;
                  fVar26 = fVar22;
                  fVar20 = (float)FUN_085eb6ec(*(long *)(lVar15 + 0x18),0);
                  lVar13 = *(long *)(lVar15 + 0x18);
                  if (lVar13 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  fVar32 = *(float *)(lVar15 + 0x28);
                  fVar30 = fVar30 * fVar32;
                  fVar26 = fVar26 * fVar32;
                  fVar20 = fVar20 * fVar32;
                  fVar33 = fVar21 * fVar38 + fVar33 * fVar34 + fVar30;
                  fVar35 = fVar35 * fVar38 + fVar22 * fVar34 + fVar26;
                  fVar21 = (float)FUN_085ea65c(fVar20,fVar26,fVar30,lVar13,0);
                  fVar35 = fVar35 + fVar26;
                  fVar33 = fVar33 + fVar30;
                  FUN_085ea6e8(fVar18 * fVar38 + fVar19 * fVar34 + fVar20 + fVar21,fVar35,fVar33,
                               lVar13,0);
                  lVar13 = *(long *)(lVar15 + 0x18);
                  if (lVar13 == 0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  fVar18 = (float)FUN_085eb494(lVar13,0);
                  fVar19 = *(float *)(lVar15 + 0x30) * fVar2;
                  fVar38 = *(float *)(lVar15 + 0x34) * fVar2;
                  fVar21 = fVar2;
                  fVar22 = (float)FUN_085d262c(*(float *)(lVar15 + 0x2c) * fVar2,fVar19,fVar38,0);
                  FUN_085eb51c((fVar35 * fVar38 + fVar32 * fVar22 + fVar18 * fVar21) -
                               fVar33 * fVar19,
                               (fVar33 * fVar22 + fVar32 * fVar19 + fVar35 * fVar21) -
                               fVar18 * fVar38,
                               (fVar18 * fVar19 + fVar32 * fVar38 + fVar33 * fVar21) -
                               fVar35 * fVar22,
                               ((fVar32 * fVar21 - fVar18 * fVar22) - fVar35 * fVar19) -
                               fVar33 * fVar38,lVar13,0);
                  FUN_085eb238(uVar16,fVar24,fVar28,lVar8,0);
                  uVar27 = (ulong)(uint)fVar25;
                  uVar31 = (ulong)(uint)fVar29;
                  FUN_085eb410(uVar17,lVar8,0);
                  uVar9 = param_2 & 0xffffffff;
                  uVar36 = uVar23 & 0xffffffff;
                  uVar37 = param_3 & 0xffffffff;
                }
                uVar1 = *(uint *)(lVar5 + 0x18);
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar1);
            }
            lVar5 = *(long *)(param_4 + 0x58);
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (0 < (int)uVar1) {
                uVar14 = 0;
                do {
                  if (uVar1 <= uVar14) goto LAB_06d92c6c;
                  if (*(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20) == 0)
                  goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                  FUN_06d92d08();
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < (int)uVar1);
              }
              lVar5 = *(long *)(param_4 + 0x58);
              if (lVar5 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (0 < (int)uVar1) {
                  uVar14 = 0;
                  do {
                    if (uVar1 <= uVar14) goto LAB_06d92c6c;
                    if (*(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20) == 0)
                    goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                    FUN_06d92ef8();
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < (int)uVar1);
                }
                lVar5 = *(long *)(param_4 + 0x58);
                if (lVar5 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (0 < (int)uVar1) {
                    uVar14 = 0;
                    do {
                      if (uVar1 <= uVar14) goto LAB_06d92c6c;
                      if (*(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20) == 0)
                      goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
                      FUN_06d92fbc(uVar36,uVar9,uVar37);
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      uVar14 = uVar14 + 1;
                    } while ((int)uVar14 < (int)uVar1);
                  }
                  lVar5 = *(long *)(param_4 + 0x50);
                  if (lVar5 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
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
                      if (*(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20) == 0) break;
                      FUN_06d93100();
                      uVar1 = *(uint *)(lVar5 + 0x18);
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
          goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
        }
      }
      return;
    }
  }
Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


