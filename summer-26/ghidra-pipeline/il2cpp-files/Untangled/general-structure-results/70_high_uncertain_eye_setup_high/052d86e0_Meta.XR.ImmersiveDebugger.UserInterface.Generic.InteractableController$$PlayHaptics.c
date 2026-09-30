/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$PlayHaptics
ENTRY_POINT: 052d86e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__PlayHaptics
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,float param_5,
               undefined8 param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  long in_x10;
  uint uVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar7;
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
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  while( true ) {
    if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = (uint)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_6;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(unaff_x23,param_6,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    lVar6 = in_stack_00000058[0x84];
    uVar3 = FUN_066c67b0(unaff_x22,0);
    lVar4 = FUN_066c67ec(unaff_x22,0);
    if ((lVar4 == 0) || (uVar1 = FUN_066c9a84(lVar4,0), lVar6 == 0)) break;
    FUN_04c6af10(lVar6,uVar3,uVar1,*unaff_x19);
    lVar4 = FUN_066c67ec(unaff_x22,0);
    if (lVar4 == 0) break;
    FUN_066c9ac0(lVar4,unaff_w20,0);
    do {
      unaff_w21 = unaff_w21 + 1;
      if ((in_stack_00000058[0x13] == 0) ||
         (lVar4 = *(long *)(in_stack_00000058[0x13] + 0x1c0), lVar4 == 0)) goto LAB_052d8790;
      if (*(int *)(lVar4 + 0x18) <= unaff_w21) {
        in_stack_00000018 = &stack0x00000050;
        in_stack_00000020 = &stack0x00000058;
        in_stack_00000028 = &stack0x00000048;
        in_stack_00000010 = 0;
        lVar4 = in_stack_00000058[0x26];
        if (in_stack_00000058[0x71] == 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar4 = FUN_052c416c(*(long *)(lVar4 + 0x30),0,0);
          in_stack_00000058[0x71] = lVar4;
          thunk_FUN_02f411dc(in_stack_00000058 + 0x71);
        }
        else {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_052bf774(*(long *)(lVar4 + 0x30),in_stack_00000058[0x71],0);
        }
        uVar3 = FUN_066cd398(in_stack_00000058,0);
        uVar3 = FUN_05458458(uVar3,*unaff_x26,0);
        lVar4 = thunk_FUN_02ef1808(*unaff_x25);
        FUN_066c9ce0(lVar4,uVar3,0);
        in_stack_00000058[0x4d] = lVar4;
        thunk_FUN_02f411dc(in_stack_00000058 + 0x4d,lVar4);
        if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = FUN_066c9a48(in_stack_00000058[0x4d],0);
        if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_066c67b0(in_stack_00000058[0x13],0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0(uVar3,uVar3);
        }
        FUN_066d5054(lVar4,uVar3,0);
        if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_066c9a48(in_stack_00000058[0x4d],0);
        FUN_0529929c(uVar3,1,0);
        fVar7 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                 (in_stack_00000058,in_stack_00000058[0x13],
                                  (long)&stack0x00000050 + 4,
                                  *(undefined8 *)(*in_stack_00000058 + 0x640));
        fVar14 = (float)param_3;
        fVar8 = (float)param_4;
        if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_066c9a48(in_stack_00000058[0x4d],0);
        (**(code **)(*in_stack_00000058 + 0x248))
                  (in_stack_00000058,uVar3,*(undefined8 *)(*in_stack_00000058 + 0x250));
        fVar10 = DAT_013f6b64;
        fVar17 = (float)param_4;
        fVar19 = (float)param_3;
        if (in_stack_00000050._4_1_ == '\0') goto LAB_052d89c4;
        uVar5 = 0;
        do {
          fVar14 = (float)param_4;
          fVar7 = (float)param_3;
          if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar4 = FUN_066c67b0(in_stack_00000058[0x26],0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar8 = (float)FUN_066d48c0(lVar4,0);
          if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar6 = *(long *)(in_stack_00000058[0x26] + 0x48);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar19 = fVar7;
          fVar17 = fVar14;
          fVar9 = (float)FUN_066d4d38(lVar6,0);
          param_3 = (ulong)(uint)(fVar7 - fVar19 * fVar10);
          param_4 = (ulong)(uint)(fVar14 - fVar17 * fVar10);
          FUN_066d4960(fVar8 - fVar9 * fVar10,lVar4,0);
          fVar7 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                                   (in_stack_00000058,in_stack_00000058[0x13],
                                    (long)&stack0x00000050 + 4,
                                    *(undefined8 *)(*in_stack_00000058 + 0x640));
          fVar14 = (float)param_3;
          fVar8 = (float)param_4;
        } while ((uVar5 < 4) && (uVar5 = uVar5 + 1, in_stack_00000050._4_1_ != '\0'));
        fVar19 = fVar14;
        fVar17 = fVar8;
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
        lVar4 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar10 = (float)FUN_066d48c0(lVar4,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar9 = fVar17;
        fVar15 = fVar19;
        uVar1 = FUN_066d4d38(lVar4,0);
        if (DAT_071babf2 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf2 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar10 = fVar7 - fVar10;
        fVar19 = SQRT((fVar8 - fVar17) * (fVar8 - fVar17) +
                      fVar10 * fVar10 + (fVar14 - fVar19) * (fVar14 - fVar19));
        if (fVar19 <= DAT_013f6c1c) {
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          fVar10 = **(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
        }
        else {
          fVar10 = fVar10 / fVar19;
        }
        fVar11 = (float)FUN_066bd62c(uVar1,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar18 = fVar10;
        fVar16 = fVar9;
        fVar13 = fVar15;
        lVar4 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar6 = *(long *)(in_stack_00000058[0x26] + 0x30);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar6 = FUN_066c67b0(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar12 = (float)FUN_066d320c(lVar6,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        param_5 = ((fVar10 * fVar18 - fVar11 * fVar12) - fVar15 * fVar13) - fVar9 * fVar16;
        fVar17 = (fVar11 * fVar13 + fVar10 * fVar16 + fVar9 * fVar18) - fVar15 * fVar12;
        fVar19 = (fVar9 * fVar12 + fVar10 * fVar13 + fVar15 * fVar18) - fVar11 * fVar16;
        FUN_066d4ae0((fVar15 * fVar16 + fVar10 * fVar12 + fVar11 * fVar18) - fVar9 * fVar13,lVar4,0)
        ;
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
        lVar4 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar10 = (float)FUN_066d48c0(lVar4,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = *(long *)(in_stack_00000058[0x26] + 0x48);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar9 = fVar19;
        fVar15 = fVar17;
        fVar11 = (float)FUN_066d48c0(lVar4,0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar8 = fVar8 + (fVar17 - fVar15);
        fVar14 = fVar14 + (fVar19 - fVar9);
        FUN_066d4960(fVar7 + (fVar10 - fVar11),lVar4,0);
        lVar4 = in_stack_00000058[0x26];
        uVar1 = FUN_066ca068(in_stack_00000008._4_4_,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_052c2430(lVar4,uVar1,0);
        lVar4 = in_stack_00000058[0x26];
        if (in_stack_00000058[0x70] == 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar4 = FUN_052c416c(*(long *)(lVar4 + 0x30),0,0);
          in_stack_00000058[0x70] = lVar4;
          thunk_FUN_02f411dc(in_stack_00000058 + 0x70);
        }
        else {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_052bf774(*(long *)(lVar4 + 0x30),in_stack_00000058[0x70],0);
        }
        if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = FUN_066c67b0(in_stack_00000058[0x13],0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d320c(lVar4,0);
        fVar7 = (float)FUN_066bd6e0(0);
        if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar10 = param_5;
        fVar19 = fVar14;
        fVar17 = fVar8;
        lVar4 = FUN_066c67b0(in_stack_00000058[0x26],0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        fVar9 = (float)FUN_066d320c(lVar4,0);
        fVar11 = fVar8 * fVar17;
        fVar15 = ((param_5 * fVar10 - fVar7 * fVar9) - fVar14 * fVar19) - fVar11;
        *(float *)(in_stack_00000058 + 0x53) =
             (fVar14 * fVar17 + param_5 * fVar9 + fVar7 * fVar10) - fVar8 * fVar19;
        *(float *)((long)in_stack_00000058 + 0x29c) =
             (fVar8 * fVar9 + param_5 * fVar19 + fVar14 * fVar10) - fVar7 * fVar17;
        *(float *)(in_stack_00000058 + 0x54) =
             (fVar7 * fVar19 + param_5 * fVar17 + fVar8 * fVar10) - fVar14 * fVar9;
        *(float *)((long)in_stack_00000058 + 0x2a4) = fVar15;
        if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = FUN_066c67b0(in_stack_00000058[0x13],0);
        if (in_stack_00000058[0x26] != 0) {
          lVar6 = FUN_066c67b0(in_stack_00000058[0x26],0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d48c0(lVar6,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar1 = FUN_066d6014(lVar4,0);
          lVar4 = in_stack_00000058[0x70];
          *(undefined4 *)(in_stack_00000058 + 0x55) = uVar1;
          *(float *)((long)in_stack_00000058 + 0x2ac) = fVar15;
          *(float *)(in_stack_00000058 + 0x56) = fVar11;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          *(undefined4 *)(lVar4 + 0x10) = uVar1;
          *(float *)(lVar4 + 0x14) = fVar15;
          *(float *)(lVar4 + 0x18) = fVar11;
          lVar4 = in_stack_00000058[0x70];
          if (lVar4 != 0) {
            lVar6 = in_stack_00000058[0x53];
            *(long *)(lVar4 + 0x24) = in_stack_00000058[0x54];
            *(long *)(lVar4 + 0x1c) = lVar6;
            if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar4 = *(long *)(in_stack_00000058[0x26] + 0x30);
            if (lVar4 != 0) {
              FUN_052be1e8(lVar4,in_stack_00000058[0x71],1,0);
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
      unaff_x22 = FUN_03fd09cc(lVar4,unaff_w21,*unaff_x27);
      if (unaff_x22 == 0) goto LAB_052d8790;
      lVar4 = in_stack_00000058[0x84];
      uVar3 = FUN_066c67b0(unaff_x22,0);
      if (lVar4 == 0) goto LAB_052d8790;
      uVar2 = FUN_04c6b118(lVar4,uVar3,*unaff_x28);
    } while ((uVar2 & 1) != 0);
    unaff_x23 = in_stack_00000058[0x85];
    param_6 = FUN_066c67b0(unaff_x22,0);
    if (unaff_x23 == 0) break;
    param_1 = *(long *)(unaff_x23 + 0x10);
    in_x9 = *unaff_x29;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)*(int *)(unaff_x23 + 0x18);
  }
LAB_052d8790:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


