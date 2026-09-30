/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 076d329c
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
/* WARNING: Removing unreachable block (ram,0x076d3c54) */
/* WARNING: Removing unreachable block (ram,0x076d3c70) */
/* WARNING: Removing unreachable block (ram,0x076d39b0) */

void OVRPlugin__PollEvent(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fadf80);
  FUN_0403162c(PTR_DAT_08fadf88);
  FUN_0403162c(PTR_DAT_08fadf90);
  FUN_0403162c(PTR_DAT_08fadf98);
  FUN_0403162c(PTR_DAT_08fadfa0);
  FUN_0403162c(PTR_DAT_08f65da8);
  *(undefined1 *)(unaff_x20 + 0x23c) = 1;
  puVar2 = PTR_DAT_08fadf88;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000038 = (long *)0x0;
  if (DAT_09539c10 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539c10 = '\x01';
  }
  uVar19 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar20 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  uVar7 = FUN_076d3d40();
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_08fadf28;
  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar12[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar10);
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar15 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadf40);
    FUN_0531d664(lVar15,uVar16,*(undefined8 *)PTR_DAT_08fadf78,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar15;
  }
  uVar7 = FUN_04aed04c(uVar7,lVar15,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_08fadf30;
  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar12[3];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar10);
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar15 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadf38);
    FUN_05345534(lVar15,uVar16,*(undefined8 *)PTR_DAT_08fadf80,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar15;
  }
  plVar8 = (long *)FUN_04afa5dc(uVar7,lVar15,*(undefined8 *)puVar3);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08fadf58) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_076d34c4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fadf58,0);
LAB_076d34c4:
    plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
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
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_076d3560;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65880,0);
LAB_076d3560:
    uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
    plVar8 = in_stack_00000048;
    if ((uVar13 & 1) != 0) {
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *in_stack_00000048;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08fadf70) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076d35cc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08fadf70,0);
LAB_076d35cc:
      lVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar8 = *(long **)(lVar10 + 0x18);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar15 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08fadd00) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076d363c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fadd00,0);
LAB_076d363c:
      plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
      uVar7 = uVar19;
      fVar18 = fVar20;
      do {
        in_stack_00000038 = plVar8;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar15 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f65880) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_076d36bc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65880,0);
LAB_076d36bc:
        uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
        plVar8 = in_stack_00000038;
        if ((uVar13 & 1) == 0) goto LAB_076d381c;
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar15 = *in_stack_00000038;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08fadd08) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_076d3728;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08fadd08,0);
LAB_076d3728:
        uVar9 = (*(code *)*puVar12)(plVar8,puVar12[1]);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar15 = FUN_04c279ec(uVar16,uVar1,*(undefined8 *)puVar4);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar15 = FUN_04b60dd0(lVar15,*(undefined8 *)puVar5);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
        uVar6 = *(undefined4 *)(lVar10 + 0x10);
        *(undefined1 *)(lVar15 + 0x70) = 1;
        *(undefined8 *)(lVar15 + 0x68) = uVar9;
        *(undefined4 *)(lVar15 + 100) = uVar6;
        *(undefined8 *)(lVar15 + 0x50) = uVar16;
        lVar15 = FUN_085849e0(lVar15,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        UnityEngine_UI_Dropdown__OnSubmit
                  (*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                   *(undefined4 *)(unaff_x19 + 0x90),lVar15,0);
        if (DAT_09539e1a == '\0') {
          FUN_0403162c(puVar3);
          DAT_09539e1a = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_08598c90(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar15,0);
        fVar17 = (float)((ulong)uVar7 >> 0x20);
        FUN_08597db0(uVar7,fVar17,fVar18,lVar15,0);
        uVar7 = CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                         (float)uVar7 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
        fVar18 = fVar18 + *(float *)(unaff_x19 + 0x84);
        plVar8 = in_stack_00000038;
      } while( true );
    }
    plVar8 = (long *)*in_stack_00000028;
    if (plVar8 == (long *)0x0) goto LAB_076d39a0;
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 == 0) goto LAB_076d3978;
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_076d3960;
  }
  goto LAB_076d3c68;
LAB_076d381c:
  if (in_stack_00000038 != (long *)0x0) {
    lVar10 = *in_stack_00000038;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_076d3880;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_0406ae20(in_stack_00000038,*(long *)PTR_DAT_08f65868,0);
LAB_076d3880:
    (*(code *)*puVar12)(plVar8,puVar12[1]);
  }
  uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                    (float)uVar19 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  fVar20 = fVar20 + *(float *)(unaff_x19 + 0x78);
  plVar8 = in_stack_00000048;
  goto joined_r0x076d34dc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_076d3960:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_076d3994;
    }
  }
LAB_076d3978:
  puVar12 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65868,0);
LAB_076d3994:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_076d39a0:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar8 != (long *)0x0)) {
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar19 = *(undefined8 *)PTR_DAT_08f65da8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08fadf60) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_076d3a24;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fadf60,0);
LAB_076d3a24:
    puVar2 = PTR_DAT_08fadf68;
    in_stack_00000030 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar8 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *in_stack_00000030;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f65880) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076d3aa4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65880,0);
LAB_076d3aa4:
      uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      plVar8 = in_stack_00000030;
      if ((uVar13 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_076d3ba4;
        lVar10 = *in_stack_00000030;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_076d3b7c;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_076d3b64;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *in_stack_00000030;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076d3b08;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)puVar2,0);
LAB_076d3b08:
      lVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar19 = FUN_0735c7b4(uVar19,*(undefined8 *)(lVar10 + 0x18),0);
    } while( true );
  }
  goto LAB_076d3c68;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_076d3b64:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
  }
LAB_076d3b7c:
  puVar12 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65868,0);
LAB_076d3b98:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_076d3ba4:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x98);
    uVar6 = FUN_076ccf14();
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar6);
    uVar7 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar19 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar7,uVar19,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar19,*(undefined8 *)(*plVar8 + 0x560));
      return;
    }
  }
LAB_076d3c68:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


