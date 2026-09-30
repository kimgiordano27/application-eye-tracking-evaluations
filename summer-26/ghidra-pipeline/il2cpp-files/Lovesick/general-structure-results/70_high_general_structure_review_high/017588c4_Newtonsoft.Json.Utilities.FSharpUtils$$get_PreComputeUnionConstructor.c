/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.FSharpUtils$$get_PreComputeUnionConstructor
ENTRY_POINT: 017588c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_19;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Utilities_FSharpUtils__get_PreComputeUnionConstructor(void)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int in_w8;
  long lVar14;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  int unaff_w29;
  double dVar15;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  int in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined2 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  
code_r0x017588c4:
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  iStack000000000000003c = FUN_01757b60();
  if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_2672);
  }
  FUN_0174f8bc(&stack0x00000048);
LAB_01758d14:
  FUN_0175797c();
LAB_01759124:
  unaff_w27 = iStack000000000000003c + unaff_w27;
  if ((int)unaff_w22 <= (int)unaff_w27) {
    return;
  }
  if (unaff_w22 <= unaff_w27) goto LAB_0175915c;
  uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w27 * 2);
  if (uVar2 < 0x4c) {
    if (uVar2 < 0x30) {
      if (0x25 < uVar2) {
        if (uVar2 == 0x27) goto LAB_017585f8;
        if (uVar2 == 0x2f) {
          FUN_0170f380(unaff_x21,0);
          goto joined_r0x01758498;
        }
        goto switchD_017584c0_caseD_65;
      }
      if (uVar2 == 0x22) {
LAB_017585f8:
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iStack000000000000003c = FUN_01757d00();
      }
      else {
        if (uVar2 != 0x25) goto switchD_017584c0_caseD_65;
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iVar6 = FUN_01757eb0();
        if ((iVar6 < 0) || (iVar6 == 0x25)) goto LAB_01759164;
        uStack0000000000000030 = (undefined2)iVar6;
        if (*(long *)(*(long *)Meta_WitAi_Json_WitResponseData_var + 0x38) == 0) {
          FUN_00d59478(*(long *)Meta_WitAi_Json_WitResponseData_var);
        }
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0175806c(in_stack_00000028,&stack0x00000030,1,unaff_x21,unaff_x24);
        iStack000000000000003c = unaff_w26;
      }
      goto LAB_01759124;
    }
    if (uVar2 < 0x47) {
      if (uVar2 == 0x3a) {
        FUN_0170f9c4(unaff_x21,0);
joined_r0x01758498:
        if (unaff_x19 == 0) goto LAB_01759160;
        FUN_0160c430();
        iStack000000000000003c = unaff_w29;
        goto LAB_01759124;
      }
      if (uVar2 == 0x46) goto switchD_017584c0_caseD_66;
    }
    else {
      if (uVar2 == 0x48) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iStack000000000000003c = FUN_01757b60();
        if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_2672);
        }
        FUN_0174f4d4(&stack0x00000048);
        goto LAB_01758d14;
      }
      if (uVar2 == 0x4b) {
        iStack000000000000003c = unaff_w29;
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01759530(in_stack_00000028,unaff_x24);
        goto LAB_01759124;
      }
    }
  }
  else {
    if (uVar2 < 0x6e) {
      if (uVar2 < 0x5d) {
        if (uVar2 == 0x4d) {
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iStack000000000000003c = FUN_01757b60();
          if (unaff_x25 == (long *)0x0) goto LAB_01759160;
          uVar8 = (**(code **)(*unaff_x25 + 0x248))();
          if (iStack000000000000003c < 3) {
            if (in_stack_00000020 == 0) {
LAB_01758bf4:
              if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_0175797c();
            }
            else {
              if (*(int *)(*(long *)
                            Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ + 0xe0
                          ) == 0) {
                thunk_FUN_00d32864();
              }
              if (DAT_03778a3f == '\0') {
                thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                  );
                DAT_03778a3f = '\x01';
              }
              puVar3 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
              lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)puVar3;
              }
              if (**(char **)(lVar10 + 0xb8) != '\0') goto LAB_01758bf4;
              if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01757ae4();
            }
          }
          else {
            if (in_stack_00000020 == 0) {
LAB_01758824:
              uVar11 = FUN_0170fcf8(unaff_x21,0);
              iVar6 = iStack000000000000003c;
              lVar10 = *unaff_x20;
              if (((uVar11 & 1) == 0) || (iStack000000000000003c < 4)) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar10);
                }
                FUN_01757c0c(uVar8,iVar6,unaff_x21);
              }
              else {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar10);
                }
                uVar9 = FUN_01757f20();
                FUN_0170fd38(unaff_x21,uVar8,uVar9 & 1,0,0);
              }
            }
            else {
              if (*(int *)(*(long *)
                            Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ + 0xe0
                          ) == 0) {
                thunk_FUN_00d32864();
              }
              if (DAT_03778a3f == '\0') {
                thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                  );
                DAT_03778a3f = '\x01';
              }
              puVar3 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
              lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)puVar3;
              }
              iVar6 = iStack000000000000003c;
              if (**(char **)(lVar10 + 0xb8) != '\0') goto LAB_01758824;
              if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01757c40(in_stack_00000028,uVar8,iVar6,unaff_x21);
            }
            if (unaff_x19 == 0) goto LAB_01759160;
            FUN_0160c430();
          }
          unaff_w29 = 1;
          unaff_w26 = 2;
        }
        else {
          if (uVar2 != 0x5c) goto switchD_017584c0_caseD_65;
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar6 = FUN_01757eb0();
          if (iVar6 < 0) goto LAB_01759164;
          if (unaff_x19 == 0) goto LAB_01759160;
          FUN_0160cd0c();
          iStack000000000000003c = unaff_w26;
        }
        goto LAB_01759124;
      }
      switch(uVar2) {
      case 100:
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iStack000000000000003c = FUN_01757b60();
        if (unaff_x25 == (long *)0x0) goto LAB_01759160;
        if (iStack000000000000003c < 3) {
          (**(code **)(*unaff_x25 + 0x1e8))();
          if (in_stack_00000020 != 0) {
            if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03778a3f == '\0') {
              thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
              DAT_03778a3f = (char)unaff_w29;
            }
            puVar3 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
            lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *(long *)puVar3;
            }
            unaff_w29 = 1;
            if (**(char **)(lVar10 + 0xb8) == '\0') {
              lVar10 = *unaff_x20;
              goto LAB_01759108;
            }
          }
          iVar6 = *(int *)(*unaff_x20 + 0xe0);
          goto joined_r0x01758a90;
        }
        uVar8 = (**(code **)(*unaff_x25 + 0x1f8))();
        iVar6 = iStack000000000000003c;
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x20);
        }
        FUN_01757bd8(uVar8,iVar6,unaff_x21);
        if (unaff_x19 == 0) goto LAB_01759160;
        FUN_0160c430();
        goto LAB_01758f80;
      default:
        goto switchD_017584c0_caseD_65;
      case 0x66:
