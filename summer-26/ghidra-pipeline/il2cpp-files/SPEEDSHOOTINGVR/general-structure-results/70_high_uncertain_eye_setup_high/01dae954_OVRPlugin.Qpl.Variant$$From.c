/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 01dae954
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl_Variant__From(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  if ((DAT_0247d9bb & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    DAT_0247d9bb = 1;
  }
  in_stack_00000008 = 0;
  lVar2 = FUN_01dad0a4();
  puVar1 = PTR_DAT_0234bbd8;
  if (lVar2 == 0) goto LAB_01daeb24;
  in_stack_00000018 = *(long *)(lVar2 + 0x30);
  thunk_FUN_0106e12c(&stack0x00000018);
  lVar2 = in_stack_00000018;
  if (in_stack_00000018 == 0) {
    if ((param_2 >> 1 & 1) == 0) {
      uVar5 = 0;
      lVar2 = 0;
      lVar4 = 0;
      lVar8 = 0;
    }
    else {
      lVar2 = 0;
      uVar5 = 0;
LAB_01daea74:
      lVar4 = 0;
      lVar8 = 0;
      uVar6 = uVar5;
      if (lVar2 == 0) {
joined_r0x01daea80:
        lVar4 = 0;
        if (uVar6 == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar2 = *(long *)puVar1;
          }
          return **(long **)(lVar2 + 0xb8);
        }
      }
    }
  }
  else {
    if ((*(byte *)(in_stack_00000018 + 0x30) >> 1 & 1) != 0) {
      return 0;
    }
    if (((param_2 & 1) == 0) &&
       (plVar3 = *(long **)(in_stack_00000018 + 0x10), plVar3 != (long *)0x0)) {
      lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    }
    else {
      lVar4 = 0;
    }
    in_stack_00000008 = FUN_01daeb78(&stack0x00000018);
    uVar5 = FUN_01c8abe0(&stack0x00000008,0);
    lVar8 = 0;
    if ((uVar5 & 1) != 0) {
      in_stack_00000008 = FUN_01daeb78(&stack0x00000018);
      lVar8 = FUN_01c8abf0(&stack0x00000008,0);
    }
    uVar5 = *(ulong *)(lVar2 + 0x38);
    lVar2 = *(long *)(lVar2 + 0x40);
    if (((param_2 >> 1 & 1) != 0) && (lVar4 == 0)) {
      if (lVar8 == 0) goto LAB_01daea74;
      uVar6 = FUN_01c7b208(lVar8,0);
      lVar4 = 0;
      if ((lVar2 == 0) && (uVar5 == 0)) {
        uVar6 = uVar6 & 1;
        goto joined_r0x01daea80;
      }
    }
  }
  lVar7 = thunk_FUN_010400dc(*(undefined8 *)puVar1);
  FUN_01d8c630(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = lVar4;
    thunk_FUN_0106e12c((long *)(lVar7 + 0x10),lVar4);
    *(long *)(lVar7 + 0x20) = lVar8;
    thunk_FUN_0106e12c((long *)(lVar7 + 0x20),lVar8);
    *(ulong *)(lVar7 + 0x38) = uVar5;
    thunk_FUN_0106e12c((ulong *)(lVar7 + 0x38),uVar5);
    *(long *)(lVar7 + 0x40) = lVar2;
    thunk_FUN_0106e12c((long *)(lVar7 + 0x40),lVar2);
    *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | 1;
    return lVar7;
  }
LAB_01daeb24:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


