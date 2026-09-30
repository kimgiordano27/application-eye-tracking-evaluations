/*
FUNCTION_NAME: OVRPlugin$$GetDynamicObjectTrackerSupported
ENTRY_POINT: 06399d48
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDynamicObjectTrackerSupported(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03798b70(param_1);
    }
    uVar4 = FUN_061d52c8(0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x25);
    }
    uVar2 = FUN_061b2a94(param_2,uVar4,0);
    if (unaff_x20 == 0) goto LAB_06399e38;
    lVar8 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_06399e38;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined1 *)(lVar8 + (int)uVar1 + 0x20) = uVar2;
    }
    else {
      FUN_04901d5c();
    }
    do {
      uVar5 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar5 & 1) == 0) {
        thunk_FUN_037a15ac(PTR_DAT_07db2430);
        goto LAB_06399eac;
      }
      iVar3 = (**(code **)(*unaff_x19 + 0x238))();
    } while (iVar3 == 5);
    if (iVar3 != 7) break;
    param_2 = (**(code **)(*unaff_x19 + 0x248))();
    param_1 = *unaff_x24;
  }
  if (iVar3 != 0xe) {
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar4 = FUN_061d52c8(0);
    FUN_031a5e18();
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x238))();
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
    uVar7 = thunk_FUN_037784fc(uVar7,(long)&stack0x00000008 + 4);
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6840);
    FUN_063349e4(uVar6,uVar4,uVar7,0);
LAB_06399eac:
    uVar4 = FUN_062d5fcc();
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6848);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,uVar7);
  }
  if (unaff_x20 != 0) {
    FUN_04903740();
    return;
  }
LAB_06399e38:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


