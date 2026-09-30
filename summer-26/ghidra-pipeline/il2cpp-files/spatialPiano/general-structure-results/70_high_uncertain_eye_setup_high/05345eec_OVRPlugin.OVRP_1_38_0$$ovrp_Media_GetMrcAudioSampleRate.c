/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcAudioSampleRate
ENTRY_POINT: 05345eec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcAudioSampleRate(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  FUN_02f08768();
  FUN_02f08768(UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x4ed) = 1;
  puVar3 = System_Predicate<DebugUI_Panel>_TypeInfo;
  plVar17 = *(long **)(unaff_x19 + 0x38);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (plVar17 != (long *)0x0) {
    lVar10 = *plVar17;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)System_Predicate<DebugUI_Panel>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
          goto LAB_05345f80;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02f421d0(plVar17,*(long *)System_Predicate<DebugUI_Panel>_TypeInfo,0x11);
LAB_05345f80:
    uVar13 = (*(code *)*puVar6)(plVar17,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      return;
    }
    uVar7 = FUN_02f0880c(*(undefined8 *)Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo,
                         0x1a);
    puVar2 = PTR_DAT_067c9e40;
    *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
    lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_060f1570(lVar10,*(undefined8 *)System_Linq_Expressions_Expression_TypeInfo,0);
    if (lVar10 != 0) {
      lVar10 = FUN_060f0a10(lVar10,0);
      uVar7 = FUN_060ed7ac();
      if (lVar10 != 0) {
        FUN_061006f4(lVar10,uVar7,0,0);
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
        FUN_060ff160(*puVar11,puVar11[1],puVar11[2],lVar10,0);
        if (DAT_06bb42c3 == '\0') {
          FUN_02f08768(PTR_DAT_067c90a8);
          DAT_06bb42c3 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
        FUN_06100000(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
        lVar10 = FUN_060ed87c(lVar10,0);
        if (lVar10 != 0) {
          FUN_060f0b94(lVar10,*(undefined4 *)(unaff_x19 + 0x4c),0);
          lVar10 = thunk_FUN_02f45270(*(undefined8 *)System_Dynamic_ExpandoObject_TypeInfo);
          FUN_03abf17c(lVar10,0x1a,*(undefined8 *)System_Dynamic_ExpandoClass_TypeInfo);
          *(long *)(unaff_x19 + 0x68) = lVar10;
          if (lVar10 != 0) {
            uVar7 = FUN_03abfb28(lVar10,*(undefined8 *)UnityEngine_ExitGUIException_TypeInfo);
            puVar5 = System_Threading_ExecutionContext_TypeInfo;
            puVar4 = UnityEngine_EventSystems_ExecuteEvents_TypeInfo;
            puVar2 = UnityEngine_UIElements_PopupField<string>_TypeInfo;
            uVar13 = 2;
            *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
            do {
              lVar10 = *(long *)puVar2;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar10 = *(long *)puVar2;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_0534645c;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_05346460:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              uVar1 = *(uint *)(lVar10 + uVar13 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar18 = (uint)uVar13,
                 (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
                plVar17 = *(long **)(unaff_x19 + 0x38);
                if (plVar17 == (long *)0x0) goto LAB_0534645c;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar3;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_053461b8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_02f421d0(plVar17,lVar10,9);
LAB_053461b8:
                (*(code *)*puVar6)(plVar17,uVar1,&stack0x00000050,puVar6[1]);
                uVar14 = FUN_05346470();
                if ((uVar14 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar10 = FUN_05346518();
                  plVar17 = *(long **)(unaff_x19 + 0x78);
                  in_stack_00000078 = lVar10;
                  if (plVar17 == (long *)0x0) goto LAB_0534645c;
                  if ((lVar10 != 0) &&
                     (lVar12 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar12 == 0)) {
                    uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                    FUN_02f0888c(uVar7,0);
                  }
                  if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_05346460;
                  plVar17[(long)(int)uVar1 + 4] = lVar10;
                }
                uStack000000000000000c = uVar1;
                uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar18;
                uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)puVar4,&stack0x00000008);
                FUN_04f70018(*(undefined8 *)
                              UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo,uVar7,
                             uVar8,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0534645c;
                fVar19 = (float)FUN_053466d8(*(long *)(unaff_x19 + 0x40),uVar1);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar14 = FUN_053367e4(uVar13 & 0xffffffff,0);
                plVar17 = *(long **)(unaff_x19 + 0x38);
                fVar20 = fVar19;
                if (uVar1 != 0) {
                  fVar20 = 0.0;
                }
                fVar21 = -fVar19;
                if ((uVar14 & 1) == 0) {
                  fVar21 = fVar20;
                }
                if (plVar17 == (long *)0x0) goto LAB_0534645c;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar3;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_0534632c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_02f421d0(plVar17,lVar10,9);
LAB_0534632c:
                (*(code *)*puVar6)(plVar17,uVar13 & 0xffffffff,&stack0x00000030,puVar6[1]);
                lVar10 = in_stack_00000078;
                if (in_stack_00000078 == 0) goto LAB_0534645c;
                FUN_060ed7ac(in_stack_00000078,0);
                uVar7 = FUN_05346754(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,fVar19,fVar21);
                lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                             UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo);
                FUN_05116b38(lVar12,0);
                lVar9 = *(long *)(unaff_x19 + 0x68);
                *(uint *)(lVar12 + 0x10) = uVar1;
                *(uint *)(lVar12 + 0x14) = uVar18;
                *(long *)(lVar12 + 0x18) = lVar10;
                *(undefined8 *)(lVar12 + 0x20) = uVar7;
                if (lVar9 == 0) goto LAB_0534645c;
                lVar10 = *(long *)(lVar9 + 0x10);
                lVar15 = *(long *)puVar5;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_0534645c;
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
                }
                else {
                  FUN_03abf904(lVar9,lVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x1a);
            FUN_05346a00();
            lVar10 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_0534645c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


