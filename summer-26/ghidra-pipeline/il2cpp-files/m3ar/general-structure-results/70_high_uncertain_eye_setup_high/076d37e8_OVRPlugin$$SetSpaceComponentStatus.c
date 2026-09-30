/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 076d37e8
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


/* WARNING: Removing unreachable block (ram,0x076d3bb0) */
/* WARNING: Removing unreachable block (ram,0x076d39b0) */
/* WARNING: Removing unreachable block (ram,0x076d3c70) */
/* WARNING: Removing unreachable block (ram,0x076d3c54) */

void OVRPlugin__SetSpaceComponentStatus
               (undefined1 param_1 [16],undefined4 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar11;
  long *unaff_x25;
  undefined1 unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float unaff_s8;
  undefined8 unaff_d9;
  float unaff_s10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
code_r0x076d37e8:
  FUN_08597db0(uStack0000000000000000,param_2,param_3,param_4,0);
  unaff_s8 = unaff_s8 + *(float *)(unaff_x19 + 0x84);
  uStack0000000000000000 =
       CONCAT44((float)((ulong)uStack0000000000000000 >> 0x20) +
                (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                (float)uStack0000000000000000 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
  plVar11 = in_stack_00000038;
  do {
    in_stack_00000038 = plVar11;
    if (plVar11 == (long *)0x0) {
      uStack0000000000000008 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uStack0000000000000008 = 0;
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076d36bc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f65880,0);
LAB_076d36bc:
    uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    plVar11 = in_stack_00000038;
    if ((uVar9 & 1) != 0) break;
    if (in_stack_00000038 != (long *)0x0) {
      lVar6 = *in_stack_00000038;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65868) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_076d3880;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08f65868,0);
LAB_076d3880:
      (*(code *)*puVar3)(plVar11,puVar3[1]);
    }
    plVar11 = in_stack_00000048;
    unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                        (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
    unaff_s8 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *in_stack_00000048;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076d3560;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08f65880,0);
LAB_076d3560:
    uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    plVar11 = in_stack_00000048;
    if ((uVar9 & 1) == 0) {
      plVar11 = (long *)*in_stack_00000028;
      if (plVar11 == (long *)0x0) goto LAB_076d39a0;
      lVar6 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_076d3978;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_076d3960;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *in_stack_00000048;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fadf70) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076d35cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08fadf70,0);
LAB_076d35cc:
    unaff_x21 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar11 = *(long **)(unaff_x21 + 0x18);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fadd00) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076d363c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fadd00,0);
LAB_076d363c:
    plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
    uStack0000000000000000 = unaff_d9;
    unaff_s10 = unaff_s8;
  } while( true );
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = *in_stack_00000038;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fadd08) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_076d3728;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08fadd08,0);
LAB_076d3728:
  uVar4 = (*(code *)*puVar3)(plVar11,puVar3[1]);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar6 = FUN_04c279ec(uVar7,uVar5,*unaff_x27);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = FUN_04b60dd0(lVar6,*unaff_x28);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar2 = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined1 *)(lVar6 + 0x70) = unaff_w26;
  *(undefined8 *)(lVar6 + 0x68) = uVar4;
  *(undefined4 *)(lVar6 + 100) = uVar2;
  *(undefined8 *)(lVar6 + 0x50) = uVar7;
  param_4 = FUN_085849e0(lVar6,0);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  UnityEngine_UI_Dropdown__OnSubmit
            (*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
             *(undefined4 *)(unaff_x19 + 0x90),param_4,0);
  if (*(char *)(unaff_x29 + 0xe1a) == '\0') {
    FUN_0403162c();
    *(undefined1 *)(unaff_x29 + 0xe1a) = unaff_w26;
  }
  puVar8 = *(undefined4 **)(*unaff_x20 + 0xb8);
  FUN_08598c90(*puVar8,puVar8[1],puVar8[2],puVar8[3],param_4,0);
  param_2 = (undefined4)((ulong)uStack0000000000000000 >> 0x20);
  param_3 = (ulong)(uint)unaff_s8;
  goto code_r0x076d37e8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076d3960:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076d3994;
    }
  }
LAB_076d3978:
  puVar3 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f65868,0);
LAB_076d3994:
  (*(code *)*puVar3)(plVar11,puVar3[1]);
LAB_076d39a0:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar11 != (long *)0x0)) {
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar7 = *(undefined8 *)PTR_DAT_08f65da8;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fadf60) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076d3a24;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fadf60,0);
LAB_076d3a24:
    puVar1 = PTR_DAT_08fadf68;
    in_stack_00000030 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar11 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *in_stack_00000030;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_076d3aa4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65880,0);
LAB_076d3aa4:
      uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      plVar11 = in_stack_00000030;
      if ((uVar9 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_076d3ba4;
        lVar6 = *in_stack_00000030;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 == 0) goto LAB_076d3b7c;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_076d3b64;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *in_stack_00000030;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_076d3b08;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)puVar1,0);
LAB_076d3b08:
      lVar6 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar7 = FUN_0735c7b4(uVar7,*(undefined8 *)(lVar6 + 0x18),0);
    } while( true );
  }
  goto LAB_076d3c68;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076d3b64:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
  }
LAB_076d3b7c:
  puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65868,0);
LAB_076d3b98:
  (*(code *)*puVar3)(plVar11,puVar3[1]);
LAB_076d3ba4:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar11 = *(long **)(unaff_x19 + 0x98);
    uVar2 = FUN_076ccf14();
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar2);
    uVar5 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar7 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar5,uVar7,0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x558))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x560));
      return;
    }
  }
LAB_076d3c68:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


