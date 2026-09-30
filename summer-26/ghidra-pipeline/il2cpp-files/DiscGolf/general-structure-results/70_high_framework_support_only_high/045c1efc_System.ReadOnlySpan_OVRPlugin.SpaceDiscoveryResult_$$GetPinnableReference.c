/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$GetPinnableReference
ENTRY_POINT: 045c1efc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__GetPinnableReference(void)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  double extraout_x1;
  double extraout_x1_00;
  double extraout_x1_01;
  double extraout_x1_02;
  long unaff_x19;
  long *unaff_x20;
  char *unaff_x21;
  int unaff_w22;
  long unaff_d8;
  long unaff_d9;
  double unaff_d10;
  double dVar8;
  undefined8 uStack0000000000000018;
  double dStack0000000000000020;
  undefined8 in_stack_00000028;
  double in_stack_00000030;
  char in_stack_00000038;
  
  uStack0000000000000018 = 0;
  dStack0000000000000020 = 0.0;
  if ((unaff_w22 != 0) && (*(char *)((long)unaff_x20 + 0x84) == '\0')) {
    lVar7 = unaff_x20[0x11];
    uVar6 = FUN_04324b54();
    if (unaff_x20[6] == 0) goto LAB_045c2174;
    bVar5 = (**(code **)(*unaff_x20 + 0x1a8))
                      ((int)lVar7,uVar6 >> 0x20,
                       *(undefined4 *)
                        (&DAT_010fc400 + (ulong)(*(int *)(unaff_x20[6] + 0x20) == 0) * 4));
    *(byte *)((long)unaff_x20 + 0x84) = bVar5 & 1;
  }
  puVar4 = PTR_DAT_069fbb48;
  lVar7 = unaff_x20[6];
  if (lVar7 != 0) {
    dVar8 = 0.0;
    bVar2 = false;
    bVar1 = false;
    do {
      uVar6 = FUN_044cad3c(lVar7,&stack0x00000028,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
      if (((uVar6 & 1) == 0) ||
         ((dVar3 = in_stack_00000030, in_stack_00000038 != '\0' &&
          (FUN_04324b54(&stack0x00000038,
                        *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70)),
          dVar3 = in_stack_00000030, in_stack_00000030 == extraout_x1)))) {
        return;
      }
      in_stack_00000030 = dVar3;
      if (unaff_w22 != 0) {
        if (dVar3 <= unaff_d10) {
          FUN_04324b54();
          bVar1 = extraout_x1_00 < dVar3;
        }
        else {
          bVar1 = false;
        }
      }
      if ((!bVar1) && (unaff_d10 < in_stack_00000030 || unaff_w22 != 0)) {
        return;
      }
      if (unaff_x20[6] == 0) break;
      uVar6 = FUN_044cac6c(unaff_x20[6],&stack0x00000018,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
      if ((uVar6 & 1) != 0) {
        if (*unaff_x21 == '\0') {
          FUN_04324b3c();
          lVar7 = unaff_x20[0x11];
          unaff_x21[0x10] = '\0';
          unaff_x21[0x11] = '\0';
          unaff_x21[0x12] = '\0';
          unaff_x21[0x13] = '\0';
          unaff_x21[0x14] = '\0';
          unaff_x21[0x15] = '\0';
          unaff_x21[0x16] = '\0';
          unaff_x21[0x17] = '\0';
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
          *(int *)((long)unaff_x20 + 0x8c) = (int)lVar7;
          *(int *)(unaff_x20 + 0x12) = (int)lVar7;
          *(undefined4 *)(unaff_x20 + 0x10) = 0;
          unaff_x20[0xd] = 0;
          unaff_x20[0xc] = unaff_d9;
          FUN_04324b54();
          *(undefined1 *)((long)unaff_x20 + 0x84) = 0;
          unaff_x20[0xe] = unaff_d8;
          dVar8 = extraout_x1_02;
        }
        else {
          if (!bVar2) {
            lVar7 = FUN_04ba8144();
            *(undefined1 *)((long)unaff_x20 + 0x84) = 0;
            unaff_x20[0xe] = unaff_d8;
            unaff_x20[0xf] = lVar7;
            *(int *)((long)unaff_x20 + 0x8c) = (int)unaff_x20[0x12];
            FUN_04324b54();
            dVar8 = extraout_x1_01;
          }
          dVar3 = dStack0000000000000020;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar7 = FUN_054e90d8(dVar3 - dVar8,0);
          *(undefined4 *)(unaff_x20 + 0x10) = 0;
          unaff_x20[0xd] = 0;
          unaff_x20[0xc] = lVar7;
          FUN_04324b3c();
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
        bVar2 = true;
      }
      if (*unaff_x21 == '\0') {
        return;
      }
      FUN_04324b3c(&stack0x00000038,in_stack_00000028,in_stack_00000030,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      lVar7 = unaff_x20[6];
    } while (lVar7 != 0);
  }
LAB_045c2174:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


