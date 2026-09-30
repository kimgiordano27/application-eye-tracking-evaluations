/*
FUNCTION_NAME: QFSW.QC.Utilities.SceneUtilities.<>c$$.cctor
ENTRY_POINT: 02960fe8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029611fc) */

void QFSW_QC_Utilities_SceneUtilities_<>c___cctor(long param_1,long *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  char local_24 [4];
  
  if ((DAT_04127b3c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7348);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cd7358);
    FUN_01ab69ac(PTR_DAT_03d06150);
    FUN_01ab69ac(PTR_DAT_03d060f8);
    FUN_01ab69ac(PTR_DAT_03cdcac0);
    FUN_01ab69ac(PTR_DAT_03d06158);
    DAT_04127b3c = 1;
  }
  local_24[0] = '\0';
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cd7358) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto FUN_029610c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01a472ec(param_2,*(long *)PTR_DAT_03cd7358,2);
FUN_029610c8:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cdcac0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cdcac0)) {
      uVar4 = FUN_02ecdd94(plVar3,param_2,0);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      local_24[0] = '\0';
      FUN_027e0bd8(uVar8,local_24,0);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(*(long *)(param_1 + 0x20),uVar4,*(undefined8 *)PTR_DAT_03d06150);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)PTR_DAT_03d06158,0);
      if (local_24[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
      }
      lVar5 = *(long *)(param_1 + 0x10);
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7348);
      FUN_026b4574(uVar4,param_1,*(undefined8 *)PTR_DAT_03d060f8,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02ecdce8(lVar5,uVar4,*(undefined8 *)(param_1 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


