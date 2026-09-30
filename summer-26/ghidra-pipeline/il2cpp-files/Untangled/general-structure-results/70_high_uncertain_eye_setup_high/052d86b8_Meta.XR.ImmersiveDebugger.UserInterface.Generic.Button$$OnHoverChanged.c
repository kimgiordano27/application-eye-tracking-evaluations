/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$OnHoverChanged
ENTRY_POINT: 052d86b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnHoverChanged
               (long *param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,float param_5,
               long param_6,undefined8 param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long lVar7;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  while( true ) {
    lVar7 = param_1[0x85];
    uVar3 = FUN_066c67b0(param_6,param_7);
    if (lVar7 == 0) break;
    lVar4 = *(long *)(lVar7 + 0x10);
    lVar5 = *unaff_x29;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar6 = *(uint *)(lVar7 + 0x18);
    if (uVar6 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar6 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar6 * 8 + 0x20) = uVar3;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = in_stack_00000058[0x84];
    uVar3 = FUN_066c67b0(unaff_x22,0);
    lVar7 = FUN_066c67ec(unaff_x22,0);
    if ((lVar7 == 0) || (uVar1 = FUN_066c9a84(lVar7,0), lVar4 == 0)) break;
    FUN_04c6af10(lVar4,uVar3,uVar1,*unaff_x19);
    lVar7 = FUN_066c67ec(unaff_x22,0);
    if (lVar7 == 0) break;
    FUN_066c9ac0(lVar7,unaff_w20,0);
    do {
      unaff_w21 = unaff_w21 + 1;
      if ((in_stack_00000058[0x13] == 0) ||
         (lVar7 = *(long *)(in_stack_00000058[0x13] + 0x1c0), lVar7 == 0)) goto LAB_052d8790;
      if (*(int *)(lVar7 + 0x18) <= unaff_w21) {
        in_stack_00000018 = &stack0x00000050;
        in_stack_00000020 = &stack0x00000058;
        in_stack_00000028 = &stack0x00000048;
        in_stack_00000010 = 0;
        lVar7 = in_stack_00000058[0x26];
        if (in_stack_00000058[0x71] == 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar7 = FUN_052c416c(*(long *)(lVar7 + 0x30),0,0);
          in_stack_00000058[0x71] = lVar7;
          thunk_FUN_02f411dc(in_stack_00000058 + 0x71);
        }
        else {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_052bf774(*(long *)(lVar7 + 0x30),in_stack_00000058[0x71],0);
        }
        uVar3 = FUN_066cd398(in_stack_00000058,0);
        uVar3 = FUN_05458458(uVar3,*unaff_x26,0);
        lVar7 = thunk_FUN_02ef1808(*unaff_x25);
        FUN_066c9ce0(lVar7,uVar3,0);
        in_stack_00000058[0x4d] = lVar7;
        thunk_FUN_02f411dc(in_stack_00000058 + 0x4d,lVar7);
        if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar7 = FUN_066c9a48(in_stack_00000058[0x4d],0);
        if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_066c67b0(in_stack_00000058[0x13],0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0(uVar3,uVar3);
        }
        FUN_066d5054(lVar7,uVar3,0);
        if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_066c9a48(in_stack_00000058[0x4d],0);
        FUN_0529929c(uVar3,1,0);
        fVar8 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                 (in_stack_00000058,in_stack_00000058[0x13],
                                  (long)&stack0x00000050 + 4,
                                  *(undefined8 *)(*in_stack_00000058 + 0x640));
        fVar15 = (float)param_3;
        fVar9 = (float)param_4;
        if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_066c9a48(in_stack_00000058[0x4d],0);
        (**(code **)(*in_stack_00000058 + 0x248))
                  (in_stack_00000058,uVar3,*(undefined8 *)(*in_stack_00000058 + 0x250));
        fVar11 = DAT_013f6b64;
        fVar18 = (float)param_4;
        fVar20 = (float)param_3;
        if (in_stack_00000050._4_1_ == '\0') goto LAB_052d89c4;
        uVar6 = 0;
        do {
          fVar15 = (float)param_4;
          fVar8 = (float)param_3;
          if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar7 = FUN_066c67b0(in_stack_00000058[0x26],0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar9 = (float)FUN_066d48c0(lVar7,0);
          if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar4 = *(long *)(in_stack_00000058[0x26] + 0x48);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar20 = fVar8;
          fVar18 = fVar15;
          fVar10 = (float)FUN_066d4d38(lVar4,0);
          param_3 = (ulong)(uint)(fVar8 - fVar20 * fVar11);
          param_4 = (ulong)(uint)(fVar15 - fVar18 * fVar11);
          FUN_066d4960(fVar9 - fVar10 * fVar11,lVar7,0);
          fVar8 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                   (in_stack_00000058,in_stack_00000058[0x13],
                                    (long)&stack0x00000050 + 4,
                                    *(undefined8 *)(*in_stack_00000058 + 0x640));
          fVar15 = (float)param_3;
          fVar9 = (float)param_4;
        } while ((uVar6 < 4) && (uVar6 = uVar6 + 1, in_stack_00000050._4_1_ != '\0'));
        fVar20 = fVar15;
        fVar18 = fVar9;
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
        lVar7 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar11 = (float)FUN_066d48c0(lVar7,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar7 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar10 = fVar18;
        fVar16 = fVar20;
        uVar1 = FUN_066d4d38(lVar7,0);
        if (DAT_071babf2 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf2 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar11 = fVar8 - fVar11;
        fVar20 = SQRT((fVar9 - fVar18) * (fVar9 - fVar18) +
                      fVar11 * fVar11 + (fVar15 - fVar20) * (fVar15 - fVar20));
        if (fVar20 <= DAT_013f6c1c) {
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          fVar11 = **(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
        }
        else {
          fVar11 = fVar11 / fVar20;
        }
        fVar12 = (float)FUN_066bd62c(uVar1,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar19 = fVar11;
        fVar17 = fVar10;
        fVar14 = fVar16;
        lVar7 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = *(long *)(in_stack_00000058[0x26] + 0x30);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = FUN_066c67b0(lVar4,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar13 = (float)FUN_066d320c(lVar4,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        param_5 = ((fVar11 * fVar19 - fVar12 * fVar13) - fVar16 * fVar14) - fVar10 * fVar17;
        fVar18 = (fVar12 * fVar14 + fVar11 * fVar17 + fVar10 * fVar19) - fVar16 * fVar13;
        fVar20 = (fVar10 * fVar13 + fVar11 * fVar14 + fVar16 * fVar19) - fVar12 * fVar17;
        FUN_066d4ae0((fVar16 * fVar17 + fVar11 * fVar13 + fVar12 * fVar19) - fVar10 * fVar14,lVar7,0
                    );
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
        lVar7 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar11 = (float)FUN_066d48c0(lVar7,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar7 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar10 = fVar20;
        fVar16 = fVar18;
        fVar12 = (float)FUN_066d48c0(lVar7,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar7 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar9 = fVar9 + (fVar18 - fVar16);
        fVar15 = fVar15 + (fVar20 - fVar10);
        FUN_066d4960(fVar8 + (fVar11 - fVar12),lVar7,0);
        lVar7 = in_stack_00000058[0x26];
        uVar1 = FUN_066ca068(in_stack_00000008._4_4_,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_052c2430(lVar7,uVar1,0);
        lVar7 = in_stack_00000058[0x26];
        if (in_stack_00000058[0x70] == 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar7 = FUN_052c416c(*(long *)(lVar7 + 0x30),0,0);
          in_stack_00000058[0x70] = lVar7;
          thunk_FUN_02f411dc(in_stack_00000058 + 0x70);
        }
        else {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_052bf774(*(long *)(lVar7 + 0x30),in_stack_00000058[0x70],0);
        }
        if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar7 = FUN_066c67b0(in_stack_00000058[0x13],0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d320c(lVar7,0);
        fVar8 = (float)FUN_066bd6e0(0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar11 = param_5;
        fVar20 = fVar15;
        fVar18 = fVar9;
        lVar7 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar10 = (float)FUN_066d320c(lVar7,0);
        fVar12 = fVar9 * fVar18;
        fVar16 = ((param_5 * fVar11 - fVar8 * fVar10) - fVar15 * fVar20) - fVar12;
        *(float *)(in_stack_00000058 + 0x53) =
             (fVar15 * fVar18 + param_5 * fVar10 + fVar8 * fVar11) - fVar9 * fVar20;
        *(float *)((long)in_stack_00000058 + 0x29c) =
             (fVar9 * fVar10 + param_5 * fVar20 + fVar15 * fVar11) - fVar8 * fVar18;
        *(float *)(in_stack_00000058 + 0x54) =
             (fVar8 * fVar20 + param_5 * fVar18 + fVar9 * fVar11) - fVar15 * fVar10;
        *(float *)((long)in_stack_00000058 + 0x2a4) = fVar16;
        if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar7 = FUN_066c67b0(in_stack_00000058[0x13],0);
        if (in_stack_00000058[0x26] != 0) {
          lVar4 = FUN_066c67b0(in_stack_00000058[0x26],0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d48c0(lVar4,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar1 = FUN_066d6014(lVar7,0);
          lVar7 = in_stack_00000058[0x70];
          *(undefined4 *)(in_stack_00000058 + 0x55) = uVar1;
          *(float *)((long)in_stack_00000058 + 0x2ac) = fVar16;
          *(float *)(in_stack_00000058 + 0x56) = fVar12;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          *(undefined4 *)(lVar7 + 0x10) = uVar1;
          *(float *)(lVar7 + 0x14) = fVar16;
          *(float *)(lVar7 + 0x18) = fVar12;
          lVar7 = in_stack_00000058[0x70];
          if (lVar7 != 0) {
            lVar4 = in_stack_00000058[0x53];
            *(long *)(lVar7 + 0x24) = in_stack_00000058[0x54];
            *(long *)(lVar7 + 0x1c) = lVar4;
            if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar7 = *(long *)(in_stack_00000058[0x26] + 0x30);
            if (lVar7 != 0) {
              FUN_052be1e8(lVar7,in_stack_00000058[0x71],1,0);
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
      param_6 = FUN_03fd09cc(lVar7,unaff_w21,*unaff_x27);
      if (param_6 == 0) goto LAB_052d8790;
      lVar7 = in_stack_00000058[0x84];
      uVar3 = FUN_066c67b0(param_6,0);
      if (lVar7 == 0) goto LAB_052d8790;
      uVar2 = FUN_04c6b118(lVar7,uVar3,*unaff_x28);
    } while ((uVar2 & 1) != 0);
    param_7 = 0;
    param_1 = in_stack_00000058;
    unaff_x22 = param_6;
  }
LAB_052d8790:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


