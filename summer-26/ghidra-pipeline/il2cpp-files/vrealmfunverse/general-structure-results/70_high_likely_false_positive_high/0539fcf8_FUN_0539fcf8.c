/*
FUNCTION_NAME: FUN_0539fcf8
ENTRY_POINT: 0539fcf8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6;eye_or_gaze_keyword_boost_only
*/


void FUN_0539fcf8(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((DAT_066d083d & 1) == 0) {
    FUN_02b3c81c(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_GPUInstanceDataBufferUploader_UploadKernelIDs_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06329990);
    FUN_02b3c81c(RootMotion_FinalIK_Grounding_Leg_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632bdd8);
    FUN_02b3c81c(System_Reflection_MemberInfo___TypeInfo);
    DAT_066d083d = 1;
  }
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    if (*(int *)(*(long *)
                  Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar5 != 0) {
      uVar2 = FUN_053983dc(lVar5,*(undefined8 *)PTR_DAT_0632bdd8);
      puVar1 = UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo;
                    /* try { // try from 0539fdac to 0549fdd3 has its CatchHandler @ 0539ffe0 */
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(param_2 + 0x20);
      if (*(int *)(*(long *)UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar5 != 0) {
        uVar2 = FUN_05398c9c(lVar5,*(undefined8 *)
                                    UnityEngine_Rendering_GPUInstanceDataBufferUploader_UploadKernelIDs_TypeInfo
                            );
        if ((uVar2 & 1) == 0) {
          lVar5 = *(long *)(param_2 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar5 != 0) {
            uVar2 = FUN_05398c9c(lVar5,*(undefined8 *)System_Reflection_MemberInfo___TypeInfo);
            if ((uVar2 & 1) != 0) {
              if (*(long *)(param_2 + 0x28) == 0) goto LAB_0539fed8;
              uVar3 = FUN_0539b0b4();
              uVar2 = thunk_FUN_04c08854(uVar3,*(undefined8 *)
                                                RootMotion_FinalIK_Grounding_Leg_TypeInfo,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = thunk_FUN_04c08854(uVar3,*(undefined8 *)PTR_DAT_06329990,0);
                if ((uVar2 & 1) == 0) {
                  return;
                }
                lVar5 = *(long *)(param_1 + 0x20);
                if (lVar5 == 0) goto LAB_0539fed8;
                FUN_053a61a8(lVar5);
                uVar4 = 1;
              }
              else {
                lVar5 = *(long *)(param_1 + 0x20);
                if (lVar5 == 0) goto LAB_0539fed8;
                FUN_053a61a8(lVar5);
                uVar4 = 2;
              }
              *(undefined4 *)(lVar5 + 0x3c) = uVar4;
            }
            return;
          }
        }
        else if (*(long *)(param_2 + 0x28) != 0) {
          lVar5 = *(long *)(param_1 + 0x20);
          uVar3 = FUN_0539b0b4();
          if (lVar5 != 0) {
            FUN_053a61a8(lVar5);
            *(undefined8 *)(lVar5 + 0x40) = uVar3;
                    /* try { // try from 0539fe10 to 0549fe3b has its CatchHandler @ 0539ffdc */
            thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x40),uVar3);
            return;
          }
        }
      }
    }
  }
LAB_0539fed8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


