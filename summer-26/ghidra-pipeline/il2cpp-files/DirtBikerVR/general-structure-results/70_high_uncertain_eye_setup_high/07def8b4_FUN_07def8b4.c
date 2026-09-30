/*
FUNCTION_NAME: FUN_07def8b4
ENTRY_POINT: 07def8b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_07def8b4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_0899a1e9 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(PTR_DAT_084961e0);
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    DAT_0899a1e9 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_28 = 0;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_07defb30;
  local_28 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x268);
  lVar2 = FUN_07e13e44(&local_28,0);
  if (lVar2 == 0) {
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07ea20f8(0);
  }
  else {
    FUN_07dfdfd8(lVar2,0);
    FUN_07dfdfd8(lVar2,0);
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_07defb30;
  uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
  }
  FUN_07de46f4(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_07defb30;
  uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
  uVar4 = FUN_07f69f88(uVar3,0);
  if ((uVar4 & 1) == 0) {
LAB_07defa58:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (plVar5 = (long *)FUN_07e02864(*(long *)(param_1 + 0x20),0), plVar5 == (long *)0x0))
    goto LAB_07defb30;
    lVar2 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084961e0) {
          puVar6 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
          goto LAB_07defac8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_084961e0,0x12);
LAB_07defac8:
    (*(code *)*puVar6)(plVar5,0x50000,puVar6[1]);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07defb30;
    uVar4 = FUN_07e08834(*(long *)(param_1 + 0x20),0);
    if ((uVar4 & 1) == 0) goto LAB_07defa58;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07defb30;
    uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
    }
    uVar4 = FUN_07de49dc(uVar3,0x50000,&local_48);
    if ((uVar4 & 1) == 0) goto LAB_07defa58;
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) goto LAB_07defb30;
    uVar3 = FUN_07dfdfd8(lVar2,0);
    local_70 = *param_2;
    uStack_5c = *(undefined8 *)((long)param_2 + 0x14);
    uStack_68 = (undefined4)param_2[1];
    uStack_64 = (undefined4)*(undefined8 *)((long)param_2 + 0xc);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    uVar4 = FUN_07f6c7f8(lVar2,uVar3,&local_70,local_48._4_4_,uStack_40 & 0xffffffff,local_38,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
    FUN_07e251f4(&local_88,param_2,0);
    uStack_98 = uStack_80;
    local_a0 = local_88;
    local_90 = local_78;
    FUN_07f80e34(uVar3,&local_a0,0);
    return;
  }
LAB_07defb30:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


