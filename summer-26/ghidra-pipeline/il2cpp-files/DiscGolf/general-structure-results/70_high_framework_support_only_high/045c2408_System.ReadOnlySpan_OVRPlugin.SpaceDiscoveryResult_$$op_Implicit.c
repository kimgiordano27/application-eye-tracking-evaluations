/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 045c2408
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (double param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  double extraout_x1;
  double extraout_x1_00;
  double extraout_x1_01;
  double extraout_x1_02;
  char *pcVar4;
  double dVar5;
  undefined4 uVar6;
  double unaff_d8;
  undefined8 uStack0000000000000018;
  double dStack0000000000000020;
  undefined8 uStack0000000000000028;
  double dStack0000000000000030;
  char cStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  pcVar4 = (char *)(param_2 + 0x38);
  _cStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000028 = 0;
  dStack0000000000000030 = 0.0;
  uStack0000000000000018 = 0;
  dStack0000000000000020 = 0.0;
  if ((*pcVar4 != '\0') &&
     (FUN_04324b54(pcVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70)),
     param_1 < extraout_x1)) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x30);
  _cStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  if (lVar2 != 0) {
    bVar1 = false;
    do {
      uVar3 = FUN_044cad3c(lVar2,&stack0x00000028,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((cStack0000000000000038 != '\0') &&
         (FUN_04324b54(&stack0x00000038,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70)),
         dStack0000000000000030 == extraout_x1_00)) {
        return;
      }
      dVar5 = dStack0000000000000030;
      if ((dStack0000000000000030 <= unaff_d8) &&
         ((*pcVar4 == '\0' ||
          (FUN_04324b54(pcVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70)),
          extraout_x1_01 < dVar5)))) {
        if (*(long *)(param_2 + 0x30) == 0) break;
        uVar3 = FUN_044cac6c(*(long *)(param_2 + 0x30),&stack0x00000018,
                             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0));
        if ((uVar3 & 1) != 0) {
          if (*pcVar4 == '\0') {
            FUN_04324b3c();
            bVar1 = true;
            uVar6 = *(undefined4 *)(param_2 + 0x88);
            *(undefined8 *)(param_2 + 0x40) = 0;
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4[4] = '\0';
            pcVar4[5] = '\0';
            pcVar4[6] = '\0';
            pcVar4[7] = '\0';
            *(undefined8 *)(param_2 + 0x48) = 0;
            *(undefined4 *)(param_2 + 0x8c) = uVar6;
            *(undefined4 *)(param_2 + 0x90) = uVar6;
            *(double *)(param_2 + 0x50) = dStack0000000000000020;
            *(double *)(param_2 + 0x58) = dStack0000000000000020;
          }
          else {
            if (bVar1) {
              dVar5 = *(double *)(param_2 + 0x50);
            }
            else {
              FUN_04324b54(pcVar4,*(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70));
              *(double *)(param_2 + 0x50) = extraout_x1_02;
              *(undefined1 *)(param_2 + 0x84) = 0;
              *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x90);
              dVar5 = extraout_x1_02;
            }
            *(double *)(param_2 + 0x58) = dStack0000000000000020;
            *(double *)(param_2 + 0x60) = dStack0000000000000020 - dVar5;
            FUN_04324b3c();
            bVar1 = true;
            *(undefined8 *)(param_2 + 0x40) = 0;
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4[4] = '\0';
            pcVar4[5] = '\0';
            pcVar4[6] = '\0';
            pcVar4[7] = '\0';
            *(undefined8 *)(param_2 + 0x48) = 0;
          }
        }
      }
      if (*pcVar4 == '\0') {
        return;
      }
      FUN_04324b3c(&stack0x00000038,uStack0000000000000028,dStack0000000000000030,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa8));
      lVar2 = *(long *)(param_2 + 0x30);
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


