/*
FUNCTION_NAME: FUN_0680fe30
ENTRY_POINT: 0680fe30
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_4;telemetry_or_network_hits_11
*/


void FUN_0680fe30(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1c0 [80];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  undefined4 auStack_58 [2];
  
  auStack_58[0] = param_4;
  if ((bRam00000000071d68cc & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_Pelvis_TypeInfo);
    FUN_02f07e70(System_Net_FtpWebRequest_<>c_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_GenericDesktop_TypeInfo);
    FUN_02f07e70(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                );
    FUN_02f07e70(System_Net_FtpWebRequest_RequestStage_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d36c48);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo);
    bRam00000000071d68cc = 1;
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  auStack_160._8_8_ = 0;
  auStack_160._0_8_ = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  auStack_170._8_8_ = 0;
  auStack_170._0_8_ = 0;
  if ((*(int *)(param_2 + 2) != 0) && (*(int *)((long)param_2 + 0x14) != 0)) {
    uVar7 = FUN_0564ec5c(*param_2,0);
    uVar5 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(*(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo);
    }
    auStack_110 = FUN_03ba9158(uVar7,uVar5,
                               *(undefined8 *)
                                UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_TypeInfo);
    uVar7 = FUN_0564ec5c(param_2[1],0);
    auStack_120 = FUN_03ba9114(uVar7,*(undefined4 *)((long)param_2 + 0x14),
                               *(undefined8 *)
                                UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_TypeInfo);
    puVar3 = System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo;
    iVar4 = FUN_042e0d5c(auStack_110,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                        );
    puVar2 = System_Net_FtpWebRequest_RequestStage_TypeInfo;
    if (iVar4 != 0) {
      iVar4 = FUN_042dd880(auStack_120,*(undefined8 *)System_Net_FtpWebRequest_RequestStage_TypeInfo
                          );
      if (iVar4 != 0) {
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        auStack_160._8_8_ = 0;
        auStack_160._0_8_ = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        auStack_170._8_8_ = 0;
        auStack_170._0_8_ = 0;
        lVar11 = *(long *)(param_1 + 0xd0);
        uVar5 = FUN_042e0d5c(auStack_110,*(undefined8 *)puVar3);
        if (lVar11 != 0) {
          auStack_170 = FUN_046a3f30(lVar11,uVar5,
                                     *(undefined8 *)
                                      RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo);
          lVar11 = *(long *)(param_1 + 0xd8);
          uVar5 = FUN_042dd880(auStack_120,*(undefined8 *)puVar2);
          if (lVar11 != 0) {
            auStack_160 = FUN_046a3880(lVar11,uVar5,
                                       *(undefined8 *)
                                        RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo);
            uStack_150 = param_6;
            thunk_FUN_02f411dc(&uStack_150,param_6);
            uStack_138 = *(undefined8 *)(param_1 + 0xc0);
            __dest = (undefined8 *)(param_1 + 0x30);
            uStack_130 = ((ulong)CONCAT31(uStack_130._5_3_,param_7) & 0xffffff01) << 0x20;
            uStack_128 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
            memcpy(__dest,auStack_170,0x50);
            thunk_FUN_02f411dc(param_1 + 0x50,0);
            if (*(int *)(*(long *)PTR_DAT_06d36c48 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            iVar4 = FUN_068b9950(auStack_58,0);
            if (-1 < iVar4) {
              *(undefined4 *)(param_1 + 0x70) = param_8;
              *(undefined4 *)(param_1 + 0x5c) = auStack_58[0];
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_068102ac;
              FUN_067f9404(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),param_3,
                           auStack_58[0],param_5 & 1,0);
            }
            iVar4 = FUN_042e0d5c(__dest,*(undefined8 *)puVar3);
            iVar6 = FUN_042e0d5c(auStack_110,*(undefined8 *)puVar3);
            if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
            }
            FUN_06694778(iVar4 == iVar6,0);
            lVar11 = param_1 + 0x40;
            iVar4 = FUN_042dd880(lVar11,*(undefined8 *)puVar2);
            iVar6 = FUN_042dd880(auStack_120,*(undefined8 *)puVar2);
            FUN_06694778(iVar4 == iVar6,0);
            FUN_042e0900(__dest,auStack_110._0_8_,auStack_110._8_8_,
                         *(undefined8 *)System_Net_FtpWebRequest_<>c_TypeInfo);
            FUN_042dd424(lVar11,auStack_120._0_8_,auStack_120._8_8_,
                         *(undefined8 *)UnityEngine_InputSystem_HID_HID_GenericDesktop_TypeInfo);
            lVar9 = *(long *)(param_1 + 0x18);
            memcpy(auStack_1c0,__dest,0x50);
            if (lVar9 != 0) {
              lVar10 = *(long *)RootMotion_FinalIK_Grounding_Pelvis_TypeInfo;
              memcpy(auStack_100,auStack_1c0,0x50);
              lVar8 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  lVar8 = lVar8 + (long)(int)uVar1 * 0x50;
                  memcpy((void *)(lVar8 + 0x20),auStack_100,0x50);
                  thunk_FUN_02f411dc(lVar8 + 0x40,0);
                }
                else {
                  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
                  memcpy(auStack_b0,auStack_100,0x50);
                  FUN_04168070(lVar9,auStack_b0,uVar7);
                }
                iVar4 = *(int *)(param_1 + 0x118);
                iVar6 = FUN_042e0d5c(__dest,*(undefined8 *)puVar3);
                *(int *)(param_1 + 0x118) = iVar6 + iVar4;
                iVar4 = *(int *)(param_1 + 0x11c);
                iVar6 = FUN_042dd880(lVar11,*(undefined8 *)puVar2);
                *(int *)(param_1 + 0x11c) = iVar6 + iVar4;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *__dest = 0;
                *(undefined8 *)(param_1 + 0x48) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
                *(undefined8 *)(param_1 + 0x58) = 0;
                *(undefined8 *)(param_1 + 0x50) = 0;
                *(undefined8 *)(param_1 + 0x68) = 0;
                *(undefined8 *)(param_1 + 0x60) = 0;
                *(undefined8 *)(param_1 + 0x78) = 0;
                *(undefined8 *)(param_1 + 0x70) = 0;
                return;
              }
            }
          }
        }
LAB_068102ac:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
    }
  }
  return;
}


