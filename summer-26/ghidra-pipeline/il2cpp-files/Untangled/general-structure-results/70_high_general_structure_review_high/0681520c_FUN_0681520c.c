/*
FUNCTION_NAME: FUN_0681520c
ENTRY_POINT: 0681520c
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0681520c(long param_1)

{
  undefined1 (*__src) [16];
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_1f0 [104];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  
  if ((bRam00000000071d68de & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_Pelvis_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    FUN_02f07e70(
                PixelCrushers_DialogueSystem_DialogueSystemController_<AddLuaObserverAfterStart>d__301_TypeInfo
                );
    FUN_02f07e70(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                );
    FUN_02f07e70(System_Net_FtpWebRequest_RequestStage_TypeInfo);
    FUN_02f07e70(
                PixelCrushers_DialogueSystem_DialogueDatabaseLocalizationImporter_<>c__DisplayClass5_0_TypeInfo
                );
    FUN_02f07e70(RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo);
    bRam00000000071d68de = 1;
  }
  puVar6 = System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo;
  puVar5 = System_Net_FtpWebRequest_RequestStage_TypeInfo;
  puVar3 = PTR_DAT_06d02708;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  auStack_160._0_8_ = 0;
  auStack_160._8_8_ = 0;
  if (*(int *)(param_1 + 200) == -1) {
    return;
  }
  auVar2 = ZEXT816(0);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_04167c90(auStack_b0,*(long *)(param_1 + 0x18),*(int *)(param_1 + 200),
                 *(undefined8 *)UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    memcpy(&uStack_150,auStack_b0,0x50);
    iVar7 = FUN_042e0d5c(&uStack_150,*(undefined8 *)puVar6);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar3);
    }
    FUN_06694778(0 < iVar7,0);
    iVar7 = FUN_042dd880(&uStack_140,*(undefined8 *)puVar5);
    FUN_06694778(0 < iVar7,0);
    __src = (undefined1 (*) [16])(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_148;
    *(undefined8 *)(param_1 + 0x30) = uStack_150;
    memcpy(auStack_b0,&uStack_150,0x50);
    *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_94,uStack_98);
    *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_9c,uStack_a0);
    uVar12 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x78) = uVar12;
    *(undefined1 *)(param_1 + 0x76) = 1;
    *(byte *)(param_1 + 0x74) = uStack_110._4_1_ & 1;
    *(undefined1 *)(param_1 + 0x80) = 1;
    iVar7 = FUN_042e0d5c(__src,*(undefined8 *)puVar6);
    auVar2._8_8_ = auStack_160._8_8_;
    auVar2._0_8_ = auStack_160._0_8_;
    if (*(long *)(param_1 + 0xd0) != 0) {
      auStack_160 = FUN_046a3f30(*(long *)(param_1 + 0xd0),iVar7,
                                 *(undefined8 *)
                                  RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo);
      puVar4 = 
      PixelCrushers_DialogueSystem_DialogueSystemController_<AddLuaObserverAfterStart>d__301_TypeInfo
      ;
      puVar3 = 
      PixelCrushers_DialogueSystem_DialogueDatabaseLocalizationImporter_<>c__DisplayClass5_0_TypeInfo
      ;
      if (0 < iVar7) {
        iVar8 = 0;
        do {
          FUN_042e0824(auStack_b0,__src,iVar8,*(undefined8 *)puVar4);
          uStack_188 = uStack_8c;
          uStack_178 = uStack_7c;
          uStack_180 = uStack_84;
          uStack_170 = uStack_74;
          uStack_a8 = 0x3f800000;
          FUN_042e0898(auStack_160,iVar8,auStack_b0,*(undefined8 *)puVar3);
          iVar8 = iVar8 + 1;
        } while (iVar7 != iVar8);
      }
      *__src = auStack_160;
      iVar7 = *(int *)(param_1 + 0x118);
      iVar8 = FUN_042e0d5c(__src,*(undefined8 *)puVar6);
      *(int *)(param_1 + 0x118) = iVar8 + iVar7;
      iVar7 = *(int *)(param_1 + 0x11c);
      iVar8 = FUN_042dd880(param_1 + 0x40,*(undefined8 *)puVar5);
      lVar11 = *(long *)(param_1 + 0x18);
      *(int *)(param_1 + 0x11c) = iVar8 + iVar7;
      memcpy(auStack_1f0,__src,0x50);
      auVar2 = auStack_160;
      if (lVar11 != 0) {
        lVar10 = *(long *)RootMotion_FinalIK_Grounding_Pelvis_TypeInfo;
        memcpy(auStack_100,auStack_1f0,0x50);
        lVar9 = *(long *)(lVar11 + 0x10);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        auVar2 = auStack_160;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x50;
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            memcpy((void *)(lVar9 + 0x20),auStack_100,0x50);
            thunk_FUN_02f411dc(lVar9 + 0x40,0);
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
            memcpy(auStack_b0,auStack_100,0x50);
            FUN_04168070(lVar11,auStack_b0,uVar12);
          }
          *(undefined8 *)(param_1 + 0x68) = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x70) = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined8 *)*__src = 0;
          return;
        }
      }
    }
  }
  auStack_160 = auVar2;
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


