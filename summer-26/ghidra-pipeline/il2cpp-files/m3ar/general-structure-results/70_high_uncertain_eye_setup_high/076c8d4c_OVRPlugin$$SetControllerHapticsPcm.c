/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 076c8d4c
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


byte OVRPlugin__SetControllerHapticsPcm(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int in_w9;
  float *pfVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *unaff_x21;
  long lVar11;
  undefined4 unaff_w22;
  byte unaff_w23;
  float *unaff_x24;
  float unaff_w25;
  float *unaff_x26;
  float unaff_w27;
  float unaff_w28;
  float unaff_w29;
  float fVar12;
  float fVar13;
  float fVar14;
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
  
code_r0x076c8d4c:
  puVar3 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
LAB_076c8d58:
  uVar4 = (*(code *)*puVar3)(unaff_x21,unaff_w22,&stack0x00000068,puVar3[1]);
  if ((uVar4 & 1) == 0) goto LAB_076c8e6c;
  fVar14 = fStack0000000000000070;
  fVar13 = fStack000000000000006c;
  fVar12 = (float)FUN_08575b18(uStack0000000000000068,fStack000000000000006c,fStack0000000000000070,
                               uStack0000000000000074,0);
  fVar13 = fVar13 * unaff_s10;
  fVar14 = fVar14 * unaff_s10;
  fStack0000000000000064 = (float)FUN_085761cc(fVar12 * unaff_s10,0);
  iVar7 = 0;
  fStack0000000000000060 = fVar13;
  in_stack_00000058._4_4_ = fVar14;
  do {
    while( true ) {
      if (iVar7 == 0) {
        pfVar8 = (float *)((long)&stack0x00000060 + 4);
      }
      else {
        pfVar8 = unaff_x24;
        if (iVar7 == 1) {
          pfVar8 = unaff_x26;
        }
      }
      if (*pfVar8 <= unaff_w29) break;
      if (iVar7 == 0) {
        pfVar8 = (float *)((long)&stack0x00000060 + 4);
      }
      else if (iVar7 == 1) {
        pfVar8 = &stack0x00000060;
      }
      else {
        if (iVar7 != 2) {
          thunk_FUN_04097b88(PTR_DAT_08f852d0);
          uVar5 = thunk_FUN_0406deb8();
          uVar6 = thunk_FUN_04097b88(PTR_DAT_08fab4f8);
          FUN_074dfef8(uVar5,uVar6,0);
          uVar6 = thunk_FUN_04097b88(PTR_DAT_08fab500);
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar5,uVar6);
        }
        pfVar8 = (float *)((long)&stack0x00000058 + 4);
      }
      *pfVar8 = *pfVar8 + unaff_w27;
    }
    while( true ) {
      if (iVar7 == 0) {
        pfVar8 = (float *)((long)&stack0x00000060 + 4);
      }
      else {
        pfVar8 = unaff_x24;
        if (iVar7 == 1) {
          pfVar8 = unaff_x26;
        }
      }
      if (unaff_w28 <= *pfVar8) break;
      if (iVar7 == 0) {
        pfVar8 = (float *)((long)&stack0x00000060 + 4);
      }
      else if (iVar7 == 1) {
        pfVar8 = &stack0x00000060;
      }
      else {
        if (iVar7 != 2) {
          thunk_FUN_04097b88(PTR_DAT_08f852d0);
          uVar5 = thunk_FUN_0406deb8();
          uVar6 = thunk_FUN_04097b88(PTR_DAT_08fab4f8);
          FUN_074dfef8(uVar5,uVar6,0);
          uVar6 = thunk_FUN_04097b88(PTR_DAT_08fab500);
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar5,uVar6);
        }
        pfVar8 = (float *)((long)&stack0x00000058 + 4);
      }
      *pfVar8 = *pfVar8 + unaff_w25;
    }
    bVar2 = iVar7 != 2;
    iVar7 = iVar7 + 1;
  } while (bVar2);
  in_stack_00000028 = uStack00000000000000a0;
  in_stack_00000020 = in_stack_00000098;
  uStack0000000000000034 = uStack00000000000000ac;
  uStack0000000000000030 = uStack00000000000000a8;
  fVar13 = fStack00000000000000a4;
  fVar12 = (float)FUN_076c9110();
  fVar12 = fVar12 * fStack0000000000000064;
  fVar13 = fVar13 * fStack0000000000000060;
  fVar14 = fVar14 * in_stack_00000058._4_4_;
  lVar11 = *(long *)(unaff_x19 + 0x50);
  in_stack_00000010 = 0;
  _uStack0000000000000018 = 0;
  FUN_076c9a64(&stack0x00000010,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_07063bf4(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,uStack0000000000000018,
               uStack000000000000001c,lVar11,unaff_x20,*(undefined8 *)PTR_DAT_08fadb78);
  unaff_w23 = unaff_w23 & unaff_s8 < fVar14 + fVar12 + fVar13;
  plVar10 = in_stack_000000b8;
  do {
    in_stack_000000b8 = plVar10;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar11 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076c8b84;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f65880,0);
LAB_076c8b84:
    uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    plVar10 = in_stack_000000b8;
    if ((uVar4 & 1) == 0) {
      plVar10 = (long *)*in_stack_00000050;
      if (plVar10 == (long *)0x0) goto LAB_076c90bc;
      lVar11 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 == 0) goto LAB_076c9094;
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_076c907c;
    }
    if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar11 = *in_stack_000000b8;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08fadb68) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076c8bf0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_000000b8,*(long *)PTR_DAT_08fadb68,0);
LAB_076c8bf0:
    unaff_x20 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    plVar10 = *(long **)(unaff_x19 + 0x28);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar11 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f6a1b8) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x12) * 0x10 + 0x138);
          goto LAB_076c8c60;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f6a1b8,0x12);
LAB_076c8c60:
    uVar4 = (*(code *)*puVar3)(plVar10,&stack0x00000098,puVar3[1]);
    if ((uVar4 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar10 = *(long **)(unaff_x19 + 0x28);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar11 = *plVar10;
      uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f6a1b8) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar9 + 9) * 0x10 + 0x138);
            goto LAB_076c8cdc;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f6a1b8,9);
LAB_076c8cdc:
      uVar4 = (*(code *)*puVar3)(plVar10,uVar1,&stack0x00000078,puVar3[1]);
      if ((uVar4 & 1) != 0) break;
    }
LAB_076c8e6c:
    unaff_w23 = 0;
    plVar10 = in_stack_000000b8;
  } while( true );
  unaff_x21 = *(long **)(unaff_x19 + 0x60);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  param_1 = *unaff_x21;
  unaff_w22 = *(undefined4 *)(unaff_x20 + 0x14);
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08fad0f0) {
        in_w9 = *piVar9;
        goto code_r0x076c8d4c;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(unaff_x21,*(long *)PTR_DAT_08fad0f0,1);
  goto LAB_076c8d58;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_076c907c:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076c90b0;
    }
  }
LAB_076c9094:
  puVar3 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f65868,0);
LAB_076c90b0:
  (*(code *)*puVar3)(plVar10,puVar3[1]);
LAB_076c90bc:
  if (in_stack_00000048 == 0) {
    return unaff_w23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


