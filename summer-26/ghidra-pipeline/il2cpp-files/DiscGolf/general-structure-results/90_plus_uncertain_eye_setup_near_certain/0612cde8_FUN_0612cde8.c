/*
FUNCTION_NAME: FUN_0612cde8
ENTRY_POINT: 0612cde8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0612cde8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 local_38;
  
  if ((DAT_06dc66f1 & 1) == 0) {
    FUN_02d965b8(Method_System_Globalization_GregorianCalendar_OnDeserialized__);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendar_ToDateTime__);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendar_ToFourDigitYear__);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendar_set_TwoDigitYearMax__);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendarHelper_CheckTicksRange__);
    DAT_06dc66f1 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  lVar9 = *(long *)(param_1 + 8);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar10 = *(long **)(lVar9 + 0x70);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Globalization_GregorianCalendar_ToDateTime__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0612cef8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   Method_System_Globalization_GregorianCalendar_ToDateTime__,0);
LAB_0612cef8:
    lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_38 = FUN_04817914(lVar6,*(undefined8 *)
                                   Method_System_Globalization_GregorianCalendarHelper_CheckTicksRange__
                           );
    uVar7 = FUN_047e5e28(&local_38,
                         *(undefined8 *)
                          Method_System_Globalization_GregorianCalendar_set_TwoDigitYearMax__);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_38;
      LeanTween__value(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031e8840(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)Method_System_Globalization_GregorianCalendar_OnDeserialized__);
      return;
    }
  }
  auVar11 = FUN_047e5e68(&local_38,
                         *(undefined8 *)
                          Method_System_Globalization_GregorianCalendar_ToFourDigitYear__);
  uVar5 = auVar11._0_8_;
  if (lVar9 != 0) {
    FUN_0612c740(lVar9,uVar5,auVar11._8_8_);
    *(undefined8 *)(lVar9 + 0x50) = uVar5;
    LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar5);
    puVar3 = OVRPlugin_SkeletonType_TypeInfo;
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(param_1 + 2,auVar11._8_8_,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


