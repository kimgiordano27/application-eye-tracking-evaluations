/*
FUNCTION_NAME: FUN_076cd440
ENTRY_POINT: 076cd440
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_076cd440(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  long local_48;
  
  if ((DAT_095481f7 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fadd18);
    FUN_0403162c(PTR_DAT_08fadd20);
    FUN_0403162c(PTR_DAT_08fadd28);
    FUN_0403162c(PTR_DAT_08fadd30);
    FUN_0403162c(PTR_DAT_08fad0e8);
    FUN_0403162c(PTR_DAT_08fadd38);
    DAT_095481f7 = 1;
  }
  puVar4 = PTR_DAT_08fadd20;
  puVar3 = PTR_DAT_08fadd18;
  puVar2 = PTR_DAT_08fad0e8;
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_0594bf6c(&local_60,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_08fadd38);
  do {
    uVar6 = FUN_0725bc24(&local_60,*(undefined8 *)puVar4);
    uVar5 = local_50;
    if ((uVar6 & 1) == 0) {
      FUN_0725bc20(&local_60,*(undefined8 *)puVar3);
      return;
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar10;
    uVar1 = *(undefined4 *)(local_48 + 0x14);
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto OVRPlugin__get_localDimmingSupported;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar2,0);
OVRPlugin__get_localDimmingSupported:
    (*(code *)*puVar7)(plVar10,uVar5 & 0xffffffff,uVar1,&local_68,puVar7[1]);
  } while( true );
}


