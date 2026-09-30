/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 076c8c6c
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


byte OVRPlugin__SetControllerHapticsAmplitudeEnvelope
               (code *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
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
  
  do {
    uVar3 = (*param_1)(param_2,param_3,param_4);
    if ((uVar3 & 1) == 0) {
LAB_076c8e6c:
      unaff_w23 = 0;
      plVar11 = in_stack_000000b8;
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar11 = *(long **)(unaff_x19 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *plVar11;
      uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f6a1b8) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_076c8cdc;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f6a1b8,9);
LAB_076c8cdc:
      uVar3 = (*(code *)*puVar4)(plVar11,uVar1,&stack0x00000078,puVar4[1]);
      if ((uVar3 & 1) == 0) goto LAB_076c8e6c;
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *plVar11;
      uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fad0f0) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_076c8d58;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fad0f0,1);
LAB_076c8d58:
      uVar3 = (*(code *)*puVar4)(plVar11,uVar1,&stack0x00000068,puVar4[1]);
      if ((uVar3 & 1) == 0) goto LAB_076c8e6c;
      fVar14 = fStack0000000000000070;
      fVar13 = fStack000000000000006c;
      fVar12 = (float)FUN_08575b18(uStack0000000000000068,fStack000000000000006c,
                                   fStack0000000000000070,uStack0000000000000074,0);
      fVar13 = fVar13 * unaff_s10;
      fVar14 = fVar14 * unaff_s10;
      fStack0000000000000064 = (float)FUN_085761cc(fVar12 * unaff_s10,0);
      iVar7 = 0;
      fStack0000000000000060 = fVar13;
      in_stack_00000058._4_4_ = fVar14;
      do {
        while( true ) {
          if (iVar7 == 0) {
            pfVar9 = (float *)((long)&stack0x00000060 + 4);
          }
          else {
            pfVar9 = unaff_x24;
            if (iVar7 == 1) {
              pfVar9 = unaff_x26;
            }
          }
          if (*pfVar9 <= unaff_w29) break;
          if (iVar7 == 0) {
            pfVar9 = (float *)((long)&stack0x00000060 + 4);
          }
          else if (iVar7 == 1) {
            pfVar9 = &stack0x00000060;
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
            pfVar9 = (float *)((long)&stack0x00000058 + 4);
          }
          *pfVar9 = *pfVar9 + unaff_w27;
        }
        while( true ) {
          if (iVar7 == 0) {
            pfVar9 = (float *)((long)&stack0x00000060 + 4);
          }
          else {
            pfVar9 = unaff_x24;
            if (iVar7 == 1) {
              pfVar9 = unaff_x26;
            }
          }
          if (unaff_w28 <= *pfVar9) break;
          if (iVar7 == 0) {
            pfVar9 = (float *)((long)&stack0x00000060 + 4);
          }
          else if (iVar7 == 1) {
            pfVar9 = &stack0x00000060;
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
            pfVar9 = (float *)((long)&stack0x00000058 + 4);
          }
          *pfVar9 = *pfVar9 + unaff_w25;
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
      lVar8 = *(long *)(unaff_x19 + 0x50);
      in_stack_00000010 = 0;
      _uStack0000000000000018 = 0;
      FUN_076c9a64(&stack0x00000010,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_07063bf4(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,uStack0000000000000018,
                   uStack000000000000001c,lVar8,unaff_x20,*(undefined8 *)PTR_DAT_08fadb78);
      unaff_w23 = unaff_w23 & unaff_s8 < fVar14 + fVar12 + fVar13;
      plVar11 = in_stack_000000b8;
    }
    in_stack_000000b8 = plVar11;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076c8b84;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f65880,0);
LAB_076c8b84:
    uVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    plVar11 = in_stack_000000b8;
    if ((uVar3 & 1) == 0) {
      plVar11 = (long *)*in_stack_00000050;
      if (plVar11 == (long *)0x0) goto LAB_076c90bc;
      lVar8 = *plVar11;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 == 0) goto LAB_076c9094;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *in_stack_000000b8;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fadb68) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076c8bf0;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(in_stack_000000b8,*(long *)PTR_DAT_08fadb68,0);
LAB_076c8bf0:
    unaff_x20 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    param_2 = *(long **)(unaff_x19 + 0x28);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *param_2;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f6a1b8) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
          goto LAB_076c8c60;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(param_2,*(long *)PTR_DAT_08f6a1b8,0x12);
LAB_076c8c60:
    param_1 = (code *)*puVar4;
    param_4 = puVar4[1];
    param_3 = &stack0x00000098;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076c90b0;
    }
  }
LAB_076c9094:
  puVar4 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f65868,0);
LAB_076c90b0:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
LAB_076c90bc:
  if (in_stack_00000048 == 0) {
    return unaff_w23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


