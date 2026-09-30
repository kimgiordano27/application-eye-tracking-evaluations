/*
FUNCTION_NAME: FUN_05cc10dc
ENTRY_POINT: 05cc10dc
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_05cc10dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  int local_64;
  
  puVar5 = Unity_VisualScripting_UnityOnTriggerExitMessageListener_var;
  puVar4 = Unity_VisualScripting_UnityOnTriggerExit2DMessageListener_var;
  puVar3 = Unity_VisualScripting_UnityOnControllerColliderHitMessageListener_var;
  puVar2 = PTR_DAT_065dff38;
  puVar1 = PTR_DAT_065dff10;
  if ((DAT_06a7a204 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_UnityOnTriggerStay2DMessageListener_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_UnityOnTriggerExitMessageListener_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_UnityOnTriggerExit2DMessageListener_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dff30);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_UnityOnTriggerStayMessageListener_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_UnitySerializationHolder_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dff00);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_UnityOnControllerColliderHitMessageListener_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dff38);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Networking_UnityWebRequest_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dff10);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Networking_UnityWebRequestAsyncOperation_var);
    DAT_06a7a204 = 1;
  }
  uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_04678954(uVar8,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  uVar8 = FUN_03540600(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xa8) = uVar8;
  uVar8 = FUN_05ce4d5c(param_1,*(undefined8 *)puVar2,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  puVar7 = UnityEngine_Networking_UnityWebRequestAsyncOperation_var;
  puVar6 = UnityEngine_Networking_UnityWebRequest_var;
  puVar5 = System_UnitySerializationHolder_var;
  puVar4 = Unity_VisualScripting_UnityOnTriggerStayMessageListener_var;
  puVar3 = Unity_VisualScripting_UnityOnTriggerStay2DMessageListener_var;
  puVar2 = PTR_DAT_065dff30;
  puVar1 = PTR_DAT_065dff00;
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      lVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
      FUN_04f7383c(lVar9,0);
      if (lVar9 == 0) {
LAB_05cc1388:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(long *)(lVar9 + 0x18) = param_1;
      uVar8 = FUN_04f2e660(&local_64,0);
      uVar8 = FUN_04db00f0(*(undefined8 *)puVar7,uVar8,0);
      uVar8 = FUN_0353fb98(param_1,uVar8,*(undefined8 *)puVar1);
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
      uVar8 = FUN_04f2e660(&local_64,0);
      uVar8 = FUN_04db00f0(*(undefined8 *)puVar6,uVar8,0);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_04a5701c(uVar10,lVar9,*(undefined8 *)puVar4,0);
      uVar8 = FUN_05ce4b64(param_1,uVar8,uVar10,0);
      thunk_FUN_05ce98c4(param_1,*(undefined8 *)(lVar9 + 0x10),uVar8,0);
      thunk_FUN_05ce98c4(param_1,uVar8,*(undefined8 *)(param_1 + 0xa8),0);
      thunk_FUN_05ce98c4(param_1,uVar8,*(undefined8 *)(param_1 + 0xa0),0);
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_05cc1388;
      FUN_0467928c(*(long *)(param_1 + 0x98),uVar8,*(undefined8 *)(lVar9 + 0x10),
                   *(undefined8 *)puVar3);
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(param_1 + 0x90));
  }
  return;
}


