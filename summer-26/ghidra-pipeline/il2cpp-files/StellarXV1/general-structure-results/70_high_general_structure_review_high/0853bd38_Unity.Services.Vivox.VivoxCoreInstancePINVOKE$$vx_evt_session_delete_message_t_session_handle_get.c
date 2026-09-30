/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_session_handle_get
ENTRY_POINT: 0853bd38
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_session_handle_get
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x23;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined4 uStack0000000000000190;
  long in_stack_000001a0;
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
  
  uStack00000000000000c8 = in_stack_00000108;
  uStack00000000000000c0 = in_stack_00000100;
  uStack00000000000000d0 = in_stack_00000110;
  uStack00000000000000a0 = param_1;
  uStack00000000000000b0 = param_2;
  _in_stack_000001d0 = FUN_08577d94();
  _in_stack_000001c0 = FUN_08577d94();
  _in_stack_000001b0 = FUN_08577d94();
  FUN_0513e6bc(0x1d,*unaff_x28);
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar3 = (long *)FUN_05189f44();
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar10 = *in_stack_00000018;
  *(undefined8 *)(in_stack_000001a0 + 0x18) = in_stack_00000018[1];
  *(undefined8 *)(in_stack_000001a0 + 0x10) = uVar10;
  puVar2 = PTR_DAT_09327080;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09327080) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0853beac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_09327080,0);
LAB_0853beac:
  (*(code *)*puVar4)(plVar3,in_stack_00000018,2,puVar4[1]);
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 (*) [16])(in_stack_000001a0 + 0x20) = _in_stack_000001d0;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0853bf24;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)puVar2,0);
LAB_0853bf24:
  (*(code *)*puVar4)(plVar3,&stack0x000001d0,3,puVar4[1]);
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 (*) [16])(in_stack_000001a0 + 0x30) = _in_stack_000001c0;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0853bf9c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)puVar2,0);
LAB_0853bf9c:
  (*(code *)*puVar4)(plVar3,&stack0x000001c0,3,puVar4[1]);
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_000001a0 + 0x58) = in_stack_00000228;
  *(undefined8 *)(in_stack_000001a0 + 0x50) = in_stack_00000220;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0853c014;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)puVar2,0);
LAB_0853c014:
  (*(code *)*puVar4)(plVar3,&stack0x00000220,3,puVar4[1]);
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_000001a0 + 0x48) = in_stack_00000238;
  *(undefined8 *)(in_stack_000001a0 + 0x40) = in_stack_00000230;
  if ((in_stack_000002a8 & 1) == 0) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0853c0b0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)puVar2,0);
LAB_0853c0b0:
    (*(code *)*puVar4)(plVar3,&stack0x00000230,3,puVar4[1]);
    uStack0000000000000168 = unaff_x27[1];
    uStack0000000000000160 = *unaff_x27;
    uStack0000000000000178 = unaff_x27[3];
    uStack0000000000000170 = unaff_x27[2];
    uStack0000000000000188 = unaff_x27[5];
    uStack0000000000000180 = unaff_x27[4];
    uStack0000000000000190 = *(undefined4 *)(unaff_x27 + 6);
    if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    uStack0000000000000168 = unaff_x27[1];
    uStack0000000000000160 = *unaff_x27;
    uStack0000000000000178 = unaff_x27[3];
    uStack0000000000000170 = unaff_x27[2];
    uStack0000000000000188 = unaff_x27[5];
    uStack0000000000000180 = unaff_x27[4];
    uStack0000000000000190 = *(undefined4 *)(unaff_x27 + 6);
  }
  *(undefined8 *)(in_stack_000001a0 + 0xa8) = in_stack_00000010;
  *(undefined8 *)(in_stack_000001a0 + 0x78) = uStack0000000000000168;
  *(undefined8 *)(in_stack_000001a0 + 0x70) = uStack0000000000000160;
  *(undefined8 *)(in_stack_000001a0 + 0x88) = uStack0000000000000178;
  *(undefined8 *)(in_stack_000001a0 + 0x80) = uStack0000000000000170;
  *(undefined8 *)(in_stack_000001a0 + 0x98) = uStack0000000000000188;
  *(undefined8 *)(in_stack_000001a0 + 0x90) = uStack0000000000000180;
  *(undefined4 *)(in_stack_000001a0 + 0xa0) = uStack0000000000000190;
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
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined4 *)(in_stack_000001a0 + 0xc0) = in_stack_00000008._4_4_;
  *(undefined1 (*) [16])(in_stack_000001a0 + 0x60) = _in_stack_000001b0;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0853c1a8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)puVar2,0);
LAB_0853c1a8:
  (*(code *)*puVar4)(plVar3,&stack0x000001b0,2,puVar4[1]);
  puVar2 = PTR_DAT_0932dd00;
  lVar6 = *(long *)PTR_DAT_0932dd00;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar6 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar4[0x13];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar4;
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932dfa8);
    FUN_06ac8788(lVar9,uVar10,*(undefined8 *)PTR_DAT_0932dfc0,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
    *plVar5 = lVar9;
    thunk_FUN_040ec700(plVar5,lVar9);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar3;
  lVar11 = *(long *)PTR_DAT_0932dfb0;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_0853c2a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_040b1e00(plVar3);
LAB_0853c2a0:
  lVar6 = thunk_FUN_04096bb4(*(undefined8 *)(lVar6 + 8),lVar11);
  (**(code **)(lVar6 + 8))(plVar3,lVar9,lVar6);
  if (in_stack_000001a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar1 = *(undefined1 (*) [16])(in_stack_000001a0 + 0x40);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0853c32c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092860c0,0);
LAB_0853c32c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return auVar1;
}


