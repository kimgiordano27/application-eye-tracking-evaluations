/*
FUNCTION_NAME: FUN_06186a28
ENTRY_POINT: 06186a28
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x06186f78) */
/* WARNING: Removing unreachable block (ram,0x06187068) */

undefined8 FUN_06186a28(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_06a83c3e & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_InputSystem_Touchscreen_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066025a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Uri___var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ff620);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de0a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06600380);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_LaserPointer_<PointRayCastCoroutine>d__47_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1a70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de1f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc880);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualUInt32_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualUInt64_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(OVR_OpenVR_IVRRenderModels__GetComponentName_TypeInfo)
    ;
    DAT_06a83c3e = 1;
  }
  FUN_0615d858(param_2,0);
  puVar2 = PTR_DAT_065dc880;
  if (param_2 == 0) goto LAB_06187064;
  plVar11 = *(long **)(param_2 + 0x10);
  FUN_0618256c(param_1);
  FUN_06185cf4(param_1,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_0615e994(plVar11,0);
  lVar8 = param_2;
  if ((uVar6 & 1) != 0) {
    if (plVar11 == (long *)0x0) goto LAB_06187064;
    uVar7 = (**(code **)(*plVar11 + 0x448))(plVar11,*(undefined8 *)(*plVar11 + 0x450));
    uVar12 = *(undefined8 *)Niantic_Peridot_LaserPointer_<PointRayCastCoroutine>d__47_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
    }
    uVar12 = FUN_04f3fb68(uVar12,0);
    uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar12,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = FUN_061785bc(param_2,param_2);
      if (lVar8 == 0) goto LAB_06187064;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined4 *)(lVar8 + 0x44) = 1;
      *(undefined1 *)(lVar8 + 0x40) = 0;
    }
  }
  puVar4 = 
  System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualUInt64_TypeInfo;
  puVar3 = 
  System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualUInt32_TypeInfo;
  puVar1 = OVR_OpenVR_IVRRenderModels__GetComponentName_TypeInfo;
  lVar8 = FUN_06184e90(param_1,lVar8);
  if (lVar8 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar9 = FUN_0355ef08(*(undefined8 *)puVar4);
    FUN_06184380(param_1,lVar8,param_2,lVar9);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x40) == '\0') {
        uVar7 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
        plVar11 = (long *)FUN_02ce7ad4(uVar7,3);
        local_70 = *(undefined8 *)(param_2 + 0x10);
        uStack_68 = *(undefined8 *)(param_2 + 0x18);
        uVar7 = thunk_FUN_02c7737c(UnityEngine_UIElements_KeyUpEvent_<>c_TypeInfo);
        lVar8 = thunk_FUN_02cea4e8(uVar7,&local_70);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,0);
        }
        if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar11[4] = lVar8;
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        lVar8 = thunk_FUN_02c7737c(PTR_DAT_065c89e8);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,0,0);
        if ((uVar6 & 1) == 0) {
          uVar7 = thunk_FUN_02c7737c(
                                    Niantic_Platform_Analytics_Telemetry_LoginReturningPlayerSignIn_<>c_TypeInfo
                                    );
          uVar12 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
          plVar10 = (long *)FUN_02ce7ad4(uVar12,1);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar8 = *(long *)(param_2 + 0x20);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar7,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar10[4] = lVar8;
          uVar12 = thunk_FUN_02c7737c(
                                     Google_Apis_Auth_OAuth2_LocalServerCodeReceiver_<>c__DisplayClass16_0_TypeInfo
                                     );
          lVar8 = FUN_0615d6a8(uVar12,plVar10,0);
        }
        else {
          uVar7 = thunk_FUN_02c7737c(
                                    Niantic_Platform_Analytics_Telemetry_LoginReturningPlayerSignIn_<>c_TypeInfo
                                    );
          lVar8 = thunk_FUN_02c7737c(PTR_DAT_065c8668);
        }
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,0);
        }
        if (*(uint *)(plVar11 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar11[5] = lVar8;
        lVar8 = FUN_06178670(param_2);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,0);
        }
        if (2 < *(uint *)(plVar11 + 3)) {
          plVar11[6] = lVar8;
          uVar7 = FUN_0615cc5c(uVar7,plVar11,0);
          uVar12 = thunk_FUN_02c7737c(Niantic_Platform_Analytics_Telemetry_LoginStartup_<>c_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,uVar12);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar7 = *(undefined8 *)(param_2 + 0x48);
    }
    else {
      iVar5 = FUN_033d5368(lVar9,*(undefined8 *)UnityEngine_InputSystem_Touchscreen_var);
      if (1 < iVar5) {
        uVar7 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
        plVar11 = (long *)FUN_02ce7ad4(uVar7,3);
        local_70 = *(undefined8 *)(param_2 + 0x10);
        uStack_68 = *(undefined8 *)(param_2 + 0x18);
        uVar7 = thunk_FUN_02c7737c(UnityEngine_UIElements_KeyUpEvent_<>c_TypeInfo);
        lVar8 = thunk_FUN_02cea4e8(uVar7,&local_70);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,0);
        }
        if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar11[4] = lVar8;
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        lVar8 = thunk_FUN_02c7737c(PTR_DAT_065c89e8);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,0,0);
        if ((uVar6 & 1) == 0) {
          uVar7 = thunk_FUN_02c7737c(UnityEngine_UIElements_LongField_LongInput_TypeInfo);
          uVar12 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
          plVar10 = (long *)FUN_02ce7ad4(uVar12,1);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar8 = *(long *)(param_2 + 0x20);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar7,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar10[4] = lVar8;
          uVar12 = thunk_FUN_02c7737c(
                                     Google_Apis_Auth_OAuth2_LocalServerCodeReceiver_<>c__DisplayClass16_0_TypeInfo
                                     );
          lVar8 = FUN_0615d6a8(uVar12,plVar10,0);
        }
        else {
          uVar7 = thunk_FUN_02c7737c(UnityEngine_UIElements_LongField_LongInput_TypeInfo);
          lVar8 = thunk_FUN_02c7737c(PTR_DAT_065c8668);
        }
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,0);
        }
        if (*(uint *)(plVar11 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar11[5] = lVar8;
        lVar8 = FUN_06178670(param_2);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,0);
        }
        if (2 < *(uint *)(plVar11 + 3)) {
          plVar11[6] = lVar8;
          uVar7 = FUN_0615cc5c(uVar7,plVar11,0);
          uVar12 = thunk_FUN_02c7737c(Niantic_Platform_Analytics_Telemetry_LoginStartup_<>c_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,uVar12);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar7 = FUN_033dbf6c(lVar9,*(undefined8 *)PTR_DAT_066025a8);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0355e9ec(lVar9,*(undefined8 *)puVar3);
    return uVar7;
  }
  if (plVar11 == (long *)0x0) goto LAB_06187064;
  uVar6 = FUN_04f4a6a0(plVar11,0);
  if (((uVar6 & 1) != 0) &&
     (iVar5 = (**(code **)(*plVar11 + 0x438))(plVar11,*(undefined8 *)(*plVar11 + 0x440)), iVar5 == 1
     )) {
    uVar7 = (**(code **)(*plVar11 + 0x428))(plVar11,*(undefined8 *)(*plVar11 + 0x430));
    lVar8 = FUN_061785bc(param_2);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      *(undefined1 *)(lVar8 + 0x40) = 1;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_0355ef08(*(undefined8 *)puVar4);
      FUN_061855ec(param_1,lVar8,uVar7);
      uVar12 = FUN_06160608(*(undefined8 *)(lVar8 + 0x10),uVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0355e9ec(uVar7,*(undefined8 *)puVar3);
      return uVar12;
    }
    goto LAB_06187064;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_0615e994(plVar11,0);
  if ((uVar6 & 1) == 0) {
LAB_06186f80:
    if (*(char *)(param_2 + 0x40) != '\0') {
      return *(undefined8 *)(param_2 + 0x48);
    }
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
    plVar11 = (long *)FUN_02ce7ad4(uVar7,3);
    local_70 = *(undefined8 *)(param_2 + 0x10);
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = thunk_FUN_02c7737c(UnityEngine_UIElements_KeyUpEvent_<>c_TypeInfo);
    lVar8 = thunk_FUN_02cea4e8(uVar7,&local_70);
    if (plVar11 != (long *)0x0) {
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
LAB_0618708c:
        uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar7,0);
      }
      if ((int)plVar11[3] != 0) {
        plVar11[4] = lVar8;
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        lVar8 = thunk_FUN_02c7737c(PTR_DAT_065c89e8);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,0,0);
        uVar7 = thunk_FUN_02c7737c(
                                  Niantic_Platform_Analytics_Telemetry_LoginReturningPlayerSignIn_<>c_TypeInfo
                                  );
        if ((uVar6 & 1) == 0) {
          uVar12 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
          plVar10 = (long *)FUN_02ce7ad4(uVar12,1);
          if (plVar10 == (long *)0x0) goto LAB_06187064;
          lVar8 = *(long *)(param_2 + 0x20);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
          goto LAB_0618708c;
          if ((int)plVar10[3] == 0) goto LAB_061870a0;
          plVar10[4] = lVar8;
          uVar12 = thunk_FUN_02c7737c(
                                     Google_Apis_Auth_OAuth2_LocalServerCodeReceiver_<>c__DisplayClass16_0_TypeInfo
                                     );
          lVar8 = FUN_0615d6a8(uVar12,plVar10,0);
        }
        else {
          lVar8 = thunk_FUN_02c7737c(PTR_DAT_065c8668);
        }
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0))
        goto LAB_0618708c;
        if (1 < *(uint *)(plVar11 + 3)) {
          plVar11[5] = lVar8;
          uVar12 = FUN_06178670(param_2);
          FUN_028c2238(plVar11,uVar12);
          FUN_028c226c(plVar11,2,uVar12);
          uVar7 = FUN_0615cc5c(uVar7,plVar11,0);
          uVar12 = thunk_FUN_02c7737c(Niantic_Platform_Analytics_Telemetry_LoginStartup_<>c_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar7,uVar12);
        }
      }
