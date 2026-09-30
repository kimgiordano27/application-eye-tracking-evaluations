/*
FUNCTION_NAME: FUN_0175806c
ENTRY_POINT: 0175806c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_4
*/


long FUN_0175806c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  double dVar23;
  undefined2 local_80 [2];
  undefined4 local_7c;
  int local_78;
  int iStack_74;
  undefined8 local_68;
  
  local_68 = param_1;
  if ((DAT_03778c77 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(UnityEngine_ProBuilder_PreferenceKeys_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Meta_WitAi_Json_WitResponseData_var);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<string>__ctor__);
    thunk_FUN_00d48444(StringLiteral_4578);
    thunk_FUN_00d48444(StringLiteral_9381);
    DAT_03778c77 = 1;
  }
  puVar4 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
  local_78 = 0;
  iStack_74 = 0;
  local_7c = 0;
  local_80[0] = 0;
  if (param_4 != 0) {
    plVar21 = *(long **)(param_4 + 0x78);
    bVar1 = param_6 == 0;
    if (bVar1) {
      param_6 = FUN_0160ea3c(0x10,0);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03778a3f == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
      DAT_03778a3f = '\x01';
    }
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *(long *)puVar4;
    }
    if (**(char **)(lVar15 + 0xb8) == '\0') {
      if (plVar21 == (long *)0x0) goto LAB_01759160;
      sVar9 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
      lVar15 = *(long *)puVar4;
      bVar6 = sVar9 == 8;
    }
    else {
      bVar6 = false;
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03778a3f == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
      DAT_03778a3f = '\x01';
    }
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *(long *)puVar4;
    }
    if (**(char **)(lVar15 + 0xb8) == '\0') {
      if (plVar21 == (long *)0x0) goto LAB_01759160;
      sVar9 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
      bVar7 = sVar9 == 3;
    }
    else {
      bVar7 = false;
    }
    puVar4 = UnityEngine_ProBuilder_PreferenceKeys_TypeInfo;
    uVar20 = (uint)param_3;
    if (0 < (int)uVar20) {
      uVar22 = 0;
      do {
        if (uVar20 <= uVar22) goto LAB_0175915c;
        uVar3 = *(ushort *)(param_2 + (long)(int)uVar22 * 2);
        if (uVar3 < 0x4c) {
          if (uVar3 < 0x30) {
            if (uVar3 < 0x26) {
              if (uVar3 == 0x22) goto LAB_017585f8;
              if (uVar3 == 0x25) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                iVar10 = FUN_01757eb0(param_2,param_3,uVar22);
                if ((iVar10 < 0) || (iVar10 == 0x25)) goto LAB_01759164;
                local_80[0] = (undefined2)iVar10;
                if (*(long *)(*(long *)Meta_WitAi_Json_WitResponseData_var + 0x38) == 0) {
                  FUN_00d59478(*(long *)Meta_WitAi_Json_WitResponseData_var);
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_0175806c(param_1,local_80,1,param_4,param_5,param_6);
                goto LAB_017583b0;
              }
            }
            else {
              if (uVar3 == 0x27) {
LAB_017585f8:
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                iStack_74 = FUN_01757d00(param_2,param_3,uVar22,param_6);
                goto LAB_01759124;
              }
              if (uVar3 == 0x2f) {
                uVar17 = FUN_0170f380(param_4,0);
                if (param_6 != 0)
                goto Newtonsoft_Json_Utilities_FSharpUtils__get_PreComputeUnionTagReader;
                goto LAB_01759160;
              }
            }
switchD_017584c0_caseD_65:
            if (param_6 == 0) goto LAB_01759160;
            FUN_0160cd0c(param_6,uVar3,0);
          }
          else {
            if (0x46 < uVar3) {
              if (uVar3 == 0x48) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                iStack_74 = FUN_01757b60(param_2,param_3,uVar22,0x48);
                if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_2672);
                }
                uVar13 = FUN_0174f4d4(&local_68);
                goto LAB_01758d14;
              }
              if (uVar3 == 0x4b) {
                iStack_74 = 1;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01759530(param_1,param_5,param_6);
                goto LAB_01759124;
              }
              goto switchD_017584c0_caseD_65;
            }
            if (uVar3 != 0x3a) {
              if (uVar3 == 0x46) goto switchD_017584c0_caseD_66;
              goto switchD_017584c0_caseD_65;
            }
            uVar17 = FUN_0170f9c4(param_4,0);
            if (param_6 == 0) goto LAB_01759160;
Newtonsoft_Json_Utilities_FSharpUtils__get_PreComputeUnionTagReader:
            FUN_0160c430(param_6,uVar17,0);
          }
          iStack_74 = 1;
          goto LAB_01759124;
        }
        if (uVar3 < 0x6e) {
          if (uVar3 < 0x5d) {
            if (uVar3 == 0x4d) {
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iStack_74 = FUN_01757b60(param_2,param_3,uVar22,0x4d);
              if (plVar21 == (long *)0x0) goto LAB_01759160;
              uVar13 = (**(code **)(*plVar21 + 0x248))
                                 (plVar21,param_1,*(undefined8 *)(*plVar21 + 0x250));
              if (2 < iStack_74) {
                if (bVar6) {
                  if (*(int *)(*(long *)
                                Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (DAT_03778a3f == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                      );
                    DAT_03778a3f = '\x01';
                  }
                  puVar5 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                  lVar15 = *(long *)
                            Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar15 = *(long *)puVar5;
                  }
                  iVar10 = iStack_74;
                  if (**(char **)(lVar15 + 0xb8) != '\0') goto LAB_01758824;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_01757c40(param_1,uVar13,iVar10,param_4);
                }
                else {
LAB_01758824:
                  uVar16 = FUN_0170fcf8(param_4,0);
                  iVar10 = iStack_74;
                  lVar15 = *(long *)puVar4;
                  if (((uVar16 & 1) == 0) || (iStack_74 < 4)) {
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_00d32864(lVar15);
                    }
                    uVar17 = FUN_01757c0c(uVar13,iVar10,param_4);
                  }
                  else {
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_00d32864(lVar15);
                    }
                    uVar12 = FUN_01757f20(param_2,param_3,uVar22,iVar10,100);
                    uVar17 = FUN_0170fd38(param_4,uVar13,uVar12 & 1,0,0);
                  }
                }
                if (param_6 != 0) {
                  FUN_0160c430(param_6,uVar17,0);
                  goto LAB_01759124;
                }
                goto LAB_01759160;
              }
              if (bVar6) {
                if (*(int *)(*(long *)
                              Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ +
                            0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (DAT_03778a3f == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                    );
                  DAT_03778a3f = '\x01';
                }
                puVar5 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                lVar15 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar15 = *(long *)puVar5;
                }
                if (**(char **)(lVar15 + 0xb8) == '\0') {
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01757ae4(param_6,uVar13);
                  goto LAB_01759124;
                }
              }
              iVar10 = iStack_74;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_0175797c(param_6,uVar13,iVar10);
            }
            else {
              if (uVar3 != 0x5c) goto switchD_017584c0_caseD_65;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iVar10 = FUN_01757eb0(param_2,param_3,uVar22);
              if (iVar10 < 0) goto LAB_01759164;
              if (param_6 == 0) goto LAB_01759160;
              FUN_0160cd0c(param_6,iVar10,0);
LAB_017583b0:
              iStack_74 = 2;
            }
          }
          else {
            switch(uVar3) {
            case 100:
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iStack_74 = FUN_01757b60(param_2,param_3,uVar22,100);
              if (plVar21 == (long *)0x0) goto LAB_01759160;
              lVar15 = *plVar21;
              if (iStack_74 < 3) {
                iVar14 = (**(code **)(lVar15 + 0x1e8))
                                   (plVar21,param_1,*(undefined8 *)(lVar15 + 0x1f0));
                if (bVar6) {
                  if (*(int *)(*(long *)
                                Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (DAT_03778a3f == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                      );
                    DAT_03778a3f = '\x01';
                  }
                  puVar5 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                  lVar15 = *(long *)
                            Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar15 = *(long *)puVar5;
                  }
                  if (**(char **)(lVar15 + 0xb8) == '\0') {
                    lVar15 = *(long *)puVar4;
LAB_01759108:
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_01757ae4(param_6,iVar14);
                    break;
                  }
                }
                iVar11 = *(int *)(*(long *)puVar4 + 0xe0);
                iVar10 = iStack_74;
joined_r0x01758a90:
                if (iVar11 == 0) {
                  thunk_FUN_00d32864();
                }
LAB_01758f78:
                FUN_0175797c(param_6,iVar14,iVar10);
              }
              else {
                uVar13 = (**(code **)(lVar15 + 0x1f8))
                                   (plVar21,param_1,*(undefined8 *)(lVar15 + 0x200));
                iVar10 = iStack_74;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar4);
                }
                uVar17 = FUN_01757bd8(uVar13,iVar10,param_4);
                if (param_6 == 0) goto LAB_01759160;
                FUN_0160c430(param_6,uVar17,0);
              }
              break;
            default:
              goto switchD_017584c0_caseD_65;
            case 0x66:
