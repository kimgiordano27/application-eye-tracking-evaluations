/*
FUNCTION_NAME: FUN_0610c6f0
ENTRY_POINT: 0610c6f0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


bool FUN_0610c6f0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  long *plStack_38;
  
                    /* catch() { ... } // from try @ 0610c47c with catch @ 0610c6f0 */
  puVar3 = PTR_DAT_06a2ed80;
                    /* catch() { ... } // from try @ 0610c46c with catch @ 0610c6f4 */
  if ((bRam0000000006e9544e & 1) == 0) {
    FUN_02e3ca1c(System_Linq_Expressions_ParameterExpression___TypeInfo);
    FUN_02e3ca1c(System_Reflection_ParameterInfo___TypeInfo);
    FUN_02e3ca1c(System_Reflection_ParameterModifier___TypeInfo);
    FUN_02e3ca1c(UnityEngine_Plane___TypeInfo);
    FUN_02e3ca1c(UnityEngine_Playables_PlayableBinding___TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06a3c0c8);
    FUN_02e3ca1c(System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<InputDevice>_TypeInfo);
    FUN_02e3ca1c(
                System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_TypeInfo
                );
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Internal_PlayerLoopRunner___TypeInfo);
    bRam0000000006e9544e = 1;
  }
  plStack_38 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_062696b0(param_5,0,0);
  if ((uVar4 & 1) == 0) {
    if (param_5 == 0) {
thunk_FUN_02e3ccc4:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar4 = FUN_0391cf64(param_5,&plStack_38,*(undefined8 *)UnityEngine_Plane___TypeInfo);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_06267fb4(param_5,0);
      if (lVar5 == 0) goto thunk_FUN_02e3ccc4;
      lVar5 = thunk_FUN_06277a10(lVar5,0);
      if ((lVar5 != 0) &&
         (plVar6 = (long *)FUN_038ac6d4(lVar5,*(undefined8 *)
                                               System_Reflection_ParameterInfo___TypeInfo),
         plVar6 != (long *)0x0)) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo
                         + 0x130);
        if (*(byte *)(*plVar6 + 0x130) < bVar1) {
          return false;
        }
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo) {
          return false;
        }
        uVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        if ((uVar4 & 1) != 0) {
          if (plVar6[4] == 0) {
            return false;
          }
          FUN_06275c3c(plVar6[4],0);
          lVar5 = plVar6[8];
          fVar8 = param_3;
          fVar9 = param_4;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar4 = FUN_06267b6c(lVar5,0,0);
          if ((uVar4 & 1) == 0) {
            plVar7 = (long *)FUN_06264d40(plVar6,0);
            if (plVar7 == (long *)0x0) goto thunk_FUN_02e3ccc4;
            if (*plVar7 != *(long *)PTR_DAT_06a3c0c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3d044();
            }
          }
          else {
            plVar7 = (long *)plVar6[8];
            if (plVar7 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          }
          FUN_06275c3c(plVar7,0);
          if ((*(char *)((long)plVar6 + 0x29) != '\0') && (fVar9 < param_4)) {
            return false;
          }
          if (((char)plVar6[5] != '\0') && (fVar8 < param_3)) {
            return false;
          }
        }
      }
      if (plStack_38 != (long *)0x0) {
        lVar5 = *plStack_38;
        bVar1 = *(byte *)(lVar5 + 0x130);
        bVar2 = *(byte *)(*(long *)System_Linq_Expressions_ParameterExpression___TypeInfo + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Linq_Expressions_ParameterExpression___TypeInfo)) {
          bVar2 = *(byte *)(*(long *)Cysharp_Threading_Tasks_Internal_PlayerLoopRunner___TypeInfo +
                           0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)Cysharp_Threading_Tasks_Internal_PlayerLoopRunner___TypeInfo)) {
            bVar2 = *(byte *)(*(long *)UnityEngine_Playables_PlayableBinding___TypeInfo + 0x130);
            if ((bVar1 < bVar2) ||
               (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)UnityEngine_Playables_PlayableBinding___TypeInfo)) {
              bVar2 = *(byte *)(*(long *)System_Reflection_ParameterModifier___TypeInfo + 0x130);
              if ((bVar1 < bVar2) ||
                 (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)System_Reflection_ParameterModifier___TypeInfo)) {
                bVar2 = *(byte *)(*(long *)
                                   System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_TypeInfo
                                 + 0x130);
                if ((bVar1 < bVar2) ||
                   (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)
                     System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_TypeInfo
                   )) {
                  bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<InputDevice>_TypeInfo +
                                   0x130);
                  if (bVar1 < bVar2) {
                    return false;
                  }
                  return *(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) ==
                         *(long *)System_Collections_Generic_List<InputDevice>_TypeInfo;
                }
              }
            }
          }
        }
        return true;
      }
    }
  }
  return false;
}


