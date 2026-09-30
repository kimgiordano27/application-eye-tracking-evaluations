/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 04f8f060
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_066c9dac & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312db8);
    FUN_02b3c81c(System_Func<PointerDownEvent>_TypeInfo);
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    DAT_066c9dac = 1;
  }
  puVar2 = System_Func<PointerDownEvent>_TypeInfo;
  puVar1 = PTR_DAT_06312db8;
  if (*(char *)(param_1 + 0x82) == '\0') {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04cf4310(uVar3,param_1,*(undefined8 *)puVar2,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
        goto LAB_04f8f144;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02b7654c(plVar8,*(long *)System_Runtime_Remoting_IRemotingTypeInfo_var,0x14);
LAB_04f8f144:
                    /* WARNING: Could not recover jumptable at 0x04f8f158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
  return;
}


