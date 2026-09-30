/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetSpaceUuid
ENTRY_POINT: 07cad6e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid(ulong param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  float fVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f51200);
    FUN_04447ba8(PTR_DAT_09f51208);
    FUN_04447ba8(PTR_DAT_09f51210);
    FUN_04447ba8(PTR_DAT_09f51218);
    FUN_04447ba8(PTR_DAT_09f51220);
    FUN_04447ba8(PTR_DAT_09f51228);
    *(undefined1 *)(unaff_x20 + 0xab1) = 1;
  }
  uVar3 = FUN_095a53ac(*(undefined4 *)(param_2 + 0x44),0);
  if ((uVar3 & 1) != 0) {
    FUN_07cad95c(param_2);
    return;
  }
  uVar3 = FUN_095a53ac(*(undefined4 *)(param_2 + 0x4c),0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_095a53ac(*(undefined4 *)(param_2 + 0x5c),0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_095a53ac(0x114,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_095a53ac(0x113,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        fVar8 = *(float *)(param_2 + 0x54) + 1.0;
        if (15.0 < fVar8) {
          fVar8 = 15.0;
        }
      }
      else {
        fVar8 = *(float *)(param_2 + 0x54) + -1.0;
        if (fVar8 <= 1.0) {
          fVar8 = 1.0;
        }
      }
      *(float *)(param_2 + 0x54) = fVar8;
      uVar7 = *(undefined8 *)PTR_DAT_09f51220;
      uVar4 = FUN_07a5081c((float *)(param_2 + 0x54),0);
      uVar4 = FUN_078a7764(uVar7,uVar4,0);
      if (*(char *)(param_2 + 0x58) != '\0') {
        FUN_07cab054();
        FUN_07cab50c(uVar4);
        lVar5 = FUN_07cab0c8();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        *(undefined4 *)(lVar5 + 0x3c) = 0x3fc00000;
        *(undefined1 *)(lVar5 + 0x38) = 1;
      }
      return;
    }
    bVar1 = *(byte *)(param_2 + 0x60);
    cVar2 = *(char *)(param_2 + 0x58);
    *(byte *)(param_2 + 0x60) = bVar1 ^ 1;
    if (bVar1 == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      puVar6 = (undefined8 *)PTR_DAT_09f51200;
      if (cVar2 == '\0') {
        FUN_094c33b0(*(undefined8 *)PTR_DAT_09f51208,0);
        *(undefined1 *)(param_2 + 0x60) = 0;
        return;
      }
    }
    else {
      if (cVar2 != '\0') {
        FUN_07cab054();
      }
      puVar6 = (undefined8 *)PTR_DAT_09f51210;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar6 = (undefined8 *)PTR_DAT_09f51210;
      }
    }
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x48);
    cVar2 = *(char *)(param_2 + 0x58);
    *(byte *)(param_2 + 0x48) = bVar1 ^ 1;
    if (bVar1 == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      puVar6 = (undefined8 *)PTR_DAT_09f51218;
      if (cVar2 == '\0') {
        FUN_094c33b0(*(undefined8 *)PTR_DAT_09f51208,0);
        *(undefined1 *)(param_2 + 0x48) = 0;
        return;
      }
    }
    else {
      if (cVar2 != '\0') {
        FUN_07cab054();
      }
      puVar6 = (undefined8 *)PTR_DAT_09f51228;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar6 = (undefined8 *)PTR_DAT_09f51228;
      }
    }
  }
  FUN_094c652c(*puVar6,0);
  return;
}


