/*
FUNCTION_NAME: FUN_068102b0
ENTRY_POINT: 068102b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_11
*/


void FUN_068102b0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar7;
  undefined4 uVar6;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 (*__src) [16];
  undefined1 (*pauVar11) [16];
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [80];
  undefined1 auStack_b8 [80];
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  if ((bRam00000000071d68cd & 1) == 0) {
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
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo);
    bRam00000000071d68cd = 1;
  }
  auVar15._8_8_ = auStack_118._8_8_;
  auVar15._0_8_ = auStack_118._0_8_;
  auVar14._8_8_ = auStack_128._8_8_;
  auVar14._0_8_ = auStack_128._0_8_;
  if ((*(int *)(param_2 + 2) != 0) &&
     (auStack_128 = auVar14, auStack_118 = auVar15, *(int *)((long)param_2 + 0x14) != 0)) {
    uVar8 = FUN_0564ec5c(*param_2,0);
    uVar6 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(*(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo);
    }
    auStack_118 = FUN_03ba9158(uVar8,uVar6,
                               *(undefined8 *)
                                UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_TypeInfo);
    uVar8 = FUN_0564ec5c(param_2[1],0);
    auStack_128 = FUN_03ba9114(uVar8,*(undefined4 *)((long)param_2 + 0x14),
                               *(undefined8 *)
                                UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_TypeInfo);
    puVar4 = System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo;
    iVar5 = FUN_042e0d5c(auStack_118,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                        );
    puVar3 = System_Net_FtpWebRequest_RequestStage_TypeInfo;
    if (iVar5 != 0) {
      iVar5 = FUN_042dd880(auStack_128,*(undefined8 *)System_Net_FtpWebRequest_RequestStage_TypeInfo
                          );
      if (iVar5 != 0) {
        uStack_60 = 0;
        uStack_68 = 0;
        lVar10 = *(long *)(param_1 + 0xd0);
        uVar6 = FUN_042e0d5c(auStack_118,*(undefined8 *)puVar4);
        if (lVar10 != 0) {
          auVar14 = FUN_046a3f30(lVar10,uVar6,
                                 *(undefined8 *)
                                  RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo);
          lVar10 = *(long *)(param_1 + 0xd8);
          uVar6 = FUN_042dd880(auStack_128,*(undefined8 *)puVar3);
          if (lVar10 != 0) {
            auVar15 = FUN_046a3880(lVar10,uVar6,
                                   *(undefined8 *)
                                    RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo);
            __src = (undefined1 (*) [16])(param_1 + 0x30);
            *__src = auVar14;
            pauVar11 = (undefined1 (*) [16])(param_1 + 0x40);
            *pauVar11 = auVar15;
            uVar8 = DAT_013f5170;
            *(undefined8 *)(param_1 + 0x50) = uStack_68;
            uVar13 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
            *(undefined4 *)(param_1 + 0x58) = uStack_60;
            *(undefined4 *)(param_1 + 0x5c) = param_3;
            *(undefined8 *)(param_1 + 0x60) = 0;
            *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xc0);
            *(undefined8 *)(param_1 + 0x70) = uVar8;
            *(undefined8 *)(param_1 + 0x78) = uVar13;
            thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x50),0);
            iVar5 = FUN_042e0d5c(__src,*(undefined8 *)puVar4);
            iVar7 = FUN_042e0d5c(auStack_118,*(undefined8 *)puVar4);
            if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
            }
            FUN_06694778(iVar5 == iVar7,0);
            iVar5 = FUN_042dd880(pauVar11,*(undefined8 *)puVar3);
            iVar7 = FUN_042dd880(auStack_128,*(undefined8 *)puVar3);
            FUN_06694778(iVar5 == iVar7,0);
            FUN_042e0900(__src,auStack_118._0_8_,auStack_118._8_8_,
                         *(undefined8 *)System_Net_FtpWebRequest_<>c_TypeInfo);
            FUN_042dd424(pauVar11,auStack_128._0_8_,auStack_128._8_8_,
                         *(undefined8 *)UnityEngine_InputSystem_HID_HID_GenericDesktop_TypeInfo);
            lVar10 = *(long *)(param_1 + 0x18);
            memcpy(auStack_178,__src,0x50);
            if (lVar10 != 0) {
              lVar12 = *(long *)RootMotion_FinalIK_Grounding_Pelvis_TypeInfo;
              memcpy(auStack_108,auStack_178,0x50);
              lVar9 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  lVar9 = lVar9 + (long)(int)uVar1 * 0x50;
                  memcpy((void *)(lVar9 + 0x20),auStack_108,0x50);
                  thunk_FUN_02f411dc(lVar9 + 0x40,0);
                }
                else {
                  uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  memcpy(auStack_b8,auStack_108,0x50);
                  FUN_04168070(lVar10,auStack_b8,uVar8);
                }
                iVar5 = *(int *)(param_1 + 0x118);
                iVar7 = FUN_042e0d5c(__src,*(undefined8 *)puVar4);
                *(int *)(param_1 + 0x118) = iVar7 + iVar5;
                iVar5 = *(int *)(param_1 + 0x11c);
                iVar7 = FUN_042dd880(pauVar11,*(undefined8 *)puVar3);
                *(int *)(param_1 + 0x11c) = iVar7 + iVar5;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)*__src = 0;
                *(undefined8 *)(param_1 + 0x48) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
                *(undefined8 *)(param_1 + 0x58) = 0;
                *(undefined8 *)(param_1 + 0x50) = 0;
                *(undefined8 *)(param_1 + 0x68) = 0;
                *(undefined8 *)(param_1 + 0x60) = 0;
                *(undefined8 *)(param_1 + 0x78) = 0;
                *(undefined8 *)(param_1 + 0x70) = 0;
                goto LAB_0681068c;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
    }
  }
LAB_0681068c:
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


