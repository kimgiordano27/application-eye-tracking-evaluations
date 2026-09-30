/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 076e4a94
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(ushort *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
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
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_0406aaec();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0406aaec();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0406aaec();
  }
  puVar1 = PTR_DAT_08f70528;
  if ((long *)**(long **)(lVar5 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  (**(code **)(*(long *)**(long **)(lVar5 + 0xb8) + 0x198))(&stack0x00000078);
  in_stack_000000f8 = in_stack_00000080;
  in_stack_000000f0 = in_stack_00000078;
  in_stack_00000100 = in_stack_00000088;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar1 = PTR_DAT_08fae3b0;
  FUN_08596c00(&stack0x00000058 + 4,0);
  _uStack00000000000000d8 = CONCAT44(uStack0000000000000068,in_stack_00000058._12_4_);
  plVar9 = *(long **)(unaff_x19 + 0x128);
  in_stack_000000d0 = in_stack_00000058._4_8_;
  *(undefined8 *)(unaff_x22 + 0x50) = in_stack_00000070;
  *(ulong *)(unaff_x22 + 0x48) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fac2c0) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076e4ba0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08fac2c0,0);
LAB_076e4ba0:
    (*(code *)*puVar6)(plVar9,&stack0x000000d0,puVar6[1]);
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
        lVar5 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar4);
        if (lVar5 == 0) break;
        if (*(char *)(lVar5 + 0xb0) != '\0') {
          FUN_076e4fa0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar4);
    if (lVar5 == 0) break;
    if (*(char *)(lVar5 + 0xb0) == '\0') {
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        FUN_076e4dc0(in_stack_000000d0 & 0xffffffff,in_stack_000000d0._4_4_,uStack00000000000000d8);
      }
      FUN_076e4fa0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