LAB_061870a0:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
  }
  else {
    uVar7 = (**(code **)(*plVar11 + 0x448))(plVar11,*(undefined8 *)(*plVar11 + 0x450));
    puVar1 = PTR_DAT_065c89e8;
    uVar12 = *(undefined8 *)PTR_DAT_065de1f0;
    if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
    }
    uVar12 = FUN_04f3fb68(uVar12,0);
    uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar12,0);
    if ((uVar6 & 1) == 0) {
      uVar7 = (**(code **)(*plVar11 + 0x448))(plVar11,*(undefined8 *)(*plVar11 + 0x450));
      uVar12 = *(undefined8 *)PTR_DAT_065de0a8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)puVar1);
      }
      uVar12 = FUN_04f3fb68(uVar12,0);
      uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar12,0);
      if ((uVar6 & 1) == 0) {
        uVar7 = (**(code **)(*plVar11 + 0x448))(plVar11,*(undefined8 *)(*plVar11 + 0x450));
        uVar12 = *(undefined8 *)PTR_DAT_06600380;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar1);
        }
        uVar12 = FUN_04f3fb68(uVar12,0);
        uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar12,0);
        if ((uVar6 & 1) == 0) {
          uVar7 = (**(code **)(*plVar11 + 0x448))(plVar11,*(undefined8 *)(*plVar11 + 0x450));
          uVar12 = *(undefined8 *)PTR_DAT_065ff620;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)puVar1);
          }
          uVar12 = FUN_04f3fb68(uVar12,0);
          uVar6 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar12,0);
          if ((uVar6 & 1) == 0) goto LAB_06186f80;
        }
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar7 = FUN_0615ea58(plVar11,0);
    uVar7 = FUN_033f25dc(uVar7,*(undefined8 *)System_Uri___var);
    lVar8 = FUN_061785bc(param_2);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      *(undefined1 *)(lVar8 + 0x40) = 1;
      uVar7 = FUN_061846dc(param_1,lVar8);
      return uVar7;
    }
  }
LAB_06187064:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


