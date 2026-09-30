/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 076d3558
PROGRAM: m3ar-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d3bb0) */
/* WARNING: Removing unreachable block (ram,0x076d3c54) */
/* WARNING: Removing unreachable block (ram,0x076d3c70) */
/* WARNING: Removing unreachable block (ram,0x076d39b0) */

void OVRPlugin__GetNativeOpenXRSession(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long in_x9;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar12;
  long *plVar13;
  long *unaff_x25;
  undefined1 unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar14;
  float fVar15;
  undefined8 unaff_d9;
  float unaff_s10;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x076d3558:
  puVar5 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
LAB_076d3560:
  uVar4 = (*(code *)*puVar5)(unaff_x21,puVar5[1]);
  plVar13 = in_stack_00000048;
  if ((uVar4 & 1) != 0) {
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *in_stack_00000048;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadf70) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d35cc;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08fadf70,0);
LAB_076d35cc:
    lVar7 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar13 = *(long **)(lVar7 + 0x18);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadd00) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d363c;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08fadd00,0);
LAB_076d363c:
    plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
    uVar12 = unaff_d9;
    fVar15 = unaff_s10;
    do {
      in_stack_00000038 = plVar13;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *plVar13;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d36bc;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f65880,0);
LAB_076d36bc:
      uVar4 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      plVar13 = in_stack_00000038;
      if ((uVar4 & 1) == 0) goto LAB_076d381c;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadd08) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d3728;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08fadd08,0);
LAB_076d3728:
      uVar6 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar8 = FUN_04c279ec(uVar9,uVar1,*unaff_x27);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = FUN_04b60dd0(lVar8,*unaff_x28);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar3 = *(undefined4 *)(lVar7 + 0x10);
      *(undefined1 *)(lVar8 + 0x70) = unaff_w26;
      *(undefined8 *)(lVar8 + 0x68) = uVar6;
      *(undefined4 *)(lVar8 + 100) = uVar3;
      *(undefined8 *)(lVar8 + 0x50) = uVar9;
      lVar8 = FUN_085849e0(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      UnityEngine_UI_Dropdown__OnSubmit
                (*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                 *(undefined4 *)(unaff_x19 + 0x90),lVar8,0);
      if (*(char *)(unaff_x29 + 0xe1a) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x29 + 0xe1a) = unaff_w26;
      }
      puVar10 = *(undefined4 **)(*unaff_x20 + 0xb8);
      FUN_08598c90(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar8,0);
      fVar14 = (float)((ulong)uVar12 >> 0x20);
      FUN_08597db0(uVar12,fVar14,fVar15,lVar8,0);
      uVar12 = CONCAT44(fVar14 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                        (float)uVar12 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
      fVar15 = fVar15 + *(float *)(unaff_x19 + 0x84);
      plVar13 = in_stack_00000038;
    } while( true );
  }
  plVar13 = (long *)*in_stack_00000028;
  if (plVar13 == (long *)0x0) goto LAB_076d39a0;
  lVar7 = *plVar13;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 == 0) goto LAB_076d3978;
  piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_076d3960;
LAB_076d381c:
  if (in_stack_00000038 != (long *)0x0) {
    lVar7 = *in_stack_00000038;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d3880;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08f65868,0);
LAB_076d3880:
    (*(code *)*puVar5)(plVar13,puVar5[1]);
  }
  unaff_x21 = in_stack_00000048;
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  param_1 = *in_stack_00000048;
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65880) {
        in_x9 = (long)*piVar11;
        goto code_r0x076d3558;
      }
      uVar4 = uVar4 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08f65880,0);
  goto LAB_076d3560;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_076d3960:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076d3994;
    }
  }
LAB_076d3978:
  puVar5 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f65868,0);
LAB_076d3994:
  (*(code *)*puVar5)(plVar13,puVar5[1]);
LAB_076d39a0:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar13 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar13 != (long *)0x0)) {
    lVar7 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_08f65da8;
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadf60) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d3a24;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08fadf60,0);
LAB_076d3a24:
    puVar2 = PTR_DAT_08fadf68;
    in_stack_00000030 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar13 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d3aa4;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65880,0);
LAB_076d3aa4:
      uVar4 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      plVar13 = in_stack_00000030;
      if ((uVar4 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_076d3ba4;
        lVar7 = *in_stack_00000030;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 == 0) goto LAB_076d3b7c;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_076d3b64;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d3b08;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)puVar2,0);
LAB_076d3b08:
      lVar7 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar12 = FUN_0735c7b4(uVar12,*(undefined8 *)(lVar7 + 0x18),0);
    } while( true );
  }
  goto LAB_076d3c68;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_076d3b64:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
  }
LAB_076d3b7c:
  puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65868,0);
LAB_076d3b98:
  (*(code *)*puVar5)(plVar13,puVar5[1]);
LAB_076d3ba4:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar13 = *(long **)(unaff_x19 + 0x98);
    uVar3 = FUN_076ccf14();
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar3);
    uVar9 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar12 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar9,uVar12,0);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x558))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x560));
      return;
    }
  }
LAB_076d3c68:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


