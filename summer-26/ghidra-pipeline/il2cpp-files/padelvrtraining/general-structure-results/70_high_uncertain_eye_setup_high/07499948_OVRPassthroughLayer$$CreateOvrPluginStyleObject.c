/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 07499948
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  if ((DAT_09845b5a & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0921fad8);
    FUN_03d2d2b0(PTR_DAT_09223790);
    FUN_03d2d2b0(PTR_DAT_09223780);
    DAT_09845b5a = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09223790) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_074999e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(param_2,*(long *)PTR_DAT_09223790,0);
LAB_074999e4:
    iVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
    puVar2 = PTR_DAT_09223780;
    puVar1 = PTR_DAT_0921fad8;
    if (iVar3 == 0x1a) {
      iVar3 = 0;
      do {
        lVar5 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07499a58;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03d8f370(param_2,*(long *)puVar2,0);
LAB_07499a58:
        (*(code *)*puVar4)(&stack0x00000040,param_2,iVar3,puVar4[1]);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        uStack0000000000000074 = uStack0000000000000054;
        uStack0000000000000070 = uStack0000000000000050;
        if ((param_3 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          in_stack_00000028 = in_stack_00000048;
          in_stack_00000020 = in_stack_00000040;
          uStack0000000000000034 = uStack0000000000000054;
          uStack0000000000000030 = uStack0000000000000050;
          FUN_074959c0(&stack0x00000060,&stack0x00000020);
        }
        in_stack_00000048 = in_stack_00000068;
        in_stack_00000040 = in_stack_00000060;
        uStack0000000000000054 = uStack0000000000000074;
        uStack0000000000000050 = uStack0000000000000070;
        if (param_1 == 0) goto LAB_07499b14;
        FUN_07499284(param_1,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x1a);
    }
    return;
  }
LAB_07499b14:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


