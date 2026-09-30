/*
FUNCTION_NAME: Meta.WitAi.WitRequest.OnProvideCustomHeadersEvent$$BeginInvoke
ENTRY_POINT: 062c39f8
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


void Meta_WitAi_WitRequest_OnProvideCustomHeadersEvent__BeginInvoke
               (undefined8 param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,
               undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
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
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uStack0000000000000070 = param_1;
  do {
    do {
      do {
        uVar3 = FUN_06078c90(&stack0x00000050,*(undefined8 *)(unaff_x24 + 0xf70));
        lVar2 = in_stack_00000068;
        uVar1 = in_stack_00000060;
        if ((uVar3 & 1) == 0) {
          return;
        }
      } while ((int)in_stack_00000060 < 0);
      if (*(int *)(*(long *)(unaff_x25 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar3 = FUN_07a119fc(lVar2,0,0);
      uVar11 = (uint)param_4;
      uVar9 = (uint)param_5;
    } while ((uVar3 & 1) != 0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    pcVar5 = *(code **)(unaff_x26 + 0x188);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = (code *)FUN_033d1b68();
      *(code **)(unaff_x26 + 0x188) = pcVar5;
    }
    lVar4 = (*pcVar5)(lVar2);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar7 = *(uint *)(lVar2 + 0x24);
    puVar6 = (uint *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x10) +
                     (uVar1 & 0xffffffff) * unaff_x27);
    puVar6[1] = uVar7;
    if (uVar7 == 1) {
LAB_062c3a9c:
      uVar7 = *(uint *)(lVar2 + 0x34);
      param_3 = CONCAT44(uVar7,uVar7);
LAB_062c3ab0:
      *(ulong *)(puVar6 + 2) = param_3;
      puVar6[4] = uVar7;
    }
    else {
      if (uVar7 == 2) {
        param_3 = *(ulong *)(lVar2 + 0x28);
        uVar7 = *(uint *)(lVar2 + 0x30);
        goto LAB_062c3ab0;
      }
      if (uVar7 == 10) goto LAB_062c3a9c;
    }
    uVar7 = (uint)param_3;
    *(undefined8 *)(puVar6 + 5) = *(undefined8 *)(lVar2 + 0x38);
    *puVar6 = *puVar6 & 0xfffffffb | (uint)*(byte *)(lVar2 + 0x50) << 2;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar8 = FUN_07a18d2c(lVar4,0);
    puVar6[0xb] = uVar8;
    puVar6[0xc] = uVar7;
    puVar6[0xd] = uVar11;
    uVar8 = FUN_07a172b0(lVar4,0);
    puVar6[0xe] = uVar8;
    puVar6[0xf] = uVar7;
    puVar6[0x10] = uVar11;
    puVar6[0x11] = uVar9;
    uVar9 = FUN_07a1bb0c(lVar4,0);
    puVar6[0x12] = uVar9;
    puVar6[0x13] = uVar7;
    puVar6[0x14] = uVar11;
    pcVar5 = *(code **)(unaff_x28 + 0x9d8);
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    if (pcVar5 == (code *)0x0) {
      pcVar5 = (code *)FUN_033d1b68(unaff_x21 + 0xa66);
      *(code **)(unaff_x28 + 0x9d8) = pcVar5;
    }
    (*pcVar5)(lVar4,&stack0x00000080);
    uVar11 = puVar6[1];
    *(undefined8 *)(puVar6 + 0x17) = in_stack_00000088;
    *(undefined8 *)(puVar6 + 0x15) = in_stack_00000080;
    *(undefined8 *)(puVar6 + 0x1b) = in_stack_00000098;
    *(ulong *)(puVar6 + 0x19) = in_stack_00000090;
    *(undefined8 *)(puVar6 + 0x1f) = in_stack_000000a8;
    *(ulong *)(puVar6 + 0x1d) = in_stack_000000a0;
    *(undefined8 *)(puVar6 + 0x23) = in_stack_000000b8;
    *(undefined8 *)(puVar6 + 0x21) = in_stack_000000b0;
    param_3 = in_stack_00000090;
    param_4 = in_stack_000000a0;
    param_5 = in_stack_000000b0;
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) {
        fVar10 = 3.4028235e+38;
      }
      else {
        if (uVar11 == 1) goto LAB_062c3b74;
Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke:
        fVar10 = 0.0;
      }
    }
    else if (uVar11 == 2) {
      param_4 = (ulong)puVar6[0x12];
      param_5 = *(undefined8 *)(puVar6 + 0x13);
      fVar12 = (float)*(undefined8 *)(puVar6 + 3) * (float)param_5;
      fVar10 = (float)((ulong)*(undefined8 *)(puVar6 + 3) >> 0x20) * (float)((ulong)param_5 >> 0x20)
      ;
      param_3 = CONCAT44(fVar10,fVar12);
      fVar10 = (float)puVar6[2] * (float)puVar6[0x12] * fVar12 * fVar10;
    }
    else {
      if (uVar11 != 10) goto Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke;
LAB_062c3b74:
      fVar10 = (float)puVar6[2] * (float)puVar6[0x12];
      fVar12 = fVar10 * fVar10 * unaff_s8;
      param_3 = (ulong)(uint)fVar12;
      fVar10 = fVar10 * fVar12 * unaff_s9;
    }
    puVar6[7] = (uint)fVar10;
    if (*(uint *)(lVar2 + 0x24) < 3) {
      uVar11 = FUN_062a7558(lVar2,0,0);
      puVar6[8] = uVar11;
      puVar6[9] = (uint)param_3;
      puVar6[10] = (uint)param_4;
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
      *(undefined8 *)(puVar6 + 0x33) = in_stack_00000048;
      *(undefined8 *)(puVar6 + 0x31) = in_stack_00000040;
      *(undefined8 *)(puVar6 + 0x2f) = in_stack_00000038;
      *(ulong *)(puVar6 + 0x2d) = in_stack_00000030;
      *(undefined8 *)(puVar6 + 0x2b) = in_stack_00000028;
      *(ulong *)(puVar6 + 0x29) = in_stack_00000020;
      *(undefined8 *)(puVar6 + 0x27) = in_stack_00000018;
      *(undefined8 *)(puVar6 + 0x25) = in_stack_00000010;
      param_3 = in_stack_00000020;
      param_4 = in_stack_00000030;
      param_5 = in_stack_00000040;
    }
  } while( true );
}


