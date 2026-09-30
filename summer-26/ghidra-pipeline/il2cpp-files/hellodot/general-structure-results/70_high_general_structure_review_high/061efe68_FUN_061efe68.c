/*
FUNCTION_NAME: FUN_061efe68
ENTRY_POINT: 061efe68
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_3
*/


long FUN_061efe68(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long local_68;
  
  if ((DAT_06a840ba & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f2bd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_ImmersiveDebugger_Telemetry_State_TypeInfo);
    DAT_06a840ba = 1;
  }
  uVar3 = FUN_04db9688(param_1,0);
  puVar2 = Meta_XR_ImmersiveDebugger_Telemetry_State_TypeInfo;
  local_68 = 0;
  if ((uVar3 & 1) == 0) {
    local_68 = 0;
    lVar4 = *(long *)Meta_XR_ImmersiveDebugger_Telemetry_State_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar4 = *(long *)puVar2;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_02c6fb94(uVar5,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar4 = *(long *)puVar2;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar3 = FUN_0467ad20(**(long **)(lVar4 + 0xb8),param_1,&local_68,*(undefined8 *)PTR_DAT_065f2bd0
                        );
    if ((uVar3 & 1) == 0) {
      lVar4 = thunk_FUN_02ce86d4(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar4 = FUN_04f75c98(lVar4,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar7 = *(long **)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar3 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
          if (((uVar3 & 1) == 0) &&
             (local_68 = (**(code **)(*plVar7 + 0x288))
                                   (plVar7,param_1,*(undefined8 *)(*plVar7 + 0x290)), local_68 != 0)
             ) break;
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar4 = *(long *)puVar2;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04679278(**(long **)(lVar4 + 0xb8),param_1,local_68,
                   *(undefined8 *)UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var);
    }
    thunk_FUN_02c6fbb4(uVar5,0);
  }
  return local_68;
}


