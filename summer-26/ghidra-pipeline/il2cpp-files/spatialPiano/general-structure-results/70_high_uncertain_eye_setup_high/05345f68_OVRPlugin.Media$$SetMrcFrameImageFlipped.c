/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameImageFlipped
ENTRY_POINT: 05345f68
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcFrameImageFlipped(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  uint uVar16;
  long *plVar17;
  long *unaff_x26;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  puVar5 = (undefined8 *)FUN_02f421d0();
  uVar6 = (*(code *)*puVar5)();
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar7 = FUN_02f0880c(*(undefined8 *)Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo,
                       0x1a);
  puVar2 = PTR_DAT_067c9e40;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_060f1570(lVar8,*(undefined8 *)System_Linq_Expressions_Expression_TypeInfo,0);
  if (lVar8 != 0) {
    lVar8 = FUN_060f0a10(lVar8,0);
    uVar7 = FUN_060ed7ac();
    if (lVar8 != 0) {
      FUN_061006f4(lVar8,uVar7,0,0);
      if (DAT_06bb42c1 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c1 = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
      FUN_060ff160(*puVar12,puVar12[1],puVar12[2],lVar8,0);
      if (DAT_06bb42c3 == '\0') {
        FUN_02f08768(PTR_DAT_067c90a8);
        DAT_06bb42c3 = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
      FUN_06100000(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar8,0);
      lVar8 = FUN_060ed87c(lVar8,0);
      if (lVar8 != 0) {
        FUN_060f0b94(lVar8,*(undefined4 *)(unaff_x19 + 0x4c),0);
        lVar8 = thunk_FUN_02f45270(*(undefined8 *)System_Dynamic_ExpandoObject_TypeInfo);
        FUN_03abf17c(lVar8,0x1a,*(undefined8 *)System_Dynamic_ExpandoClass_TypeInfo);
        *(long *)(unaff_x19 + 0x68) = lVar8;
        if (lVar8 != 0) {
          uVar7 = FUN_03abfb28(lVar8,*(undefined8 *)UnityEngine_ExitGUIException_TypeInfo);
          puVar4 = System_Threading_ExecutionContext_TypeInfo;
          puVar3 = UnityEngine_EventSystems_ExecuteEvents_TypeInfo;
          puVar2 = UnityEngine_UIElements_PopupField<string>_TypeInfo;
          uVar6 = 2;
          *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
          do {
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar8 = *(long *)puVar2;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
            if (lVar8 == 0) goto LAB_0534645c;
            if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_05346460:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            uVar1 = *(uint *)(lVar8 + uVar6 * 4 + 0x20);
            if ((uVar1 != 0xffffffff) &&
               (uVar16 = (uint)uVar6,
               (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar16 & 0x1f) & 1) != 0)) {
              plVar17 = *(long **)(unaff_x19 + 0x38);
              if (plVar17 == (long *)0x0) goto LAB_0534645c;
              lVar8 = *plVar17;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x26) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto LAB_053461b8;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)FUN_02f421d0(plVar17,*unaff_x26,9);
LAB_053461b8:
              (*(code *)*puVar5)(plVar17,uVar1,&stack0x00000050,puVar5[1]);
              uVar13 = FUN_05346470();
              if ((uVar13 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
                in_stack_00000018 = in_stack_00000058;
                uStack0000000000000024 = uStack0000000000000064;
                uStack0000000000000020 = uStack0000000000000060;
                lVar8 = FUN_05346518();
                plVar17 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000078 = lVar8;
                if (plVar17 == (long *)0x0) goto LAB_0534645c;
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar9 == 0))
                {
                  uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                  FUN_02f0888c(uVar7,0);
                }
                if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_05346460;
                plVar17[(long)(int)uVar1 + 4] = lVar8;
              }
              uStack000000000000000c = uVar1;
              uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = uVar16;
              uVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&stack0x00000008);
              FUN_04f70018(*(undefined8 *)
                            UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo,uVar7,
                           uVar10,0);
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0534645c;
              fVar18 = (float)FUN_053466d8(*(long *)(unaff_x19 + 0x40),uVar1);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar13 = FUN_053367e4(uVar6 & 0xffffffff,0);
              plVar17 = *(long **)(unaff_x19 + 0x38);
              fVar19 = fVar18;
              if (uVar1 != 0) {
                fVar19 = 0.0;
              }
              fVar20 = -fVar18;
              if ((uVar13 & 1) == 0) {
                fVar20 = fVar19;
              }
              if (plVar17 == (long *)0x0) goto LAB_0534645c;
              lVar8 = *plVar17;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x26) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto LAB_0534632c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)FUN_02f421d0(plVar17,*unaff_x26,9);
LAB_0534632c:
              (*(code *)*puVar5)(plVar17,uVar6 & 0xffffffff,&stack0x00000030,puVar5[1]);
              lVar8 = in_stack_00000078;
              if (in_stack_00000078 == 0) goto LAB_0534645c;
              FUN_060ed7ac(in_stack_00000078,0);
              uVar7 = FUN_05346754(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                                   uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                                   fVar18,fVar20);
              lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                          UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo);
              FUN_05116b38(lVar9,0);
              lVar11 = *(long *)(unaff_x19 + 0x68);
              *(uint *)(lVar9 + 0x10) = uVar1;
              *(uint *)(lVar9 + 0x14) = uVar16;
              *(long *)(lVar9 + 0x18) = lVar8;
              *(undefined8 *)(lVar9 + 0x20) = uVar7;
              if (lVar11 == 0) goto LAB_0534645c;
              lVar8 = *(long *)(lVar11 + 0x10);
              lVar14 = *(long *)puVar4;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_0534645c;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
              }
              else {
                FUN_03abf904(lVar11,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x1a);
          FUN_05346a00();
          lVar8 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
            ;
            return;
          }
        }
      }
    }
  }
LAB_0534645c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