switchD_017584c0_caseD_66:
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iStack_74 = FUN_01757b60(param_2,param_3,uVar22,uVar3);
              if (7 < iStack_74) {
LAB_01759164:
                if (bVar1) {
                  FUN_0160eb0c(param_6,0);
                }
                thunk_FUN_00d48444(Method_System_Collections_Generic_List<WitResponseNode>_Remove__)
                ;
                uVar17 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                uVar18 = thunk_FUN_00d48444(
                                           Method_System_Collections_Generic_List<TimelineClip>_Add__
                                           );
                FUN_01757644(uVar17,uVar18);
                uVar18 = thunk_FUN_00d48444(
                                           Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_GetFaceRingAndLoop__
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar17,uVar18);
              }
              if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar15 = FUN_0174d880(&local_68);
              iVar10 = iStack_74;
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              dVar23 = (double)thunk_FUN_00d8240c(0x4024000000000000,(double)(7 - iVar10),0);
              lVar2 = -0x8000000000000000;
              if (dVar23 != INFINITY) {
                lVar2 = (long)dVar23;
              }
              lVar19 = 0;
              if (lVar2 != 0) {
                lVar19 = (lVar15 % 10000000) / lVar2;
              }
              if (uVar3 == 0x66) {
                lVar15 = *(long *)puVar4;
                local_7c = (undefined4)lVar19;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar15 = *(long *)puVar4;
                }
                lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
                if (lVar15 == 0) goto LAB_01759160;
                if (*(uint *)(lVar15 + 0x18) <= iStack_74 - 1U) {
LAB_0175915c:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar15 = lVar15 + (long)(int)(iStack_74 - 1U) * 8;
              }
              else {
                iVar10 = iStack_74;
                if ((0 < iStack_74) && (lVar19 == (lVar19 / 10) * 10)) {
                  do {
                    iVar10 = iVar10 + -1;
                    lVar19 = lVar19 / 10;
                    if (iVar10 < 1) break;
                  } while (lVar19 == (lVar19 / 10) * 10);
                }
                if (iVar10 < 1) {
                  if (param_6 != 0) {
                    iVar10 = FUN_0160b5d0(param_6,0);
                    if (0 < iVar10) {
                      iVar10 = FUN_0160b5d0(param_6,0);
                      sVar9 = FUN_0160bea0(param_6,iVar10 + -1,0);
                      if (sVar9 == 0x2e) {
                        iVar10 = FUN_0160b5d0(param_6,0);
                        FUN_0160ca7c(param_6,iVar10 + -1,1,0);
                      }
                    }
                    break;
                  }
                  goto LAB_01759160;
                }
                lVar15 = *(long *)puVar4;
                local_7c = (undefined4)lVar19;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar15 = *(long *)puVar4;
                }
                lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
                if (lVar15 == 0) goto LAB_01759160;
                if (*(uint *)(lVar15 + 0x18) <= (uint)((long)iVar10 + -1)) goto LAB_0175915c;
                lVar15 = lVar15 + ((long)iVar10 + -1) * 8;
              }
              uVar17 = *(undefined8 *)(lVar15 + 0x20);
              if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0)
                  == 0) {
                thunk_FUN_00d32864();
              }
              uVar18 = FUN_01731954(0);
              uVar17 = FUN_0176ecf8(&local_7c,uVar17,uVar18,0);
