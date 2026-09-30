/*
FUNCTION_NAME: FUN_058dc020
ENTRY_POINT: 058dc020
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058dc020(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *unaff_x19;
  undefined8 uVar6;
  long *unaff_x20;
  long *unaff_x23;
  undefined4 unaff_w24;
  undefined4 unaff_s8;
  
  FUN_033c3938();
  uVar5 = (**(code **)(*unaff_x20 + 0x198))();
  *(undefined4 *)(unaff_x19 + 0x74) = unaff_s8;
  *(undefined4 *)((long)unaff_x19 + 0x39c) = unaff_w24;
  *(int *)(unaff_x19 + 0x73) = (int)unaff_x19[0x73] + 1;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (unaff_x19[7] != 0) {
    uVar6 = *(undefined8 *)(unaff_x19[7] + 0x40);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0606a004(uVar6,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (unaff_x19[0x11] == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_0582a780(unaff_x19[0x11],0);
    }
    if (unaff_x19[0x12] == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0582a780(unaff_x19[0x12],0);
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x268))();
    if ((lVar3 != 0) && (uVar5 = FUN_05814b80(lVar3,0), puVar1 = PTR_DAT_06767fc8, (uVar5 & 1) != 0)
       ) {
      if (unaff_x19[7] == 0) goto LAB_058dc088;
      uVar6 = *(undefined8 *)(unaff_x19[7] + 0x40);
      if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b80b9c == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b80b9c = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar1;
      }
      FUN_033c3938(uVar6,plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x88),
                   *(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
    }
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
      if (lVar2 == 0) {
        return;
      }
      if ((uVar5 & 1) != 0) {
        return;
      }
      uVar5 = FUN_05814b80(lVar2,0);
      puVar1 = PTR_DAT_06767fc8;
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (unaff_x19[7] != 0) {
        uVar6 = *(undefined8 *)(unaff_x19[7] + 0x40);
        if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b80b9d == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b80b9d = '\x01';
        }
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar2 = *(long *)puVar1;
        }
        FUN_033c3938(uVar6,plVar4,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x80),
                     *(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
        return;
      }
    }
  }
LAB_058dc088:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


