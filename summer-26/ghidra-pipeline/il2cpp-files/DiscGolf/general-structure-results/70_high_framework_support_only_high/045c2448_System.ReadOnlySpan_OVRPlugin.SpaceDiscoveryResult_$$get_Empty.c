/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$get_Empty
ENTRY_POINT: 045c2448
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


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__get_Empty(double param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  double extraout_x1;
  double extraout_x1_00;
  double extraout_x1_01;
  long unaff_x19;
  long unaff_x20;
  char *unaff_x21;
  double dVar4;
  undefined4 uVar5;
  double unaff_d8;
  double unaff_d9;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  double in_stack_00000030;
  char cStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  if (unaff_d9 < param_1) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x30);
  _cStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  if (lVar2 != 0) {
    bVar1 = false;
    do {
      uVar3 = FUN_044cad3c(lVar2,&stack0x00000028,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((cStack0000000000000038 != '\0') &&
         (FUN_04324b54(&stack0x00000038,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70)),
         in_stack_00000030 == extraout_x1)) {
        return;
      }
      dVar4 = in_stack_00000030;
      if ((in_stack_00000030 <= unaff_d8) &&
         ((*unaff_x21 == '\0' || (FUN_04324b54(), extraout_x1_00 < dVar4)))) {
        if (*(long *)(unaff_x20 + 0x30) == 0) break;
        uVar3 = FUN_044cac6c(*(long *)(unaff_x20 + 0x30),&stack0x00000018,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
        if ((uVar3 & 1) != 0) {
          if (*unaff_x21 == '\0') {
            FUN_04324b3c();
            bVar1 = true;
            uVar5 = *(undefined4 *)(unaff_x20 + 0x88);
            unaff_x21[8] = '\0';
            unaff_x21[9] = '\0';
            unaff_x21[10] = '\0';
            unaff_x21[0xb] = '\0';
            unaff_x21[0xc] = '\0';
            unaff_x21[0xd] = '\0';
            unaff_x21[0xe] = '\0';
            unaff_x21[0xf] = '\0';
            unaff_x21[0] = '\0';
            unaff_x21[1] = '\0';
            unaff_x21[2] = '\0';
            unaff_x21[3] = '\0';
            unaff_x21[4] = '\0';
            unaff_x21[5] = '\0';
            unaff_x21[6] = '\0';
            unaff_x21[7] = '\0';
            unaff_x21[0x10] = '\0';
            unaff_x21[0x11] = '\0';
            unaff_x21[0x12] = '\0';
            unaff_x21[0x13] = '\0';
            unaff_x21[0x14] = '\0';
            unaff_x21[0x15] = '\0';
            unaff_x21[0x16] = '\0';
            unaff_x21[0x17] = '\0';
            *(undefined4 *)(unaff_x20 + 0x8c) = uVar5;
            *(undefined4 *)(unaff_x20 + 0x90) = uVar5;
            *(double *)(unaff_x20 + 0x50) = in_stack_00000020;
            *(double *)(unaff_x20 + 0x58) = in_stack_00000020;
          }
          else {
            if (bVar1) {
              dVar4 = *(double *)(unaff_x20 + 0x50);
            }
            else {
              FUN_04324b54();
              *(double *)(unaff_x20 + 0x50) = extraout_x1_01;
              *(undefined1 *)(unaff_x20 + 0x84) = 0;
              *(undefined4 *)(unaff_x20 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x90);
              dVar4 = extraout_x1_01;
            }
            *(double *)(unaff_x20 + 0x58) = in_stack_00000020;
            *(double *)(unaff_x20 + 0x60) = in_stack_00000020 - dVar4;
            FUN_04324b3c();
            bVar1 = true;
            unaff_x21[8] = '\0';
            unaff_x21[9] = '\0';
            unaff_x21[10] = '\0';
            unaff_x21[0xb] = '\0';
            unaff_x21[0xc] = '\0';
            unaff_x21[0xd] = '\0';
            unaff_x21[0xe] = '\0';
            unaff_x21[0xf] = '\0';
            unaff_x21[0] = '\0';
            unaff_x21[1] = '\0';
            unaff_x21[2] = '\0';
            unaff_x21[3] = '\0';
            unaff_x21[4] = '\0';
            unaff_x21[5] = '\0';
            unaff_x21[6] = '\0';
            unaff_x21[7] = '\0';
            unaff_x21[0x10] = '\0';
            unaff_x21[0x11] = '\0';
            unaff_x21[0x12] = '\0';
            unaff_x21[0x13] = '\0';
            unaff_x21[0x14] = '\0';
            unaff_x21[0x15] = '\0';
            unaff_x21[0x16] = '\0';
            unaff_x21[0x17] = '\0';
          }
        }
      }
      if (*unaff_x21 == '\0') {
        return;
      }
      FUN_04324b3c(&stack0x00000038,in_stack_00000028,in_stack_00000030,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      lVar2 = *(long *)(unaff_x20 + 0x30);
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


