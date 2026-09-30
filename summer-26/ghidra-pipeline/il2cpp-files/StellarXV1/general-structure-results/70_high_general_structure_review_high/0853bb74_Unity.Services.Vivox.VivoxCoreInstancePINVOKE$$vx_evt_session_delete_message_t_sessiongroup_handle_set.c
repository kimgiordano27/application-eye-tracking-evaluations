/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_sessiongroup_handle_set
ENTRY_POINT: 0853bb74
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0853c370) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_sessiongroup_handle_set
          (void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long lVar18;
  undefined8 unaff_x21;
  undefined8 uVar19;
  long lVar20;
  undefined8 *unaff_x22;
  long unaff_x23;
  int *piVar21;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  ulong in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  ulong in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  long in_stack_000001a0;
  long *in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  byte in_stack_000002a8;
  
  FUN_04077588(PTR_DAT_0932c850);
  FUN_04077588(PTR_DAT_0932dfc8);
  FUN_04077588(PTR_DAT_0932dfd0);
  FUN_04077588(PTR_DAT_0932dcd8);
  FUN_04077588(PTR_DAT_0932dce0);
  FUN_04077588(PTR_DAT_0932dd90);
  *(undefined1 *)(unaff_x20 + 0x997) = 1;
  puVar8 = PTR_DAT_0932db88;
  puVar7 = PTR_DAT_09285ae0;
  in_stack_000001d0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001c0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = (long *)0x0;
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if ((*(long *)(unaff_x19 + 0x1c0) != 0) &&
     (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x1c0) + 0xb8), auVar4 = ZEXT816(0),
     auVar5 = ZEXT816(0), auVar6 = ZEXT816(0), plVar12 != (long *)0x0)) {
    iVar9 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
    piVar21 = (int *)(unaff_x19 + 0xb8);
    iVar2 = *piVar21;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar7);
    }
    puVar7 = PTR_DAT_0932c850;
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = iVar2 / iVar9;
    }
    uVar10 = FUN_0767a564(iVar3,1,0);
    iVar2 = 0;
    if (iVar9 != 0) {
      iVar2 = *(int *)(unaff_x19 + 0xbc) / iVar9;
    }
    uVar11 = FUN_0767a564(iVar2,1,0);
    in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0xe0);
    in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0xd8);
    in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0xc0);
    in_stack_00000160 = *(undefined8 *)piVar21;
    in_stack_00000178 = *(ulong *)(unaff_x19 + 0xd0);
    in_stack_00000170 = *(undefined8 *)(unaff_x19 + 200);
    in_stack_00000190 = *(undefined4 *)(unaff_x19 + 0xe8);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x210);
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar8 = PTR_DAT_0932c7b8;
    in_stack_00000130 = in_stack_00000170;
    in_stack_00000148 = in_stack_00000188;
    in_stack_00000140 = in_stack_00000180;
    in_stack_00000150 = in_stack_00000190;
    in_stack_00000138 = in_stack_00000178 & 0xffffffff;
    in_stack_00000128 = CONCAT44((int)((ulong)in_stack_00000168 >> 0x20),1);
    in_stack_00000120 = CONCAT44(uVar11,uVar10);
    FUN_089af748(&stack0x00000120,uVar1,0);
    in_stack_000001e8 = in_stack_00000128;
    in_stack_000001e0 = in_stack_00000120;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    _in_stack_000001d0 = FUN_08577d94();
    _in_stack_000001c0 = FUN_08577d94();
    _in_stack_000001b0 = FUN_08577d94();
    FUN_0513e6bc(0x1d,*(undefined8 *)puVar8);
    auVar4 = _in_stack_000001b0;
    auVar5 = _in_stack_000001c0;
    auVar6 = _in_stack_000001d0;
    if (unaff_x23 != 0) {
      plVar12 = (long *)FUN_05189f44();
      in_stack_000001a8 = plVar12;
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar19 = *unaff_x22;
      *(undefined8 *)(in_stack_000001a0 + 0x18) = unaff_x22[1];
      *(undefined8 *)(in_stack_000001a0 + 0x10) = uVar19;
      puVar7 = PTR_DAT_09327080;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09327080) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0853beac;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_09327080,0);
LAB_0853beac:
      (*(code *)*puVar13)(plVar12,unaff_x22,2,puVar13[1]);
      plVar12 = in_stack_000001a8;
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined1 (*) [16])(in_stack_000001a0 + 0x20) = _in_stack_000001d0;
      if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *in_stack_000001a8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0853bf24;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar7,0);
LAB_0853bf24:
      (*(code *)*puVar13)(plVar12,&stack0x000001d0,3,puVar13[1]);
      plVar12 = in_stack_000001a8;
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined1 (*) [16])(in_stack_000001a0 + 0x30) = _in_stack_000001c0;
      if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *in_stack_000001a8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0853bf9c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar7,0);
