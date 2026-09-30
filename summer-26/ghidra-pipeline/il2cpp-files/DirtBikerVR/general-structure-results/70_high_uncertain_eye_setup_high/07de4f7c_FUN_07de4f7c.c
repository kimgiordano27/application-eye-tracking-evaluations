/*
FUNCTION_NAME: FUN_07de4f7c
ENTRY_POINT: 07de4f7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_14
*/


void FUN_07de4f7c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 local_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  
  if ((DAT_0899a192 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_10_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_110_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_111_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_112_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_113_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_0899a192 = 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  lVar7 = FUN_07f6e468(param_1,0);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) {
    uVar8 = FUN_07f6e418(param_1,0);
    uVar9 = FUN_07f6e3c8(param_1,0);
    uVar10 = FUN_07f6e4b8(param_1,0);
    puVar3 = OVRPlugin_OVRP_1_113_0_TypeInfo;
    puVar2 = OVRPlugin_OVRP_1_110_0_TypeInfo;
    iVar1 = *(int *)(lVar7 + 0x18);
    if (0 < iVar1) {
      iVar14 = 0;
      do {
        iVar4 = FUN_04e8f030(lVar7,iVar14,*(undefined8 *)puVar3);
        if (iVar4 != 0) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar11 = FUN_07eaa354(iVar4,0);
          if ((uVar11 & 1) != 0) {
            local_80 = 0;
            FUN_07e26b1c(0,&local_80,0);
            if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_0447e4f8(uVar8,iVar14,local_80,*(undefined8 *)puVar2);
            uVar5 = FUN_07de5584();
            local_a0 = 0;
            FUN_07e26b1c(0,&local_a0,0);
            FUN_0447e4f8(uVar9,iVar14,local_a0,*(undefined8 *)puVar2);
            uVar6 = FUN_07de5584();
            if (0 < (int)(uVar6 + (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)))) {
              if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_0447e484(uVar10,iVar14,0,*(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo);
              local_88 = 0;
              local_98 = CONCAT44(uVar5,iVar4);
              uStack_90 = (ulong)uVar6;
              local_88 = FUN_07de567c();
              thunk_FUN_03afed3c(&local_88,local_88);
              if (param_2 == 0) {
LAB_07de5254:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              lVar12 = *(long *)(param_2 + 0x10);
              lVar13 = *(long *)OVRPlugin_OVRP_1_111_0_TypeInfo;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_07de5254;
              uVar5 = *(uint *)(param_2 + 0x18);
              if (uVar5 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)uVar5 * 0x18;
                *(uint *)(param_2 + 0x18) = uVar5 + 1;
                *(undefined8 *)(lVar12 + 0x30) = local_88;
                *(ulong *)(lVar12 + 0x28) = uStack_90;
                *(undefined8 *)(lVar12 + 0x20) = local_98;
                thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x30),0);
              }
              else {
                uStack_78 = uStack_90;
                local_80 = local_98;
                local_70 = local_88;
                FUN_04cf3f3c(param_2,&local_80,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar1 != iVar14);
    }
  }
  return;
}


