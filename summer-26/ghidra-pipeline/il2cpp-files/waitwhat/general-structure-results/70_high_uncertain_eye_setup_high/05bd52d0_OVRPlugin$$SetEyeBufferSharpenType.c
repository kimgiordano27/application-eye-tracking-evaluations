/*
FUNCTION_NAME: OVRPlugin$$SetEyeBufferSharpenType
ENTRY_POINT: 05bd52d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetEyeBufferSharpenType(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  if ((DAT_0754eb7e & 1) == 0) {
    FUN_03188a78(PTR_DAT_071162a8);
    FUN_03188a78(PTR_DAT_07112a48);
    DAT_0754eb7e = 1;
  }
  puVar1 = PTR_DAT_071162a8;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_071162a8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_05bd5384;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(param_2,*(long *)PTR_DAT_071162a8,4);
LAB_05bd5384:
    lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (lVar4 == 0) {
      FUN_05bd552c(param_1);
      FUN_05bd5570(param_1);
      return;
    }
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 != 0) {
      if ((*(char *)(lVar4 + 0x10) == '\0') || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) {
        FUN_05bd552c(param_1);
      }
      else {
        lVar5 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_05bd5428;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar1,5);
LAB_05bd5428:
        uVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
        FUN_05bd55b8(param_1,lVar4,uVar2);
        *(undefined1 *)(param_1 + 0x60) = 0;
      }
      FUN_05bc8008(&stack0x00000040,param_2);
      plVar8 = *(long **)(param_1 + 0x70);
      if (plVar8 == (long *)0x0) {
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        uStack0000000000000034 = uStack0000000000000054;
        in_stack_00000038 = in_stack_00000058;
        uStack000000000000002c = uStack000000000000004c;
        in_stack_00000030 = in_stack_00000050;
      }
      else {
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07112a48) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_05bd54c8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)PTR_DAT_07112a48,2);
LAB_05bd54c8:
        (*(code *)*puVar3)(&stack0x00000020,plVar8,&stack0x00000040,puVar3[1]);
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uStack0000000000000014 = CONCAT44(in_stack_00000038,uStack0000000000000034);
        uStack000000000000000c = uStack000000000000002c;
        FUN_05be9e68(0x3f800000);
        *(undefined1 *)(param_1 + 0x61) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


