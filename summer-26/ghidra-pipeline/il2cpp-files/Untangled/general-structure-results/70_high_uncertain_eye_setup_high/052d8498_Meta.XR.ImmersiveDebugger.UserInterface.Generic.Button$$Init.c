/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$Init
ENTRY_POINT: 052d8498
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__Init
               (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
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
  undefined8 in_stack_00000010;
  undefined4 *in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  char cStack0000000000000054;
  long *plStack0000000000000058;
  
  puVar2 = PTR_DAT_06d37b48;
  puVar1 = PTR_DAT_06d02220;
  plStack0000000000000058 = param_5;
  if ((DAT_071c1103 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3d770);
    FUN_02f07e70(PTR_DAT_06d10968);
    FUN_02f07e70(PTR_DAT_06d10970);
    FUN_02f07e70(PTR_DAT_06d10980);
    FUN_02f07e70(PTR_DAT_06d01fb8);
    FUN_02f07e70(PTR_DAT_06d37b48);
    FUN_02f07e70(PTR_DAT_06d13b30);
    FUN_02f07e70(PTR_DAT_06d138b0);
    FUN_02f07e70(PTR_DAT_06d099c0);
    FUN_02f07e70(PTR_DAT_06d08820);
    FUN_02f07e70(PTR_DAT_06d099d8);
    FUN_02f07e70(PTR_DAT_06d08e08);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d3d778);
    DAT_071c1103 = 1;
  }
  cStack0000000000000054 = '\0';
  in_stack_00000050 = 0;
  in_stack_00000048 = 0;
  lVar10 = FUN_02f07f14(*(undefined8 *)puVar1,1);
  in_stack_00000010 = *(undefined8 *)puVar2;
  in_stack_00000018 = (undefined4 *)0xffffffffffffffff;
  in_stack_00000020 = (undefined1 *)CONCAT44(in_stack_00000020._4_4_,2);
  uVar11 = FUN_05638848(&stack0x00000010,0);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    thunk_FUN_02f411dc();
    uVar7 = FUN_066ca0f8(lVar10,0);
    in_stack_00000030 = *(undefined8 *)puVar2;
    in_stack_00000038 = 0xffffffffffffffff;
    in_stack_00000040 = 2;
    uVar11 = FUN_05638848(&stack0x00000030,0);
    uVar8 = FUN_066ca0bc(uVar11,0);
    puVar6 = PTR_DAT_06d3d778;
    puVar5 = PTR_DAT_06d13b30;
    puVar4 = PTR_DAT_06d10980;
    puVar3 = PTR_DAT_06d10968;
    puVar2 = PTR_DAT_06d099d8;
    puVar1 = PTR_DAT_06d01fb8;
    lVar10 = plStack0000000000000058[0x13];
    if (lVar10 != 0) {
      iVar16 = 0;
      do {
        lVar10 = *(long *)(lVar10 + 0x1c0);
        if (lVar10 == 0) break;
        if (*(int *)(lVar10 + 0x18) <= iVar16) {
          in_stack_00000018 = &stack0x00000050;
          in_stack_00000020 = (undefined1 *)&stack0x00000058;
          in_stack_00000028 = &stack0x00000048;
          in_stack_00000010 = 0;
          lVar10 = plStack0000000000000058[0x26];
          if (plStack0000000000000058[0x71] == 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar10 = FUN_052c416c(*(long *)(lVar10 + 0x30),0,0);
            plStack0000000000000058[0x71] = lVar10;
            thunk_FUN_02f411dc(plStack0000000000000058 + 0x71);
          }
          else {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_052bf774(*(long *)(lVar10 + 0x30),plStack0000000000000058[0x71],0);
          }
          uVar11 = FUN_066cd398(plStack0000000000000058,0);
          uVar11 = FUN_05458458(uVar11,*(undefined8 *)puVar6,0);
          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
          FUN_066c9ce0(lVar10,uVar11,0);
          plStack0000000000000058[0x4d] = lVar10;
          thunk_FUN_02f411dc(plStack0000000000000058 + 0x4d,lVar10);
          if (plStack0000000000000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = FUN_066c9a48(plStack0000000000000058[0x4d],0);
          if (plStack0000000000000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar11 = FUN_066c67b0(plStack0000000000000058[0x13],0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0(uVar11,uVar11);
          }
          FUN_066d5054(lVar10,uVar11,0);
          if (plStack0000000000000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar11 = FUN_066c9a48(plStack0000000000000058[0x4d],0);
          FUN_0529929c(uVar11,1,0);
          fVar18 = (float)(**(code **)(*plStack0000000000000058 + 0x638))
                                    (plStack0000000000000058,plStack0000000000000058[0x13],
                                     &stack0x00000054,
                                     *(undefined8 *)(*plStack0000000000000058 + 0x640));
          fVar25 = (float)param_2;
          fVar19 = (float)param_3;
          if (plStack0000000000000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar11 = FUN_066c9a48(plStack0000000000000058[0x4d],0);
          (**(code **)(*plStack0000000000000058 + 0x248))
                    (plStack0000000000000058,uVar11,
                     *(undefined8 *)(*plStack0000000000000058 + 0x250));
          fVar21 = DAT_013f6b64;
          fVar28 = (float)param_3;
          fVar30 = (float)param_2;
          if (cStack0000000000000054 == '\0') goto LAB_052d89c4;
          uVar15 = 0;
          do {
            fVar25 = (float)param_3;
            fVar18 = (float)param_2;
            if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar10 = FUN_066c67b0(plStack0000000000000058[0x26],0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            fVar19 = (float)FUN_066d48c0(lVar10,0);
            if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar17 = *(long *)(plStack0000000000000058[0x26] + 0x48);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            fVar30 = fVar18;
            fVar28 = fVar25;
            fVar20 = (float)FUN_066d4d38(lVar17,0);
            param_2 = (ulong)(uint)(fVar18 - fVar30 * fVar21);
            param_3 = (ulong)(uint)(fVar25 - fVar28 * fVar21);
            FUN_066d4960(fVar19 - fVar20 * fVar21,lVar10,0);
            fVar18 = (float)(**(code **)(*plStack0000000000000058 + 0x638))
                                      (plStack0000000000000058,plStack0000000000000058[0x13],
                                       &stack0x00000054,
                                       *(undefined8 *)(*plStack0000000000000058 + 0x640));
            fVar25 = (float)param_2;
            fVar19 = (float)param_3;
          } while ((uVar15 < 4) && (uVar15 = uVar15 + 1, cStack0000000000000054 != '\0'));
          fVar30 = fVar25;
          fVar28 = fVar19;
          if (cStack0000000000000054 == '\0') {
LAB_052d89c4:
            if (*(char *)((long)plStack0000000000000058 + 0xd4) == '\0') goto LAB_052d89d0;
          }
          else {
LAB_052d89d0:
            if ((char)plStack0000000000000058[0x69] == '\0') goto LAB_052d8bc0;
          }
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = *(long *)(plStack0000000000000058[0x26] + 0x48);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar21 = (float)FUN_066d48c0(lVar10,0);
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = *(long *)(plStack0000000000000058[0x26] + 0x48);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar20 = fVar28;
          fVar26 = fVar30;
          uVar8 = FUN_066d4d38(lVar10,0);
          if (DAT_071babf2 == '\0') {
            FUN_02f07e70(PTR_DAT_06d03010);
            DAT_071babf2 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          fVar21 = fVar18 - fVar21;
          fVar30 = SQRT((fVar19 - fVar28) * (fVar19 - fVar28) +
                        fVar21 * fVar21 + (fVar25 - fVar30) * (fVar25 - fVar30));
          if (fVar30 <= DAT_013f6c1c) {
            if (DAT_071babf5 == '\0') {
              FUN_02f07e70(PTR_DAT_06d02c10);
              DAT_071babf5 = '\x01';
            }
            fVar21 = **(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          }
          else {
            fVar21 = fVar21 / fVar30;
          }
          fVar22 = (float)FUN_066bd62c(uVar8,0);
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar29 = fVar21;
          fVar27 = fVar20;
          fVar24 = fVar26;
          lVar10 = FUN_066c67b0(plStack0000000000000058[0x26],0);
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar17 = *(long *)(plStack0000000000000058[0x26] + 0x30);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar17 = FUN_066c67b0(lVar17,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar23 = (float)FUN_066d320c(lVar17,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          param_4 = ((fVar21 * fVar29 - fVar22 * fVar23) - fVar26 * fVar24) - fVar20 * fVar27;
          fVar28 = (fVar22 * fVar24 + fVar21 * fVar27 + fVar20 * fVar29) - fVar26 * fVar23;
          fVar30 = (fVar20 * fVar23 + fVar21 * fVar24 + fVar26 * fVar29) - fVar22 * fVar27;
          FUN_066d4ae0((fVar26 * fVar27 + fVar21 * fVar23 + fVar22 * fVar29) - fVar20 * fVar24,
                       lVar10,0);
LAB_052d8bc0:
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_052c217c(plStack0000000000000058[0x26],0);
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = FUN_066c67b0(plStack0000000000000058[0x26],0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar21 = (float)FUN_066d48c0(lVar10,0);
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = *(long *)(plStack0000000000000058[0x26] + 0x48);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar20 = fVar30;
          fVar26 = fVar28;
          fVar22 = (float)FUN_066d48c0(lVar10,0);
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = FUN_066c67b0(plStack0000000000000058[0x26],0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar19 = fVar19 + (fVar28 - fVar26);
          fVar25 = fVar25 + (fVar30 - fVar20);
          FUN_066d4960(fVar18 + (fVar21 - fVar22),lVar10,0);
          lVar10 = plStack0000000000000058[0x26];
          uVar7 = FUN_066ca068(uVar7,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_052c2430(lVar10,uVar7,0);
          lVar10 = plStack0000000000000058[0x26];
          if (plStack0000000000000058[0x70] == 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar10 = FUN_052c416c(*(long *)(lVar10 + 0x30),0,0);
            plStack0000000000000058[0x70] = lVar10;
            thunk_FUN_02f411dc(plStack0000000000000058 + 0x70);
          }
          else {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_052bf774(*(long *)(lVar10 + 0x30),plStack0000000000000058[0x70],0);
          }
          if (plStack0000000000000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = FUN_066c67b0(plStack0000000000000058[0x13],0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d320c(lVar10,0);
          fVar18 = (float)FUN_066bd6e0(0);
          if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar21 = param_4;
          fVar30 = fVar25;
          fVar28 = fVar19;
          lVar10 = FUN_066c67b0(plStack0000000000000058[0x26],0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar20 = (float)FUN_066d320c(lVar10,0);
          fVar22 = fVar19 * fVar28;
          fVar26 = ((param_4 * fVar21 - fVar18 * fVar20) - fVar25 * fVar30) - fVar22;
          *(float *)(plStack0000000000000058 + 0x53) =
               (fVar25 * fVar28 + param_4 * fVar20 + fVar18 * fVar21) - fVar19 * fVar30;
          *(float *)((long)plStack0000000000000058 + 0x29c) =
               (fVar19 * fVar20 + param_4 * fVar30 + fVar25 * fVar21) - fVar18 * fVar28;
          *(float *)(plStack0000000000000058 + 0x54) =
               (fVar18 * fVar30 + param_4 * fVar28 + fVar19 * fVar21) - fVar25 * fVar20;
          *(float *)((long)plStack0000000000000058 + 0x2a4) = fVar26;
          if (plStack0000000000000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar10 = FUN_066c67b0(plStack0000000000000058[0x13],0);
          if (plStack0000000000000058[0x26] != 0) {
            lVar17 = FUN_066c67b0(plStack0000000000000058[0x26],0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_066d48c0(lVar17,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar7 = FUN_066d6014(lVar10,0);
            lVar10 = plStack0000000000000058[0x70];
            *(undefined4 *)(plStack0000000000000058 + 0x55) = uVar7;
            *(float *)((long)plStack0000000000000058 + 0x2ac) = fVar26;
            *(float *)(plStack0000000000000058 + 0x56) = fVar22;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            *(undefined4 *)(lVar10 + 0x10) = uVar7;
            *(float *)(lVar10 + 0x14) = fVar26;
            *(float *)(lVar10 + 0x18) = fVar22;
            lVar10 = plStack0000000000000058[0x70];
            if (lVar10 != 0) {
              lVar17 = plStack0000000000000058[0x53];
              *(long *)(lVar10 + 0x24) = plStack0000000000000058[0x54];
              *(long *)(lVar10 + 0x1c) = lVar17;
              if (plStack0000000000000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar10 = *(long *)(plStack0000000000000058[0x26] + 0x30);
              if (lVar10 != 0) {
                FUN_052be1e8(lVar10,plStack0000000000000058[0x71],1,0);
                *(undefined1 *)((long)plStack0000000000000058 + 0x2c1) = 1;
                FUN_02b8d81c(&stack0x00000010);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar10 = FUN_03fd09cc(lVar10,iVar16,*(undefined8 *)puVar2);
        if (lVar10 == 0) break;
        lVar17 = plStack0000000000000058[0x84];
        uVar11 = FUN_066c67b0(lVar10,0);
        if (lVar17 == 0) break;
        uVar12 = FUN_04c6b118(lVar17,uVar11,*(undefined8 *)puVar3);
        if ((uVar12 & 1) == 0) {
          lVar17 = plStack0000000000000058[0x85];
          uVar11 = FUN_066c67b0(lVar10,0);
          if (lVar17 == 0) break;
          lVar13 = *(long *)(lVar17 + 0x10);
          lVar14 = *(long *)puVar5;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar13 == 0) break;
          uVar15 = *(uint *)(lVar17 + 0x18);
          if (uVar15 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar15 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar15 * 8 + 0x20) = uVar11;
            thunk_FUN_02f411dc();
          }
          else {
            FUN_03fd0c9c(lVar17,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = plStack0000000000000058[0x84];
          uVar11 = FUN_066c67b0(lVar10,0);
          lVar17 = FUN_066c67ec(lVar10,0);
          if ((lVar17 == 0) || (uVar9 = FUN_066c9a84(lVar17,0), lVar13 == 0)) break;
          FUN_04c6af10(lVar13,uVar11,uVar9,*(undefined8 *)puVar4);
          lVar10 = FUN_066c67ec(lVar10,0);
          if (lVar10 == 0) break;
          FUN_066c9ac0(lVar10,uVar8,0);
        }
        iVar16 = iVar16 + 1;
        lVar10 = plStack0000000000000058[0x13];
      } while (lVar10 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


