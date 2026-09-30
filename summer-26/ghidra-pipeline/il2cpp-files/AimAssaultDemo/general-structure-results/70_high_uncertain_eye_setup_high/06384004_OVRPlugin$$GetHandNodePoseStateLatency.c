/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 06384004
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandNodePoseStateLatency(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x690));
  FUN_0373b518(PTR_DAT_07db3768);
  *(undefined1 *)(unaff_x21 + 0x547) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar1 = FUN_0637ee64();
  if (lVar1 != 0) {
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = FUN_0637f06c(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18),1);
    if ((uVar3 & 1) != 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      if (lVar1 != 0) {
        if (*(int *)(*(long *)PTR_DAT_07db2130 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_0631debc(lVar1,0);
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        *unaff_x19 = 0;
        FUN_04e58778();
        return;
      }
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      return;
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar4 = FUN_061d52c8(0);
  thunk_FUN_037a15ac(PTR_DAT_07d96690);
  FUN_031ae340();
  uVar5 = FUN_0637ef78();
  uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db61d0);
  uVar4 = FUN_063349e4(uVar6,uVar4,uVar5,0);
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar5 = thunk_FUN_037788cc();
  FUN_061a843c(uVar5,uVar4,0);
  uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db61e0);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar5,uVar4);
}


