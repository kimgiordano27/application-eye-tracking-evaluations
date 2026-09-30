/*
FUNCTION_NAME: FUN_058e1b00
ENTRY_POINT: 058e1b00
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_058e1b00(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_06b80b64 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676c978);
    FUN_02d6084c(PTR_DAT_06760eb0);
    FUN_02d6084c(UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(PTR_DAT_067621a0);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OverlayShape_TypeInfo);
    DAT_06b80b64 = 1;
  }
  if (*(int *)(param_3 + 0x20) == 1) {
    FUN_058e12d8(param_3);
  }
  puVar2 = PTR_DAT_06768438;
  plVar5 = (long *)(param_3 + 0xf0);
  if (*plVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06768438 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar4 = (long *)FUN_05856344(*(undefined8 *)OVRPlugin_OverlayShape_TypeInfo,0,0,0);
    if (plVar4 == (long *)0x0) {
      *plVar5 = 0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_067621a0;
      bVar1 = *(byte *)(lVar6 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) {
LAB_058e1c7c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar4);
      }
      *plVar5 = (long)plVar4;
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_058e1c7c;
    }
    thunk_FUN_02dd37b4(plVar5,plVar4);
  }
  else {
    uVar3 = FUN_058523bc(*plVar5,0);
    if ((uVar3 & 1) == 0) {
      lVar6 = *plVar5;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05856558(lVar6,0);
    }
  }
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_0606a004(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_3 + 0x30) != 0) {
      uVar7 = FUN_06077da8(*(long *)(param_3 + 0x30),0);
      if (*plVar5 != 0) {
        FUN_03460b70(*(undefined8 *)(*plVar5 + 0x188),0,0,
                     *(undefined8 *)UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
        if (*(long *)(param_3 + 0xf8) != 0) {
          FUN_05868748(uVar7,param_2,*(long *)(param_3 + 0xf8),0);
        }
        goto LAB_058e1d18;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_058e1d18:
  lVar6 = *(long *)(param_3 + 0x100);
  if (lVar6 == 0) {
    uVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06760eb0);
    FUN_04f7d1b0(uVar7,param_3,*(undefined8 *)OVRPlugin_OVRP_1_99_0_TypeInfo,0);
    *(undefined8 *)(param_3 + 0x100) = uVar7;
    thunk_FUN_02dd37b4(param_3 + 0x100,uVar7);
    lVar6 = *(long *)(param_3 + 0x100);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_058582fc(lVar6,0);
  lVar6 = *(long *)(param_3 + 0x108);
  if (lVar6 == 0) {
    uVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar7,param_3,*(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo,0);
    *(undefined8 *)(param_3 + 0x108) = uVar7;
    thunk_FUN_02dd37b4(param_3 + 0x108,uVar7);
    lVar6 = *(long *)(param_3 + 0x108);
  }
  local_50 = *(undefined8 *)(param_3 + 0x68);
  uStack_58 = *(undefined8 *)(param_3 + 0x60);
  local_60 = *(undefined8 *)(param_3 + 0x58);
  FUN_058e17bc(&local_60,lVar6,1);
  local_70 = *(undefined8 *)(param_3 + 0x98);
  uStack_78 = *(undefined8 *)(param_3 + 0x90);
  local_80 = *(undefined8 *)(param_3 + 0x88);
  FUN_058e17bc(&local_80,*(undefined8 *)(param_3 + 0x108),1);
  local_90 = *(undefined8 *)(param_3 + 0x80);
  uStack_98 = *(undefined8 *)(param_3 + 0x78);
  local_a0 = *(undefined8 *)(param_3 + 0x70);
  FUN_058e17bc(&local_a0,*(undefined8 *)(param_3 + 0x108),1);
  local_b0 = *(undefined8 *)(param_3 + 0xb0);
  uStack_b8 = *(undefined8 *)(param_3 + 0xa8);
  local_c0 = *(undefined8 *)(param_3 + 0xa0);
  FUN_058e17bc(&local_c0,*(undefined8 *)(param_3 + 0x108),1);
  local_d0 = *(undefined8 *)(param_3 + 200);
  uStack_d8 = *(undefined8 *)(param_3 + 0xc0);
  local_e0 = *(undefined8 *)(param_3 + 0xb8);
  FUN_058e17bc(&local_e0,*(undefined8 *)(param_3 + 0x108),1);
  lVar6 = FUN_0582a6ec(param_3 + 0x40,0);
  if (lVar6 != 0) {
    FUN_058152e4(lVar6,0);
  }
  lVar6 = FUN_0582a6ec(param_3 + 0x58,0);
  if (lVar6 != 0) {
    FUN_058152e4(lVar6,0);
  }
  lVar6 = FUN_0582a6ec(param_3 + 0x88,0);
  if (lVar6 != 0) {
    FUN_058152e4(lVar6,0);
  }
  lVar6 = FUN_0582a6ec(param_3 + 0x70,0);
  if (lVar6 != 0) {
    FUN_058152e4(lVar6,0);
  }
  lVar6 = FUN_0582a6ec(param_3 + 0xa0,0);
  if (lVar6 != 0) {
    FUN_058152e4(lVar6,0);
  }
  lVar6 = FUN_0582a6ec(param_3 + 0xb8,0);
  if (lVar6 != 0) {
    FUN_058152e4(lVar6,0);
  }
  lVar6 = FUN_0582a6ec(param_3 + 0xd0,0);
  if (lVar6 != 0) {
    FUN_058152e4(lVar6,0);
  }
  return;
}


