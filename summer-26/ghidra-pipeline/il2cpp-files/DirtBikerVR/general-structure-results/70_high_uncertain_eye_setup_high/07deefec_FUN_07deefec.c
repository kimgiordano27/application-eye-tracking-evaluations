/*
FUNCTION_NAME: FUN_07deefec
ENTRY_POINT: 07deefec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07deefec(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 local_b0 [2];
  undefined8 uStack_9c;
  undefined8 local_8c [2];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  
  if ((DAT_0899a1e5 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(PTR_DAT_084961e0);
    DAT_0899a1e5 = 1;
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_07def1fc;
  uVar2 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar6);
  }
  FUN_07de46f4(uVar2);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_07def1fc;
  uVar2 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
  uVar3 = FUN_07f69f88(uVar2,0);
  if ((uVar3 & 1) == 0) {
LAB_07def120:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (plVar4 = (long *)FUN_07e02864(*(long *)(param_1 + 0x20),0), plVar4 == (long *)0x0))
    goto LAB_07def1fc;
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084961e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
          goto LAB_07def190;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)PTR_DAT_084961e0,0x12);
LAB_07def190:
    (*(code *)*puVar5)(plVar4,0x10003,puVar5[1]);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07def1fc;
    uVar3 = FUN_07e08834(*(long *)(param_1 + 0x20),0);
    if ((uVar3 & 1) == 0) goto LAB_07def120;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07def1fc;
    uVar2 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar6);
    }
    uVar3 = FUN_07de49dc(uVar2,0x10003,&local_48);
    if ((uVar3 & 1) == 0) goto LAB_07def120;
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) goto LAB_07def1fc;
    uVar2 = FUN_07dfdfd8(lVar6,0);
    uStack_68 = param_2[1];
    local_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uVar3 = FUN_07f6c620(lVar6,uVar2,&local_70,local_48._4_4_,uStack_40 & 0xffffffff,local_38,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
    FUN_07e258dc(local_8c,param_2,0);
    local_b0[0] = local_8c[0];
    uStack_9c = uStack_78;
    FUN_07f71cf4(uVar2,local_b0,0);
    return;
  }
LAB_07def1fc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