joined_r0x01758e78:
              if (param_6 != 0) goto LAB_01759010;
              goto LAB_01759160;
            case 0x67:
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iStack_74 = FUN_01757b60(param_2,param_3,uVar22,0x67);
              if (plVar21 == (long *)0x0) goto LAB_01759160;
              uVar13 = (**(code **)(*plVar21 + 0x228))
                                 (plVar21,param_1,*(undefined8 *)(*plVar21 + 0x230));
              uVar17 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString
                                 (param_4,uVar13,0);
              if (param_6 == 0) goto LAB_01759160;
LAB_01759010:
              FUN_0160c430(param_6,uVar17,0);
              break;
            case 0x68:
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iStack_74 = FUN_01757b60(param_2,param_3,uVar22,0x68);
              if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_2672);
              }
              iVar14 = FUN_0174f4d4(&local_68);
              iVar11 = iStack_74;
              iVar10 = 0xc;
              if (iVar14 % 0xc != 0) {
                iVar10 = iVar14 % 0xc;
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_0175797c(param_6,iVar10,iVar11);
              break;
            case 0x6d:
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iStack_74 = FUN_01757b60(param_2,param_3,uVar22,0x6d);
              if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_2672);
              }
              uVar13 = FUN_0174f650(&local_68);
LAB_01758d14:
              FUN_0175797c(param_6,uVar13,iStack_74);
            }
          }
        }
        else if (uVar3 < 0x75) {
          if (uVar3 == 0x73) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            iStack_74 = FUN_01757b60(param_2,param_3,uVar22,0x73);
            if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_2672);
            }
            uVar13 = FUN_0174f8bc(&local_68);
            goto LAB_01758d14;
          }
          if (uVar3 != 0x74) goto switchD_017584c0_caseD_65;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar10 = FUN_01757b60(param_2,param_3,uVar22,0x74);
          iStack_74 = iVar10;
          if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_2672);
          }
          iVar11 = FUN_0174f4d4(&local_68);
          if (iVar10 != 1) {
            if (iVar11 < 0xc) {
              uVar17 = Newtonsoft_Json_JsonSerializerSettings__set_Binder(param_4,0);
            }
            else {
              uVar17 = FUN_0170f598(param_4,0);
            }
            goto joined_r0x01758e78;
          }
          if (iVar11 < 0xc) {
            lVar15 = Newtonsoft_Json_JsonSerializerSettings__set_Binder(param_4,0);
            if (lVar15 == 0) goto LAB_01759160;
            if (0 < *(int *)(lVar15 + 0x10)) {
              lVar15 = Newtonsoft_Json_JsonSerializerSettings__set_Binder(param_4,0);
              goto joined_r0x01758e40;
            }
          }
          else {
            lVar15 = FUN_0170f598(param_4,0);
            if (lVar15 == 0) goto LAB_01759160;
            if (*(int *)(lVar15 + 0x10) < 1) goto LAB_01759124;
            lVar15 = FUN_0170f598(param_4,0);
joined_r0x01758e40:
            if ((lVar15 == 0) || (uVar13 = FUN_015fa29c(lVar15,0,0), param_6 == 0))
            goto LAB_01759160;
            FUN_0160cd0c(param_6,uVar13,0);
          }
        }
        else if (uVar3 == 0x79) {
          if (plVar21 == (long *)0x0) goto LAB_01759160;
          uVar13 = (**(code **)(*plVar21 + 0x268))
                             (plVar21,param_1,*(undefined8 *)(*plVar21 + 0x270));
          _local_78 = CONCAT44(iStack_74,uVar13);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          iVar10 = FUN_01757b60(param_2,param_3,uVar22,0x79);
          iStack_74 = iVar10;
          if ((((bVar7) &&
               (*(char *)(*(long *)(*(long *)
                                     Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                                   + 0xb8) + 2) == '\0')) && (local_78 == 1)) &&
             (uVar12 = iVar10 + uVar22, (int)uVar12 < (int)(uVar20 - 1))) {
            if (uVar20 <= uVar12) goto LAB_0175915c;
            if (*(short *)(param_2 + (long)(int)uVar12 * 2) == 0x27) {
              if (uVar20 <= uVar12 + 1) goto LAB_0175915c;
              if (*(long *)StringLiteral_9381 == 0) goto LAB_01759160;
              sVar9 = *(short *)(param_2 + (long)(int)(uVar12 + 1) * 2);
              sVar8 = FUN_015fa29c(*(long *)StringLiteral_9381,0,0);
              if (sVar9 == sVar8) {
                if ((*(long *)StringLiteral_4578 != 0) &&
                   (uVar13 = FUN_015fa29c(*(long *)StringLiteral_4578,0,0), param_6 != 0)) {
                  FUN_0160cd0c(param_6,uVar13,0);
                  goto LAB_01759124;
                }
                goto LAB_01759160;
              }
            }
          }
          uVar16 = FUN_01711218(param_4,0);
          if ((uVar16 & 1) != 0) {
            iVar11 = *(int *)(*(long *)puVar4 + 0xe0);
            iVar10 = iStack_74;
            iVar14 = local_78;
            if (1 < iStack_74) {
              iVar10 = 2;
            }
            goto joined_r0x01758a90;
          }
          if (bVar6) {
            if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03778a3f == '\0') {
              thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
              DAT_03778a3f = '\x01';
            }
            puVar5 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
            lVar15 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar5;
            }
            if (**(char **)(lVar15 + 0xb8) == '\0') {
              lVar15 = *(long *)puVar4;
              iVar14 = local_78;
              goto LAB_01759108;
            }
          }
          iVar10 = iStack_74;
          iVar14 = local_78;
          if (iStack_74 < 3) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            iVar14 = iVar14 % 100;
            goto LAB_01758f78;
          }
          uVar17 = FUN_0176eb1c(&iStack_74,0);
          uVar17 = FUN_015f5b28(*(undefined8 *)
                                 Method_System_Collections_Generic_List<string>__ctor__,uVar17,0);
          if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0
             ) {
            thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          }
          uVar18 = FUN_01731954(0);
          uVar17 = FUN_0176ecf8(&local_78,uVar17,uVar18,0);
          if (param_6 == 0) goto LAB_01759160;
          FUN_0160c430(param_6,uVar17,0);
        }
        else {
          if (uVar3 != 0x7a) goto switchD_017584c0_caseD_65;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iStack_74 = FUN_01757b60(param_2,param_3,uVar22,0x7a);
          FUN_017591c0(param_1,param_5);
        }
LAB_01759124:
        uVar22 = iStack_74 + uVar22;
      } while ((int)uVar22 < (int)uVar20);
    }
    return param_6;
  }
LAB_01759160:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


