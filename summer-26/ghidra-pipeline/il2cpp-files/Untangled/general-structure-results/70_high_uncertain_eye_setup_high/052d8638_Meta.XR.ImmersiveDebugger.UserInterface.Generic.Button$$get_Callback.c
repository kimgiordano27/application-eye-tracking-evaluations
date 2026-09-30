/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$get_Callback
ENTRY_POINT: 052d8638
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__get_Callback
               (long *param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,float param_5,
               undefined4 param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  uint uVar8;
  long unaff_x19;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long unaff_x26;
  undefined8 *puVar12;
  long unaff_x27;
  undefined8 *puVar13;
  long unaff_x28;
  undefined8 *puVar14;
  long unaff_x29;
  long *plVar15;
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
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  puVar1 = PTR_DAT_06d01fb8;
  puVar13 = *(undefined8 **)(unaff_x27 + 0x9d8);
  puVar14 = *(undefined8 **)(unaff_x28 + 0x968);
  plVar15 = *(long **)(unaff_x29 + 0xb30);
  puVar9 = *(undefined8 **)(unaff_x19 + 0x980);
  puVar12 = *(undefined8 **)(unaff_x26 + 0x778);
  iVar10 = 0;
  do {
    lVar3 = *(long *)(in_x9 + 0x1c0);
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) <= iVar10) {
      in_stack_00000018 = &stack0x00000050;
      in_stack_00000020 = &stack0x00000058;
      in_stack_00000028 = &stack0x00000048;
      in_stack_00000010 = 0;
      lVar3 = param_1[0x26];
      if (param_1[0x71] == 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar3 = FUN_052c416c(*(long *)(lVar3 + 0x30),0,0);
        in_stack_00000058[0x71] = lVar3;
        thunk_FUN_02f411dc(in_stack_00000058 + 0x71);
      }
      else {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_052bf774(*(long *)(lVar3 + 0x30),param_1[0x71],0);
      }
      uVar4 = FUN_066cd398(in_stack_00000058,0);
      uVar4 = FUN_05458458(uVar4,*puVar12,0);
      lVar3 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_066c9ce0(lVar3,uVar4,0);
      in_stack_00000058[0x4d] = lVar3;
      thunk_FUN_02f411dc(in_stack_00000058 + 0x4d,lVar3);
      if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_066c9a48(in_stack_00000058[0x4d],0);
      if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar4 = FUN_066c67b0(in_stack_00000058[0x13],0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0(uVar4,uVar4);
      }
      FUN_066d5054(lVar3,uVar4,0);
      if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar4 = FUN_066c9a48(in_stack_00000058[0x4d],0);
      FUN_0529929c(uVar4,1,0);
      fVar16 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                (in_stack_00000058,in_stack_00000058[0x13],
                                 (long)&stack0x00000050 + 4,
                                 *(undefined8 *)(*in_stack_00000058 + 0x640));
      fVar23 = (float)param_3;
      fVar17 = (float)param_4;
      if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar4 = FUN_066c9a48(in_stack_00000058[0x4d],0);
      (**(code **)(*in_stack_00000058 + 0x248))
                (in_stack_00000058,uVar4,*(undefined8 *)(*in_stack_00000058 + 0x250));
      fVar19 = DAT_013f6b64;
      fVar26 = (float)param_4;
      fVar28 = (float)param_3;
      if (in_stack_00000050._4_1_ == '\0') goto LAB_052d89c4;
      uVar8 = 0;
      do {
        fVar23 = (float)param_4;
        fVar16 = (float)param_3;
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar3 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar17 = (float)FUN_066d48c0(lVar3,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar11 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar28 = fVar16;
        fVar26 = fVar23;
        fVar18 = (float)FUN_066d4d38(lVar11,0);
        param_3 = (ulong)(uint)(fVar16 - fVar28 * fVar19);
        param_4 = (ulong)(uint)(fVar23 - fVar26 * fVar19);
        FUN_066d4960(fVar17 - fVar18 * fVar19,lVar3,0);
        fVar16 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                  (in_stack_00000058,in_stack_00000058[0x13],
                                   (long)&stack0x00000050 + 4,
                                   *(undefined8 *)(*in_stack_00000058 + 0x640));
        fVar23 = (float)param_3;
        fVar17 = (float)param_4;
      } while ((uVar8 < 4) && (uVar8 = uVar8 + 1, in_stack_00000050._4_1_ != '\0'));
      fVar28 = fVar23;
      fVar26 = fVar17;
      if (in_stack_00000050._4_1_ == '\0') {
LAB_052d89c4:
        if (*(char *)((long)in_stack_00000058 + 0xd4) == '\0') goto LAB_052d89d0;
      }
      else {
LAB_052d89d0:
        if ((char)in_stack_00000058[0x69] == '\0') goto LAB_052d8bc0;
      }
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *(long *)(in_stack_00000058[0x26] + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar19 = (float)FUN_066d48c0(lVar3,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *(long *)(in_stack_00000058[0x26] + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = fVar26;
      fVar24 = fVar28;
      uVar2 = FUN_066d4d38(lVar3,0);
      if (DAT_071babf2 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf2 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar19 = fVar16 - fVar19;
      fVar28 = SQRT((fVar17 - fVar26) * (fVar17 - fVar26) +
                    fVar19 * fVar19 + (fVar23 - fVar28) * (fVar23 - fVar28));
      if (fVar28 <= DAT_013f6c1c) {
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        fVar19 = **(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      }
      else {
        fVar19 = fVar19 / fVar28;
      }
      fVar20 = (float)FUN_066bd62c(uVar2,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar27 = fVar19;
      fVar25 = fVar18;
      fVar22 = fVar24;
      lVar3 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *(long *)(in_stack_00000058[0x26] + 0x30);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = FUN_066c67b0(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar21 = (float)FUN_066d320c(lVar11,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      param_5 = ((fVar19 * fVar27 - fVar20 * fVar21) - fVar24 * fVar22) - fVar18 * fVar25;
      fVar26 = (fVar20 * fVar22 + fVar19 * fVar25 + fVar18 * fVar27) - fVar24 * fVar21;
      fVar28 = (fVar18 * fVar21 + fVar19 * fVar22 + fVar24 * fVar27) - fVar20 * fVar25;
      FUN_066d4ae0((fVar24 * fVar25 + fVar19 * fVar21 + fVar20 * fVar27) - fVar18 * fVar22,lVar3,0);
LAB_052d8bc0:
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052c217c(in_stack_00000058[0x26],0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar19 = (float)FUN_066d48c0(lVar3,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *(long *)(in_stack_00000058[0x26] + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = fVar28;
      fVar24 = fVar26;
      fVar20 = (float)FUN_066d48c0(lVar3,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar17 = fVar17 + (fVar26 - fVar24);
      fVar23 = fVar23 + (fVar28 - fVar18);
      FUN_066d4960(fVar16 + (fVar19 - fVar20),lVar3,0);
      lVar3 = in_stack_00000058[0x26];
      uVar2 = FUN_066ca068(in_stack_00000008._4_4_,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052c2430(lVar3,uVar2,0);
      lVar3 = in_stack_00000058[0x26];
      if (in_stack_00000058[0x70] == 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar3 = FUN_052c416c(*(long *)(lVar3 + 0x30),0,0);
        in_stack_00000058[0x70] = lVar3;
        thunk_FUN_02f411dc(in_stack_00000058 + 0x70);
      }
      else {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_052bf774(*(long *)(lVar3 + 0x30),in_stack_00000058[0x70],0);
      }
      if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_066c67b0(in_stack_00000058[0x13],0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066d320c(lVar3,0);
      fVar16 = (float)FUN_066bd6e0(0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar19 = param_5;
      fVar28 = fVar23;
      fVar26 = fVar17;
      lVar3 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = (float)FUN_066d320c(lVar3,0);
      fVar20 = fVar17 * fVar26;
      fVar24 = ((param_5 * fVar19 - fVar16 * fVar18) - fVar23 * fVar28) - fVar20;
      *(float *)(in_stack_00000058 + 0x53) =
           (fVar23 * fVar26 + param_5 * fVar18 + fVar16 * fVar19) - fVar17 * fVar28;
      *(float *)((long)in_stack_00000058 + 0x29c) =
           (fVar17 * fVar18 + param_5 * fVar28 + fVar23 * fVar19) - fVar16 * fVar26;
      *(float *)(in_stack_00000058 + 0x54) =
           (fVar16 * fVar28 + param_5 * fVar26 + fVar17 * fVar19) - fVar23 * fVar18;
      *(float *)((long)in_stack_00000058 + 0x2a4) = fVar24;
      if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_066c67b0(in_stack_00000058[0x13],0);
      if (in_stack_00000058[0x26] != 0) {
        lVar11 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d48c0(lVar11,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar2 = FUN_066d6014(lVar3,0);
        lVar3 = in_stack_00000058[0x70];
        *(undefined4 *)(in_stack_00000058 + 0x55) = uVar2;
        *(float *)((long)in_stack_00000058 + 0x2ac) = fVar24;
        *(float *)(in_stack_00000058 + 0x56) = fVar20;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(undefined4 *)(lVar3 + 0x10) = uVar2;
        *(float *)(lVar3 + 0x14) = fVar24;
        *(float *)(lVar3 + 0x18) = fVar20;
        lVar3 = in_stack_00000058[0x70];
        if (lVar3 != 0) {
          lVar11 = in_stack_00000058[0x53];
          *(long *)(lVar3 + 0x24) = in_stack_00000058[0x54];
          *(long *)(lVar3 + 0x1c) = lVar11;
          if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar3 = *(long *)(in_stack_00000058[0x26] + 0x30);
          if (lVar3 != 0) {
            FUN_052be1e8(lVar3,in_stack_00000058[0x71],1,0);
            *(undefined1 *)((long)in_stack_00000058 + 0x2c1) = 1;
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
    lVar3 = FUN_03fd09cc(lVar3,iVar10,*puVar13);
    if (lVar3 == 0) break;
    lVar11 = in_stack_00000058[0x84];
    uVar4 = FUN_066c67b0(lVar3,0);
    if (lVar11 == 0) break;
    uVar5 = FUN_04c6b118(lVar11,uVar4,*puVar14);
    if ((uVar5 & 1) == 0) {
      lVar11 = in_stack_00000058[0x85];
      uVar4 = FUN_066c67b0(lVar3,0);
      if (lVar11 == 0) break;
      lVar6 = *(long *)(lVar11 + 0x10);
      lVar7 = *plVar15;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar6 == 0) break;
      uVar8 = *(uint *)(lVar11 + 0x18);
      if (uVar8 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar8 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar8 * 8 + 0x20) = uVar4;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar11,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar6 = in_stack_00000058[0x84];
      uVar4 = FUN_066c67b0(lVar3,0);
      lVar11 = FUN_066c67ec(lVar3,0);
      if ((lVar11 == 0) || (uVar2 = FUN_066c9a84(lVar11,0), lVar6 == 0)) break;
      FUN_04c6af10(lVar6,uVar4,uVar2,*puVar9);
      lVar3 = FUN_066c67ec(lVar3,0);
      if (lVar3 == 0) break;
      FUN_066c9ac0(lVar3,param_6,0);
    }
    iVar10 = iVar10 + 1;
    in_x9 = in_stack_00000058[0x13];
    param_1 = in_stack_00000058;
  } while (in_x9 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


