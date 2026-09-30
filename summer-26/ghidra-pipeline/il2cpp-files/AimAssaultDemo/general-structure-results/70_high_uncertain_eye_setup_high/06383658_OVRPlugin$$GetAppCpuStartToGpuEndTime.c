/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 06383658
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppCpuStartToGpuEndTime(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x542) = 1;
  puVar1 = PTR_DAT_07d96690;
  if (unaff_x20 == 0) {
LAB_063836ec:
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x19 + 2) = 0;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_07d96690 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = FUN_0637ee64();
  if (lVar2 != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *(long *)puVar1;
    }
    uVar4 = FUN_0637f06c(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28),1);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar2 + 0x38) != 0) {
        lVar3 = thunk_FUN_037787d0(*(long *)(lVar2 + 0x38),*(undefined8 *)PTR_DAT_07d867b8);
        if (lVar3 == 0) {
          plVar8 = *(long **)(lVar2 + 0x38);
          if ((plVar8 == (long *)0x0) || (*plVar8 != *(long *)PTR_DAT_07d97418)) {
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar5 = FUN_061d52c8(0);
            if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
              thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
            }
            FUN_061b5ba8(plVar8,uVar5,0);
            FUN_0623b108();
          }
          else {
            thunk_FUN_03778a20(plVar8);
          }
        }
        else {
          FUN_0623aed0();
        }
        *unaff_x19 = 0;
        unaff_x19[1] = 0;
        *(undefined4 *)(unaff_x19 + 2) = 0;
        FUN_04e5ce2c();
        return;
      }
      goto LAB_063836ec;
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar5 = FUN_061d52c8(0);
  thunk_FUN_037a15ac(PTR_DAT_07d96690);
  FUN_031ae340();
  uVar6 = FUN_0637ef78();
  uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6190);
  uVar5 = FUN_063349e4(uVar7,uVar5,uVar6,0);
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar6 = thunk_FUN_037788cc();
  FUN_061a843c(uVar6,uVar5,0);
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db61a0);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar6,uVar5);
}


