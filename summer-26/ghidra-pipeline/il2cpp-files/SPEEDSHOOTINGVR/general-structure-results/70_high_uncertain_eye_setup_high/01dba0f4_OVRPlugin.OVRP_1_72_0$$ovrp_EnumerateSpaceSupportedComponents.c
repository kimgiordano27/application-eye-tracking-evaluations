/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EnumerateSpaceSupportedComponents
ENTRY_POINT: 01dba0f4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EnumerateSpaceSupportedComponents(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0247da47 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c670);
    FUN_00fdc2e4(PTR_DAT_0234d1e8);
    DAT_0247da47 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0234d1e8 + 0x130);
    if (((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0234d1e8))
       && (uVar3 = FUN_01db8534(param_1), (uVar3 & 1) != 0)) {
      lVar4 = *(long *)(param_1 + 0x48);
      thunk_FUN_00ffe618();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      lVar4 = param_2[0x12];
      if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar3 = FUN_01da6a3c(uVar5,lVar4);
      if ((uVar3 & 1) != 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        thunk_FUN_00ffe618();
        thunk_FUN_00ffe618();
        uVar5 = 1;
        *(uint *)(param_1 + 0x38) = uVar1 | 0x100000;
        goto LAB_01dba224;
      }
    }
  }
  uVar5 = 0;
LAB_01dba224:
  FUN_01db8bac(param_1,param_2,uVar5);
  return;
}


