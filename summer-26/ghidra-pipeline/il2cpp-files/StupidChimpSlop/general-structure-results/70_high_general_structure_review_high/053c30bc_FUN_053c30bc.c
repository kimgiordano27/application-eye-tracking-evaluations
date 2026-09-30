/*
FUNCTION_NAME: FUN_053c30bc
ENTRY_POINT: 053c30bc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_21
*/


long FUN_053c30bc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_0664c008;
  if ((DAT_06a5339a & 1) == 0) {
    FUN_02d4dc40(UnityEngine_UIElements_Layout_InvokeBaselineFunctionDelegate_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_TypeInfo);
    FUN_02d4dc40(PlayFab_GroupsModels_IsMemberRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_GroupsModels_IsMemberResponse_TypeInfo);
    FUN_02d4dc40(System_Runtime_CompilerServices_IteratorStateMachineAttribute_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Linq_JArray_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Linq_JConstructor_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Linq_JContainer_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Linq_JObject_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Linq_JsonPath_JPath_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Linq_JProperty_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664c000);
    FUN_02d4dc40(PTR_DAT_0664c008);
    FUN_02d4dc40(PTR_DAT_0664dec0);
    DAT_06a5339a = 1;
  }
  puVar1 = PTR_DAT_0664c000;
  if ((param_2 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar4 = FUN_053fcc08(param_1,0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar7);
    }
    iVar3 = FUN_053fcb38(uVar4,0);
    puVar1 = PlayFab_GroupsModels_IsMemberRequest_TypeInfo;
    puVar2 = PTR_DAT_0664dec0;
    if (iVar3 < 9) {
      if (iVar3 < 6) {
        if (iVar3 == 4) {
          lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8)
                           + 0x10);
          if (lVar7 != 0) {
            return lVar7;
          }
          lVar7 = *(long *)PTR_DAT_0664dec0;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar7 = *(long *)puVar2;
          }
          uVar4 = **(undefined8 **)(lVar7 + 0xb8);
          lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                      UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo
                                    );
          FUN_05044d4c(lVar7,0);
          *(undefined8 *)(lVar7 + 0x10) = uVar4;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
          plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          *plVar5 = lVar7;
        }
        else {
          if (iVar3 != 5) goto LAB_053c3be8;
          if (**(long **)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) != 0) {
            return **(long **)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8);
          }
          lVar7 = *(long *)PTR_DAT_0664dec0;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar7 = *(long *)puVar2;
          }
          uVar4 = **(undefined8 **)(lVar7 + 0xb8);
          lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JConstructor_TypeInfo);
          FUN_05044d4c(lVar7,0);
          *(undefined8 *)(lVar7 + 0x10) = uVar4;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
          **(long **)(*(long *)puVar1 + 0xb8) = lVar7;
          plVar5 = *(long **)(*(long *)puVar1 + 0xb8);
        }
      }
      else if (iVar3 == 6) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x28);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = *(long *)PTR_DAT_0664dec0;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar2;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                    UnityEngine_UIElements_Layout_InvokeBaselineFunctionDelegate_TypeInfo
                                  );
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
        *plVar5 = lVar7;
      }
      else if (iVar3 == 7) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         8);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = *(long *)PTR_DAT_0664dec0;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar2;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_GroupsModels_IsMemberResponse_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar5 = lVar7;
      }
      else {
        if (iVar3 != 8) goto LAB_053c3be8;
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x30);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = *(long *)PTR_DAT_0664dec0;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar2;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JObject_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
        *plVar5 = lVar7;
      }
    }
    else if (iVar3 < 0xc) {
      if (iVar3 == 9) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x18);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = *(long *)PTR_DAT_0664dec0;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar2;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                    System_Runtime_CompilerServices_IteratorStateMachineAttribute_TypeInfo
                                  );
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
        *plVar5 = lVar7;
      }
      else if (iVar3 == 10) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x38);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = *(long *)PTR_DAT_0664dec0;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar2;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JsonPath_JPath_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
        *plVar5 = lVar7;
      }
      else {
        if (iVar3 != 0xb) goto LAB_053c3be8;
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x20);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = *(long *)PTR_DAT_0664dec0;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar2;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JArray_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
        *plVar5 = lVar7;
      }
    }
    else if (iVar3 == 0xc) {
      lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                       0x40);
      if (lVar7 != 0) {
        return lVar7;
      }
      lVar7 = *(long *)PTR_DAT_0664dec0;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar7 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JProperty_TypeInfo);
      FUN_05044d4c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar4;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      *plVar5 = lVar7;
    }
    else if (iVar3 == 0xd) {
      lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                       0x48);
      if (lVar7 != 0) {
        return lVar7;
      }
      lVar7 = *(long *)PTR_DAT_0664dec0;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar7 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JContainer_TypeInfo);
      FUN_05044d4c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar4;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
      *plVar5 = lVar7;
    }
    else {
      if (iVar3 != 0xe) goto LAB_053c3be8;
      lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                       0x50);
      if (lVar7 != 0) {
        return lVar7;
      }
      lVar7 = *(long *)PTR_DAT_0664dec0;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar7 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                  UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_TypeInfo
                                );
      FUN_05044d4c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar4;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),uVar4);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      *plVar5 = lVar7;
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar4 = FUN_053fcc08(param_1,0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar7);
    }
    iVar3 = FUN_053fcb38(uVar4,0);
    puVar2 = PlayFab_GroupsModels_IsMemberRequest_TypeInfo;
    if (iVar3 < 9) {
      if (iVar3 < 6) {
        if (iVar3 == 4) {
          lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8)
                           + 0x68);
          if (lVar7 != 0) {
            return lVar7;
          }
          lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                      UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo
                                    );
          FUN_05044d4c(lVar7,0);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
          plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
          *plVar5 = lVar7;
        }
        else {
          if (iVar3 != 5) {
LAB_053c3be8:
            uVar4 = FUN_053fb278(0);
            uVar6 = thunk_FUN_02db45e8(Newtonsoft_Json_Linq_JPropertyDescriptor_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar4,uVar6);
          }
          lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8)
                           + 0x58);
          if (lVar7 != 0) {
            return lVar7;
          }
          lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JConstructor_TypeInfo);
          FUN_05044d4c(lVar7,0);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
          plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
          *plVar5 = lVar7;
        }
      }
      else if (iVar3 == 6) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x80);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                    UnityEngine_UIElements_Layout_InvokeBaselineFunctionDelegate_TypeInfo
                                  );
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
        *plVar5 = lVar7;
      }
      else if (iVar3 == 7) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x60);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_GroupsModels_IsMemberResponse_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
        *plVar5 = lVar7;
      }
      else {
        if (iVar3 != 8) goto LAB_053c3be8;
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x88);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JObject_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
        *plVar5 = lVar7;
      }
    }
    else if (iVar3 < 0xc) {
      if (iVar3 == 9) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x70);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                    System_Runtime_CompilerServices_IteratorStateMachineAttribute_TypeInfo
                                  );
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
        *plVar5 = lVar7;
      }
      else if (iVar3 == 10) {
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x90);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JsonPath_JPath_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
        *plVar5 = lVar7;
      }
      else {
        if (iVar3 != 0xb) goto LAB_053c3be8;
        lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                         0x78);
        if (lVar7 != 0) {
          return lVar7;
        }
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JArray_TypeInfo);
        FUN_05044d4c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
        *plVar5 = lVar7;
      }
    }
    else if (iVar3 == 0xc) {
      lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                       0x98);
      if (lVar7 != 0) {
        return lVar7;
      }
      lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JProperty_TypeInfo);
      FUN_05044d4c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
      *plVar5 = lVar7;
    }
    else if (iVar3 == 0xd) {
      lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                       0xa0);
      if (lVar7 != 0) {
        return lVar7;
      }
      lVar7 = thunk_FUN_02d8a638(*(undefined8 *)Newtonsoft_Json_Linq_JContainer_TypeInfo);
      FUN_05044d4c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
      *plVar5 = lVar7;
    }
    else {
      if (iVar3 != 0xe) goto LAB_053c3be8;
      lVar7 = *(long *)(*(long *)(*(long *)PlayFab_GroupsModels_IsMemberRequest_TypeInfo + 0xb8) +
                       0xa8);
      if (lVar7 != 0) {
        return lVar7;
      }
      lVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                  UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_TypeInfo
                                );
      FUN_05044d4c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x10),0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
      *plVar5 = lVar7;
    }
  }
  thunk_FUN_02dc1ef0(plVar5,lVar7);
  return lVar7;
}


