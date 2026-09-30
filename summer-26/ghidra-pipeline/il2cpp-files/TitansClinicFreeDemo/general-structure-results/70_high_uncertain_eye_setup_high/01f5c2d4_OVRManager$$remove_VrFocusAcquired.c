/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 01f5c2d4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_VrFocusAcquired(long param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x21;
  undefined1 auVar10 [16];
  ulong in_stack_00000008;
  
  if ((*(byte *)(unaff_x21 + 0xc99) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba9b8);
    thunk_FUN_01279b34(PTR_DAT_027c0aa0);
    *(undefined1 *)(unaff_x21 + 0xc99) = 1;
  }
  puVar4 = PTR_DAT_027c0a78;
  in_stack_00000008 = 0;
  if (*(char *)(param_1 + 0x24) < '\0') {
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    *(undefined4 *)(param_1 + 0x40) = 4;
    uVar8 = *(undefined8 *)puVar4;
    goto LAB_01f5c588;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  puVar7 = (undefined4 *)*param_2;
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  auVar10 = FUN_01f1ab8c(param_3,0);
  puVar4 = PTR_DAT_027ba9b8;
  uVar8 = auVar10._8_8_;
  if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)PTR_DAT_027ba9b8);
    uVar8 = extraout_x1;
  }
  uVar5 = FUN_01f5b650(auVar10._0_8_,uVar8,(long)&stack0x00000008 + 4);
  if ((uVar5 & 1) == 0) {
    uVar8 = FUN_01f1ab8c(param_3,0);
    uVar9 = *(undefined8 *)PTR_DAT_027c0aa0;
    *(undefined4 *)(param_1 + 0x40) = 3;
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    return 0;
  }
  switch(in_stack_00000008._4_4_) {
  case 0:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f5bcac(param_1,uVar1,&stack0x00000008);
    uVar5 = in_stack_00000008;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f5bd70(param_1,uVar5 & 0xffffffff,uVar2,uVar3);
joined_r0x01f5c538:
      if ((uVar5 & 1) != 0) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x80;
        return 1;
      }
    }
    break;
  case 1:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f5bcac(param_1,uVar3,&stack0x00000008);
    uVar5 = in_stack_00000008;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f5bdd8(param_1,uVar1,uVar2,uVar5 & 0xffffffff);
      goto joined_r0x01f5c538;
    }
    break;
  case 2:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f5bcac(param_1,uVar3,&stack0x00000008);
    uVar5 = in_stack_00000008;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f5be54(param_1,uVar1,uVar2,uVar5 & 0xffffffff);
      goto joined_r0x01f5c538;
    }
    break;
  case 3:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f5bcac(param_1,uVar1,&stack0x00000008);
    uVar5 = in_stack_00000008;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f5bed0(param_1,uVar5 & 0xffffffff,uVar2,uVar3);
      goto joined_r0x01f5c538;
    }
  }
  if ((DAT_0293dcc4 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c0a78);
    DAT_0293dcc4 = 1;
  }
  puVar4 = PTR_DAT_027c0a78;
  *(undefined4 *)(param_1 + 0x40) = 4;
  uVar8 = *(undefined8 *)puVar4;
LAB_01f5c588:
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return 0;
}


