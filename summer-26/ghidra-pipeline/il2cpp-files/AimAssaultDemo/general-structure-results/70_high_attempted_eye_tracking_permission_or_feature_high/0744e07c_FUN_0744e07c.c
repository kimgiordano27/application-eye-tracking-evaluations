/*
FUNCTION_NAME: FUN_0744e07c
ENTRY_POINT: 0744e07c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0744e07c(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_28;
  
                    /* try { // try from 0744e080 to 0754e0b3 has its CatchHandler @ 0744e42c */
  if ((DAT_08269b82 & 1) == 0) {
    FUN_0373b518(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    FUN_0373b518(System_Security_Cryptography_TripleDESTransform_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8a368);
    FUN_0373b518(DIVR_Configuration_TroubleshootingSettings_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(SteamAudio_TrueAudioNextDevice_TypeInfo);
    FUN_0373b518(PTR_DAT_07d89970);
    FUN_0373b518(UnityEngine_Rendering_Universal_ShaderPathID_TypeInfo);
    DAT_08269b82 = 1;
  }
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  lVar4 = FUN_07445304(param_1);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x18);
    FUN_074471b0(param_1,param_2);
    lVar4 = FUN_07445304(param_1);
    puVar3 = PTR_DAT_07d89970;
    if (lVar4 != 0) {
      uVar2 = *(undefined4 *)(lVar4 + 0x18);
      *(undefined1 *)(param_1 + 0x45) = 1;
      local_48 = 0;
      FUN_056a801c(&local_48,uVar1,uVar2,*(undefined8 *)puVar3);
      *(undefined8 *)((long)param_1 + 0x22c) = local_48;
      *(undefined4 *)(param_1 + 0x4d) = 0;
      lVar4 = FUN_07445304(param_1);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
          if (*(char *)((long)param_1 + 0x1d4) != '\0') {
            if ((param_2 == 0) || (plVar5 = (long *)FUN_073c0a84(param_2,0), plVar5 == (long *)0x0))
            goto LAB_0744e32c;
            lVar4 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d8a368) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                  goto LAB_0744e1fc;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d8a368,6);
LAB_0744e1fc:
            lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (lVar4 == 0) goto LAB_0744e32c;
            lVar4 = FUN_03f0e0d8(lVar4,*(undefined8 *)
                                        System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo
                                );
            param_1[0x59] = lVar4;
            thunk_FUN_037aeb94(param_1 + 0x59);
          }
          (**(code **)(*param_1 + 0x8e8))(param_1,*(undefined8 *)(*param_1 + 0x8f0));
          puVar3 = UnityEngine_Rendering_Universal_ShaderPathID_TypeInfo;
          if (0 < (int)param_1[0x47]) {
            lVar4 = *(long *)UnityEngine_Rendering_Universal_ShaderPathID_TypeInfo;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar4 = *(long *)puVar3;
            }
            if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_0744e32c;
            local_40 = FUN_0480eb20(**(long **)(lVar4 + 0xb8),&local_28,
                                    *(undefined8 *)
                                     DIVR_Configuration_TroubleshootingSettings_TypeInfo);
            if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            *(long *)(local_28 + 0x10) = param_2;
            thunk_FUN_037aeb94((long *)(local_28 + 0x10),param_2);
            FUN_0744bc1c(param_1,local_28);
            FUN_04fafd58(local_40,*(undefined8 *)SteamAudio_TrueAudioNextDevice_TypeInfo);
          }
        }
        if (param_2 != 0) {
          lVar4 = param_1[0x5e];
          uVar7 = FUN_073c0a84(param_2,0);
          if (lVar4 != 0) {
            FUN_045b9744(lVar4,uVar7,
                         *(undefined8 *)System_Security_Cryptography_TripleDESTransform_TypeInfo);
            uVar7 = FUN_073c0a84(param_2,0);
            if (param_1[0x62] != 0) {
              FUN_073e01ac(param_1[0x62],uVar7,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0744e32c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


