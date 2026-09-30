/*
FUNCTION_NAME: FUN_07ebc0ec
ENTRY_POINT: 07ebc0ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_8;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_07ebc0ec(float param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = param_3;
  if ((DAT_0899ac87 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_Quatf_TypeInfo);
    DAT_0899ac87 = 1;
    uVar10 = extraout_x1;
  }
  puVar4 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  local_d8 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  if (param_3 != 0) {
    if (*(long *)(param_3 + 0x10) != 0) {
      FUN_04e9b100(&local_d0,*(long *)(param_3 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
      local_80 = CONCAT44(uStack_bc,local_c0);
      uStack_88 = uStack_c8;
      local_90 = local_d0;
      local_78 = uStack_b8;
      uStack_70 = local_b0;
LAB_07ebc1f0:
      do {
        auVar14 = FUN_061dc36c(&local_90,*(undefined8 *)puVar4);
        uVar9 = uStack_70;
        uVar8 = local_78;
        uVar10 = local_80;
        if ((auVar14._0_8_ & 1) == 0) goto LAB_07ebc308;
        uVar5 = (uint)local_80;
        local_a0 = 0;
        uStack_98 = 0;
        local_a8 = 0;
        if (param_2 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07ebc510;
        }
        uVar7 = FUN_07e21a64(param_2,local_80 & 0xffffffff,&local_a8,0);
        if ((uVar7 & 1) == 0) {
          local_d0 = thunk_FUN_03af1434(
                                       Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__
                                       );
          local_c0 = uVar5;
          uStack_c8 = 0xffffffffffffffff;
          uVar8 = FUN_06786e68(&local_d0,0);
          uVar9 = thunk_FUN_03af1434(
                                    Method_UnityEngine_UIElements_BaseField<Hash128>_SetValueWithoutNotify__
                                    );
          uVar8 = FUN_065c0764(uVar9,uVar8,0);
          thunk_FUN_03af1434(PTR_DAT_08488490);
          uVar9 = thunk_FUN_03ac74bc();
          FUN_066b6070(uVar9,uVar8,0);
          uVar8 = thunk_FUN_03af1434(
                                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MaxHeightProperty_TypeInfo
                                    );
          auVar14._8_8_ = uVar8;
          auVar14._0_8_ = uVar8;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar9,uVar8);
          }
          goto LAB_07ebc510;
        }
        fVar13 = (float)uVar8;
        if ((int)uVar5 < 0x1000a) {
          bVar6 = uVar5 == 0x10000;
          if (0x10000 < (int)uVar5) {
            if (uVar5 != 0x10001) goto LAB_07ebc3fc;
LAB_07ebc2e4:
            FUN_07ebbda0((float)local_a0 + (fVar13 - (float)local_a0) * param_1,&local_d8,
                         uVar10 & 0xffffffff);
            goto LAB_07ebc1f0;
          }
LAB_07ebc28c:
          if (!bVar6) {
LAB_07ebc3fc:
            thunk_FUN_03af1434(PTR_DAT_08488490);
            uVar8 = thunk_FUN_03ac74bc();
            uVar9 = thunk_FUN_03af1434(
                                      Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__
                                      );
            FUN_066b6070(uVar8,uVar9,0);
            uVar9 = thunk_FUN_03af1434(
                                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MaxHeightProperty_TypeInfo
                                      );
            auVar14._8_8_ = uVar9;
            auVar14._0_8_ = uVar9;
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a884(uVar8);
            }
            goto LAB_07ebc510;
          }
        }
        else {
          if (uVar5 < 0x20021) {
            if (((uVar5 - 0x1000f < 0xfffffffe) && (uVar5 - 0x20003 < 0x1e)) &&
               ((1 << (ulong)(uVar5 - 0x20003 & 0x1f) & 0x3bffeb5fU) != 0)) goto LAB_07ebc2e4;
            goto LAB_07ebc3fc;
          }
          uVar1 = uVar5 - 0x70000;
          if (uVar1 < 0xf) {
            if ((1 << (ulong)(uVar1 & 0x1f) & 0x7180U) != 0) goto LAB_07ebc2e4;
            if (uVar1 != 0) goto LAB_07ebc260;
          }
          else {
LAB_07ebc260:
            if (uVar5 != 0x30002) {
              bVar6 = uVar5 == 0x40002;
              goto LAB_07ebc28c;
            }
          }
        }
        fVar11 = (float)((ulong)local_a0 >> 0x20);
        fVar12 = (float)((ulong)uStack_98 >> 0x20);
        fVar11 = fVar11 + ((float)((ulong)uVar8 >> 0x20) - fVar11) * param_1;
        FUN_07ebbe68(CONCAT44(fVar11,(float)local_a0 + (fVar13 - (float)local_a0) * param_1),fVar11,
                     (float)uStack_98 + ((float)uVar9 - (float)uStack_98) * param_1,
                     fVar12 + ((float)((ulong)uVar9 >> 0x20) - fVar12) * param_1,&local_d8,
                     uVar10 & 0xffffffff);
      } while( true );
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    auVar14 = auVar3 << 0x40;
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_07ebc510;
  }
LAB_07ebc320:
  auVar14._8_8_ = uVar10;
  auVar14._0_8_ = local_d8;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_07ebc510:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar14._0_8_,auVar14._8_8_);
LAB_07ebc308:
  FUN_061dc368(&local_90,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
  uVar10 = extraout_x1_00;
  goto LAB_07ebc320;
}


