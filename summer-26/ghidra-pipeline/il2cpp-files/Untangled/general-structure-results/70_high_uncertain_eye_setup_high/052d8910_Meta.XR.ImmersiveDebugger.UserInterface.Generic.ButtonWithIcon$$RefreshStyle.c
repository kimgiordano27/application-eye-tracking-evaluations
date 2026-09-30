/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$RefreshStyle
ENTRY_POINT: 052d8910
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__RefreshStyle
               (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  uint unaff_w19;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
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
  float unaff_s11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  while( true ) {
    fVar11 = (float)param_3;
    fVar5 = (float)param_2;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = FUN_066c67b0(param_5,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar3 = (float)FUN_066d48c0(lVar1,0);
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = *(long *)(in_stack_00000058[0x26] + 0x48);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar16 = fVar5;
    fVar14 = fVar11;
    fVar4 = (float)FUN_066d4d38(lVar2,0);
    param_2 = (ulong)(uint)(fVar5 - fVar16 * unaff_s11);
    param_3 = (ulong)(uint)(fVar11 - fVar14 * unaff_s11);
    FUN_066d4960(fVar3 - fVar4 * unaff_s11,lVar1,0);
    fVar5 = (float)(**(code **)(*in_stack_00000058 + 0x638))
                             (in_stack_00000058,in_stack_00000058[0x13],(long)&stack0x00000050 + 4,
                              *(undefined8 *)(*in_stack_00000058 + 0x640));
    fVar3 = (float)param_3;
    fVar11 = (float)param_2;
    if ((3 < unaff_w19) || (unaff_w19 = unaff_w19 + 1, in_stack_00000050._4_1_ == '\0')) break;
    param_5 = in_stack_00000058[0x26];
  }
  if (((in_stack_00000050._4_1_ == '\0') && (*(char *)((long)in_stack_00000058 + 0xd4) != '\0')) ||
     (fVar16 = fVar11, fVar14 = fVar3, (char)in_stack_00000058[0x69] != '\0')) {
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = *(long *)(in_stack_00000058[0x26] + 0x48);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar16 = fVar3;
    fVar14 = fVar11;
    fVar4 = (float)FUN_066d48c0(lVar1,0);
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = *(long *)(in_stack_00000058[0x26] + 0x48);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar9 = fVar16;
    fVar12 = fVar14;
    uVar6 = FUN_066d4d38(lVar1,0);
    if (DAT_071babf2 == '\0') {
      FUN_02f07e70(PTR_DAT_06d03010);
      DAT_071babf2 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar4 = fVar5 - fVar4;
    fVar16 = SQRT((fVar3 - fVar16) * (fVar3 - fVar16) +
                  fVar4 * fVar4 + (fVar11 - fVar14) * (fVar11 - fVar14));
    if (fVar16 <= DAT_013f6c1c) {
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      fVar4 = **(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
    }
    else {
      fVar4 = fVar4 / fVar16;
    }
    fVar7 = (float)FUN_066bd62c(uVar6,0);
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar15 = fVar4;
    fVar13 = fVar9;
    fVar10 = fVar12;
    lVar1 = FUN_066c67b0(in_stack_00000058[0x26],0);
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = *(long *)(in_stack_00000058[0x26] + 0x30);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = FUN_066c67b0(lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar8 = (float)FUN_066d320c(lVar2,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    param_4 = ((fVar4 * fVar15 - fVar7 * fVar8) - fVar12 * fVar10) - fVar9 * fVar13;
    fVar14 = (fVar7 * fVar10 + fVar4 * fVar13 + fVar9 * fVar15) - fVar12 * fVar8;
    fVar16 = (fVar9 * fVar8 + fVar4 * fVar10 + fVar12 * fVar15) - fVar7 * fVar13;
    FUN_066d4ae0((fVar12 * fVar13 + fVar4 * fVar8 + fVar7 * fVar15) - fVar9 * fVar10,lVar1,0);
  }
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_052c217c(in_stack_00000058[0x26],0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar4 = (float)FUN_066d48c0(lVar1,0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = *(long *)(in_stack_00000058[0x26] + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar9 = fVar16;
  fVar12 = fVar14;
  fVar7 = (float)FUN_066d48c0(lVar1,0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar3 = fVar3 + (fVar14 - fVar12);
  fVar11 = fVar11 + (fVar16 - fVar9);
  FUN_066d4960(fVar5 + (fVar4 - fVar7),lVar1,0);
  lVar1 = in_stack_00000058[0x26];
  uVar6 = FUN_066ca068(in_stack_00000008._4_4_,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_052c2430(lVar1,uVar6,0);
  lVar1 = in_stack_00000058[0x26];
  if (in_stack_00000058[0x70] == 0) {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(lVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = FUN_052c416c(*(long *)(lVar1 + 0x30),0,0);
    in_stack_00000058[0x70] = lVar1;
    thunk_FUN_02f411dc(in_stack_00000058 + 0x70);
  }
  else {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(lVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_052bf774(*(long *)(lVar1 + 0x30),in_stack_00000058[0x70],0);
  }
  if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = FUN_066c67b0(in_stack_00000058[0x13],0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d320c(lVar1,0);
  fVar5 = (float)FUN_066bd6e0(0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar16 = param_4;
  fVar14 = fVar11;
  fVar4 = fVar3;
  lVar1 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar9 = (float)FUN_066d320c(lVar1,0);
  fVar7 = fVar3 * fVar4;
  fVar12 = ((param_4 * fVar16 - fVar5 * fVar9) - fVar11 * fVar14) - fVar7;
  *(float *)(in_stack_00000058 + 0x53) =
       (fVar11 * fVar4 + param_4 * fVar9 + fVar5 * fVar16) - fVar3 * fVar14;
  *(float *)((long)in_stack_00000058 + 0x29c) =
       (fVar3 * fVar9 + param_4 * fVar14 + fVar11 * fVar16) - fVar5 * fVar4;
  *(float *)(in_stack_00000058 + 0x54) =
       (fVar5 * fVar14 + param_4 * fVar4 + fVar3 * fVar16) - fVar11 * fVar9;
  *(float *)((long)in_stack_00000058 + 0x2a4) = fVar12;
  if (in_stack_00000058[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = FUN_066c67b0(in_stack_00000058[0x13],0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(lVar2,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar6 = FUN_066d6014(lVar1,0);
  lVar1 = in_stack_00000058[0x70];
  *(undefined4 *)(in_stack_00000058 + 0x55) = uVar6;
  *(float *)((long)in_stack_00000058 + 0x2ac) = fVar12;
  *(float *)(in_stack_00000058 + 0x56) = fVar7;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined4 *)(lVar1 + 0x10) = uVar6;
  *(float *)(lVar1 + 0x14) = fVar12;
  *(float *)(lVar1 + 0x18) = fVar7;
  lVar1 = in_stack_00000058[0x70];
  if (lVar1 != 0) {
    lVar2 = in_stack_00000058[0x53];
    *(long *)(lVar1 + 0x24) = in_stack_00000058[0x54];
    *(long *)(lVar1 + 0x1c) = lVar2;
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = *(long *)(in_stack_00000058[0x26] + 0x30);
    if (lVar1 != 0) {
      FUN_052be1e8(lVar1,in_stack_00000058[0x71],1,0);
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


