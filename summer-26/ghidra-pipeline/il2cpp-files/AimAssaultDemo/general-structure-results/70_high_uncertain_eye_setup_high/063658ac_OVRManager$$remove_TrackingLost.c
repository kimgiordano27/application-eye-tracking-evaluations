/*
FUNCTION_NAME: OVRManager$$remove_TrackingLost
ENTRY_POINT: 063658ac
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


undefined8 OVRManager__remove_TrackingLost(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined4 unaff_w21;
  long *plVar9;
  long *unaff_x22;
  long *unaff_x23;
  
  uVar3 = (*param_1)(param_2,unaff_w21);
  plVar9 = *(long **)(unaff_x19 + 0x28);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0636590c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x23,0);
LAB_0636590c:
  puVar1 = PTR_DAT_07db5540;
  iVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_06365974;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x22,4);
LAB_06365974:
  (*(code *)*puVar4)(plVar9,iVar2 + -1,puVar4[1]);
  lVar6 = FUN_03f623e8(*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)puVar1);
  if (lVar6 == 0) {
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
  }
  thunk_FUN_037aeb94(unaff_x19 + 0x30,uVar5);
  return uVar3;
}


