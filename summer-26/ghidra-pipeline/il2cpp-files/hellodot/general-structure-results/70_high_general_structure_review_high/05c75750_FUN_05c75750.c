/*
FUNCTION_NAME: FUN_05c75750
ENTRY_POINT: 05c75750
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_17;telemetry_or_network_hits_17
*/


bool FUN_05c75750(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar2 = PTR_DAT_065dce00;
  if ((DAT_06a79ec5 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_XmlNode___var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066418e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc9a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcb70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df420);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce00);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628138);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628140);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628148);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628150);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628088);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c92e0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce20);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd048);
    DAT_06a79ec5 = 1;
  }
  puVar3 = PTR_DAT_065dd048;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar7 = FUN_05bd1b78(*(undefined8 *)puVar3,0);
  if (lVar7 == 0) {

    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    :
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_033ba678(lVar7,param_2,*(undefined8 *)PTR_DAT_065df420);
  if (*(char *)(param_1 + 0x25) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = (**(code **)(*param_2 + 0x3b8))(param_2,*(undefined8 *)(*param_2 + 0x3c0));
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x26) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f4abd8(param_2,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x1d) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f4abd8(param_2,0);
    if ((uVar8 & 1) == 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x1e) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f4ab90(param_2,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x1f) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f49e00(param_2,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f4abd8(param_2,0);
    if ((((uVar8 & 1) != 0) &&
        (uVar8 = (**(code **)(*param_2 + 0x5a8))(param_2,*(undefined8 *)(*param_2 + 0x5b0)),
        (uVar8 & 1) == 0)) && (uVar8 = FUN_04f4ae40(param_2,0), (uVar8 & 1) == 0)) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = (**(code **)(*param_2 + 0x5a8))(param_2,*(undefined8 *)(*param_2 + 0x5b0));
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x22) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f49960(param_2,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x23) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f49960(param_2,0);
    if ((uVar8 & 1) == 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_065dce20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = FUN_05c75da0(param_2);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x27) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_065dce20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = FUN_05c75de0(param_2);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f4ab50(param_2,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f49af8(param_2,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = FUN_04f4ae40(param_2,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    uVar10 = *(undefined8 *)PTR_DAT_065c92e0;
    if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar10 = FUN_04f3fb68(uVar10,0);
    uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(param_2,uVar10,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (param_2 == (long *)0x0)
    goto 
    UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
    ;
    uVar8 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    if ((uVar8 & 1) == 0) {
      return false;
    }
  }
  else if (param_2 == (long *)0x0)
  goto 
  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
  ;
  uVar8 = FUN_04f4ab70(param_2,0);
  puVar2 = PTR_DAT_065dc9a0;
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_065dc9a0 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = FUN_03371b8c(param_2,1,*(undefined8 *)System_Xml_XmlNode___var);
    if ((uVar8 & 1) == 0) {
      if (*(char *)(param_1 + 0x2d) == '\0') {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_03371b8c(param_2,1,*(undefined8 *)PTR_DAT_066418e8);
        if ((uVar8 & 1) != 0) {
          return false;
        }
      }
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x20) < 1) {
          return true;
        }
        bVar5 = *(int *)(param_1 + 0x18) == 1;
        FUN_04b6be90(&local_88,lVar7,*(undefined8 *)PTR_DAT_06628150);
        puVar4 = PTR_DAT_06628140;
        puVar3 = PTR_DAT_065dcb70;
        puVar2 = PTR_DAT_065c89e8;
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_60 = local_78;
        do {
          while( true ) {
            uVar8 = FUN_0481edf8(&local_70,*(undefined8 *)puVar4);
            uVar10 = local_60;
            if ((uVar8 & 1) == 0) goto LAB_05c75cac;
            iVar1 = *(int *)(param_1 + 0x18);
            if (iVar1 == 0) break;
            if (iVar1 == 2) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(param_2,uVar10,0);
              if ((uVar8 & 1) != 0) goto LAB_05c75ca8;
            }
            else {
              if (iVar1 != 1) {
                thunk_FUN_02c7737c(System_Xml_XmlQualifiedName___var);
                uVar10 = thunk_FUN_02cea894();
                uVar9 = thunk_FUN_02c7737c(System_TimeZoneInfo_AdjustmentRule___var);
                FUN_040e2030(uVar10,iVar1,uVar9);
                uVar9 = thunk_FUN_02c7737c(UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_var
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar10,uVar9);
              }
              bVar6 = (**(code **)(*param_2 + 0x288))
                                (param_2,local_60,*(undefined8 *)(*param_2 + 0x290));
              bVar5 = (bool)(bVar6 & bVar5);
              if (bVar5 == false) {
                bVar5 = false;
                goto LAB_05c75cac;
              }
            }
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_05be9ccc(param_2,uVar10,1,0);
        } while ((uVar8 & 1) == 0);
LAB_05c75ca8:
        bVar5 = true;
LAB_05c75cac:
        FUN_0481edf4(&local_70,*(undefined8 *)PTR_DAT_06628138);
        return bVar5;
      }
      goto 
      UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate__BeginInvoke
      ;
    }
  }
  return false;
}


