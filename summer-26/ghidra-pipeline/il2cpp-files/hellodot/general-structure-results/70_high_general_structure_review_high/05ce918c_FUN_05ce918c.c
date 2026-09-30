/*
FUNCTION_NAME: FUN_05ce918c
ENTRY_POINT: 05ce918c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_05ce918c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_06a7a4bc & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e07b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dfef8);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_InputSystem_PlayerInput_var);
    DAT_06a7a4bc = 1;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)UnityEngine_InputSystem_PlayerInput_var) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_05ce9234;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)UnityEngine_InputSystem_PlayerInput_var,3);
LAB_05ce9234:
    uVar5 = (*(code *)*puVar1)(plVar7,param_2,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      plVar7 = *(long **)(param_1 + 0x40);
      if (plVar7 == (long *)0x0) goto LAB_05ce933c;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065dfef8) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_05ce92a8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065dfef8,3);
LAB_05ce92a8:
      uVar5 = (*(code *)*puVar1)(plVar7,param_2,puVar1[1]);
      if ((uVar5 & 1) == 0) {
        plVar7 = *(long **)(param_1 + 0x50);
        if (plVar7 == (long *)0x0) goto LAB_05ce933c;
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065e07b0) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto 
              UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_000009E9_PostfixBurstDelegate__EndInvoke
              ;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065e07b0,3);

        UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_000009E9_PostfixBurstDelegate__EndInvoke
        :
        uVar5 = (*(code *)*puVar1)(plVar7,param_2,puVar1[1]);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
    }
    uVar2 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(param_1,0);
    uVar3 = thunk_FUN_02c7737c(System_Action<HandGrabInteractor>_TypeInfo);
    uVar2 = FUN_04db9ab4(uVar3,param_2,uVar2,0);
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar3 = thunk_FUN_02cea894();
    FUN_04e9e938(uVar3,uVar2,0);
    uVar2 = thunk_FUN_02c7737c(System_Action<HttpRequestMessage>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar3,uVar2);
  }
LAB_05ce933c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


