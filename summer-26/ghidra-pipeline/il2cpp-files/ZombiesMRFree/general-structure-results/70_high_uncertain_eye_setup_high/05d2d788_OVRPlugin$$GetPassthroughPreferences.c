/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughPreferences
ENTRY_POINT: 05d2d788
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPassthroughPreferences(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long in_x9;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  do {
    if ((bool)in_ZR) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_05d2d7b8:
      puVar3 = PTR_DAT_06fb5c98;
      puVar2 = PTR_DAT_06fb5570;
      puVar1 = PTR_DAT_06fb5568;
      (*(code *)*puVar5)(&stack0x00000080);
      in_stack_00000068 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_00000070 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      in_stack_00000060 = in_stack_00000080;
      do {
        uVar6 = FUN_054f74fc(&stack0x00000060,*(undefined8 *)puVar2);
        uVar4 = in_stack_00000070;
        if ((uVar6 & 1) == 0) {
          FUN_054f74f8(&stack0x00000060,*(undefined8 *)puVar1);
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        plVar9 = *(long **)(unaff_x19 + 0x30);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar7 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_05d2d860;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_02feb5b8(plVar9,*unaff_x22,7);
LAB_05d2d860:
        uVar6 = (*(code *)*puVar5)(plVar9,uVar4 & 0xffffffff,&stack0x00000040,puVar5[1]);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uStack0000000000000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          uStack0000000000000094 = (undefined4)uStack0000000000000054;
          in_stack_00000098 = SUB84(uStack0000000000000054,4);
          uStack0000000000000090 = uStack0000000000000050;
          FUN_05263c8c(*(long *)(unaff_x19 + 0x40),uVar4 & 0xffffffff,&stack0x00000080,
                       *(undefined8 *)puVar3);
        }
        plVar9 = *(long **)(unaff_x19 + 0x30);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar7 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 8) * 0x10 + 0x138);
              goto LAB_05d2d908;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_02feb5b8(plVar9,*unaff_x22,8);
LAB_05d2d908:
        uVar6 = (*(code *)*puVar5)(plVar9,uVar4 & 0xffffffff,&stack0x00000020,puVar5[1]);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uStack0000000000000088 = in_stack_00000028;
          in_stack_00000080 = in_stack_00000020;
          uStack0000000000000094 = (undefined4)uStack0000000000000034;
          in_stack_00000098 = SUB84(uStack0000000000000034,4);
          uStack0000000000000090 = uStack0000000000000030;
          FUN_05263c8c(*(long *)(unaff_x19 + 0x48),uVar4 & 0xffffffff,&stack0x00000080,
                       *(undefined8 *)puVar3);
        }
      } while( true );
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02feb5b8();
      goto LAB_05d2d7b8;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


