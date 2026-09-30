/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$set_Callback
ENTRY_POINT: 052d8640
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__set_Callback
               (long *param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,float param_5,
               undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  long lVar6;
  uint uVar7;
  long unaff_x19;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long unaff_x25;
  undefined8 *puVar11;
  long unaff_x26;
  undefined8 *puVar12;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *puVar13;
  long unaff_x29;
  long *plVar14;
  float fVar15;
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
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  puVar13 = *(undefined8 **)(unaff_x28 + 0x968);
  plVar14 = *(long **)(unaff_x29 + 0xb30);
  puVar8 = *(undefined8 **)(unaff_x19 + 0x980);
  puVar12 = *(undefined8 **)(unaff_x26 + 0x778);
  puVar11 = *(undefined8 **)(unaff_x25 + 0xfb8);
  iVar9 = 0;
  do {
    lVar2 = *(long *)(in_x9 + 0x1c0);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= iVar9) {
      in_stack_00000018 = &stack0x00000050;
      in_stack_00000020 = &stack0x00000058;
      in_stack_00000028 = &stack0x00000048;
      in_stack_00000010 = 0;
      lVar2 = param_1[0x26];
      if (param_1[0x71] == 0) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar2 = FUN_052c416c(*(long *)(lVar2 + 0x30),0,0);
        in_stack_00000058[0x71] = lVar2;
        thunk_FUN_02f411dc(in_stack_00000058 + 0x71);
      }
      else {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_052bf774(*(long *)(lVar2 + 0x30),param_1[0x71],0);
      }
      uVar3 = FUN_066cd398(in_stack_00000058,0);
      uVar3 = FUN_05458458(uVar3,*puVar12,0);
      lVar2 = thunk_FUN_02ef1808(*puVar11);
      FUN_066c9ce0(lVar2,uVar3,0);
      in_stack_00000058[0x4d] = lVar2;
      thunk_FUN_02f411dc(in_stack_00000058 + 0x4d,lVar2);
      if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = FUN_066c9a48(in_stack_00000058[0x4d],0);
      if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = FUN_066c67b0(in_stack_00000058[0x13],0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0(uVar3,uVar3);
      }
      FUN_066d5054(lVar2,uVar3,0);
      if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = FUN_066c9a48(in_stack_00000058[0x4d],0);
      FUN_0529929c(uVar3,1,0);
      fVar15 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                (in_stack_00000058,in_stack_00000058[0x13],
                                 (long)&stack0x00000050 + 4,
                                 *(undefined8 *)(*in_stack_00000058 + 0x640));
      fVar22 = (float)param_3;
      fVar16 = (float)param_4;
      if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = FUN_066c9a48(in_stack_00000058[0x4d],0);
      (**(code **)(*in_stack_00000058 + 0x248))
                (in_stack_00000058,uVar3,*(undefined8 *)(*in_stack_00000058 + 0x250));
      fVar18 = DAT_013f6b64;
      fVar25 = (float)param_4;
      fVar27 = (float)param_3;
      if (in_stack_00000050._4_1_ == '\0') goto LAB_052d89c4;
      uVar7 = 0;
      do {
        fVar22 = (float)param_4;
        fVar15 = (float)param_3;
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar16 = (float)FUN_066d48c0(lVar2,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar10 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar27 = fVar15;
        fVar25 = fVar22;
        fVar17 = (float)FUN_066d4d38(lVar10,0);
        param_3 = (ulong)(uint)(fVar15 - fVar27 * fVar18);
        param_4 = (ulong)(uint)(fVar22 - fVar25 * fVar18);
        FUN_066d4960(fVar16 - fVar17 * fVar18,lVar2,0);
        fVar15 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                  (in_stack_00000058,in_stack_00000058[0x13],
                                   (long)&stack0x00000050 + 4,
                                   *(undefined8 *)(*in_stack_00000058 + 0x640));
        fVar22 = (float)param_3;
        fVar16 = (float)param_4;
      } while ((uVar7 < 4) && (uVar7 = uVar7 + 1, in_stack_00000050._4_1_ != '\0'));
      fVar27 = fVar22;
      fVar25 = fVar16;
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
      lVar2 = *(long *)(in_stack_00000058[0x26] + 0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = (float)FUN_066d48c0(lVar2,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = *(long *)(in_stack_00000058[0x26] + 0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar17 = fVar25;
      fVar23 = fVar27;
      uVar1 = FUN_066d4d38(lVar2,0);
      if (DAT_071babf2 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071babf2 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar18 = fVar15 - fVar18;
      fVar27 = SQRT((fVar16 - fVar25) * (fVar16 - fVar25) +
                    fVar18 * fVar18 + (fVar22 - fVar27) * (fVar22 - fVar27));
      if (fVar27 <= DAT_013f6c1c) {
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        fVar18 = **(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      }
      else {
        fVar18 = fVar18 / fVar27;
      }
      fVar19 = (float)FUN_066bd62c(uVar1,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar26 = fVar18;
      fVar24 = fVar17;
      fVar21 = fVar23;
      lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = *(long *)(in_stack_00000058[0x26] + 0x30);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = FUN_066c67b0(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar20 = (float)FUN_066d320c(lVar10,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      param_5 = ((fVar18 * fVar26 - fVar19 * fVar20) - fVar23 * fVar21) - fVar17 * fVar24;
      fVar25 = (fVar19 * fVar21 + fVar18 * fVar24 + fVar17 * fVar26) - fVar23 * fVar20;
      fVar27 = (fVar17 * fVar20 + fVar18 * fVar21 + fVar23 * fVar26) - fVar19 * fVar24;
      FUN_066d4ae0((fVar23 * fVar24 + fVar18 * fVar20 + fVar19 * fVar26) - fVar17 * fVar21,lVar2,0);
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
      lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = (float)FUN_066d48c0(lVar2,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = *(long *)(in_stack_00000058[0x26] + 0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar17 = fVar27;
      fVar23 = fVar25;
      fVar19 = (float)FUN_066d48c0(lVar2,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar16 = fVar16 + (fVar25 - fVar23);
      fVar22 = fVar22 + (fVar27 - fVar17);
      FUN_066d4960(fVar15 + (fVar18 - fVar19),lVar2,0);
      lVar2 = in_stack_00000058[0x26];
      uVar1 = FUN_066ca068(in_stack_00000008._4_4_,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052c2430(lVar2,uVar1,0);
      lVar2 = in_stack_00000058[0x26];
      if (in_stack_00000058[0x70] == 0) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar2 = FUN_052c416c(*(long *)(lVar2 + 0x30),0,0);
        in_stack_00000058[0x70] = lVar2;
        thunk_FUN_02f411dc(in_stack_00000058 + 0x70);
      }
      else {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_052bf774(*(long *)(lVar2 + 0x30),in_stack_00000058[0x70],0);
      }
      if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = FUN_066c67b0(in_stack_00000058[0x13],0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066d320c(lVar2,0);
      fVar15 = (float)FUN_066bd6e0(0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = param_5;
      fVar27 = fVar22;
      fVar25 = fVar16;
      lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar17 = (float)FUN_066d320c(lVar2,0);
      fVar19 = fVar16 * fVar25;
      fVar23 = ((param_5 * fVar18 - fVar15 * fVar17) - fVar22 * fVar27) - fVar19;
      *(float *)(in_stack_00000058 + 0x53) =
           (fVar22 * fVar25 + param_5 * fVar17 + fVar15 * fVar18) - fVar16 * fVar27;
      *(float *)((long)in_stack_00000058 + 0x29c) =
           (fVar16 * fVar17 + param_5 * fVar27 + fVar22 * fVar18) - fVar15 * fVar25;
      *(float *)(in_stack_00000058 + 0x54) =
           (fVar15 * fVar27 + param_5 * fVar25 + fVar16 * fVar18) - fVar22 * fVar17;
      *(float *)((long)in_stack_00000058 + 0x2a4) = fVar23;
      if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = FUN_066c67b0(in_stack_00000058[0x13],0);
      if (in_stack_00000058[0x26] != 0) {
        lVar10 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d48c0(lVar10,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar1 = FUN_066d6014(lVar2,0);
        lVar2 = in_stack_00000058[0x70];
        *(undefined4 *)(in_stack_00000058 + 0x55) = uVar1;
        *(float *)((long)in_stack_00000058 + 0x2ac) = fVar23;
        *(float *)(in_stack_00000058 + 0x56) = fVar19;
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(undefined4 *)(lVar2 + 0x10) = uVar1;
        *(float *)(lVar2 + 0x14) = fVar23;
        *(float *)(lVar2 + 0x18) = fVar19;
        lVar2 = in_stack_00000058[0x70];
        if (lVar2 != 0) {
          lVar10 = in_stack_00000058[0x53];
          *(long *)(lVar2 + 0x24) = in_stack_00000058[0x54];
          *(long *)(lVar2 + 0x1c) = lVar10;
          if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar2 = *(long *)(in_stack_00000058[0x26] + 0x30);
          if (lVar2 != 0) {
            FUN_052be1e8(lVar2,in_stack_00000058[0x71],1,0);
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
    lVar2 = FUN_03fd09cc(lVar2,iVar9,*unaff_x27);
    if (lVar2 == 0) break;
    lVar10 = in_stack_00000058[0x84];
    uVar3 = FUN_066c67b0(lVar2,0);
    if (lVar10 == 0) break;
    uVar4 = FUN_04c6b118(lVar10,uVar3,*puVar13);
    if ((uVar4 & 1) == 0) {
      lVar10 = in_stack_00000058[0x85];
      uVar3 = FUN_066c67b0(lVar2,0);
      if (lVar10 == 0) break;
      lVar5 = *(long *)(lVar10 + 0x10);
      lVar6 = *plVar14;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar5 == 0) break;
      uVar7 = *(uint *)(lVar10 + 0x18);
      if (uVar7 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar7 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar7 * 8 + 0x20) = uVar3;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar10,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar5 = in_stack_00000058[0x84];
      uVar3 = FUN_066c67b0(lVar2,0);
      lVar10 = FUN_066c67ec(lVar2,0);
      if ((lVar10 == 0) || (uVar1 = FUN_066c9a84(lVar10,0), lVar5 == 0)) break;
      FUN_04c6af10(lVar5,uVar3,uVar1,*puVar8);
      lVar2 = FUN_066c67ec(lVar2,0);
      if (lVar2 == 0) break;
      FUN_066c9ac0(lVar2,param_6,0);
    }
    iVar9 = iVar9 + 1;
    in_x9 = in_stack_00000058[0x13];
    param_1 = in_stack_00000058;
  } while (in_x9 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


