/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 076d347c
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d3bb0) */
/* WARNING: Removing unreachable block (ram,0x076d3c54) */
/* WARNING: Removing unreachable block (ram,0x076d3c70) */
/* WARNING: Removing unreachable block (ram,0x076d39b0) */

void OVRPlugin__GetNativeOpenXRInstance(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *in_x10;
  int *piVar15;
  long unaff_x19;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 unaff_d9;
  float unaff_s10;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
  uVar14 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *in_x10) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_076d34c4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_0406ae20();
LAB_076d34c4:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = PTR_DAT_08fadf48;
  puVar4 = PTR_DAT_08f695c0;
  puVar3 = PTR_DAT_08f67f40;
  puVar2 = PTR_DAT_08f65598;
  in_stack_00000028 = &stack0x00000048;
  in_stack_00000020 = 0;
joined_r0x076d34dc:
  in_stack_00000048 = plVar8;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar10 = *plVar8;
  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f65880) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_076d3560;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65880,0);
LAB_076d3560:
  uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  plVar8 = in_stack_00000048;
  if ((uVar14 & 1) != 0) {
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar10 = *in_stack_00000048;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08fadf70) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076d35cc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08fadf70,0);
LAB_076d35cc:
    lVar10 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar8 = *(long **)(lVar10 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar11 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08fadd00) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076d363c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fadd00,0);
LAB_076d363c:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar16 = unaff_d9;
    fVar18 = unaff_s10;
    do {
      in_stack_00000038 = plVar8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_076d36bc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65880,0);
LAB_076d36bc:
      uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      plVar8 = in_stack_00000038;
      if ((uVar14 & 1) == 0) goto LAB_076d381c;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar11 = *in_stack_00000038;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08fadd08) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_076d3728;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08fadd08,0);
LAB_076d3728:
      uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar11 = FUN_04c279ec(uVar12,uVar1,*(undefined8 *)puVar4);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar11 = FUN_04b60dd0(lVar11,*(undefined8 *)puVar5);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar6 = *(undefined4 *)(lVar10 + 0x10);
      *(undefined1 *)(lVar11 + 0x70) = 1;
      *(undefined8 *)(lVar11 + 0x68) = uVar9;
      *(undefined4 *)(lVar11 + 100) = uVar6;
      *(undefined8 *)(lVar11 + 0x50) = uVar12;
      lVar11 = FUN_085849e0(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      UnityEngine_UI_Dropdown__OnSubmit
                (*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                 *(undefined4 *)(unaff_x19 + 0x90),lVar11,0);
      if (DAT_09539e1a == '\0') {
        FUN_0403162c(puVar3);
        DAT_09539e1a = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      FUN_08598c90(*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar11,0);
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      FUN_08597db0(uVar16,fVar17,fVar18,lVar11,0);
      uVar16 = CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                        (float)uVar16 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
      fVar18 = fVar18 + *(float *)(unaff_x19 + 0x84);
      plVar8 = in_stack_00000038;
    } while( true );
  }
  plVar8 = (long *)*in_stack_00000028;
  if (plVar8 == (long *)0x0) goto LAB_076d39a0;
  lVar10 = *plVar8;
  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar14 == 0) goto LAB_076d3978;
  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
  goto LAB_076d3960;
LAB_076d381c:
  if (in_stack_00000038 != (long *)0x0) {
    lVar10 = *in_stack_00000038;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076d3880;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08f65868,0);
LAB_076d3880:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
  plVar8 = in_stack_00000048;
  goto joined_r0x076d34dc;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_076d3960:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_076d3994;
    }
  }
LAB_076d3978:
  puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65868,0);
LAB_076d3994:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_076d39a0:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar8 != (long *)0x0)) {
    lVar10 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_08f65da8;
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08fadf60) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076d3a24;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fadf60,0);
LAB_076d3a24:
    puVar2 = PTR_DAT_08fadf68;
    in_stack_00000030 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar8 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *in_stack_00000030;
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_076d3aa4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65880,0);
LAB_076d3aa4:
      uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      plVar8 = in_stack_00000030;
      if ((uVar14 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_076d3ba4;
        lVar10 = *in_stack_00000030;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 == 0) goto LAB_076d3b7c;
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_076d3b64;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *in_stack_00000030;
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_076d3b08;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)puVar2,0);
LAB_076d3b08:
      lVar10 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar16 = FUN_0735c7b4(uVar16,*(undefined8 *)(lVar10 + 0x18),0);
    } while( true );
  }
  goto LAB_076d3c68;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_076d3b64:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
  }
LAB_076d3b7c:
  puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65868,0);
LAB_076d3b98:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_076d3ba4:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x98);
    uVar6 = FUN_076ccf14();
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar6);
    uVar12 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar16 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar12,uVar16,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar16,*(undefined8 *)(*plVar8 + 0x560));
      return;
    }
  }
LAB_076d3c68:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


