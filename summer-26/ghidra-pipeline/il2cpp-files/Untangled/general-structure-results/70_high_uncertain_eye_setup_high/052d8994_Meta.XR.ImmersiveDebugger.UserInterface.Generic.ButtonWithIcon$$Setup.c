/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$Setup
ENTRY_POINT: 052d8994
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__Setup
               (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long *param_5,
               long param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  code *in_x9;
  uint unaff_w19;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
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
    fVar14 = (float)param_3;
    fVar10 = (float)param_2;
    fVar3 = (float)(*in_x9)(param_5,param_6,param_7,param_8);
    if ((3 < unaff_w19) || (unaff_w19 = unaff_w19 + 1, in_stack_00000050._4_1_ == '\0')) break;
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = FUN_066c67b0(in_stack_00000058[0x26],0);
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
    fVar16 = fVar10;
    fVar13 = fVar14;
    fVar4 = (float)FUN_066d4d38(lVar2,0);
    param_2 = (ulong)(uint)(fVar10 - fVar16 * unaff_s11);
    param_3 = (ulong)(uint)(fVar14 - fVar13 * unaff_s11);
    FUN_066d4960(fVar3 - fVar4 * unaff_s11,lVar1,0);
    param_6 = in_stack_00000058[0x13];
    in_x9 = *(code **)(*in_stack_00000058 + 0x638);
    param_8 = *(undefined8 *)(*in_stack_00000058 + 0x640);
    param_7 = (long)&stack0x00000050 + 4;
    param_5 = in_stack_00000058;
  }
  if (((in_stack_00000050._4_1_ == '\0') && (*(char *)((long)in_stack_00000058 + 0xd4) != '\0')) ||
     (fVar16 = fVar10, fVar13 = fVar14, (char)in_stack_00000058[0x69] != '\0')) {
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = *(long *)(in_stack_00000058[0x26] + 0x48);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar16 = fVar14;
    fVar13 = fVar10;
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
    fVar8 = fVar16;
    fVar11 = fVar13;
    uVar5 = FUN_066d4d38(lVar1,0);
    if (DAT_071babf2 == '\0') {
      FUN_02f07e70(PTR_DAT_06d03010);
      DAT_071babf2 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar4 = fVar3 - fVar4;
    fVar16 = SQRT((fVar14 - fVar16) * (fVar14 - fVar16) +
                  fVar4 * fVar4 + (fVar10 - fVar13) * (fVar10 - fVar13));
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
    fVar6 = (float)FUN_066bd62c(uVar5,0);
    if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar15 = fVar4;
    fVar12 = fVar8;
    fVar9 = fVar11;
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
    fVar7 = (float)FUN_066d320c(lVar2,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    param_4 = ((fVar4 * fVar15 - fVar6 * fVar7) - fVar11 * fVar9) - fVar8 * fVar12;
    fVar13 = (fVar6 * fVar9 + fVar4 * fVar12 + fVar8 * fVar15) - fVar11 * fVar7;
    fVar16 = (fVar8 * fVar7 + fVar4 * fVar9 + fVar11 * fVar15) - fVar6 * fVar12;
    FUN_066d4ae0((fVar11 * fVar12 + fVar4 * fVar7 + fVar6 * fVar15) - fVar8 * fVar9,lVar1,0);
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
  fVar8 = fVar16;
  fVar11 = fVar13;
  fVar6 = (float)FUN_066d48c0(lVar1,0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar14 = fVar14 + (fVar13 - fVar11);
  fVar10 = fVar10 + (fVar16 - fVar8);
  FUN_066d4960(fVar3 + (fVar4 - fVar6),lVar1,0);
  lVar1 = in_stack_00000058[0x26];
  uVar5 = FUN_066ca068(in_stack_00000008._4_4_,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_052c2430(lVar1,uVar5,0);
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
  fVar3 = (float)FUN_066bd6e0(0);
  if (in_stack_00000058[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar16 = param_4;
  fVar13 = fVar10;
  fVar4 = fVar14;
  lVar1 = FUN_066c67b0(in_stack_00000058[0x26],0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar8 = (float)FUN_066d320c(lVar1,0);
  fVar6 = fVar14 * fVar4;
  fVar11 = ((param_4 * fVar16 - fVar3 * fVar8) - fVar10 * fVar13) - fVar6;
  *(float *)(in_stack_00000058 + 0x53) =
       (fVar10 * fVar4 + param_4 * fVar8 + fVar3 * fVar16) - fVar14 * fVar13;
  *(float *)((long)in_stack_00000058 + 0x29c) =
       (fVar14 * fVar8 + param_4 * fVar13 + fVar10 * fVar16) - fVar3 * fVar4;
  *(float *)(in_stack_00000058 + 0x54) =
       (fVar3 * fVar13 + param_4 * fVar4 + fVar14 * fVar16) - fVar10 * fVar8;
  *(float *)((long)in_stack_00000058 + 0x2a4) = fVar11;
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
  uVar5 = FUN_066d6014(lVar1,0);
  lVar1 = in_stack_00000058[0x70];
  *(undefined4 *)(in_stack_00000058 + 0x55) = uVar5;
  *(float *)((long)in_stack_00000058 + 0x2ac) = fVar11;
  *(float *)(in_stack_00000058 + 0x56) = fVar6;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined4 *)(lVar1 + 0x10) = uVar5;
  *(float *)(lVar1 + 0x14) = fVar11;
  *(float *)(lVar1 + 0x18) = fVar6;
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


