/*
FUNCTION_NAME: Meta.WitAi.WitRequest.OnCustomizeUriEvent$$BeginInvoke
ENTRY_POINT: 062c3bb8
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void Meta_WitAi_WitRequest_OnCustomizeUriEvent__BeginInvoke(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  uint *unaff_x29;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  ulong uVar13;
  undefined8 uVar14;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
code_r0x062c3bb8:
  uVar14 = *(undefined8 *)(unaff_x29 + 0x13);
  fVar10 = (float)*(undefined8 *)(unaff_x29 + 3) * (float)uVar14;
  fVar12 = (float)((ulong)*(undefined8 *)(unaff_x29 + 3) >> 0x20) * (float)((ulong)uVar14 >> 0x20);
  fVar8 = (float)unaff_x29[2] * (float)unaff_x29[0x12] * fVar10 * fVar12;
  uVar11 = CONCAT44(fVar12,fVar10);
  uVar13 = (ulong)unaff_x29[0x12];
Meta_WitAi_WitRequest_OnCustomizeUriEvent__EndInvoke:
  do {
    unaff_x29[7] = (uint)fVar8;
    if (*(uint *)(unaff_x22 + 0x24) < 3) {
      uVar9 = FUN_062a7558(unaff_x22,0,0);
      unaff_x29[8] = uVar9;
      unaff_x29[9] = (uint)uVar11;
      unaff_x29[10] = (uint)uVar13;
    }
    else {
      FUN_062e7f5c(&stack0x00000010,*(undefined8 *)(unaff_x22 + 0x48),0);
      in_stack_00000088 = in_stack_00000018;
      in_stack_00000080 = in_stack_00000010;
      in_stack_00000098 = in_stack_00000028;
      in_stack_00000090 = in_stack_00000020;
      in_stack_000000a8 = in_stack_00000038;
      in_stack_000000a0 = in_stack_00000030;
      in_stack_000000b8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000040;
      *(undefined8 *)(unaff_x29 + 0x33) = in_stack_00000048;
      *(undefined8 *)(unaff_x29 + 0x31) = in_stack_00000040;
      *(undefined8 *)(unaff_x29 + 0x2f) = in_stack_00000038;
      *(ulong *)(unaff_x29 + 0x2d) = in_stack_00000030;
      *(undefined8 *)(unaff_x29 + 0x2b) = in_stack_00000028;
      *(ulong *)(unaff_x29 + 0x29) = in_stack_00000020;
      *(undefined8 *)(unaff_x29 + 0x27) = in_stack_00000018;
      *(undefined8 *)(unaff_x29 + 0x25) = in_stack_00000010;
      uVar11 = in_stack_00000020;
      uVar13 = in_stack_00000030;
      uVar14 = in_stack_00000040;
    }
    do {
      do {
        uVar2 = FUN_06078c90(&stack0x00000050,*(undefined8 *)(unaff_x24 + 0xf70));
        unaff_x22 = in_stack_00000068;
        uVar1 = in_stack_00000060;
        if ((uVar2 & 1) == 0) {
          return;
        }
      } while ((int)in_stack_00000060 < 0);
      if (*(int *)(*(long *)(unaff_x25 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a119fc(unaff_x22,0,0);
      uVar9 = (uint)uVar13;
      uVar7 = (uint)uVar14;
    } while ((uVar2 & 1) != 0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    pcVar4 = *(code **)(unaff_x26 + 0x188);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)FUN_033d1b68();
      *(code **)(unaff_x26 + 0x188) = pcVar4;
    }
    lVar3 = (*pcVar4)(unaff_x22);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar5 = *(uint *)(unaff_x22 + 0x24);
    unaff_x29 = (uint *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x10) +
                        (uVar1 & 0xffffffff) * unaff_x27);
    unaff_x29[1] = uVar5;
    if (uVar5 == 1) {
LAB_062c3a9c:
      uVar5 = *(uint *)(unaff_x22 + 0x34);
      uVar11 = CONCAT44(uVar5,uVar5);
LAB_062c3ab0:
      *(ulong *)(unaff_x29 + 2) = uVar11;
      unaff_x29[4] = uVar5;
    }
    else {
      if (uVar5 == 2) {
        uVar11 = *(ulong *)(unaff_x22 + 0x28);
        uVar5 = *(uint *)(unaff_x22 + 0x30);
        goto LAB_062c3ab0;
      }
      if (uVar5 == 10) goto LAB_062c3a9c;
    }
    uVar5 = (uint)uVar11;
    *(undefined8 *)(unaff_x29 + 5) = *(undefined8 *)(unaff_x22 + 0x38);
    *unaff_x29 = *unaff_x29 & 0xfffffffb | (uint)*(byte *)(unaff_x22 + 0x50) << 2;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar6 = FUN_07a18d2c(lVar3,0);
    unaff_x29[0xb] = uVar6;
    unaff_x29[0xc] = uVar5;
    unaff_x29[0xd] = uVar9;
    uVar6 = FUN_07a172b0(lVar3,0);
    unaff_x29[0xe] = uVar6;
    unaff_x29[0xf] = uVar5;
    unaff_x29[0x10] = uVar9;
    unaff_x29[0x11] = uVar7;
    uVar7 = FUN_07a1bb0c(lVar3,0);
    unaff_x29[0x12] = uVar7;
    unaff_x29[0x13] = uVar5;
    unaff_x29[0x14] = uVar9;
    pcVar4 = *(code **)(unaff_x28 + 0x9d8);
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)FUN_033d1b68();
      *(code **)(unaff_x28 + 0x9d8) = pcVar4;
    }
    (*pcVar4)(lVar3,&stack0x00000080);
    uVar9 = unaff_x29[1];
    *(undefined8 *)(unaff_x29 + 0x17) = in_stack_00000088;
    *(undefined8 *)(unaff_x29 + 0x15) = in_stack_00000080;
    *(undefined8 *)(unaff_x29 + 0x1b) = in_stack_00000098;
    *(ulong *)(unaff_x29 + 0x19) = in_stack_00000090;
    *(undefined8 *)(unaff_x29 + 0x1f) = in_stack_000000a8;
    *(ulong *)(unaff_x29 + 0x1d) = in_stack_000000a0;
    *(undefined8 *)(unaff_x29 + 0x23) = in_stack_000000b8;
    *(undefined8 *)(unaff_x29 + 0x21) = in_stack_000000b0;
    uVar11 = in_stack_00000090;
    uVar13 = in_stack_000000a0;
    uVar14 = in_stack_000000b0;
    if (1 < (int)uVar9) {
      if (uVar9 != 2) {
        if (uVar9 == 10) {
LAB_062c3b74:
          fVar8 = (float)unaff_x29[2] * (float)unaff_x29[0x12];
          fVar10 = fVar8 * fVar8 * unaff_s8;
          fVar8 = fVar8 * fVar10 * unaff_s9;
          uVar11 = (ulong)(uint)fVar10;
        }
        else {
Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke:
          fVar8 = 0.0;
        }
        goto Meta_WitAi_WitRequest_OnCustomizeUriEvent__EndInvoke;
      }
      goto code_r0x062c3bb8;
    }
    if (uVar9 != 0) {
      if (uVar9 != 1) goto Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke;
      goto LAB_062c3b74;
    }
    fVar8 = 3.4028235e+38;
  } while( true );
}


