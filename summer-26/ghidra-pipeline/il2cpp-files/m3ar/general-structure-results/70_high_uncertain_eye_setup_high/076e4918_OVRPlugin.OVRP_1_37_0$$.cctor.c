/*
FUNCTION_NAME: OVRPlugin.OVRP_1_37_0$$.cctor
ENTRY_POINT: 076e4918
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_37_0___cctor
          (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  long *plVar10;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar11;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058 [16];
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x21) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_076e4960;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20();
LAB_076e4960:
  (*(code *)*puVar5)();
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x21) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_076e49c0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20();
LAB_076e49c0:
  puVar1 = PTR_DAT_08fae330;
  uVar11 = (*(code *)*puVar5)();
  in_stack_00000138 = 0;
  if (DAT_09539e16 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539e16 = '\x01';
  }
  puVar2 = PTR_DAT_08fae3b8;
  lVar6 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  in_stack_00000020 = 0;
  in_stack_00000008 = (undefined8 *)0x0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  FUN_076e2ff4(uVar11,param_3,param_4,*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
               *(undefined4 *)(lVar6 + 0x20),0);
  in_stack_00000148 = in_stack_00000008;
  in_stack_00000140 = in_stack_00000000;
  in_stack_00000158 = in_stack_00000018;
  in_stack_00000150 = in_stack_00000010;
  in_stack_00000160 = in_stack_00000020;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar9 = *(long *)puVar2;
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec();
  }
  puVar1 = PTR_DAT_08f70528;
  if ((long *)**(long **)(lVar6 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  (**(code **)(*(long *)**(long **)(lVar6 + 0xb8) + 0x198))(&stack0x00000078);
  in_stack_000000f8 = in_stack_00000080;
  in_stack_000000f0 = in_stack_00000078;
  in_stack_00000100 = in_stack_00000088;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar1 = PTR_DAT_08fae3b0;
  FUN_08596c00(&stack0x00000058 + 4,0);
  _uStack00000000000000d8 = CONCAT44(uStack0000000000000068,in_stack_00000058._12_4_);
  plVar10 = *(long **)(unaff_x19 + 0x128);
  in_stack_000000d0 = in_stack_00000058._4_8_;
  *(undefined8 *)(unaff_x22 + 0x50) = in_stack_00000070;
  *(ulong *)(unaff_x22 + 0x48) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fac2c0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076e4ba0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08fac2c0,0);
LAB_076e4ba0:
    (*(code *)*puVar5)(plVar10,&stack0x000000d0,puVar5[1]);
  }
  puVar4 = PTR_DAT_08fae3a8;
  puVar3 = PTR_DAT_08fae3a0;
  puVar2 = PTR_DAT_08fae398;
  FUN_054b17b0(&stack0x000000f0,*(undefined8 *)puVar1);
  in_stack_000000b0 = in_stack_00000000;
  in_stack_00000000 = 0;
  in_stack_000000b8 = in_stack_00000008;
  in_stack_000000c8 = in_stack_00000018;
  in_stack_000000c0 = in_stack_00000010;
  in_stack_00000008 = &stack0x000000b0;
  while( true ) {
    uVar7 = FUN_04fd0520(&stack0x000000b0,*(undefined8 *)puVar3);
    if ((uVar7 & 1) == 0) {
      FUN_04fd07dc(&stack0x000000b0,*(undefined8 *)puVar2);
      FUN_054b17b0(&stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_000000b0 = in_stack_00000000;
      in_stack_00000000 = 0;
      in_stack_000000b8 = in_stack_00000008;
      in_stack_000000c8 = in_stack_00000018;
      in_stack_000000c0 = in_stack_00000010;
      in_stack_00000008 = &stack0x000000b0;
      while( true ) {
        uVar7 = FUN_04fd0520(&stack0x000000b0,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          FUN_04fd07dc(&stack0x000000b0,*(undefined8 *)puVar2);
          memcpy(&stack0x00000000,&stack0x00000110,0x58);
          *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000050;
          *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000038;
          *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000030;
          *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000048;
          *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000040;
          return in_stack_00000138;
        }
        lVar6 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar4);
        if (lVar6 == 0) break;
        if (*(char *)(lVar6 + 0xb0) != '\0') {
          FUN_076e4fa0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar4);
    if (lVar6 == 0) break;
    if (*(char *)(lVar6 + 0xb0) == '\0') {
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        FUN_076e4dc0(in_stack_000000d0 & 0xffffffff,in_stack_000000d0._4_4_,uStack00000000000000d8);
      }
      FUN_076e4fa0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


