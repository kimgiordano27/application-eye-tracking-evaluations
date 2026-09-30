/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 0339e72c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0339edec) */

void OVRPlugin_OVRP_1_68_0__ovrp_SetInsightPassthroughKeyboardHandsIntensity
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  uStack0000000000000018 = param_1;
  plVar1 = (long *)thunk_FUN_01c495e4();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x0339eb14;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar1,*(long *)PTR_DAT_0422fce8,0);
code_r0x0339eb14:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(in_stack_00000010);
  }
  if (param_2 != 1) {
    FUN_029fd610(&stack0x00000060,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4(uStack0000000000000018);
  }
  plVar1 = (long *)__cxa_begin_catch(uStack0000000000000018);
  lVar3 = *plVar1;
  __cxa_end_catch();
  FUN_029fd610(&stack0x00000060,
               *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar3);
  }
  if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
    FUN_02d50a3c(&stack0x00000040);
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000050;
    while (uVar4 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
      if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
         ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
          ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
        lVar3 = *(long *)(in_stack_00000030 + 0xe0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      }
    }
    FUN_029fd610(&stack0x00000060,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
  }
  if (in_stack_00000038._4_4_ != 0) {
    FUN_02d50a3c(&stack0x00000040);
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000050;
    while (uVar4 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
      if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(in_stack_00000070 + 0x18) != 0) {
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        (**(code **)(*unaff_x20 + 0x1b8))();
        FUN_0339f5a0(in_stack_00000028);
      }
    }
    FUN_029fd610(&stack0x00000060,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
  }
  FUN_0339cf34(in_stack_00000028);
  return;
}


