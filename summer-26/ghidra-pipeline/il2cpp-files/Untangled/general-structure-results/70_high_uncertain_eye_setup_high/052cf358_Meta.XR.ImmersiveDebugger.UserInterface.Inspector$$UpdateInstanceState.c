/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$UpdateInstanceState
ENTRY_POINT: 052cf358
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Inspector__UpdateInstanceState(void)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int iVar11;
  undefined4 unaff_w25;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar16;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined8 uStack00000000000000c4;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d045e8);
  FUN_02f07e70(PTR_DAT_06d01e20);
  FUN_02f07e70(PTR_DAT_06d03000);
  FUN_02f07e70(PTR_DAT_06d3c950);
  FUN_02f07e70(PTR_DAT_06d3d648);
  *(undefined1 *)(unaff_x20 + 0xb7) = 1;
  in_stack_00000080 = 0;
  _fStack0000000000000088 = 0;
  in_stack_00000090 = 0;
  uStack00000000000000c4 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  uStack00000000000000bc = 0;
  in_stack_000000b0 = 0;
  *(float *)(unaff_x23 + 0xa8) = unaff_s11;
  *(float *)(unaff_x23 + 0xac) = unaff_s10;
  *(float *)(unaff_x23 + 0xb0) = unaff_s9;
  puVar4 = PTR_DAT_06d01e20;
  fVar3 = DAT_013f6c1c;
  fVar2 = DAT_013f69d8;
  if (unaff_x21 == 0) {
LAB_052cf7b4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    iVar11 = 0;
    do {
      plVar7 = (long *)FUN_03fd09cc();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar4);
      }
      uVar8 = FUN_066cd30c(plVar7,0);
      if ((uVar8 & 1) != 0) {
        if ((unaff_x19 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_052cf7b4;
LAB_052cf4d4:
          FUN_06742cec(&stack0x00000060,plVar7,0);
          uVar9 = in_stack_00000060;
          _fStack0000000000000088 = in_stack_00000068;
          uVar5 = _fStack0000000000000088;
          in_stack_00000080 = in_stack_00000060;
          in_stack_00000090 = in_stack_00000070;
          fStack0000000000000088 = (float)in_stack_00000068;
          fVar14 = fStack0000000000000088;
          uVar15 = *(undefined8 *)(unaff_x23 + 0xa8);
          fVar16 = *(float *)(unaff_x23 + 0xb0);
          _fStack0000000000000088 = uVar5;
          if (DAT_071babf2 == '\0') {
            FUN_02f07e70(PTR_DAT_06d03010);
            DAT_071babf2 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          fVar12 = (float)uVar9 - (float)uVar15;
          fVar13 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
          fVar14 = fVar14 - fVar16;
        }
        else {
          if (unaff_x22 == 0) goto LAB_052cf7b4;
          if (*(char *)(unaff_x22 + 0x222) != '\0') {
            if (plVar7 == (long *)0x0) goto LAB_052cf7b4;
            bVar1 = *(byte *)(*(long *)PTR_DAT_06d045e8 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
                (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
                 *(long *)PTR_DAT_06d045e8)) && (uVar8 = FUN_067437c4(plVar7,0), (uVar8 & 1) == 0))
            goto LAB_052cf4d4;
          }
          if (*(char *)(unaff_x22 + 0x223) == '\0') {
            if (plVar7 == (long *)0x0) goto LAB_052cf7b4;
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_052cf7b4;
            bVar1 = *(byte *)(*(long *)PTR_DAT_06d3c950 + 0x130);
            if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_06d3c950)) goto LAB_052cf4d4;
          }
          fVar14 = unaff_s9;
          fVar13 = unaff_s10;
          fVar12 = (float)FUN_06742c30(plVar7,0);
          if ((fVar14 - unaff_s9) * (fVar14 - unaff_s9) +
              (fVar12 - unaff_s11) * (fVar12 - unaff_s11) +
              (fVar13 - unaff_s10) * (fVar13 - unaff_s10) < fVar2) {
            FUN_06742cec(&stack0x00000060,plVar7,0);
            _fStack0000000000000088 = in_stack_00000068;
            in_stack_00000080 = in_stack_00000060;
            in_stack_00000090 = in_stack_00000070;
            uVar8 = FUN_06697c7c(&stack0x00000080,0);
            if ((uVar8 & 1) != 0) {
              lVar10 = FUN_0528cb7c(0);
              if (lVar10 != 0) {
                if (*(char *)(lVar10 + 200) == '\0') {
                  return 1;
                }
                if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                FUN_06693690(*(undefined8 *)PTR_DAT_06d3d648,0);
                return 1;
              }
              goto LAB_052cf7b4;
            }
          }
          uVar9 = *(undefined8 *)(unaff_x23 + 0xa8);
          fVar16 = *(float *)(unaff_x23 + 0xb0);
          if (DAT_071babf2 == '\0') {
            FUN_02f07e70(PTR_DAT_06d03010);
            DAT_071babf2 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          fVar14 = fVar14 - fVar16;
          fVar12 = fVar12 - (float)uVar9;
          fVar13 = fVar13 - (float)((ulong)uVar9 >> 0x20);
        }
        fVar16 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13);
        if (fVar16 <= fVar3) {
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          uVar9 = **(undefined8 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          fVar14 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_06d02c10 + 0xb8) + 1);
        }
        else {
          uVar9 = CONCAT44(fVar13 / fVar16,fVar12 / fVar16);
          fVar14 = fVar14 / fVar16;
        }
        *(undefined8 *)(unaff_x23 + 0xb4) = uVar9;
        *(float *)(unaff_x23 + 0xbc) = fVar14;
        in_stack_00000070 = *(undefined8 *)(unaff_x23 + 0xb8);
        in_stack_00000068 = *(undefined8 *)(unaff_x23 + 0xb0);
        in_stack_00000060 = *(undefined8 *)(unaff_x23 + 0xa8);
        uVar6 = FUN_066ca064(unaff_w25,0);
        if (*(int *)(*(long *)PTR_DAT_06d03000 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d03000);
        }
        in_stack_00000048 = in_stack_00000068;
        in_stack_00000040 = in_stack_00000060;
        in_stack_00000050 = in_stack_00000070;
        uVar8 = FUN_0673d480(uStack0000000000000038,&stack0x00000040,&stack0x000000a0,uVar6,
                             uStack000000000000003c,0);
        if ((uVar8 & 1) != 0) {
          uVar9 = FUN_067410f4(&stack0x000000a0,0);
          uVar8 = FUN_05653868(plVar7,uVar9,0);
          if ((uVar8 & 1) != 0) {
            return 1;
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(unaff_x21 + 0x18));
  }
  return 0;
}


