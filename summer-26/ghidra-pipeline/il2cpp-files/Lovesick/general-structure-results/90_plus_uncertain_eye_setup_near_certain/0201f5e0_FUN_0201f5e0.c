/*
FUNCTION_NAME: FUN_0201f5e0
ENTRY_POINT: 0201f5e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_0201f5e0(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((DAT_037809a2 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_037809a2 = 1;
  }
  lVar3 = *(long *)puVar1;
  local_88 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    local_90 = *(undefined8 *)(lVar4 + 0x30);
    uStack_98 = *(undefined8 *)(lVar4 + 0x28);
    local_a0 = *(undefined8 *)(lVar4 + 0x20);
    local_30 = param_1[2];
    uStack_38 = param_1[1];
    local_40 = *param_1;
    uVar2 = FUN_02021b88(&local_a0,&local_40);
    lVar3 = *(long *)puVar1;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar3);
        lVar3 = *(long *)puVar1;
      }
      plVar6 = (long *)(*(long *)(lVar3 + 0xb8) + 0x18);
      goto LAB_0201f864;
    }
  }
  uVar5 = param_1[2];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
  }
  if (DAT_037809da == '\0') {
    thunk_FUN_00d48444(StringLiteral_2063);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_037809da = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(lVar3 + 0xb8);
  if (*(int *)(lVar4 + 0x10) < 10) {
    local_40 = uVar7;
    uStack_38 = uVar8;
    local_30 = uVar5;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack_78 = uStack_38;
    local_80 = local_40;
    local_70 = local_30;
    uVar2 = FUN_0201fb14(&local_80,&local_88);
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    local_40 = uVar7;
    uStack_38 = uVar8;
    local_30 = uVar5;
    if (*(long *)(lVar4 + 8) == 0) goto LAB_0201f878;
    local_60 = uVar7;
    uStack_58 = uVar8;
    local_50 = uVar5;
    uVar2 = FUN_0129eff4(*(long *)(lVar4 + 8),&local_60,&local_88,*(undefined8 *)StringLiteral_2063)
    ;
  }
  plVar6 = &local_88;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    if (local_88 != 0) {
      if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x20) == local_88) {
        uVar5 = *(undefined8 *)(local_88 + 0x10);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *(long *)puVar1;
          *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20) = uVar5;
          if (local_88 == 0) goto LAB_0201f878;
        }
        else {
          *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20) = uVar5;
        }
      }
      else {
        if (*(long *)(local_88 + 0x18) == 0) goto LAB_0201f878;
        *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x10) = *(undefined8 *)(local_88 + 0x10);
      }
      if (*(long *)(local_88 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(local_88 + 0x10) + 0x18) = *(undefined8 *)(local_88 + 0x18);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *(long *)puVar1;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        lVar4 = *(long *)(lVar3 + 0x18);
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) = local_88, local_88 != 0)) {
          plVar6 = &local_88;
          *(undefined8 *)(local_88 + 0x10) = 0;
          *(long *)(local_88 + 0x18) = lVar4;
          *(long *)(lVar3 + 0x18) = local_88;
          goto LAB_0201f864;
        }
      }
    }
LAB_0201f878:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_0201f864:
  return *plVar6;
}


