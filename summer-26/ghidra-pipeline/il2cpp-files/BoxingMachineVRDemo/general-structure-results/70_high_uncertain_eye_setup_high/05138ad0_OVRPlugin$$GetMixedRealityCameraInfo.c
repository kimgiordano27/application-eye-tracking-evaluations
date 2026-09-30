/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 05138ad0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetMixedRealityCameraInfo(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_06b79cbc & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06781680);
    FUN_02d6084c(PTR_DAT_06781280);
    DAT_06b79cbc = 1;
  }
  uVar2 = FUN_05138c50(param_1,param_2);
  puVar1 = PTR_DAT_06781280;
  if ((uVar2 & 1) == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06769a40);
    FUN_04f7d8e0(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781688);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,uVar6);
  }
  lVar3 = FUN_05138cdc(uVar2,param_2);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar1;
  }
  plVar9 = (long *)**(undefined8 **)(lVar7 + 0xb8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *plVar9;
  uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar2 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06781680) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05138bac;
      }
      uVar2 = uVar2 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06781680,0);
LAB_05138bac:
  uVar2 = (*(code *)*puVar4)(plVar9,lVar3,param_3,puVar4[1]);
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      FUN_051389a0(param_1,param_3,param_2);
    }
    if (lVar3 != 0) {
      FUN_05138d5c(param_1,lVar3);
      return;
    }
  }
  return;
}


