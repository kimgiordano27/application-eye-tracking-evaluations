/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 076d3634
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d39b0) */
/* WARNING: Removing unreachable block (ram,0x076d3c54) */
/* WARNING: Removing unreachable block (ram,0x076d3bb0) */
/* WARNING: Removing unreachable block (ram,0x076d3c70) */

void OVRPlugin__SetKeyboardOverlayUV(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  long *unaff_x22;
  long *unaff_x25;
  undefined1 unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar13;
  float fVar14;
  undefined8 unaff_d9;
  float unaff_s10;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x076d3634:
  puVar5 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
LAB_076d363c:
  plVar4 = (long *)(*(code *)*puVar5)(unaff_x22,puVar5[1]);
  uVar12 = unaff_d9;
  fVar14 = unaff_s10;
  do {
    in_stack_00000038 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d36bc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08f65880,0);
LAB_076d36bc:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = in_stack_00000038;
    if ((uVar10 & 1) == 0) break;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *in_stack_00000038;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadd08) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d3728;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08fadd08,0);
LAB_076d3728:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar7 = FUN_04c279ec(uVar8,uVar1,*unaff_x27);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = FUN_04b60dd0(lVar7,*unaff_x28);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar3 = *(undefined4 *)(unaff_x21 + 0x10);
    *(undefined1 *)(lVar7 + 0x70) = unaff_w26;
    *(undefined8 *)(lVar7 + 0x68) = uVar6;
    *(undefined4 *)(lVar7 + 100) = uVar3;
    *(undefined8 *)(lVar7 + 0x50) = uVar8;
    lVar7 = FUN_085849e0(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    UnityEngine_UI_Dropdown__OnSubmit
              (*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
               *(undefined4 *)(unaff_x19 + 0x90),lVar7,0);
    if (*(char *)(unaff_x29 + 0xe1a) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x29 + 0xe1a) = unaff_w26;
    }
    puVar9 = *(undefined4 **)(*unaff_x20 + 0xb8);
    FUN_08598c90(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar7,0);
    fVar13 = (float)((ulong)uVar12 >> 0x20);
    FUN_08597db0(uVar12,fVar13,fVar14,lVar7,0);
    uVar12 = CONCAT44(fVar13 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                      (float)uVar12 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
    fVar14 = fVar14 + *(float *)(unaff_x19 + 0x84);
    plVar4 = in_stack_00000038;
  } while( true );
  if (in_stack_00000038 != (long *)0x0) {
    lVar7 = *in_stack_00000038;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d3880;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08f65868,0);
LAB_076d3880:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  plVar4 = in_stack_00000048;
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar7 = *in_stack_00000048;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65880) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_076d3560;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08f65880,0);
LAB_076d3560:
  uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  plVar4 = in_stack_00000048;
  if ((uVar10 & 1) == 0) {
    plVar4 = (long *)*in_stack_00000028;
    if (plVar4 == (long *)0x0) goto LAB_076d39a0;
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 == 0) goto LAB_076d3978;
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    goto LAB_076d3960;
  }
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar7 = *in_stack_00000048;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadf70) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_076d35cc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08fadf70,0);
LAB_076d35cc:
  unaff_x21 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  unaff_x22 = *(long **)(unaff_x21 + 0x18);
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  param_1 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadd00) {
        in_x9 = (long)*piVar11;
        goto code_r0x076d3634;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(unaff_x22,*(long *)PTR_DAT_08fadd00,0);
  goto LAB_076d363c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_076d3960:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076d3994;
    }
  }
LAB_076d3978:
  puVar5 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08f65868,0);
LAB_076d3994:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_076d39a0:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar4 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar4 != (long *)0x0)) {
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_08f65da8;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadf60) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d3a24;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08fadf60,0);
LAB_076d3a24:
    puVar2 = PTR_DAT_08fadf68;
    in_stack_00000030 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar4 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *in_stack_00000030;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d3aa4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65880,0);
LAB_076d3aa4:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      plVar4 = in_stack_00000030;
      if ((uVar10 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_076d3ba4;
        lVar7 = *in_stack_00000030;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_076d3b7c;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_076d3b64;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *in_stack_00000030;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d3b08;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)puVar2,0);
LAB_076d3b08:
      lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar12 = FUN_0735c7b4(uVar12,*(undefined8 *)(lVar7 + 0x18),0);
    } while( true );
  }
  goto LAB_076d3c68;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_076d3b64:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
  }
LAB_076d3b7c:
  puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65868,0);
LAB_076d3b98:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_076d3ba4:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar4 = *(long **)(unaff_x19 + 0x98);
    uVar3 = FUN_076ccf14();
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar3);
    uVar8 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar12 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar8,uVar12,0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar12,*(undefined8 *)(*plVar4 + 0x560));
      return;
    }
  }
LAB_076d3c68:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