LAB_0853bf9c:
      (*(code *)*puVar13)(plVar12,&stack0x000001c0,3,puVar13[1]);
      plVar12 = in_stack_000001a8;
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(in_stack_000001a0 + 0x58) = in_stack_00000228;
      *(undefined8 *)(in_stack_000001a0 + 0x50) = in_stack_00000220;
      if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *in_stack_000001a8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0853c014;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar7,0);
LAB_0853c014:
      (*(code *)*puVar13)(plVar12,&stack0x00000220,3,puVar13[1]);
      plVar12 = in_stack_000001a8;
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(in_stack_000001a0 + 0x48) = in_stack_00000238;
      *(undefined8 *)(in_stack_000001a0 + 0x40) = in_stack_00000230;
      if ((in_stack_000002a8 & 1) == 0) {
        if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar15 = *in_stack_000001a8;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0853c0b0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar7,0);
LAB_0853c0b0:
        (*(code *)*puVar13)(plVar12,&stack0x00000230,3,puVar13[1]);
        in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0xc0);
        in_stack_00000160 = *(undefined8 *)piVar21;
        in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0xd0);
        in_stack_00000170 = *(undefined8 *)(unaff_x19 + 200);
        in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0xe0);
        in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0xd8);
        in_stack_00000190 = *(undefined4 *)(unaff_x19 + 0xe8);
        if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0xc0);
        in_stack_00000160 = *(undefined8 *)piVar21;
        in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0xd0);
        in_stack_00000170 = *(undefined8 *)(unaff_x19 + 200);
        in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0xe0);
        in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0xd8);
        in_stack_00000190 = *(undefined4 *)(unaff_x19 + 0xe8);
      }
      *(undefined8 *)(in_stack_000001a0 + 0xa8) = unaff_x21;
      *(undefined8 *)(in_stack_000001a0 + 0x78) = in_stack_00000168;
      *(undefined8 *)(in_stack_000001a0 + 0x70) = in_stack_00000160;
      *(ulong *)(in_stack_000001a0 + 0x88) = in_stack_00000178;
      *(undefined8 *)(in_stack_000001a0 + 0x80) = in_stack_00000170;
      *(undefined8 *)(in_stack_000001a0 + 0x98) = in_stack_00000188;
      *(undefined8 *)(in_stack_000001a0 + 0x90) = in_stack_00000180;
      *(undefined4 *)(in_stack_000001a0 + 0xa0) = in_stack_00000190;
      thunk_FUN_040ec700();
      if (*(long *)(unaff_x19 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(in_stack_000001a0 + 0xb0) =
           *(undefined8 *)(*(long *)(unaff_x19 + 0x1a0) + 0x90);
      thunk_FUN_040ec700();
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(in_stack_000001a0 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1c0);
      thunk_FUN_040ec700();
      plVar12 = in_stack_000001a8;
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(int *)(in_stack_000001a0 + 0xc0) = iVar9;
      *(undefined1 (*) [16])(in_stack_000001a0 + 0x60) = _in_stack_000001b0;
      if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *in_stack_000001a8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0853c1a8;
          }
          uVar16 = uVar16 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar7,0);
LAB_0853c1a8:
      (*(code *)*puVar13)(plVar12,&stack0x000001b0,2,puVar13[1]);
      plVar12 = in_stack_000001a8;
      puVar7 = PTR_DAT_0932dd00;
      lVar15 = *(long *)PTR_DAT_0932dd00;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar15 = *(long *)puVar7;
      }
      puVar13 = *(undefined8 **)(lVar15 + 0xb8);
      lVar18 = puVar13[0x13];
      if (lVar18 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar13 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar19 = *puVar13;
        lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932dfa8);
        FUN_06ac8788(lVar18,uVar19,*(undefined8 *)PTR_DAT_0932dfc0,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x98);
        *plVar14 = lVar18;
        thunk_FUN_040ec700(plVar14,lVar18);
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *plVar12;
      lVar20 = *(long *)PTR_DAT_0932dfb0;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)(lVar20 + 0x20)) {
            lVar15 = lVar15 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar20 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_0853c2a0;
          }
          uVar16 = uVar16 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar16 != 0);
      }
      lVar15 = FUN_040b1e00(plVar12);
LAB_0853c2a0:
      lVar15 = thunk_FUN_04096bb4(*(undefined8 *)(lVar15 + 8),lVar20);
      (**(code **)(lVar15 + 8))(plVar12,lVar18,lVar15);
      plVar12 = in_stack_000001a8;
      if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      auVar4 = *(undefined1 (*) [16])(in_stack_000001a0 + 0x40);
      if (in_stack_000001a8 != (long *)0x0) {
        lVar15 = *in_stack_000001a8;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_092860c0) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0853c32c;
            }
            uVar16 = uVar16 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)PTR_DAT_092860c0,0);
LAB_0853c32c:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
      return auVar4;
    }
  }
  _in_stack_000001b0 = auVar4;
  _in_stack_000001c0 = auVar5;
  _in_stack_000001d0 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


