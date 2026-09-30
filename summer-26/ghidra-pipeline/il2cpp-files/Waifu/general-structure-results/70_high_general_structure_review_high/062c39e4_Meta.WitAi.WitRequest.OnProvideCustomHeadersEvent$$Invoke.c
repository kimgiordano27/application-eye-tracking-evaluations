/*
FUNCTION_NAME: Meta.WitAi.WitRequest.OnProvideCustomHeadersEvent$$Invoke
ENTRY_POINT: 062c39e4
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest_OnProvideCustomHeadersEvent__Invoke
               (undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],ulong param_4,
               undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  ulong uVar12;
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
  undefined8 uStack0000000000000050;
  ulong uStack0000000000000060;
  long lStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  lStack0000000000000068 = param_3._8_8_;
  uStack0000000000000060 = param_3._0_8_;
  uVar12 = uStack0000000000000060;
  uStack0000000000000050 = param_2;
  uStack0000000000000070 = param_1;
  do {
    do {
      do {
        uVar3 = FUN_06078c90(&stack0x00000050,*(undefined8 *)(unaff_x24 + 0xf70));
        lVar2 = lStack0000000000000068;
        uVar1 = uStack0000000000000060;
        if ((uVar3 & 1) == 0) {
          return;
        }
      } while ((int)uStack0000000000000060 < 0);
      if (*(int *)(*(long *)(unaff_x25 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar3 = FUN_07a119fc(lVar2,0,0);
      uVar10 = (uint)param_4;
      uVar8 = (uint)param_5;
    } while ((uVar3 & 1) != 0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68(unaff_x20 + 0xf0);
    }
    lVar4 = (*DAT_086ef188)(lVar2);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar6 = *(uint *)(lVar2 + 0x24);
    puVar5 = (uint *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x10) + (uVar1 & 0xffffffff) * 0xd4);
    puVar5[1] = uVar6;
    if (uVar6 == 1) {
LAB_062c3a9c:
      uVar6 = *(uint *)(lVar2 + 0x34);
      uVar12 = CONCAT44(uVar6,uVar6);
LAB_062c3ab0:
      *(ulong *)(puVar5 + 2) = uVar12;
      puVar5[4] = uVar6;
    }
    else {
      if (uVar6 == 2) {
        uVar12 = *(ulong *)(lVar2 + 0x28);
        uVar6 = *(uint *)(lVar2 + 0x30);
        goto LAB_062c3ab0;
      }
      if (uVar6 == 10) goto LAB_062c3a9c;
    }
    uVar6 = (uint)uVar12;
    *(undefined8 *)(puVar5 + 5) = *(undefined8 *)(lVar2 + 0x38);
    *puVar5 = *puVar5 & 0xfffffffb | (uint)*(byte *)(lVar2 + 0x50) << 2;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar7 = FUN_07a18d2c(lVar4,0);
    puVar5[0xb] = uVar7;
    puVar5[0xc] = uVar6;
    puVar5[0xd] = uVar10;
    uVar7 = FUN_07a172b0(lVar4,0);
    puVar5[0xe] = uVar7;
    puVar5[0xf] = uVar6;
    puVar5[0x10] = uVar10;
    puVar5[0x11] = uVar8;
    uVar8 = FUN_07a1bb0c(lVar4,0);
    puVar5[0x12] = uVar8;
    puVar5[0x13] = uVar6;
    puVar5[0x14] = uVar10;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    if (DAT_086ef9d8 == (code *)0x0) {
      DAT_086ef9d8 = (code *)FUN_033d1b68(unaff_x21 + 0xa66);
    }
    (*DAT_086ef9d8)(lVar4,&stack0x00000080);
    uVar10 = puVar5[1];
    *(undefined8 *)(puVar5 + 0x17) = in_stack_00000088;
    *(undefined8 *)(puVar5 + 0x15) = in_stack_00000080;
    *(undefined8 *)(puVar5 + 0x1b) = in_stack_00000098;
    *(ulong *)(puVar5 + 0x19) = in_stack_00000090;
    *(undefined8 *)(puVar5 + 0x1f) = in_stack_000000a8;
    *(ulong *)(puVar5 + 0x1d) = in_stack_000000a0;
    *(undefined8 *)(puVar5 + 0x23) = in_stack_000000b8;
    *(undefined8 *)(puVar5 + 0x21) = in_stack_000000b0;
    uVar12 = in_stack_00000090;
    param_4 = in_stack_000000a0;
    param_5 = in_stack_000000b0;
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) {
        fVar9 = 3.4028235e+38;
      }
      else {
        if (uVar10 == 1) goto LAB_062c3b74;
Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke:
        fVar9 = 0.0;
      }
    }
    else if (uVar10 == 2) {
      param_4 = (ulong)puVar5[0x12];
      param_5 = *(undefined8 *)(puVar5 + 0x13);
      fVar11 = (float)*(undefined8 *)(puVar5 + 3) * (float)param_5;
      fVar9 = (float)((ulong)*(undefined8 *)(puVar5 + 3) >> 0x20) * (float)((ulong)param_5 >> 0x20);
      uVar12 = CONCAT44(fVar9,fVar11);
      fVar9 = (float)puVar5[2] * (float)puVar5[0x12] * fVar11 * fVar9;
    }
    else {
      if (uVar10 != 10) goto Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke;
LAB_062c3b74:
      fVar9 = (float)puVar5[2] * (float)puVar5[0x12];
      fVar11 = fVar9 * fVar9 * unaff_s8;
      fVar9 = fVar9 * fVar11 * unaff_s9;
      uVar12 = (ulong)(uint)fVar11;
    }
    puVar5[7] = (uint)fVar9;
    if (*(uint *)(lVar2 + 0x24) < 3) {
      uVar10 = FUN_062a7558(lVar2,0,0);
      puVar5[8] = uVar10;
      puVar5[9] = (uint)uVar12;
      puVar5[10] = (uint)param_4;
    }
    else {
      FUN_062e7f5c(&stack0x00000010,*(undefined8 *)(lVar2 + 0x48),0);
      in_stack_00000088 = in_stack_00000018;
      in_stack_00000080 = in_stack_00000010;
      in_stack_00000098 = in_stack_00000028;
      in_stack_00000090 = in_stack_00000020;
      in_stack_000000a8 = in_stack_00000038;
      in_stack_000000a0 = in_stack_00000030;
      in_stack_000000b8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000040;
      *(undefined8 *)(puVar5 + 0x33) = in_stack_00000048;
      *(undefined8 *)(puVar5 + 0x31) = in_stack_00000040;
      *(undefined8 *)(puVar5 + 0x2f) = in_stack_00000038;
      *(ulong *)(puVar5 + 0x2d) = in_stack_00000030;
      *(undefined8 *)(puVar5 + 0x2b) = in_stack_00000028;
      *(ulong *)(puVar5 + 0x29) = in_stack_00000020;
      *(undefined8 *)(puVar5 + 0x27) = in_stack_00000018;
      *(undefined8 *)(puVar5 + 0x25) = in_stack_00000010;
      uVar12 = in_stack_00000020;
      param_4 = in_stack_00000030;
      param_5 = in_stack_00000040;
    }
  } while( true );
}


