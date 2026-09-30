/*
FUNCTION_NAME: FUN_05f2df64
ENTRY_POINT: 05f2df64
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


long FUN_05f2df64(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_24;
  
  if ((DAT_06a805a4 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_CommonTelemetryBootTime_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df8c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0660d738);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8918);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cebc0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_CommonTelemetryBootTimeReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_CommonTelemetryClientInfoReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogIn_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogInReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogOut_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogOutReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Niantic_Platform_Analytics_Telemetry_CommonTelemetryPlatformCoreGameFeaturesReflection_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8668);
    DAT_06a805a4 = 1;
  }
  local_24 = 0;
  if (DAT_06a80540 == (code *)0x0) {
    DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
  }
  uVar2 = (*DAT_06a80540)(param_3);
  if ((uVar2 & 0xfffffffe) == 4) {
    if (DAT_06a80510 == (code *)0x0) {
      DAT_06a80510 = (code *)FUN_02ce79f8("UnityEngine.Event::get_character()");
    }
    sVar1 = (*DAT_06a80510)(param_3);
    if (sVar1 == 0) {
      plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (DAT_06a80540 == (code *)0x0) {
        DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
      }
      uVar4 = (*DAT_06a80540)(param_3);
      local_48 = CONCAT44(local_48._4_4_,uVar4);
      lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065df8c0,&local_48);
      if (plVar8 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_05f2e708:
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
        if ((int)plVar8[3] != 0) {
          plVar8[4] = lVar5;
          if (DAT_06a804e0 == (code *)0x0) {
            DAT_06a804e0 = (code *)FUN_02ce79f8("UnityEngine.Event::get_modifiers()");
          }
          uVar4 = (*DAT_06a804e0)(param_3);
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)
                                      Niantic_Platform_Analytics_Telemetry_CommonTelemetryBootTime_TypeInfo
                                     ,&local_60);
          if ((lVar5 != 0) &&
             (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_05f2e708;
          if (1 < *(uint *)(plVar8 + 3)) {
            plVar8[5] = lVar5;
            if (DAT_06a80520 == (code *)0x0) {
              DAT_06a80520 = (code *)FUN_02ce79f8("UnityEngine.Event::get_keyCode()");
            }
            uVar4 = (*DAT_06a80520)(param_3);
            local_78 = CONCAT44(local_78._4_4_,uVar4);
            lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_0660d738,&local_78);
            if ((lVar5 != 0) &&
               (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_05f2e708;
            if (2 < *(uint *)(plVar8 + 3)) {
              plVar8[6] = lVar5;
              puVar10 = (undefined8 *)
                        Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogInReflection_TypeInfo
              ;
              goto LAB_05f2e680;
            }
          }
        }
LAB_05f2e704:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
    }
    else {
      lVar5 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8918,8);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined8 *)(lVar5 + 0x20) =
               *(undefined8 *)Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogIn_TypeInfo;
          if (DAT_06a80540 == (code *)0x0) {
            DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
          }
          local_38 = (*DAT_06a80540)(param_3);
          local_48 = *(undefined8 *)PTR_DAT_065df8c0;
          uStack_40 = 0xffffffffffffffff;
          uVar6 = FUN_04f67024(&local_48,0);
          if ((1 < *(uint *)(lVar5 + 0x18)) &&
             (*(undefined8 *)(lVar5 + 0x28) = uVar6, *(uint *)(lVar5 + 0x18) != 2)) {
            *(undefined8 *)(lVar5 + 0x30) =
                 *(undefined8 *)
                  Niantic_Platform_Analytics_Telemetry_CommonTelemetryClientInfoReflection_TypeInfo;
            if (DAT_06a80510 == (code *)0x0) {
              DAT_06a80510 = (code *)FUN_02ce79f8("UnityEngine.Event::get_character()");
            }
            local_24 = (*DAT_06a80510)(param_3);
            local_24 = local_24 & 0xffff;
            uVar6 = FUN_04f2e660(&local_24,0);
            if ((3 < *(uint *)(lVar5 + 0x18)) &&
               (*(undefined8 *)(lVar5 + 0x38) = uVar6, *(uint *)(lVar5 + 0x18) != 4)) {
              *(undefined8 *)(lVar5 + 0x40) =
                   *(undefined8 *)
                    Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogOut_TypeInfo;
              if (DAT_06a804e0 == (code *)0x0) {
                DAT_06a804e0 = (code *)FUN_02ce79f8("UnityEngine.Event::get_modifiers()");
              }
              local_50 = (*DAT_06a804e0)(param_3);
              local_60 = *(undefined8 *)
                          Niantic_Platform_Analytics_Telemetry_CommonTelemetryBootTime_TypeInfo;
              uStack_58 = 0xffffffffffffffff;
              uVar6 = FUN_04f67024(&local_60,0);
              if ((5 < *(uint *)(lVar5 + 0x18)) &&
                 (*(undefined8 *)(lVar5 + 0x48) = uVar6, *(uint *)(lVar5 + 0x18) != 6)) {
                *(undefined8 *)(lVar5 + 0x50) =
                     *(undefined8 *)
                      Niantic_Platform_Analytics_Telemetry_CommonTelemetryPlatformCoreGameFeaturesReflection_TypeInfo
                ;
                if (DAT_06a80520 == (code *)0x0) {
                  DAT_06a80520 = (code *)FUN_02ce79f8("UnityEngine.Event::get_keyCode()");
                }
                local_68 = (*DAT_06a80520)(param_3);
                local_78 = *(undefined8 *)PTR_DAT_0660d738;
                uStack_70 = 0xffffffffffffffff;
                uVar6 = FUN_04f67024(&local_78,0);
                if (7 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x58) = uVar6;
                  lVar5 = FUN_04db97ac(lVar5,0);
                  return lVar5;
                }
              }
            }
          }
        }
        goto LAB_05f2e704;
      }
    }
  }
  else {
    uVar7 = FUN_05f2bf34(param_3);
    if ((uVar7 & 1) == 0) {
      if (DAT_06a80540 == (code *)0x0) {
        DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
      }
      iVar3 = (*DAT_06a80540)(param_3);
      if (iVar3 != 0xe) {
        if (DAT_06a80540 == (code *)0x0) {
          DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
        }
        iVar3 = (*DAT_06a80540)(param_3);
        if (iVar3 != 0xd) {
          if (DAT_06a80540 == (code *)0x0) {
            DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
          }
          local_38 = (*DAT_06a80540)(param_3);
          local_48 = *(undefined8 *)PTR_DAT_065df8c0;
          uStack_40 = 0xffffffffffffffff;
          lVar5 = FUN_04f67024(&local_48,0);
          if (lVar5 == 0) {
            return *(long *)PTR_DAT_065c8668;
          }
          return lVar5;
        }
      }
      plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (DAT_06a80540 == (code *)0x0) {
        DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
      }
      uVar4 = (*DAT_06a80540)(param_3);
      local_48 = CONCAT44(local_48._4_4_,uVar4);
      lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065df8c0,&local_48);
      if (plVar8 != (long *)0x0) {
        if ((lVar5 == 0) ||
           (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0)) {
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar5;
            if (DAT_06a80550 == (code *)0x0) {
              DAT_06a80550 = (code *)FUN_02ce79f8("UnityEngine.Event::get_commandName()");
            }
            lVar5 = (*DAT_06a80550)(param_3);
            if ((lVar5 != 0) &&
               (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_05f2e708;
            if (1 < *(uint *)(plVar8 + 3)) {
              plVar8[5] = lVar5;
              puVar10 = (undefined8 *)
                        Niantic_Platform_Analytics_Telemetry_CommonTelemetryBootTimeReflection_TypeInfo
              ;
LAB_05f2e680:
              lVar5 = FUN_05f5cc4c(*puVar10,plVar8,0);
              return lVar5;
            }
          }
          goto LAB_05f2e704;
        }
        goto LAB_05f2e708;
      }
    }
    else {
      plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (DAT_06a80540 == (code *)0x0) {
        DAT_06a80540 = (code *)FUN_02ce79f8("UnityEngine.Event::get_type()");
      }
      uVar4 = (*DAT_06a80540)(param_3);
      local_60 = CONCAT44(local_60._4_4_,uVar4);
      lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065df8c0,&local_60);
      if (plVar8 != (long *)0x0) {
        if ((lVar5 == 0) ||
           (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0)) {
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar5;
            uVar4 = FUN_05f2b228(param_3);
            local_48 = CONCAT44(param_2,uVar4);
            lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065cebc0,&local_48);
            if ((lVar5 != 0) &&
               (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_05f2e708;
            if (1 < *(uint *)(plVar8 + 3)) {
              plVar8[5] = lVar5;
              if (DAT_06a804e0 == (code *)0x0) {
                DAT_06a804e0 = (code *)FUN_02ce79f8("UnityEngine.Event::get_modifiers()");
              }
              uVar4 = (*DAT_06a804e0)(param_3);
              local_78 = CONCAT44(local_78._4_4_,uVar4);
              lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)
                                          Niantic_Platform_Analytics_Telemetry_CommonTelemetryBootTime_TypeInfo
                                         ,&local_78);
              if ((lVar5 != 0) &&
                 (lVar9 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_05f2e708;
              if (2 < *(uint *)(plVar8 + 3)) {
                plVar8[6] = lVar5;
                puVar10 = (undefined8 *)
                          Niantic_Platform_Analytics_Telemetry_CommonTelemetryLogOutReflection_TypeInfo
                ;
                goto LAB_05f2e680;
              }
            }
          }
          goto LAB_05f2e704;
        }
        goto LAB_05f2e708;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


