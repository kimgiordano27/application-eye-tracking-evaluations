/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JTokenReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 032bc1e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_Linq_JTokenReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  double dVar17;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
code_r0x032bc1e0:
  uVar12 = FUN_03146988(param_1,param_3,param_4);
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
  }
  uVar13 = FUN_03295500(0);
  FUN_032cf4e4(&stack0x00000030,uVar12,uVar13,0);
joined_r0x032bc224:
  if (unaff_x25 == 0) {
LAB_032bc578:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_0315ab48();
  plVar16 = (long *)Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
LAB_032bc518:
  unaff_w28 = iStack0000000000000034 + unaff_w28;
  if ((int)unaff_w22 <= (int)unaff_w28) {
    return;
  }
  if (unaff_w22 <= unaff_w28) goto LAB_032bc574;
  uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
  if (uVar2 < 0x4c) {
    if (0x2f < uVar2) {
      if (uVar2 < 0x47) {
        if (uVar2 != 0x3a) {
          if (uVar2 == 0x46) goto switchD_032bb8ec_caseD_66;
          goto switchD_032bb8ec_caseD_65;
        }
        FUN_03273d74();
joined_r0x032bbcc4:
        if (unaff_x25 != 0) {
          FUN_0315ab48();
          goto LAB_032bbcd8;
        }
        goto LAB_032bc578;
      }
      if (uVar2 == 0x48) {
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iStack0000000000000034 = FUN_032baf7c();
        if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f960);
        }
        Newtonsoft_Json_Linq_JPropertyDescriptor__GetValue(&stack0x00000038);
        goto LAB_032bc0a4;
      }
      if (uVar2 != 0x4b) goto switchD_032bb8ec_caseD_65;
      iStack0000000000000034 = 1;
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_032bc980(unaff_x20,unaff_x24);
      goto LAB_032bc518;
    }
    if (0x25 < uVar2) {
      if (uVar2 != 0x27) {
        if (uVar2 == 0x2f) {
          FUN_03273738();
          goto joined_r0x032bbcc4;
        }
        goto switchD_032bb8ec_caseD_65;
      }
LAB_032bba18:
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iStack0000000000000034 = FUN_032bb12c();
      goto LAB_032bc518;
    }
    if (uVar2 == 0x22) goto LAB_032bba18;
    if (uVar2 == 0x25) {
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar6 = FUN_032bb2d4();
      if ((iVar6 < 0) || (iVar6 == 0x25))
      goto Newtonsoft_Json_Linq_JTokenWriter__WriteStartConstructor;
      uStack0000000000000028 = (undefined2)iVar6;
      if (*(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<int,_OVRPointerEventData>_Add__ +
                   0x38) == 0) {
        FUN_01c723f0(*(long *)
                      Method_System_Collections_Generic_Dictionary<int,_OVRPointerEventData>_Add__);
      }
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_032bb49c(unaff_x20,&stack0x00000028,1);
      goto LAB_032bb7d0;
    }
  }
  else if (uVar2 < 0x6e) {
    if (uVar2 < 0x5d) {
      if (uVar2 == 0x4d) {
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iStack0000000000000034 = FUN_032baf7c();
        if (unaff_x26 == (long *)0x0) goto LAB_032bc578;
        uVar8 = (**(code **)(*unaff_x26 + 0x248))();
        if (2 < iStack0000000000000034) goto code_r0x032bbbd4;
        if ((in_stack_00000010 & 0x100000000) == 0) {
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (DAT_04532c1c == '\0') {
            FUN_01c5d288(
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                        );
            DAT_04532c1c = '\x01';
          }
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
          ;
          lVar9 = *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
          ;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar3;
          }
          if (**(char **)(lVar9 + 0xb8) == '\0') {
LAB_032bc4ac:
            plVar16 = (long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
            ;
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_032baf00();
            goto LAB_032bc518;
          }
        }
        lVar9 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
LAB_032bc320:
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
LAB_032bc3a0:
        FUN_032bad98();
        plVar16 = (long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
        goto LAB_032bc518;
      }
      if (uVar2 == 0x5c) {
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iVar6 = FUN_032bb2d4();
        if (iVar6 < 0) goto Newtonsoft_Json_Linq_JTokenWriter__WriteStartConstructor;
        if (unaff_x25 == 0) goto LAB_032bc578;
        FUN_0315aa9c();
LAB_032bb7d0:
        iStack0000000000000034 = 2;
        goto LAB_032bc518;
      }
    }
    else {
      switch(uVar2) {
      case 100:
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iStack0000000000000034 = FUN_032baf7c();
        if (unaff_x26 == (long *)0x0) goto LAB_032bc578;
        if (iStack0000000000000034 < 3) {
          (**(code **)(*unaff_x26 + 0x1e8))();
          if ((in_stack_00000010 & 0x100000000) == 0) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            if (DAT_04532c1c == '\0') {
              FUN_01c5d288(
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                          );
              DAT_04532c1c = '\x01';
            }
            puVar3 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
            ;
            lVar9 = *(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
            ;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar9 = *(long *)puVar3;
            }
            plVar16 = (long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
            ;
            if (**(char **)(lVar9 + 0xb8) == '\0') goto LAB_032bc4ac;
          }
          lVar9 = *plVar16;
          goto LAB_032bc320;
        }
        uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
        iVar6 = iStack0000000000000034;
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*plVar16);
        }
        FUN_032bb004(uVar8,iVar6);
        goto joined_r0x032bc224;
      case 0x66:
switchD_032bb8ec_caseD_66:
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iStack0000000000000034 = FUN_032baf7c();
        if (7 < iStack0000000000000034) {
Newtonsoft_Json_Linq_JTokenWriter__WriteStartConstructor:
          if (in_stack_00000000 == 0) {
            FUN_0316493c();
          }
          thunk_FUN_01c273e8(PTR_DAT_0423a628);
          uVar12 = thunk_FUN_01c496e0();
          uVar13 = thunk_FUN_01c273e8(BrushController_<FadeSphere>d__9_TypeInfo);
          FUN_032baa68(uVar12,uVar13);
          uVar13 = thunk_FUN_01c273e8(
                                     Method_System_Collections_Generic_Dictionary<int,_OVRPointerEventData>_TryGetValue__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar12,uVar13);
        }
        if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar9 = FUN_032b1574(&stack0x00000038);
        iVar6 = iStack0000000000000034;
        if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa60);
        }
        dVar17 = (double)thunk_FUN_01c721f8(0x4024000000000000,(double)(7 - iVar6),0);
        puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
        lVar10 = -0x8000000000000000;
        if (dVar17 != INFINITY) {
          lVar10 = (long)dVar17;
        }
        lVar14 = 0;
        if (lVar10 != 0) {
          lVar14 = (lVar9 % 10000000) / lVar10;
        }
        iVar6 = (int)lVar14;
        unaff_x20 = in_stack_00000018;
        if (uVar2 == 0x66) {
          lVar9 = *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
          iStack000000000000002c = iVar6;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar3;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
          if (lVar9 == 0) goto LAB_032bc578;
          if (*(uint *)(lVar9 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_032bc574:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          lVar9 = lVar9 + (long)(int)(iStack0000000000000034 - 1U) * 8;
          lVar10 = *(long *)PTR_DAT_042305b0;
        }
        else {
          iVar7 = iStack0000000000000034;
          if ((0 < iStack0000000000000034) && (iVar15 = iStack0000000000000034, iVar6 % 10 == 0)) {
            do {
              lVar9 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
              lVar14 = (lVar9 >> 2) - (lVar9 >> 0x3f);
              iVar7 = iVar15 + -1;
              if (iVar15 < 2) break;
              lVar9 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
              iVar15 = iVar7;
            } while (lVar14 == ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 10);
          }
          if (iVar7 < 1) {
            if (unaff_x25 == 0) goto LAB_032bc578;
            iVar6 = FUN_0315aa90();
            plVar16 = (long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
            ;
            if (0 < iVar6) {
              FUN_0315aa90();
              sVar5 = FUN_03161e00();
              if (sVar5 == 0x2e) {
                FUN_0315aa90();
                FUN_031628a8();
              }
            }
            goto LAB_032bc518;
          }
          iStack000000000000002c = (int)lVar14;
          lVar9 = *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar3;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
          if (lVar9 == 0) goto LAB_032bc578;
          if (*(uint *)(lVar9 + 0x18) <= iVar7 - 1U) goto LAB_032bc574;
          lVar9 = lVar9 + (ulong)(iVar7 - 1U) * 8;
          lVar10 = *(long *)PTR_DAT_042305b0;
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x20);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_03295500(0);
        FUN_032cf4e4((long)&stack0x00000028 + 4,uVar12,uVar13,0);
        if (unaff_x25 == 0) goto LAB_032bc578;
        FUN_0315ab48();
        plVar16 = (long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
        goto LAB_032bc518;
      case 0x67:
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iStack0000000000000034 = FUN_032baf7c();
        if (unaff_x26 == (long *)0x0) goto LAB_032bc578;
        (**(code **)(*unaff_x26 + 0x228))();
        FUN_032734d0();
        if (unaff_x25 == 0) goto LAB_032bc578;
LAB_032bc280:
        FUN_0315ab48();
        goto LAB_032bc518;
      case 0x68:
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iStack0000000000000034 = FUN_032baf7c();
        if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f960);
        }
        Newtonsoft_Json_Linq_JPropertyDescriptor__GetValue(&stack0x00000038);
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032bad98();
        plVar16 = (long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
        goto LAB_032bc518;
      case 0x6d:
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iStack0000000000000034 = FUN_032baf7c();
        if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f960);
        }
        FUN_032b33b8(&stack0x00000038);
LAB_032bc0a4:
        FUN_032bad98();
        goto LAB_032bc518;
      }
    }
  }
  else if (uVar2 < 0x75) {
    if (uVar2 == 0x73) {
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iStack0000000000000034 = FUN_032baf7c();
      if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f960);
      }
      FUN_032b361c(&stack0x00000038);
      goto LAB_032bc0a4;
    }
    if (uVar2 == 0x74) {
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar6 = FUN_032baf7c();
      iStack0000000000000034 = iVar6;
      if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f960);
      }
      iVar7 = Newtonsoft_Json_Linq_JPropertyDescriptor__GetValue(&stack0x00000038);
      plVar16 = (long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
      if (iVar6 != 1) {
        if (iVar7 < 0xc) {
          FUN_03273364();
        }
        else {
          FUN_03273950();
        }
        if (unaff_x25 != 0) goto LAB_032bc280;
        goto LAB_032bc578;
      }
      if (iVar7 < 0xc) {
        lVar9 = FUN_03273364();
        if (lVar9 == 0) goto LAB_032bc578;
        if (*(int *)(lVar9 + 0x10) < 1) goto LAB_032bc518;
        lVar9 = FUN_03273364();
      }
      else {
        lVar9 = FUN_03273950();
        if (lVar9 == 0) goto LAB_032bc578;
        if (*(int *)(lVar9 + 0x10) < 1) goto LAB_032bc518;
        lVar9 = FUN_03273950();
      }
      if ((lVar9 == 0) || (FUN_0314e438(lVar9,0,0), unaff_x25 == 0)) goto LAB_032bc578;
      FUN_0315aa9c();
      goto LAB_032bc518;
    }
  }
  else {
    if (uVar2 == 0x79) {
      if (unaff_x26 == (long *)0x0) goto LAB_032bc578;
      iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*plVar16);
      }
      iStack0000000000000034 = FUN_032baf7c();
      if (((((in_stack_00000010 & 1) == 0) &&
           (*(char *)(*(long *)(*(long *)
                                 OVR_OpenVR_IVRRenderModels__GetRenderModelThumbnailURL_TypeInfo +
                               0xb8) + 3) == '\0')) && (iStack0000000000000030 == 1)) &&
         (uVar1 = iStack0000000000000034 + unaff_w28, (int)uVar1 < in_stack_00000008._4_4_)) {
        if (unaff_w22 <= uVar1) goto LAB_032bc574;
        if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
          if (unaff_w22 <= uVar1 + 1) goto LAB_032bc574;
          if (*(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_get_Task__ == 0
             ) goto LAB_032bc578;
          sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
          sVar4 = FUN_0314e438(*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_get_Task__
                               ,0,0);
          plVar16 = (long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
          if (sVar5 == sVar4) {
            if ((*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetStateMachine__
                 == 0) ||
               (FUN_0314e438(*(long *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetStateMachine__
                             ,0,0), unaff_x25 == 0)) goto LAB_032bc578;
            FUN_0315aa9c();
            goto LAB_032bc518;
          }
        }
      }
      uVar11 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffset();
      if ((uVar11 & 1) == 0) {
        if ((in_stack_00000010 & 0x100000000) == 0) {
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (DAT_04532c1c == '\0') {
            FUN_01c5d288(
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                        );
            DAT_04532c1c = '\x01';
          }
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
          ;
          lVar9 = *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
          ;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar3;
          }
          if (**(char **)(lVar9 + 0xb8) == '\0') {
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_032baf00();
            plVar16 = (long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
            ;
            goto LAB_032bc518;
          }
        }
        if (iStack0000000000000034 < 3) {
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          goto LAB_032bc3a0;
        }
        param_3 = FUN_032cf308((long)&stack0x00000030 + 4,0);
        param_4 = 0;
        param_1 = *(undefined8 *)PTR_DAT_042370f8;
        goto code_r0x032bc1e0;
      }
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      goto LAB_032bc3a0;
    }
    if (uVar2 == 0x7a) {
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iStack0000000000000034 = FUN_032baf7c();
      FUN_032bc5d4(unaff_x20,unaff_x24);
      goto LAB_032bc518;
    }
  }
