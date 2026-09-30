/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$.ctor
ENTRY_POINT: 052d87f4
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button___ctor
               (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  thunk_FUN_02f411dc();
  uVar1 = FUN_066cd398(in_stack_00000058,0);
  uVar1 = FUN_05458458(uVar1,*unaff_x26,0);
  lVar2 = thunk_FUN_02ef1808(*unaff_x25);
  FUN_066c9ce0(lVar2,uVar1,0);
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
  uVar1 = FUN_066c67b0(in_stack_00000058[0x13],0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0(uVar1,uVar1);
  }
  FUN_066d5054(lVar2,uVar1,0);
  if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = FUN_066c9a48(in_stack_00000058[0x4d],0);
  FUN_0529929c(uVar1,1,0);
  fVar5 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                           (in_stack_00000058,in_stack_00000058[0x13],(long)&stack0x00000050 + 4,
                            *(undefined8 *)(*in_stack_00000058 + 0x640));
  fVar13 = (float)param_2;
  fVar6 = (float)param_3;
  if (in_stack_00000058[0x4d] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = FUN_066c9a48(in_stack_00000058[0x4d],0);
  (**(code **)(*in_stack_00000058 + 0x248))
            (in_stack_00000058,uVar1,*(undefined8 *)(*in_stack_00000058 + 0x250));
  fVar8 = DAT_013f6b64;
  fVar16 = (float)param_3;
  fVar18 = (float)param_2;
  if (in_stack_00000050._4_1_ == '\0') {
LAB_052d89c4:
    if (*(char *)((long)in_stack_00000058 + 0xd4) == '\0') goto LAB_052d89d0;
  }
  else {
    uVar4 = 0;
    do {
      fVar13 = (float)param_3;
      fVar5 = (float)param_2;
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar6 = (float)FUN_066d48c0(lVar2,0);
      if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *(long *)(in_stack_00000058[0x26] + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar18 = fVar5;
      fVar16 = fVar13;
      fVar7 = (float)FUN_066d4d38(lVar3,0);
      param_2 = (ulong)(uint)(fVar5 - fVar18 * fVar8);
      param_3 = (ulong)(uint)(fVar13 - fVar16 * fVar8);
      FUN_066d4960(fVar6 - fVar7 * fVar8,lVar2,0);
      fVar5 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                               (in_stack_00000058,in_stack_00000058[0x13],(long)&stack0x00000050 + 4
                                ,*(undefined8 *)(*in_stack_00000058 + 0x640));
      fVar13 = (float)param_2;
      fVar6 = (float)param_3;
    } while ((uVar4 < 4) && (uVar4 = uVar4 + 1, in_stack_00000050._4_1_ != '\0'));
    fVar18 = fVar13;
    fVar16 = fVar6;
    if (in_stack_00000050._4_1_ == '\0') goto LAB_052d89c4;
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
  fVar8 = (float)FUN_066d48c0(lVar2,0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(in_stack_00000058[0x26] + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar7 = fVar16;
  fVar14 = fVar18;
  uVar9 = FUN_066d4d38(lVar2,0);
  if (DAT_071babf2 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf2 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar8 = fVar5 - fVar8;
  fVar18 = SQRT((fVar6 - fVar16) * (fVar6 - fVar16) +
                fVar8 * fVar8 + (fVar13 - fVar18) * (fVar13 - fVar18));
  if (fVar18 <= DAT_013f6c1c) {
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    fVar8 = **(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
  }
  else {
    fVar8 = fVar8 / fVar18;
  }
  fVar10 = (float)FUN_066bd62c(uVar9,0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar17 = fVar8;
  fVar15 = fVar7;
  fVar12 = fVar14;
  lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *(long *)(in_stack_00000058[0x26] + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = FUN_066c67b0(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar11 = (float)FUN_066d320c(lVar3,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  param_4 = ((fVar8 * fVar17 - fVar10 * fVar11) - fVar14 * fVar12) - fVar7 * fVar15;
  fVar16 = (fVar10 * fVar12 + fVar8 * fVar15 + fVar7 * fVar17) - fVar14 * fVar11;
  fVar18 = (fVar7 * fVar11 + fVar8 * fVar12 + fVar14 * fVar17) - fVar10 * fVar15;
  FUN_066d4ae0((fVar14 * fVar15 + fVar8 * fVar11 + fVar10 * fVar17) - fVar7 * fVar12,lVar2,0);
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
  fVar8 = (float)FUN_066d48c0(lVar2,0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(in_stack_00000058[0x26] + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar7 = fVar18;
  fVar14 = fVar16;
  fVar10 = (float)FUN_066d48c0(lVar2,0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar6 = fVar6 + (fVar16 - fVar14);
  fVar13 = fVar13 + (fVar18 - fVar7);
  FUN_066d4960(fVar5 + (fVar8 - fVar10),lVar2,0);
  lVar2 = in_stack_00000058[0x26];
  uVar9 = FUN_066ca068(in_stack_00000008._4_4_,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_052c2430(lVar2,uVar9,0);
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
  fVar5 = (float)FUN_066bd6e0(0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar8 = param_4;
  fVar18 = fVar13;
  fVar16 = fVar6;
  lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar7 = (float)FUN_066d320c(lVar2,0);
  fVar10 = fVar6 * fVar16;
  fVar14 = ((param_4 * fVar8 - fVar5 * fVar7) - fVar13 * fVar18) - fVar10;
  *(float *)(in_stack_00000058 + 0x53) =
       (fVar13 * fVar16 + param_4 * fVar7 + fVar5 * fVar8) - fVar6 * fVar18;
  *(float *)((long)in_stack_00000058 + 0x29c) =
       (fVar6 * fVar7 + param_4 * fVar18 + fVar13 * fVar8) - fVar5 * fVar16;
  *(float *)(in_stack_00000058 + 0x54) =
       (fVar5 * fVar18 + param_4 * fVar16 + fVar6 * fVar8) - fVar13 * fVar7;
  *(float *)((long)in_stack_00000058 + 0x2a4) = fVar14;
  if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(in_stack_00000058[0x13],0);
  if (in_stack_00000058[0x26] != 0) {
    lVar3 = FUN_066c67b0(in_stack_00000058[0x26],0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d48c0(lVar3,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = FUN_066d6014(lVar2,0);
    lVar2 = in_stack_00000058[0x70];
    *(undefined4 *)(in_stack_00000058 + 0x55) = uVar9;
    *(float *)((long)in_stack_00000058 + 0x2ac) = fVar14;
    *(float *)(in_stack_00000058 + 0x56) = fVar10;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined4 *)(lVar2 + 0x10) = uVar9;
    *(float *)(lVar2 + 0x14) = fVar14;
    *(float *)(lVar2 + 0x18) = fVar10;
    lVar2 = in_stack_00000058[0x70];
    if (lVar2 != 0) {
      lVar3 = in_stack_00000058[0x53];
      *(long *)(lVar2 + 0x24) = in_stack_00000058[0x54];
      *(long *)(lVar2 + 0x1c) = lVar3;
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


