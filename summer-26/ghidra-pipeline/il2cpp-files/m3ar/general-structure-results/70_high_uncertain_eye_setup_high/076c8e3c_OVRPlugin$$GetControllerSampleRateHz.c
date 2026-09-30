/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 076c8e3c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetControllerSampleRateHz
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  ulong uVar6;
  float *pfVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  byte unaff_w23;
  float *unaff_x24;
  float unaff_w25;
  float *unaff_x26;
  float unaff_w27;
  float unaff_w28;
  float unaff_w29;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s10;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined8 uStack00000000000000ac;
  long *in_stack_000000b8;
  
code_r0x076c8e3c:
  bVar2 = in_w8 == 2;
  in_w8 = in_w8 + 1;
  if (bVar2) {
    in_stack_00000028 = uStack00000000000000a0;
    in_stack_00000020 = in_stack_00000098;
    uStack0000000000000034 = uStack00000000000000ac;
    uStack0000000000000030 = uStack00000000000000a8;
    fVar12 = fStack00000000000000a4;
    fVar11 = (float)FUN_076c9110();
    fVar11 = fVar11 * fStack0000000000000064;
    fVar12 = fVar12 * fStack0000000000000060;
    param_3 = param_3 * in_stack_00000058._4_4_;
    lVar10 = *(long *)(unaff_x19 + 0x50);
    in_stack_00000010 = 0;
    _uStack0000000000000018 = 0;
    FUN_076c9a64(&stack0x00000010,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    FUN_07063bf4(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,uStack0000000000000018,
                 uStack000000000000001c,lVar10,unaff_x20,*(undefined8 *)PTR_DAT_08fadb78);
    unaff_w23 = unaff_w23 & unaff_s8 < param_3 + fVar11 + fVar12;
    plVar9 = in_stack_000000b8;
    do {
      in_stack_000000b8 = plVar9;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076c8b84;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f65880,0);
LAB_076c8b84:
      uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      plVar9 = in_stack_000000b8;
      if ((uVar6 & 1) == 0) {
        plVar9 = (long *)*in_stack_00000050;
        if (plVar9 == (long *)0x0) goto LAB_076c90bc;
        lVar10 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 == 0) goto LAB_076c9094;
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_076c907c;
      }
      if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *in_stack_000000b8;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadb68) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076c8bf0;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_000000b8,*(long *)PTR_DAT_08fadb68,0);
LAB_076c8bf0:
      unaff_x20 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      plVar9 = *(long **)(unaff_x19 + 0x28);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f6a1b8) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
            goto LAB_076c8c60;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f6a1b8,0x12);
LAB_076c8c60:
      uVar6 = (*(code *)*puVar3)(plVar9,&stack0x00000098,puVar3[1]);
      if ((uVar6 & 1) != 0) {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        plVar9 = *(long **)(unaff_x19 + 0x28);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar10 = *plVar9;
        uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f6a1b8) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_076c8cdc;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f6a1b8,9);
LAB_076c8cdc:
        uVar6 = (*(code *)*puVar3)(plVar9,uVar1,&stack0x00000078,puVar3[1]);
        if ((uVar6 & 1) != 0) {
          plVar9 = *(long **)(unaff_x19 + 0x60);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar10 = *plVar9;
          uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fad0f0) {
                puVar3 = (undefined8 *)(lVar10 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_076c8d58;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08fad0f0,1);
LAB_076c8d58:
          uVar6 = (*(code *)*puVar3)(plVar9,uVar1,&stack0x00000068,puVar3[1]);
          if ((uVar6 & 1) != 0) goto code_r0x076c8d70;
        }
      }
      unaff_w23 = 0;
      plVar9 = in_stack_000000b8;
    } while( true );
  }
  goto LAB_076c8da0;
code_r0x076c8d70:
  param_3 = fStack0000000000000070;
  fVar12 = fStack000000000000006c;
  fVar11 = (float)FUN_08575b18(uStack0000000000000068,fStack000000000000006c,fStack0000000000000070,
                               uStack0000000000000074,0);
  fVar12 = fVar12 * unaff_s10;
  param_3 = param_3 * unaff_s10;
  fStack0000000000000064 = (float)FUN_085761cc(fVar11 * unaff_s10,0);
  in_w8 = 0;
  fStack0000000000000060 = fVar12;
  in_stack_00000058._4_4_ = param_3;
LAB_076c8da0:
  while( true ) {
    if (in_w8 == 0) {
      pfVar7 = (float *)((long)&stack0x00000060 + 4);
    }
    else {
      pfVar7 = unaff_x24;
      if (in_w8 == 1) {
        pfVar7 = unaff_x26;
      }
    }
    if (*pfVar7 <= unaff_w29) break;
    if (in_w8 == 0) {
      pfVar7 = (float *)((long)&stack0x00000060 + 4);
    }
    else if (in_w8 == 1) {
      pfVar7 = &stack0x00000060;
    }
    else {
      if (in_w8 != 2) {
        thunk_FUN_04097b88(PTR_DAT_08f852d0);
        uVar4 = thunk_FUN_0406deb8();
        uVar5 = thunk_FUN_04097b88(PTR_DAT_08fab4f8);
        FUN_074dfef8(uVar4,uVar5,0);
        uVar5 = thunk_FUN_04097b88(PTR_DAT_08fab500);
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar4,uVar5);
      }
      pfVar7 = (float *)((long)&stack0x00000058 + 4);
    }
    *pfVar7 = *pfVar7 + unaff_w27;
  }
  while( true ) {
    if (in_w8 == 0) {
      pfVar7 = (float *)((long)&stack0x00000060 + 4);
    }
    else {
      pfVar7 = unaff_x24;
      if (in_w8 == 1) {
        pfVar7 = unaff_x26;
      }
    }
    if (unaff_w28 <= *pfVar7) break;
    if (in_w8 == 0) {
      pfVar7 = (float *)((long)&stack0x00000060 + 4);
    }
    else if (in_w8 == 1) {
      pfVar7 = &stack0x00000060;
    }
    else {
      if (in_w8 != 2) {
        thunk_FUN_04097b88(PTR_DAT_08f852d0);
        uVar4 = thunk_FUN_0406deb8();
        uVar5 = thunk_FUN_04097b88(PTR_DAT_08fab4f8);
        FUN_074dfef8(uVar4,uVar5,0);
        uVar5 = thunk_FUN_04097b88(PTR_DAT_08fab500);
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar4,uVar5);
      }
      pfVar7 = (float *)((long)&stack0x00000058 + 4);
    }
    *pfVar7 = *pfVar7 + unaff_w25;
  }
  goto code_r0x076c8e3c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_076c907c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076c90b0;
    }
  }
LAB_076c9094:
  puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f65868,0);
LAB_076c90b0:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
LAB_076c90bc:
  if (in_stack_00000048 == 0) {
    return unaff_w23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


