/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 063a83dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_TextureRectMatrixf___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int in_w9;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  lVar2 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  puVar1 = PTR_DAT_07d9b228;
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto FUN_063a8454;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
FUN_063a8454:
    uVar4 = (*(code *)*puVar3)();
    uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar4,*(undefined8 *)puVar1,0);
    if ((uVar7 & 1) != 0) {
      lVar2 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 8) * 0x10 + 0x138);
            goto LAB_063a84c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a84c0:
      uVar4 = (*(code *)*puVar3)();
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar4,*(undefined8 *)PTR_DAT_07d9b220,0);
      uVar4 = 0;
      if ((uVar7 & 1) != 0) goto LAB_063a8564;
    }
    lVar2 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_063a8538;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a8538:
    (*(code *)*puVar3)();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar4 = (**(code **)(*unaff_x20 + 0x248))();
  }
LAB_063a8564:
  puVar1 = PTR_DAT_07db6d58;
  uVar5 = FUN_063349dc(uVar4,0);
  lVar2 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_063a85cc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a85cc:
  uVar6 = (*(code *)*puVar3)();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar1);
  }
  uVar6 = FUN_06a0dde8(uVar6,0);
  if ((uVar5 & 1) != 0) {
    return uVar6;
  }
  uVar4 = FUN_060c1430(uVar4,*(undefined8 *)PTR_DAT_07d9d178,uVar6,0);
  return uVar4;
}


