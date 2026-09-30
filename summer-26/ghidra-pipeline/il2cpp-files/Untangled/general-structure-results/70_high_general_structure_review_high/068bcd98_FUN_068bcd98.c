/*
FUNCTION_NAME: FUN_068bcd98
ENTRY_POINT: 068bcd98
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_068bcd98(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  
  if ((DAT_071d6fa2 & 1) == 0) {
    FUN_02f07e70(Photon_Voice_Unity_VoiceComponentImpl_LoggerImpl_TypeInfo);
    FUN_02f07e70(Photon_Voice_Unity_VoiceConnection_<>c__DisplayClass70_0_TypeInfo);
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Manager_DebugManager_<>c_TypeInfo);
    FUN_02f07e70(Photon_Voice_Unity_VoiceConnection_<>c__DisplayClass71_0_TypeInfo);
    FUN_02f07e70(Photon_Voice_Unity_VoiceConnection_<>c__DisplayClass74_0_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                );
    DAT_071d6fa2 = 1;
  }
  local_a8 = 0;
  lVar8 = FUN_0689b2a0(param_1,0);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
    uVar9 = FUN_0689b250(param_1,0);
    uVar10 = FUN_0689b200(param_1,0);
    uVar11 = FUN_0689b2f0(param_1,0);
    puVar4 = Photon_Voice_Unity_VoiceConnection_<>c__DisplayClass70_0_TypeInfo;
    puVar3 = HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68_TypeInfo;
    iVar1 = *(int *)(lVar8 + 0x18);
    if (0 < iVar1) {
      iVar15 = 0;
      do {
        iVar5 = FUN_04046718(lVar8,iVar15,*(undefined8 *)puVar3);
        if (iVar5 != 0) {
          if (*(int *)(*(long *)
                        HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar12 = FUN_0681e8e4(iVar5,0);
          if ((uVar12 & 1) != 0) {
            local_80 = 0;
            FUN_068daac4(0,&local_80,0);
            if (*(int *)(*(long *)Meta_XR_ImmersiveDebugger_Manager_DebugManager_<>c_TypeInfo + 0xe0
                        ) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_037f32ec(uVar9,iVar15,local_80,*(undefined8 *)puVar4);
            uVar6 = FUN_068bd3c8();
            local_a0 = 0;
            FUN_068daac4(0,&local_a0,0);
            FUN_037f32ec(uVar10,iVar15,local_a0,*(undefined8 *)puVar4);
            uVar7 = FUN_068bd3c8();
            if (0 < (int)(uVar7 + (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)))) {
              if (*(int *)(*(long *)Meta_XR_ImmersiveDebugger_Manager_DebugManager_<>c_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_037f3280(uVar11,iVar15,0,
                           *(undefined8 *)Photon_Voice_Unity_VoiceComponentImpl_LoggerImpl_TypeInfo)
              ;
              local_a8 = 0;
              uVar2 = CONCAT44(uVar6,iVar5);
              uStack_b0 = (ulong)uVar7;
              local_a8 = FUN_068bd4c4();
              thunk_FUN_02f411dc(&local_a8,local_a8);
              if (param_2 == 0) {
LAB_068bd098:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uStack_98 = uStack_b0;
              local_90 = local_a8;
              lVar13 = *(long *)(param_2 + 0x10);
              lVar14 = *(long *)Photon_Voice_Unity_VoiceConnection_<>c__DisplayClass71_0_TypeInfo;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              local_a0 = uVar2;
              if (lVar13 == 0) goto LAB_068bd098;
              uVar6 = *(uint *)(param_2 + 0x18);
              if (uVar6 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar6 + 1;
                lVar13 = lVar13 + (long)(int)uVar6 * 0x18;
                *(undefined8 *)(lVar13 + 0x30) = local_a8;
                *(ulong *)(lVar13 + 0x28) = uStack_b0;
                *(undefined8 *)(lVar13 + 0x20) = uVar2;
                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x30),0);
              }
              else {
                uStack_78 = uStack_b0;
                local_70 = local_a8;
                local_80 = uVar2;
                FUN_03f440bc(param_2,&local_80,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar1 != iVar15);
    }
  }
  return;
}


