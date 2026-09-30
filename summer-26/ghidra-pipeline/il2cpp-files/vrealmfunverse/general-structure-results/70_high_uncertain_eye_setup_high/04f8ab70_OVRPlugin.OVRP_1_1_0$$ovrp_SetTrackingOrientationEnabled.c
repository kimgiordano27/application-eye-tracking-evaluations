/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 04f8ab70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xe08));
  FUN_02b3c81c(System_Func<MouseLeaveEvent>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
  *(undefined1 *)(unaff_x20 + 0xd5e) = 1;
  puVar1 = PTR_DAT_06312db8;
  if (*(char *)(unaff_x19 + 0x50) == '\0') {
    return;
  }
  plVar8 = *(long **)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312db8);
  FUN_04cf4310();
  puVar2 = System_Runtime_Remoting_IRemotingTypeInfo_var;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
          goto LAB_04f8ac48;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02b7654c(plVar8,*(long *)System_Runtime_Remoting_IRemotingTypeInfo_var,0x14);
LAB_04f8ac48:
    (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
    plVar8 = *(long **)(unaff_x19 + 0x38);
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_04cf4310();
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
            goto LAB_04f8accc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)puVar2,0x14);
LAB_04f8accc:
                    /* WARNING: Could not recover jumptable at 0x04f8ace8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


