/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 076cd644
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_localDimming(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0xd18));
  FUN_0403162c(PTR_DAT_08fadd20);
  FUN_0403162c(PTR_DAT_08fadd28);
  FUN_0403162c(PTR_DAT_08fadd30);
  FUN_0403162c(PTR_DAT_08fadd40);
  FUN_0403162c(PTR_DAT_08fadd48);
  FUN_0403162c(PTR_DAT_08fad0e8);
  FUN_0403162c(PTR_DAT_08fadd38);
  FUN_0403162c(PTR_DAT_08fadd50);
  *(undefined1 *)(unaff_x20 + 0x1f9) = 1;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uVar6 = FUN_085842f8();
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x48);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(int *)(lVar7 + 0x18) != 0) {
      FUN_0594bf6c(lVar7,*(undefined8 *)PTR_DAT_08fadd38);
      puVar5 = PTR_DAT_08fadd20;
      puVar3 = PTR_DAT_08fad0e8;
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      do {
        uVar8 = FUN_0725bc24(&stack0x00000020,*(undefined8 *)puVar5);
        uVar6 = in_stack_00000030;
        if ((uVar8 & 1) == 0) {
          FUN_0725bc20(&stack0x00000020,*(undefined8 *)PTR_DAT_08fadd18);
          if (*(char *)(unaff_x19 + 0x50) == '\0') {
            FUN_076b6c74(0x48506f7365446574,0);
          }
          *(undefined1 *)(unaff_x19 + 0x50) = 1;
          return 1;
        }
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        plVar11 = *(long **)(unaff_x19 + 0x38);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar7 = *plVar11;
        uVar12 = *(undefined8 *)(in_stack_00000038 + 0x18);
        uVar1 = *(undefined4 *)(in_stack_00000038 + 0x10);
        uVar2 = *(undefined4 *)(in_stack_00000038 + 0x14);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_076cd790;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar3,1);
LAB_076cd790:
        uVar6 = (*(code *)*puVar9)(plVar11,uVar6 & 0xffffffff,uVar2,uVar1,uVar12,puVar9[1]);
        puVar4 = PTR_DAT_08fadd18;
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x50) = 0;
          FUN_0725bc20(&stack0x00000020,*(undefined8 *)puVar4);
          return 0;
        }
      } while( true );
    }
  }
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  return 0;
}