switchD_032bb8ec_caseD_65:
  if (unaff_x25 == 0) goto LAB_032bc578;
  FUN_0315aa9c();
LAB_032bbcd8:
  iStack0000000000000034 = 1;
  goto LAB_032bc518;
code_r0x032bbbd4:
  if ((in_stack_00000010 & 0x100000000) == 0) {
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04532c1c == '\0') {
      FUN_01c5d288(
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                  );
      DAT_04532c1c = '\x01';
    }
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
    ;
    lVar9 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
    ;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar9 = *(long *)puVar3;
    }
    iVar6 = iStack0000000000000034;
    if (**(char **)(lVar9 + 0xb8) == '\0') {
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__ +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_032bb06c(unaff_x20,uVar8,iVar6);
      goto joined_r0x032bc224;
    }
  }
  puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__;
  uVar11 = FUN_032740a8();
  iVar6 = iStack0000000000000034;
  lVar9 = *(long *)puVar3;
  if (((uVar11 & 1) == 0) || (iStack0000000000000034 < 4)) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar9);
    }
    FUN_032bb038(uVar8,iVar6);
  }
  else {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar9);
    }
    FUN_032bb344();
    Newtonsoft_Json_Utilities_DateTimeUtils__ConvertDateTimeToJavaScriptTicks();
  }
  goto joined_r0x032bc224;
}


