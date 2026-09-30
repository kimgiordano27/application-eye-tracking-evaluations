/*
FUNCTION_NAME: Meta.WitAi.WitRequest.OnProvideCustomHeadersEvent$$.ctor
ENTRY_POINT: 062c3924
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest_OnProvideCustomHeadersEvent___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  ulong uVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  long in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea7f0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee0d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee0d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x5f7) = unaff_w21;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a0 = 0;
  FUN_06078c24(&stack0x00000080,*(long *)(unaff_x19 + 0x20),2,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083e1b78 + 0x20) + 0xc0) + 0x160));
  fVar2 = DAT_012eda4c;
  fVar1 = DAT_012ed918;
  in_stack_00000058 = in_stack_00000088;
  in_stack_00000050 = in_stack_00000080;
  in_stack_00000068 = in_stack_00000098;
  in_stack_00000060 = in_stack_00000090;
  in_stack_00000070 = in_stack_000000a0;
  uVar14 = in_stack_00000090;
  do {
    do {
      do {
        uVar5 = FUN_06078c90(&stack0x00000050,DAT_083e8f70);
        lVar4 = in_stack_00000068;
        uVar3 = in_stack_00000060;
        if ((uVar5 & 1) == 0) {
          return;
        }
      } while ((int)in_stack_00000060 < 0);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a119fc(lVar4,0,0);
      uVar12 = (uint)param_3;
      uVar10 = (uint)param_4;
    } while ((uVar5 & 1) != 0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar6 = (*DAT_086ef188)(lVar4);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar8 = *(uint *)(lVar4 + 0x24);
    puVar7 = (uint *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x10) + (uVar3 & 0xffffffff) * 0xd4);
    puVar7[1] = uVar8;
    if (uVar8 == 1) {
LAB_062c3a9c:
      uVar8 = *(uint *)(lVar4 + 0x34);
      uVar14 = CONCAT44(uVar8,uVar8);
LAB_062c3ab0:
      *(ulong *)(puVar7 + 2) = uVar14;
      puVar7[4] = uVar8;
    }
    else {
      if (uVar8 == 2) {
        uVar14 = *(ulong *)(lVar4 + 0x28);
        uVar8 = *(uint *)(lVar4 + 0x30);
        goto LAB_062c3ab0;
      }
      if (uVar8 == 10) goto LAB_062c3a9c;
    }
    uVar8 = (uint)uVar14;
    *(undefined8 *)(puVar7 + 5) = *(undefined8 *)(lVar4 + 0x38);
    *puVar7 = *puVar7 & 0xfffffffb | (uint)*(byte *)(lVar4 + 0x50) << 2;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar9 = FUN_07a18d2c(lVar6,0);
    puVar7[0xb] = uVar9;
    puVar7[0xc] = uVar8;
    puVar7[0xd] = uVar12;
    uVar9 = FUN_07a172b0(lVar6,0);
    puVar7[0xe] = uVar9;
    puVar7[0xf] = uVar8;
    puVar7[0x10] = uVar12;
    puVar7[0x11] = uVar10;
    uVar10 = FUN_07a1bb0c(lVar6,0);
    puVar7[0x12] = uVar10;
    puVar7[0x13] = uVar8;
    puVar7[0x14] = uVar12;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    if (DAT_086ef9d8 == (code *)0x0) {
      DAT_086ef9d8 = (code *)FUN_033d1b68(
                                         "UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)"
                                         );
    }
    (*DAT_086ef9d8)(lVar6,&stack0x00000080);
    uVar12 = puVar7[1];
    *(undefined8 *)(puVar7 + 0x17) = in_stack_00000088;
    *(undefined8 *)(puVar7 + 0x15) = in_stack_00000080;
    *(long *)(puVar7 + 0x1b) = in_stack_00000098;
    *(ulong *)(puVar7 + 0x19) = in_stack_00000090;
    *(undefined8 *)(puVar7 + 0x1f) = in_stack_000000a8;
    *(ulong *)(puVar7 + 0x1d) = in_stack_000000a0;
    *(undefined8 *)(puVar7 + 0x23) = in_stack_000000b8;
    *(undefined8 *)(puVar7 + 0x21) = in_stack_000000b0;
    uVar14 = in_stack_00000090;
    param_3 = in_stack_000000a0;
    param_4 = in_stack_000000b0;
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) {
        fVar11 = 3.4028235e+38;
      }
      else {
        if (uVar12 == 1) goto LAB_062c3b74;
Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke:
        fVar11 = 0.0;
      }
    }
    else if (uVar12 == 2) {
      param_3 = (ulong)puVar7[0x12];
      param_4 = *(undefined8 *)(puVar7 + 0x13);
      fVar13 = (float)*(undefined8 *)(puVar7 + 3) * (float)param_4;
      fVar11 = (float)((ulong)*(undefined8 *)(puVar7 + 3) >> 0x20) * (float)((ulong)param_4 >> 0x20)
      ;
      uVar14 = CONCAT44(fVar11,fVar13);
      fVar11 = (float)puVar7[2] * (float)puVar7[0x12] * fVar13 * fVar11;
    }
    else {
      if (uVar12 != 10) goto Meta_WitAi_WitRequest_OnCustomizeUriEvent__Invoke;
LAB_062c3b74:
      fVar11 = (float)puVar7[2] * (float)puVar7[0x12];
      fVar13 = fVar11 * fVar11 * fVar2;
      fVar11 = fVar11 * fVar13 * fVar1;
      uVar14 = (ulong)(uint)fVar13;
    }
    puVar7[7] = (uint)fVar11;
    if (*(uint *)(lVar4 + 0x24) < 3) {
      uVar12 = FUN_062a7558(lVar4,0,0);
      puVar7[8] = uVar12;
      puVar7[9] = (uint)uVar14;
      puVar7[10] = (uint)param_3;
    }
    else {
      FUN_062e7f5c(&stack0x00000010,*(undefined8 *)(lVar4 + 0x48),0);
      in_stack_00000088 = in_stack_00000018;
      in_stack_00000080 = in_stack_00000010;
      in_stack_00000098 = in_stack_00000028;
      in_stack_00000090 = in_stack_00000020;
      in_stack_000000a8 = in_stack_00000038;
      in_stack_000000a0 = in_stack_00000030;
      in_stack_000000b8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000040;
      *(undefined8 *)(puVar7 + 0x33) = in_stack_00000048;
      *(undefined8 *)(puVar7 + 0x31) = in_stack_00000040;
      *(undefined8 *)(puVar7 + 0x2f) = in_stack_00000038;
      *(ulong *)(puVar7 + 0x2d) = in_stack_00000030;
      *(long *)(puVar7 + 0x2b) = in_stack_00000028;
      *(ulong *)(puVar7 + 0x29) = in_stack_00000020;
      *(undefined8 *)(puVar7 + 0x27) = in_stack_00000018;
      *(undefined8 *)(puVar7 + 0x25) = in_stack_00000010;
      uVar14 = in_stack_00000020;
      param_3 = in_stack_00000030;
      param_4 = in_stack_00000040;
    }
  } while( true );
}


