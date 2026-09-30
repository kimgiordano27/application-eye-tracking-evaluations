/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 063a8438
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_PoseStatef___cctor(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  uVar2 = (*(code *)*param_1)();
  uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x21,0);
  if ((uVar3 & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_063a84c0;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a84c0:
    uVar2 = (*(code *)*puVar4)();
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar2,*(undefined8 *)PTR_DAT_07d9b220,0);
    uVar2 = 0;
    if ((uVar3 & 1) != 0) goto LAB_063a8564;
  }
  lVar7 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto LAB_063a8538;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a8538:
  (*(code *)*puVar4)();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar2 = (**(code **)(*unaff_x20 + 0x248))();
LAB_063a8564:
  puVar1 = PTR_DAT_07db6d58;
  uVar5 = FUN_063349dc(uVar2,0);
  lVar7 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_063a85cc;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a85cc:
  uVar6 = (*(code *)*puVar4)();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar1);
  }
  uVar6 = FUN_06a0dde8(uVar6,0);
  if ((uVar5 & 1) != 0) {
    return uVar6;
  }
  uVar2 = FUN_060c1430(uVar2,*(undefined8 *)PTR_DAT_07d9d178,uVar6,0);
  return uVar2;
}


