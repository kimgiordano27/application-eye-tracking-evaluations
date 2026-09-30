/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_sessiongroup_handle_get
ENTRY_POINT: 0853bc0c
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_sessiongroup_handle_get
          (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long lVar16;
  long *unaff_x21;
  undefined8 uVar17;
  long lVar18;
  long unaff_x23;
  int *piVar19;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
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
  
  iVar7 = (**(code **)(param_1 + 0x218))(param_2,*(undefined8 *)(param_1 + 0x220));
  piVar19 = (int *)(unaff_x19 + 0xb8);
  iVar2 = *piVar19;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x20);
  }
  puVar5 = PTR_DAT_0932c850;
  iVar3 = 0;
  if (iVar7 != 0) {
    iVar3 = iVar2 / iVar7;
  }
  uVar8 = FUN_0767a564(iVar3,1,0);
  iVar2 = 0;
  if (iVar7 != 0) {
    iVar2 = *(int *)(unaff_x19 + 0xbc) / iVar7;
  }
  uVar9 = FUN_0767a564(iVar2,1,0);
  in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0xe0);
  in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0xd8);
  in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0xc0);
  in_stack_00000160 = *(undefined8 *)piVar19;
  in_stack_00000178 = *(ulong *)(unaff_x19 + 0xd0);
  in_stack_00000170 = *(undefined8 *)(unaff_x19 + 200);
  in_stack_00000190 = *(undefined4 *)(unaff_x19 + 0xe8);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x210);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar6 = PTR_DAT_0932c7b8;
  in_stack_00000130 = in_stack_00000170;
  in_stack_00000148 = in_stack_00000188;
  in_stack_00000140 = in_stack_00000180;
  in_stack_00000150 = in_stack_00000190;
  in_stack_00000138 = in_stack_00000178 & 0xffffffff;
  in_stack_00000128 = CONCAT44((int)((ulong)in_stack_00000168 >> 0x20),1);
  in_stack_00000120 = CONCAT44(uVar9,uVar8);
  FUN_089af748(&stack0x00000120,uVar1,0);
  in_stack_000001e8 = in_stack_00000128;
  in_stack_000001e0 = in_stack_00000120;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  _in_stack_000001d0 = FUN_08577d94();
  _in_stack_000001c0 = FUN_08577d94();
  _in_stack_000001b0 = FUN_08577d94();
  FUN_0513e6bc(0x1d,*(undefined8 *)puVar6);
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar10 = (long *)FUN_05189f44();
  in_stack_000001a8 = plVar10;
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar17 = *in_stack_00000018;
  *(undefined8 *)(in_stack_000001a0 + 0x18) = in_stack_00000018[1];
  *(undefined8 *)(in_stack_000001a0 + 0x10) = uVar17;
  puVar5 = PTR_DAT_09327080;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar13 = *plVar10;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09327080) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0853beac;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_09327080,0);
LAB_0853beac:
  (*(code *)*puVar11)(plVar10,in_stack_00000018,2,puVar11[1]);
  plVar10 = in_stack_000001a8;
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 (*) [16])(in_stack_000001a0 + 0x20) = _in_stack_000001d0;
  if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar13 = *in_stack_000001a8;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0853bf24;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar5,0);
LAB_0853bf24:
  (*(code *)*puVar11)(plVar10,&stack0x000001d0,3,puVar11[1]);
  plVar10 = in_stack_000001a8;
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 (*) [16])(in_stack_000001a0 + 0x30) = _in_stack_000001c0;
  if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar13 = *in_stack_000001a8;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0853bf9c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar5,0);
LAB_0853bf9c:
  (*(code *)*puVar11)(plVar10,&stack0x000001c0,3,puVar11[1]);
  plVar10 = in_stack_000001a8;
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
  lVar13 = *in_stack_000001a8;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0853c014;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar5,0);
LAB_0853c014:
  (*(code *)*puVar11)(plVar10,&stack0x00000220,3,puVar11[1]);
  plVar10 = in_stack_000001a8;
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
    lVar13 = *in_stack_000001a8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0853c0b0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar5,0);
LAB_0853c0b0:
    (*(code *)*puVar11)(plVar10,&stack0x00000230,3,puVar11[1]);
    in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0xc0);
    in_stack_00000160 = *(undefined8 *)piVar19;
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
    in_stack_00000160 = *(undefined8 *)piVar19;
    in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0xd0);
    in_stack_00000170 = *(undefined8 *)(unaff_x19 + 200);
    in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0xe0);
    in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0xd8);
    in_stack_00000190 = *(undefined4 *)(unaff_x19 + 0xe8);
  }
  *(undefined8 *)(in_stack_000001a0 + 0xa8) = in_stack_00000010;
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
  *(undefined8 *)(in_stack_000001a0 + 0xb0) = *(undefined8 *)(*(long *)(unaff_x19 + 0x1a0) + 0x90);
  thunk_FUN_040ec700();
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_000001a0 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1c0);
  thunk_FUN_040ec700();
  plVar10 = in_stack_000001a8;
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(int *)(in_stack_000001a0 + 0xc0) = iVar7;
  *(undefined1 (*) [16])(in_stack_000001a0 + 0x60) = _in_stack_000001b0;
  if (in_stack_000001a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar13 = *in_stack_000001a8;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_0853c1a8;
      }
      uVar14 = uVar14 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)puVar5,0);
LAB_0853c1a8:
  (*(code *)*puVar11)(plVar10,&stack0x000001b0,2,puVar11[1]);
  plVar10 = in_stack_000001a8;
  puVar5 = PTR_DAT_0932dd00;
  lVar13 = *(long *)PTR_DAT_0932dd00;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar13 = *(long *)puVar5;
  }
  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
  lVar16 = puVar11[0x13];
  if (lVar16 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar11 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar17 = *puVar11;
    lVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932dfa8);
    FUN_06ac8788(lVar16,uVar17,*(undefined8 *)PTR_DAT_0932dfc0,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98);
    *plVar12 = lVar16;
    thunk_FUN_040ec700(plVar12,lVar16);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar13 = *plVar10;
  lVar18 = *(long *)PTR_DAT_0932dfb0;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)(lVar18 + 0x20)) {
        lVar13 = lVar13 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 + 0x138;
        goto LAB_0853c2a0;
      }
      uVar14 = uVar14 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar14 != 0);
  }
  lVar13 = FUN_040b1e00(plVar10);
LAB_0853c2a0:
  lVar13 = thunk_FUN_04096bb4(*(undefined8 *)(lVar13 + 8),lVar18);
  (**(code **)(lVar13 + 8))(plVar10,lVar16,lVar13);
  plVar10 = in_stack_000001a8;
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar4 = *(undefined1 (*) [16])(in_stack_000001a0 + 0x40);
  if (in_stack_000001a8 != (long *)0x0) {
    lVar13 = *in_stack_000001a8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0853c32c;
        }
        uVar14 = uVar14 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(in_stack_000001a8,*(long *)PTR_DAT_092860c0,0);
LAB_0853c32c:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  return auVar4;
}