switchD_017584c0_caseD_66:
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iStack000000000000003c = FUN_01757b60();
        if (7 < iStack000000000000003c) {
LAB_01759164:
          if (in_stack_00000008._4_4_ != 0) {
            FUN_0160eb0c();
          }
          thunk_FUN_00d48444(Method_System_Collections_Generic_List<WitResponseNode>_Remove__);
          uVar12 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar13 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<TimelineClip>_Add__);
          FUN_01757644(uVar12,uVar13);
          uVar13 = thunk_FUN_00d48444(
                                     Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_GetFaceRingAndLoop__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar12,uVar13);
        }
        if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_0174d880(&stack0x00000048);
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar15 = (double)thunk_FUN_00d8240c(0);
        lVar1 = -0x8000000000000000;
        if (dVar15 != INFINITY) {
          lVar1 = (long)dVar15;
        }
        lVar14 = 0;
        if (lVar1 != 0) {
          lVar14 = (lVar10 % 10000000) / lVar1;
        }
        if (uVar2 == 0x66) {
          lVar10 = *unaff_x20;
          uStack0000000000000034 = (undefined4)lVar14;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *unaff_x20;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
          if (lVar10 == 0) goto LAB_01759160;
          if (*(uint *)(lVar10 + 0x18) <= iStack000000000000003c - 1U) {
LAB_0175915c:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar10 = lVar10 + (long)(int)(iStack000000000000003c - 1U) * 8;
        }
        else {
          unaff_w29 = 1;
          iVar6 = iStack000000000000003c;
          if ((0 < iStack000000000000003c) && (lVar14 == (lVar14 / 10) * 10)) {
            do {
              iVar6 = iVar6 + -1;
              lVar14 = lVar14 / 10;
              if (iVar6 < 1) break;
            } while (lVar14 == (lVar14 / 10) * 10);
          }
          if (iVar6 < 1) {
            if (unaff_x19 == 0) goto LAB_01759160;
            iVar6 = FUN_0160b5d0();
            unaff_x21 = in_stack_00000018;
            if (0 < iVar6) {
              FUN_0160b5d0();
              sVar5 = FUN_0160bea0();
              if (sVar5 == 0x2e) {
                FUN_0160b5d0();
                FUN_0160ca7c();
              }
            }
            goto LAB_01759124;
          }
          lVar10 = *unaff_x20;
          uStack0000000000000034 = (undefined4)lVar14;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *unaff_x20;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
          if (lVar10 == 0) goto LAB_01759160;
          if (*(uint *)(lVar10 + 0x18) <= (uint)((long)iVar6 + -1)) goto LAB_0175915c;
          lVar10 = lVar10 + ((long)iVar6 + -1) * 8;
        }
        unaff_w29 = 1;
        uVar12 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_01731954(0);
        FUN_0176ecf8((long)&stack0x00000030 + 4,uVar12,uVar13,0);
        unaff_x21 = in_stack_00000018;
        break;
      case 0x67:
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iStack000000000000003c = FUN_01757b60();
        if (unaff_x25 == (long *)0x0) goto LAB_01759160;
        uVar8 = (**(code **)(*unaff_x25 + 0x228))();
        Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(unaff_x21,uVar8,0);
        break;
      case 0x68:
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iStack000000000000003c = FUN_01757b60();
        if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_2672);
        }
        FUN_0174f4d4(&stack0x00000048);
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0175797c();
LAB_01758f80:
        unaff_w29 = 1;
        goto LAB_01759124;
      case 0x6d:
        goto switchD_017584c0_caseD_6d;
      }
