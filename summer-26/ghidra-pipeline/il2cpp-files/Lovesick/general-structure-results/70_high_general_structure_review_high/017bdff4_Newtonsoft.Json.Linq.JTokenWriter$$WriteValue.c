/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JTokenWriter$$WriteValue
ENTRY_POINT: 017bdff4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_8
*/


long * Newtonsoft_Json_Linq_JTokenWriter__WriteValue(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long local_70;
  long local_68;
  
  if ((DAT_03779054 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetMemberTypes__
                      );
    thunk_FUN_00d48444(System_Xml_QueryOutputWriter_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_Request<User>_TypeInfo);
    thunk_FUN_00d48444(Sirenix_OdinInspector_ShowIfGroupAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_ToggleScriptsOnTouch_OnSelected__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeId__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MRUKAnchor>_Remove__);
    thunk_FUN_00d48444(Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Animator_GetBoneTransform__);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_IAssignToMeshCustomizer_NativeArrays_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerator<<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13514);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03779054 = 1;
  }
  puVar17 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  local_68 = 0;
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar18 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar17 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__;
  }
  else {
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01789ac0(param_2,0,0);
    puVar2 = StringLiteral_13514;
    if ((uVar10 & 1) == 0) {
      uVar18 = *(undefined8 *)OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo;
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01789ac0(param_2,uVar18,0);
      plVar15 = (long *)0x0;
      if ((uVar10 & 1) == 0) {
        plVar15 = param_2;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      puVar6 = StringLiteral_3033;
      lVar11 = Newtonsoft_Json_Linq_JTokenWriter__WriteComment(param_1,plVar15,0);
      if ((param_3 & 1) == 0) {
        if (lVar11 == 0) goto LAB_017be524;
        if (*(int *)(lVar11 + 0x18) == 1) {
          if (*(long *)(lVar11 + 0x20) != 0) {
            if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_0178a8c4(plVar15,0,0);
            if (*(int *)(lVar11 + 0x18) == 0) {
LAB_017be834:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            if (*(long *)(lVar11 + 0x20) != 0) {
              plVar13 = (long *)FUN_00d93c64();
              if ((uVar10 & 1) != 0) {
                if (plVar15 == (long *)0x0) goto LAB_017be524;
                uVar10 = (**(code **)(*plVar15 + 0x2c8))
                                   (plVar15,plVar13,*(undefined8 *)(*plVar15 + 0x2d0));
                plVar13 = plVar15;
                if ((uVar10 & 1) == 0) {
                  lVar11 = FUN_017986cc(plVar15,0,0);
                  if (lVar11 == 0) {
                    return (long *)0x0;
                  }
                  uVar18 = *(undefined8 *)puVar6;
                  plVar15 = (long *)thunk_FUN_00d6225c(lVar11,uVar18);
                  if (plVar15 != (long *)0x0) {
                    return plVar15;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar11,uVar18);
                }
              }
              lVar12 = FUN_017986cc(plVar13,1,0);
              if (lVar12 == 0) {
                plVar15 = (long *)0x0;
              }
              else {
                uVar18 = *(undefined8 *)puVar6;
                plVar15 = (long *)thunk_FUN_00d6225c(lVar12,uVar18);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar12,uVar18);
                }
              }
              if (*(int *)(lVar11 + 0x18) != 0) {
                if (plVar15 == (long *)0x0) goto LAB_017be524;
                lVar11 = *(long *)(lVar11 + 0x20);
                if ((lVar11 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar12 == 0)) {
                  uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar18,0);
                }
                if ((int)plVar15[3] != 0) {
                  plVar15[4] = lVar11;
                  return plVar15;
                }
              }
              goto LAB_017be834;
            }
            goto LAB_017be524;
          }
LAB_017be838:
          thunk_FUN_00d48444(Method_System_WeakReference__ctor__);
          uVar18 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar16 = thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_Face_ToQuad__);
          FUN_016aa9bc(uVar18,uVar16,0);
          goto LAB_017be86c;
        }
        bVar7 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = FUN_017be8ec(param_1);
        bVar7 = lVar12 != 0;
      }
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0178a8c4(plVar15,0,0);
      if ((uVar10 & 1) == 0) {
        bVar8 = 0;
      }
      else {
        if (plVar15 == (long *)0x0) goto LAB_017be524;
        bVar8 = FUN_0178bde4(plVar15,0);
        bVar8 = bVar8 & 1;
      }
      if ((bVar8 & bVar7) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = FUN_017beca0(plVar15);
        if (lVar12 == 0) goto LAB_017be524;
        bVar7 = (bool)(bVar7 & *(char *)(lVar12 + 0x15) != '\0');
      }
      if (lVar11 == 0) {
LAB_017be524:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar5 = Method_UnityEngine_Animator_GetBoneTransform__;
      puVar4 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_TypeInfo;
      puVar3 = System_Xml_QueryOutputWriter_TypeInfo;
      puVar2 = 
      System_Collections_Generic_IEnumerator<<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>>_TypeInfo
      ;
      uVar9 = FUN_017724a8(*(undefined4 *)(lVar11 + 0x18),0x10,0);
      if (bVar7 != false) {
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeId__
                                   );
        if (lVar12 != 0) {
          FUN_01298de8(lVar12,uVar9,*(undefined8 *)Method_ToggleScriptsOnTouch_OnSelected__);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = Sirenix_OdinInspector_ShowIfGroupAttribute_TypeInfo;
          if (lVar14 != 0) {
            FUN_01320ebc(lVar14,uVar9,*(undefined8 *)puVar5);
            iVar22 = 0;
            local_70 = param_1;
            do {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (0 < (int)uVar1) {
                uVar19 = 0;
                do {
                  if (uVar1 <= uVar19) goto LAB_017be834;
                  lVar20 = *(long *)(lVar11 + (long)(int)uVar19 * 8 + 0x20);
                  if (lVar20 == 0) goto LAB_017be838;
                  uVar18 = FUN_00d93c64(lVar20);
                  if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar17);
                  }
                  uVar10 = FUN_0178a8c4(plVar15,0,0);
                  if ((uVar10 & 1) == 0) {
LAB_017be3e4:
                    uVar10 = FUN_0129eff4(lVar12,uVar18,&local_68,*(undefined8 *)puVar2);
                    if ((uVar10 & 1) == 0) {
                      if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar21 = FUN_017beca0(uVar18);
                      if (iVar22 != 0) goto LAB_017be43c;
LAB_017be40c:
                      if (lVar21 == 0) goto LAB_017be524;
LAB_017be448:
                      if (((*(char *)(lVar21 + 0x14) != '\0') || (local_68 == 0)) ||
                         (*(int *)(local_68 + 0x18) == iVar22)) {
                        FUN_00bd9c14(lVar14,lVar20,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<MRUKAnchor>_Remove__);
                      }
                    }
                    else {
                      if (local_68 == 0) goto LAB_017be524;
                      lVar21 = *(long *)(local_68 + 0x10);
                      if (iVar22 == 0) goto LAB_017be40c;
LAB_017be43c:
                      if (lVar21 == 0) goto LAB_017be524;
                      if (*(char *)(lVar21 + 0x15) != '\0') goto LAB_017be448;
                    }
                    if (local_68 == 0) {
                      lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetMemberTypes__
                                                 );
                      if (lVar20 == 0) goto LAB_017be524;
                      *(long *)(lVar20 + 0x10) = lVar21;
                      *(int *)(lVar20 + 0x18) = iVar22;
                      FUN_0129a054(lVar12,uVar18,lVar20,
                                   *(undefined8 *)Oculus_Platform_Request<User>_TypeInfo);
                    }
                  }
                  else {
                    if (plVar15 == (long *)0x0) goto LAB_017be524;
                    uVar10 = (**(code **)(*plVar15 + 0x2c8))
                                       (plVar15,uVar18,*(undefined8 *)(*plVar15 + 0x2d0));
                    if ((uVar10 & 1) != 0) goto LAB_017be3e4;
                  }
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  uVar19 = uVar19 + 1;
                } while ((int)uVar19 < (int)uVar1);
              }
              puVar6 = StringLiteral_13514;
              if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              local_70 = FUN_017be8ec(local_70);
              if (local_70 == 0) {
                if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_01789ac0(plVar15,0,0);
                puVar6 = StringLiteral_3033;
                puVar2 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_TypeInfo;
                puVar17 = System_Xml_QueryOutputWriter_TypeInfo;
                if ((uVar10 & 1) == 0) {
                  if (plVar15 == (long *)0x0) break;
                  uVar10 = FUN_0178be4c(plVar15,0);
                  if ((uVar10 & 1) != 0) goto LAB_017be5f0;
                  uVar18 = FUN_017986cc(plVar15,*(undefined4 *)(lVar14 + 0x18),0);
                  plVar15 = (long *)thunk_FUN_00d6225c(uVar18,*(undefined8 *)puVar6);
                }
                else {
LAB_017be5f0:
                  plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)puVar17,
                                                 *(undefined4 *)(lVar14 + 0x18));
                }
                uVar18 = *(undefined8 *)puVar2;
                goto LAB_017be7fc;
              }
              iVar22 = iVar22 + 1;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar11 = Newtonsoft_Json_Linq_JTokenWriter__WriteComment(local_70,plVar15,1);
            } while (lVar11 != 0);
          }
        }
        goto LAB_017be524;
      }
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01789ac0(plVar15,0,0);
      if ((uVar10 & 1) != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar1) {
          lVar12 = 0;
          do {
            if (uVar1 <= (uint)lVar12) goto LAB_017be834;
            if (*(long *)(lVar11 + 0x20 + lVar12 * 8) == 0) goto LAB_017be838;
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < (int)uVar1);
        }
        plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3);
        FUN_017953b8(lVar11,plVar15,0,0);
        return plVar15;
      }
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar14 == 0) goto LAB_017be524;
      FUN_01320ebc(lVar14,uVar9,*(undefined8 *)puVar5);
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar1) {
        lVar12 = 0;
        do {
          if (uVar1 <= (uint)lVar12) goto LAB_017be834;
          lVar20 = *(long *)(lVar11 + 0x20 + lVar12 * 8);
          if (lVar20 == 0) goto LAB_017be838;
          uVar18 = FUN_00d93c64(lVar20);
          if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar17);
          }
          uVar10 = FUN_0178a8c4(plVar15,0,0);
          if ((uVar10 & 1) == 0) {
LAB_017be694:
            FUN_00bd9c14(lVar14,lVar20,
                         *(undefined8 *)Method_System_Collections_Generic_List<MRUKAnchor>_Remove__)
            ;
          }
          else {
            if (plVar15 == (long *)0x0) goto LAB_017be524;
            uVar10 = (**(code **)(*plVar15 + 0x2c8))
                               (plVar15,uVar18,*(undefined8 *)(*plVar15 + 0x2d0));
            if ((uVar10 & 1) != 0) goto LAB_017be694;
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < (int)uVar1);
      }
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01789ac0(plVar15,0,0);
      if ((uVar10 & 1) == 0) {
        if (plVar15 == (long *)0x0) goto LAB_017be524;
        uVar10 = FUN_0178be4c(plVar15,0);
        if ((uVar10 & 1) == 0) {
          uVar18 = FUN_017986cc(plVar15,*(undefined4 *)(lVar14 + 0x18),0);
          plVar15 = (long *)thunk_FUN_00d6225c(uVar18,*(undefined8 *)puVar6);
          goto LAB_017be7f0;
        }
      }
      plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)(lVar14 + 0x18));
LAB_017be7f0:
      uVar18 = *(undefined8 *)puVar4;
LAB_017be7fc:
      FUN_01322a2c(lVar14,plVar15,0,uVar18);
      return plVar15;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar18 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar17 = StringLiteral_6613;
  }
  uVar16 = thunk_FUN_00d48444(puVar17);
  FUN_016ec5b8(uVar18,uVar16,0);
LAB_017be86c:
  uVar16 = thunk_FUN_00d48444(StringLiteral_12611);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar18,uVar16);
}


