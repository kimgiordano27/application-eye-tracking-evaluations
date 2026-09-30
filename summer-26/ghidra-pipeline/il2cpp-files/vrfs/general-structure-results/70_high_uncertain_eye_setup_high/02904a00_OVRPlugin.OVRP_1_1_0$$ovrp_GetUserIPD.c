/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 02904a00
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


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((bRam0000000007233c70 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06deb360);
    bRam0000000007233c70 = 1;
  }
  puVar1 = PTR_DAT_06deb360;
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = *(undefined8 *)PTR_DAT_06deb360;
  lVar2 = thunk_FUN_015d0480(param_1,uVar8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170(param_1,uVar8);
  }
  lVar2 = *(long *)puVar1;
  plVar3 = (long *)thunk_FUN_015d0480(param_1,lVar2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170(param_1,lVar2);
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
        goto LAB_02904ad0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_015c2a80(plVar3,lVar2,6);
LAB_02904ad0:
                    /* WARNING: Could not recover jumptable at 0x02904ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
  return uVar8;
}