joined_r0x01758b68:
      if (unaff_x19 == 0) {
LAB_01759160:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0160c430();
      goto LAB_01759124;
    }
    if (uVar2 < 0x75) {
      if (uVar2 == 0x73) {
        in_w8 = *(int *)(*unaff_x20 + 0xe0);
        goto code_r0x017588c4;
      }
      if (uVar2 != 0x74) goto switchD_017584c0_caseD_65;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar6 = FUN_01757b60();
      iStack000000000000003c = iVar6;
      if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_2672);
      }
      iVar7 = FUN_0174f4d4(&stack0x00000048);
      if (iVar6 != 1) {
        if (iVar7 < 0xc) {
          Newtonsoft_Json_JsonSerializerSettings__set_Binder(unaff_x21,0);
        }
        else {
          FUN_0170f598(unaff_x21,0);
        }
        goto joined_r0x01758b68;
      }
      if (iVar7 < 0xc) {
        lVar10 = Newtonsoft_Json_JsonSerializerSettings__set_Binder(unaff_x21,0);
        if (lVar10 == 0) goto LAB_01759160;
        if (*(int *)(lVar10 + 0x10) < 1) goto LAB_01759124;
        lVar10 = Newtonsoft_Json_JsonSerializerSettings__set_Binder(unaff_x21,0);
      }
      else {
        lVar10 = FUN_0170f598(unaff_x21,0);
        if (lVar10 == 0) goto LAB_01759160;
        if (*(int *)(lVar10 + 0x10) < 1) goto LAB_01759124;
        lVar10 = FUN_0170f598(unaff_x21,0);
      }
      if ((lVar10 == 0) || (FUN_015fa29c(lVar10,0,0), unaff_x19 == 0)) goto LAB_01759160;
      FUN_0160cd0c();
      goto LAB_01759124;
    }
    if (uVar2 == 0x79) {
      if (unaff_x25 == (long *)0x0) goto LAB_01759160;
      iStack0000000000000038 = (**(code **)(*unaff_x25 + 0x268))();
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x20);
      }
      iStack000000000000003c = FUN_01757b60();
      if ((((iStack0000000000000014 != 0) &&
           (*(char *)(*(long *)(*(long *)
                                 Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                               + 0xb8) + 2) == '\0')) && (iStack0000000000000038 == 1)) &&
         (uVar9 = iStack000000000000003c + unaff_w27, (int)uVar9 < iStack0000000000000010)) {
        if (unaff_w22 <= uVar9) goto LAB_0175915c;
        if (*(short *)(unaff_x23 + (long)(int)uVar9 * 2) == 0x27) {
          if (unaff_w22 <= uVar9 + 1) goto LAB_0175915c;
          if (*(long *)StringLiteral_9381 == 0) goto LAB_01759160;
          sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar9 + 1) * 2);
          sVar4 = FUN_015fa29c(*(long *)StringLiteral_9381,0,0);
          unaff_x21 = in_stack_00000018;
          if (sVar5 == sVar4) {
            if ((*(long *)StringLiteral_4578 == 0) ||
               (FUN_015fa29c(*(long *)StringLiteral_4578,0,0), unaff_x19 == 0)) goto LAB_01759160;
            FUN_0160cd0c();
            goto LAB_01759124;
          }
        }
      }
      uVar11 = FUN_01711218(unaff_x21,0);
      if ((uVar11 & 1) == 0) {
        if (in_stack_00000020 != 0) {
          if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_03778a3f == '\0') {
            thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
            DAT_03778a3f = (char)unaff_w29;
          }
          puVar3 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
          lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar3;
          }
          if (**(char **)(lVar10 + 0xb8) == '\0') {
            lVar10 = *unaff_x20;
LAB_01759108:
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01757ae4();
            goto LAB_01759124;
          }
        }
        if (2 < iStack000000000000003c) {
          uVar12 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
          uVar12 = FUN_015f5b28(*(undefined8 *)
                                 Method_System_Collections_Generic_List<string>__ctor__,uVar12,0);
          if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0
             ) {
            thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          }
          uVar13 = FUN_01731954(0);
          FUN_0176ecf8(&stack0x00000038,uVar12,uVar13,0);
          if (unaff_x19 == 0) goto LAB_01759160;
          FUN_0160c430();
          goto LAB_01759124;
        }
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
      }
      else {
        iVar6 = *(int *)(*unaff_x20 + 0xe0);
joined_r0x01758a90:
        if (iVar6 == 0) {
          thunk_FUN_00d32864();
        }
      }
      FUN_0175797c();
      goto LAB_01758f80;
    }
    if (uVar2 == 0x7a) {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iStack000000000000003c = FUN_01757b60();
      FUN_017591c0(in_stack_00000028,unaff_x24);
      goto LAB_01759124;
    }
  }
switchD_017584c0_caseD_65:
  if (unaff_x19 == 0) goto LAB_01759160;
  FUN_0160cd0c();
  iStack000000000000003c = unaff_w29;
  goto LAB_01759124;
switchD_017584c0_caseD_6d:
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iStack000000000000003c = FUN_01757b60();
  if (*(int *)(*(long *)StringLiteral_2672 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_2672);
  }
  FUN_0174f650(&stack0x00000048);
  goto LAB_01758d14;
}


