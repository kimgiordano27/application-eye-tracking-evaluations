/*
FUNCTION_NAME: FUN_0613e9a4
ENTRY_POINT: 0613e9a4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_6;telemetry_or_network_hits_6
*/


void FUN_0613e9a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_28;
  
  if ((bRam0000000006e95676 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(System_ComponentModel_AttributeProviderAttribute_TypeInfo);
    FUN_02e3ca1c(System_AttributeUsageAttribute_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Audio_AudioAffordanceThemeData_TypeInfo
                );
    FUN_02e3ca1c(Liv_Lck_Collections_AudioBuffer_TypeInfo);
    FUN_02e3ca1c(UnityEngine_AudioClip_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_Unity_AudioClipWrapper_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a65cd8);
    FUN_02e3ca1c(Modules_Core_AudioData_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_AudioInChangeNotifierNotSupported_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_AudioInEnumeratorNotSupported_TypeInfo);
    FUN_02e3ca1c(Game_Core_AudioKeys_TypeInfo);
    FUN_02e3ca1c(Modules_Core_Audio_AudioPlayer_TypeInfo);
    FUN_02e3ca1c(Modules_Core_Audio_AudioPlayerPool_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_IOS_AudioSessionCategory_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_IOS_AudioSessionCategoryOption_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_IOS_AudioSessionMode_TypeInfo);
    bRam0000000006e95676 = 1;
  }
  lStack_28 = 0;
  if (param_2 == 0) {
    puVar5 = (undefined8 *)Modules_Core_AudioData_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar5 = (undefined8 *)Modules_Core_AudioData_TypeInfo;
    }
  }
  else {
    if (param_3 != 0) {
      lVar1 = thunk_FUN_02e789bc(param_3,*(undefined8 *)PTR_DAT_06a65cd8);
      if ((lVar1 == 0) &&
         (lVar1 = thunk_FUN_02e789bc(param_3,*(undefined8 *)
                                              Photon_Voice_Unity_AudioClipWrapper_TypeInfo),
         lVar1 == 0)) {
        uVar4 = FUN_054838b8(*(undefined8 *)Photon_Voice_AudioInChangeNotifierNotSupported_TypeInfo,
                             param_3,0);
        puVar5 = (undefined8 *)Photon_Voice_IOS_AudioSessionCategoryOption_TypeInfo;
      }
      else {
        plVar2 = *(long **)(param_1 + 0x80);
        if (plVar2 == (long *)0x0) goto LAB_0613ed04;
        uVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x180));
        lVar1 = param_2;
        puVar5 = (undefined8 *)Modules_Core_Audio_AudioPlayerPool_TypeInfo;
        if ((uVar3 & 1) != 0) {
          plVar2 = *(long **)(param_1 + 0x80);
          if (plVar2 == (long *)0x0) {
LAB_0613ed04:
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,param_3,*(undefined8 *)(*plVar2 + 0x180));
          lVar1 = param_3;
          puVar5 = (undefined8 *)Modules_Core_Audio_AudioPlayer_TypeInfo;
          if ((uVar3 & 1) != 0) {
            uVar3 = FUN_06140618(param_1,param_3,param_2);
            if ((uVar3 & 1) != 0) {
              uVar4 = FUN_0548df04(*(undefined8 *)Photon_Voice_IOS_AudioSessionCategory_TypeInfo,
                                   param_3,param_2,0);
              puVar5 = (undefined8 *)Game_Core_AudioKeys_TypeInfo;
              goto LAB_0613ebe0;
            }
            if (*(long *)(param_1 + 0x98) != 0) {
              uVar3 = FUN_04df1178(*(long *)(param_1 + 0x98),param_2,&lStack_28,
                                   *(undefined8 *)
                                    System_ComponentModel_AttributeProviderAttribute_TypeInfo);
              if ((uVar3 & 1) == 0) {
                lVar6 = *(long *)(param_1 + 0x98);
                lVar1 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_AudioClip_TypeInfo);
                FUN_052e82a0(lVar1,*(undefined8 *)Liv_Lck_Collections_AudioBuffer_TypeInfo);
                if ((lVar1 != 0) &&
                   (FUN_052e9494(lVar1,param_3,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Audio_AudioAffordanceThemeData_TypeInfo
                                ), lVar6 != 0)) {
                  FUN_04def5fc(lVar6,param_2,lVar1,
                               *(undefined8 *)System_AttributeUsageAttribute_TypeInfo);
                  return;
                }
              }
              else if (lStack_28 != 0) {
                FUN_052e9494(lStack_28,param_3,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Audio_AudioAffordanceThemeData_TypeInfo
                            );
                return;
              }
            }
            goto LAB_0613ed04;
          }
        }
        uVar4 = FUN_0548df04(*puVar5,lVar1,lVar1,0);
        puVar5 = (undefined8 *)Photon_Voice_IOS_AudioSessionMode_TypeInfo;
      }
LAB_0613ebe0:
      uVar4 = FUN_05482ce0(uVar4,*puVar5,0);
      if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)PTR_DAT_06a2ed98);
      }
      FUN_06224d14(uVar4,param_1,0);
      return;
    }
    puVar5 = (undefined8 *)Photon_Voice_AudioInEnumeratorNotSupported_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar5 = (undefined8 *)Photon_Voice_AudioInEnumeratorNotSupported_TypeInfo;
    }
  }
  FUN_06224c0c(*puVar5,0);
  return;
}


