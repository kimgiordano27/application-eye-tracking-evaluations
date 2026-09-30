/*
FUNCTION_NAME: FUN_060d4514
ENTRY_POINT: 060d4514
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_060d4514(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_7c [7];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  if ((DAT_07ee0aa4 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a245e8);
    FUN_03642964(PTR_DAT_07a23b90);
    FUN_03642964(PTR_DAT_079fd258);
    DAT_07ee0aa4 = 1;
  }
  puVar1 = PTR_DAT_07a245e8;
  plVar6 = *(long **)(param_4 + 0x48);
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_48 = 0;
  local_50 = 0;
  uStack_4c = 0;
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a23b90) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_060d4628;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a23b90,0);
LAB_060d4628:
    auVar8 = (*(code *)*puVar2)(param_1,param_2,param_3,plVar6,puVar2[1]);
    return auVar8;
  }
  plVar6 = *(long **)(param_4 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a245e8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto OVRPlugin__InitializeInsightPassthrough;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a245e8,0);
OVRPlugin__InitializeInsightPassthrough:
    (*(code *)*puVar2)(local_7c,plVar6,puVar2[1]);
    plVar6 = *(long **)(param_4 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_060d46bc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar1,0);
LAB_060d46bc:
      (*(code *)*puVar2)(local_7c,plVar6,puVar2[1]);
      uStack_4c = (undefined4)local_7c._20_8_;
      local_48 = SUB84(local_7c._20_8_,4);
      if (*(int *)(*(long *)PTR_DAT_079fd258 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      fVar7 = (float)FUN_071ce620(&local_60,0);
      return ZEXT416((uint)(local_7c[0] + fVar7 * *(float *)(param_4 + 0x54)));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


