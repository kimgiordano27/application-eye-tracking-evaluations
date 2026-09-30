/*
FUNCTION_NAME: FUN_068106c0
ENTRY_POINT: 068106c0
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_9
*/


void FUN_068106c0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam00000000071d68ce & 1) == 0) {
    FUN_02f07e70(System_Net_FtpWebRequest_<>c_TypeInfo);
                    /* try { // try from 068106f0 to 069106f7 has its CatchHandler @ 0681079c */
                    /* try { // try from 068106f8 to 0691077f has its CatchHandler @ 06810568 */
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
    bRam00000000071d68ce = 1;
  }
  if ((*(int *)(param_2 + 2) != 0) && (*(int *)((long)param_2 + 0x14) != 0)) {
    uVar4 = FUN_0564ec5c(*param_2,0);
    uVar1 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(*(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo);
    }
    auStack_40 = FUN_03ba9158(uVar4,uVar1,
                              *(undefined8 *)
                               UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_TypeInfo);
    uVar4 = FUN_0564ec5c(param_2[1],0);
    auStack_50 = FUN_03ba9114(uVar4,*(undefined4 *)((long)param_2 + 0x14),
                              *(undefined8 *)
                               UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_TypeInfo);
    iVar3 = FUN_042e0d5c(auStack_40,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                        );
    if (iVar3 != 0) {
      iVar3 = FUN_042dd880(auStack_50,*(undefined8 *)System_Net_FtpWebRequest_RequestStage_TypeInfo)
      ;
      if (iVar3 != 0) {
        if (*(long *)(param_1 + 0xd0) != 0) {
          auVar5 = FUN_046a3f30(*(long *)(param_1 + 0xd0),*(undefined4 *)(param_2 + 2),
                                *(undefined8 *)
                                 RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo);
          *(undefined1 (*) [16])(param_1 + 0x30) = auVar5;
          if (*(long *)(param_1 + 0xd8) != 0) {
            auVar5 = FUN_046a3880(*(long *)(param_1 + 0xd8),*(undefined4 *)((long)param_2 + 0x14),
                                  *(undefined8 *)
                                   RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo);
            *(undefined8 *)(param_1 + 0x40) = auVar5._0_8_;
            puVar2 = System_Net_FtpWebRequest_<>c_TypeInfo;
            *(long *)(param_1 + 0x48) = auVar5._8_8_;
            FUN_042e0900(param_1 + 0x30,auStack_40._0_8_,auStack_40._8_8_,*(undefined8 *)puVar2);
            FUN_042dd424((undefined8 *)(param_1 + 0x40),auStack_50._0_8_,auStack_50._8_8_,
                         *(undefined8 *)UnityEngine_InputSystem_HID_HID_GenericDesktop_TypeInfo);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
    }
  }
  return;
}


