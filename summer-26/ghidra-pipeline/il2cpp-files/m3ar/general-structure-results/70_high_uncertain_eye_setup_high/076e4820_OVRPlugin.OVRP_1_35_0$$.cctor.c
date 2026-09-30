/*
FUNCTION_NAME: OVRPlugin.OVRP_1_35_0$$.cctor
ENTRY_POINT: 076e4820
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
OVRPlugin_OVRP_1_35_0___cctor
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined1 in_stack_00000090 [16];
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 uStack000000000000011c;
  undefined4 in_stack_00000120;
  undefined4 uStack0000000000000124;
  undefined4 in_stack_00000128;
  undefined4 uStack000000000000012c;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  if ((DAT_095482c0 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fae398);
    FUN_0403162c(PTR_DAT_08fae3a0);
    FUN_0403162c(PTR_DAT_08fae3a8);
    FUN_0403162c(PTR_DAT_08fac2c0);
    FUN_0403162c(PTR_DAT_08fae348);
    FUN_0403162c(PTR_DAT_08fae3b0);
    FUN_0403162c(PTR_DAT_08fae3b8);
    FUN_0403162c(PTR_DAT_08fae330);
    FUN_0403162c(PTR_DAT_08f70528);
    DAT_095482c0 = 1;
  }
  in_stack_00000160 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0;
  uStack000000000000012c = 0;
  in_stack_00000120 = 0;
  uStack0000000000000124 = 0;
  in_stack_00000138 = 0;
  in_stack_000000b8 = (undefined8 *)0x0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000118 = 0;
  uStack000000000000011c = 0;
  in_stack_00000110 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  uStack00000000000000dc = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  uStack00000000000000e4 = 0;
  in_stack_00000130 = param_4;
  FUN_076e3c48(&stack0x00000090 + 4,param_4);
  puVar1 = PTR_DAT_08fae348;
  plVar10 = *(long **)(param_4 + 0x138);
  uStack000000000000012c = 0x7f800000;
  in_stack_00000110 = in_stack_00000090._4_8_;
  uStack0000000000000124 = (undefined4)in_stack_000000a8;
  in_stack_00000128 = (undefined4)((ulong)in_stack_000000a8 >> 0x20);
  uStack000000000000011c = in_stack_000000a0;
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar13 = in_stack_000000a0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08fae348) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076e4960;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08fae348,0);
LAB_076e4960:
    iVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_076e49c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar1,1);
LAB_076e49c0:
    puVar1 = PTR_DAT_08fae330;
    uVar12 = (*(code *)*puVar6)(plVar10,iVar5 + -1,puVar6[1]);
    in_stack_00000138 = 0;
    if (DAT_09539e16 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539e16 = '\x01';
    }
    puVar2 = PTR_DAT_08fae3b8;
    lVar7 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
    in_stack_00000020 = 0;
    in_stack_00000008 = (undefined8 *)0x0;
    in_stack_00000000 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    FUN_076e2ff4(uVar12,uVar13,param_3,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                 *(undefined4 *)(lVar7 + 0x20),0);
    in_stack_00000148 = in_stack_00000008;
    in_stack_00000140 = in_stack_00000000;
    in_stack_00000158 = in_stack_00000018;
    in_stack_00000150 = in_stack_00000010;
    in_stack_00000160 = in_stack_00000020;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar11 = *(long *)puVar2;
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    puVar1 = PTR_DAT_08f70528;
    plVar10 = (long *)**(long **)(lVar7 + 0xb8);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x198))
                (&stack0x00000078,plVar10,param_4,*(undefined8 *)(*plVar10 + 0x1a0));
      in_stack_000000f8 = in_stack_00000080;
      in_stack_000000f0 = in_stack_00000078;
      in_stack_00000100 = in_stack_00000088;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      puVar1 = PTR_DAT_08fae3b0;
      FUN_08596c00(&stack0x00000058 + 4,0);
      plVar10 = *(long **)(param_4 + 0x128);
      in_stack_000000d8 = in_stack_00000058._12_4_;
      in_stack_000000d0 = in_stack_00000058._4_8_;
      uStack00000000000000e4 = (undefined4)in_stack_00000070;
      in_stack_000000e8 = (undefined4)((ulong)in_stack_00000070 >> 0x20);
      uStack00000000000000dc = in_stack_00000068;
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08fac2c0) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076e4ba0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08fac2c0,0);
LAB_076e4ba0:
        (*(code *)*puVar6)(plVar10,&stack0x000000d0,puVar6[1]);
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
        uVar8 = FUN_04fd0520(&stack0x000000b0,*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          FUN_04fd07dc(&stack0x000000b0,*(undefined8 *)puVar2);
          FUN_054b17b0(&stack0x000000f0,*(undefined8 *)puVar1);
          in_stack_000000b0 = in_stack_00000000;
          in_stack_00000000 = 0;
          in_stack_000000b8 = in_stack_00000008;
          in_stack_000000c8 = in_stack_00000018;
          in_stack_000000c0 = in_stack_00000010;
          in_stack_00000008 = &stack0x000000b0;
          while( true ) {
            uVar8 = FUN_04fd0520(&stack0x000000b0,*(undefined8 *)puVar3);
            if ((uVar8 & 1) == 0) {
              FUN_04fd07dc(&stack0x000000b0,*(undefined8 *)puVar2);
              memcpy(&stack0x00000000,&stack0x00000110,0x58);
              *(undefined8 *)(param_4 + 0x168) = in_stack_00000050;
              *(undefined8 *)(param_4 + 0x150) = in_stack_00000038;
              *(undefined8 *)(param_4 + 0x148) = in_stack_00000030;
              *(undefined8 *)(param_4 + 0x160) = in_stack_00000048;
              *(undefined8 *)(param_4 + 0x158) = in_stack_00000040;
              return in_stack_00000138;
            }
            lVar7 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar4);
            if (lVar7 == 0) break;
            if (*(char *)(lVar7 + 0xb0) != '\0') {
              FUN_076e4fa0(param_4,lVar7,&stack0x00000110);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar7 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar4);
        if (lVar7 == 0) break;
        if (*(char *)(lVar7 + 0xb0) == '\0') {
          if (*(long *)(param_4 + 0x128) != 0) {
            FUN_076e4dc0(in_stack_000000d0 & 0xffffffff,in_stack_000000d0._4_4_,in_stack_000000d8,
                         param_4,lVar7,&stack0x00000110);
          }
          FUN_076e4fa0(param_4,lVar7,&stack0x00000110);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


