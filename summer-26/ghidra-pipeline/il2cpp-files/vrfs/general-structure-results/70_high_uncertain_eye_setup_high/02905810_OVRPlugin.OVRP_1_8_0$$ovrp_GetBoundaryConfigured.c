/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryConfigured
ENTRY_POINT: 02905810
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryConfigured(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06deb360);
    *(undefined1 *)(unaff_x19 + 0xc8b) = 1;
  }
  puVar1 = PTR_DAT_06deb360;
  if (param_2 == 0) {
    return 0;
  }
  uVar8 = *(undefined8 *)PTR_DAT_06deb360;
  lVar2 = thunk_FUN_015d0480(param_2,uVar8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170(param_2,uVar8);
  }
  lVar2 = *(long *)puVar1;
  plVar3 = (long *)thunk_FUN_015d0480(param_2,lVar2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170(param_2,lVar2);
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_029058c4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_015c2a80(plVar3,lVar2,9);
LAB_029058c4:
                    /* WARNING: Could not recover jumptable at 0x029058d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*(code *)*puVar4)(plVar3,0,puVar4[1]);
  return uVar8;
}


