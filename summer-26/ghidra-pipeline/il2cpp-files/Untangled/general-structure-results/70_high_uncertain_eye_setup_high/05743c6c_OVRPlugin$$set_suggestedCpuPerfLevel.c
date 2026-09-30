/*
FUNCTION_NAME: OVRPlugin$$set_suggestedCpuPerfLevel
ENTRY_POINT: 05743c6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05743d9c) */

undefined8 OVRPlugin__set_suggestedCpuPerfLevel(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01f60);
    FUN_02f07e70(PTR_DAT_06d37b78);
    FUN_02f07e70(PTR_DAT_06d3eac0);
    FUN_02f07e70(PTR_DAT_06d10488);
    *(undefined1 *)(unaff_x22 + 0x9a1) = 1;
  }
  puVar1 = PTR_DAT_06d01f60;
  uVar2 = thunk_FUN_02ef1808(*unaff_x21);
  FUN_0558811c(uVar2,param_2,0);
  plVar3 = (long *)thunk_FUN_02ef1808(*unaff_x24);
  FUN_05691ef4(plVar3,uVar2,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = OVRPlugin__get_gpuLevel(plVar3,param_3);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    uVar4 = (**(code **)(*plVar3 + 0x288))(plVar3,*(undefined8 *)(*plVar3 + 0x290));
  } while ((uVar4 & 1) != 0);
  lVar6 = *plVar3;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05743d74;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_05743d74:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  return uVar2;
}


