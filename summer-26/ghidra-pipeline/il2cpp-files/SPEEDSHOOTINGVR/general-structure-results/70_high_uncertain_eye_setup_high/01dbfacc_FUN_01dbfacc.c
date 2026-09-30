/*
FUNCTION_NAME: FUN_01dbfacc
ENTRY_POINT: 01dbfacc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01dbfacc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  
  puVar1 = PTR_DAT_0235aa48;
  if ((DAT_0247da8f & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0235aa20);
    FUN_00fdc2e4(PTR_DAT_0235aa28);
    FUN_00fdc2e4(PTR_DAT_0235aa48);
    DAT_0247da8f = 1;
  }
  uVar4 = FUN_01a526d4(param_1,param_2,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0234bc90;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar4 = FUN_01db637c(0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db638c(1,param_1,2,0);
    FUN_01db6388(0,param_1,1,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if (DAT_0247b0d1 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247b0d1 = '\x01';
  }
  puVar2 = PTR_DAT_0234bca8;
  lVar5 = *(long *)PTR_DAT_0234bca8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar5 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db669c(param_1,0);
  }
  puVar8 = (undefined8 *)(param_1 + 0x58);
  plVar9 = (long *)*puVar8;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *plVar9;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0235aa20) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01dbfc94;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_0235aa20,0);
LAB_01dbfc94:
  iVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  puVar1 = PTR_DAT_0235aa28;
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      lVar5 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar1,0);
OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported:
      lVar5 = (*(code *)*puVar6)(plVar9,iVar10,puVar6[1]);
      if ((lVar5 != 0) && (uVar4 = FUN_01db86c8(lVar5,0), (uVar4 & 1) == 0)) {
        FUN_01db751c(lVar5,param_1,0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
  }
  *puVar8 = 0;
  thunk_FUN_0106e12c(puVar8,0);
  return;
}


