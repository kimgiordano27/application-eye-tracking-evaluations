/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 045c2524
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  ulong uVar1;
  double extraout_x1;
  double extraout_x1_00;
  double extraout_x1_01;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  ulong unaff_x22;
  double dVar2;
  undefined4 uVar3;
  double unaff_d8;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  double in_stack_00000030;
  char in_stack_00000038;
  
  do {
    if (in_w9 == 0) {
      FUN_04324b3c();
      uVar3 = *(undefined4 *)(unaff_x20 + 0x88);
      unaff_x21[8] = 0;
      unaff_x21[9] = 0;
      unaff_x21[10] = 0;
      unaff_x21[0xb] = 0;
      unaff_x21[0xc] = 0;
      unaff_x21[0xd] = 0;
      unaff_x21[0xe] = 0;
      unaff_x21[0xf] = 0;
      unaff_x21[0] = 0;
      unaff_x21[1] = 0;
      unaff_x21[2] = 0;
      unaff_x21[3] = 0;
      unaff_x21[4] = 0;
      unaff_x21[5] = 0;
      unaff_x21[6] = 0;
      unaff_x21[7] = 0;
      unaff_x21[0x10] = 0;
      unaff_x21[0x11] = 0;
      unaff_x21[0x12] = 0;
      unaff_x21[0x13] = 0;
      unaff_x21[0x14] = 0;
      unaff_x21[0x15] = 0;
      unaff_x21[0x16] = 0;
      unaff_x21[0x17] = 0;
      *(undefined4 *)(unaff_x20 + 0x8c) = uVar3;
      *(undefined4 *)(unaff_x20 + 0x90) = uVar3;
      *(double *)(unaff_x20 + 0x50) = in_stack_00000020;
      *(double *)(unaff_x20 + 0x58) = in_stack_00000020;
    }
    else {
      if ((unaff_x22 & 1) == 0) {
        FUN_04324b54();
        *(double *)(unaff_x20 + 0x50) = extraout_x1_01;
        *(undefined1 *)(unaff_x20 + 0x84) = 0;
        *(undefined4 *)(unaff_x20 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x90);
        dVar2 = extraout_x1_01;
      }
      else {
        dVar2 = *(double *)(unaff_x20 + 0x50);
      }
      *(double *)(unaff_x20 + 0x58) = in_stack_00000020;
      *(double *)(unaff_x20 + 0x60) = in_stack_00000020 - dVar2;
      FUN_04324b3c();
      unaff_x21[8] = 0;
      unaff_x21[9] = 0;
      unaff_x21[10] = 0;
      unaff_x21[0xb] = 0;
      unaff_x21[0xc] = 0;
      unaff_x21[0xd] = 0;
      unaff_x21[0xe] = 0;
      unaff_x21[0xf] = 0;
      unaff_x21[0] = 0;
      unaff_x21[1] = 0;
      unaff_x21[2] = 0;
      unaff_x21[3] = 0;
      unaff_x21[4] = 0;
      unaff_x21[5] = 0;
      unaff_x21[6] = 0;
      unaff_x21[7] = 0;
      unaff_x21[0x10] = 0;
      unaff_x21[0x11] = 0;
      unaff_x21[0x12] = 0;
      unaff_x21[0x13] = 0;
      unaff_x21[0x14] = 0;
      unaff_x21[0x15] = 0;
      unaff_x21[0x16] = 0;
      unaff_x21[0x17] = 0;
    }
    do {
      do {
        unaff_x22 = 1;
        if (*unaff_x21 == 0) {
          return;
        }
        FUN_04324b3c(&stack0x00000038,in_stack_00000028,in_stack_00000030,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        if (*(long *)(unaff_x20 + 0x30) == 0) {
LAB_045c2600:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar1 = FUN_044cad3c(*(long *)(unaff_x20 + 0x30),&stack0x00000028,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
        if ((uVar1 & 1) == 0) {
          return;
        }
        if ((in_stack_00000038 != '\0') &&
           (FUN_04324b54(&stack0x00000038,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70)),
           in_stack_00000030 == extraout_x1)) {
          return;
        }
        dVar2 = in_stack_00000030;
      } while ((unaff_d8 < in_stack_00000030) ||
              ((*unaff_x21 != 0 && (FUN_04324b54(), dVar2 <= extraout_x1_00))));
      if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_045c2600;
      uVar1 = FUN_044cac6c(*(long *)(unaff_x20 + 0x30),&stack0x00000018,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
    } while ((uVar1 & 1) == 0);
    in_w9 = (uint)*unaff_x21;
  } while( true );
}


