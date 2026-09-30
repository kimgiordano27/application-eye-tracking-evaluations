/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JTokenWriter$$WriteValue
ENTRY_POINT: 017be168
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


long * Newtonsoft_Json_Linq_JTokenWriter__WriteValue(long param_1,ulong param_2)

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
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x19;
  uint uVar18;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar19;
  long lVar20;
  int iVar21;
  long *unaff_x28;
  long in_stack_00000008;
  
  plVar16 = (long *)0x0;
  if ((param_2 & 1) == 0) {
    plVar16 = unaff_x19;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864(param_1);
  }
  puVar4 = StringLiteral_3033;
  lVar10 = Newtonsoft_Json_Linq_JTokenWriter__WriteComment();
  if ((unaff_x22 & 1) == 0) {
    if (lVar10 == 0) goto LAB_017be524;
    if (*(int *)(lVar10 + 0x18) == 1) {
      if (*(long *)(lVar10 + 0x20) == 0) {
LAB_017be838:
        thunk_FUN_00d48444(Method_System_WeakReference__ctor__);
        uVar15 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar17 = thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_Face_ToQuad__);
        FUN_016aa9bc(uVar15,uVar17,0);
        uVar17 = thunk_FUN_00d48444(StringLiteral_12611);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar15,uVar17);
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_0178a8c4(plVar16,0,0);
      if (*(int *)(lVar10 + 0x18) == 0) {
LAB_017be834:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(long *)(lVar10 + 0x20) != 0) {
        plVar12 = (long *)FUN_00d93c64();
        if ((uVar13 & 1) != 0) {
          if (plVar16 == (long *)0x0) goto LAB_017be524;
          uVar13 = (**(code **)(*plVar16 + 0x2c8))
                             (plVar16,plVar12,*(undefined8 *)(*plVar16 + 0x2d0));
          plVar12 = plVar16;
          if ((uVar13 & 1) == 0) {
            lVar10 = FUN_017986cc(plVar16,0,0);
            if (lVar10 == 0) {
              return (long *)0x0;
            }
            uVar15 = *(undefined8 *)puVar4;
            plVar16 = (long *)thunk_FUN_00d6225c(lVar10,uVar15);
            if (plVar16 != (long *)0x0) {
              return plVar16;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar10,uVar15);
          }
        }
        lVar11 = FUN_017986cc(plVar12,1,0);
        if (lVar11 == 0) {
          plVar16 = (long *)0x0;
        }
        else {
          uVar15 = *(undefined8 *)puVar4;
          plVar16 = (long *)thunk_FUN_00d6225c(lVar11,uVar15);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar11,uVar15);
          }
        }
        if (*(int *)(lVar10 + 0x18) != 0) {
          if (plVar16 == (long *)0x0) goto LAB_017be524;
          lVar10 = *(long *)(lVar10 + 0x20);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)) {
            uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar15,0);
          }
          if ((int)plVar16[3] != 0) {
            plVar16[4] = lVar10;
            return plVar16;
          }
        }
        goto LAB_017be834;
      }
      goto LAB_017be524;
    }
    bVar7 = false;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar11 = FUN_017be8ec();
    bVar7 = lVar11 != 0;
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_0178a8c4(plVar16,0,0);
  if ((uVar13 & 1) == 0) {
    bVar8 = 0;
  }
  else {
    if (plVar16 == (long *)0x0) goto LAB_017be524;
    bVar8 = FUN_0178bde4(plVar16,0);
    bVar8 = bVar8 & 1;
  }
  if ((bVar8 & bVar7) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar11 = FUN_017beca0(plVar16);
    if (lVar11 == 0) goto LAB_017be524;
    bVar7 = (bool)(bVar7 & *(char *)(lVar11 + 0x15) != '\0');
  }
  if (lVar10 == 0) {
LAB_017be524:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = Method_UnityEngine_Animator_GetBoneTransform__;
  puVar5 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_TypeInfo;
  puVar3 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar2 = 
  System_Collections_Generic_IEnumerator<<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>>_TypeInfo
  ;
  uVar9 = FUN_017724a8(*(undefined4 *)(lVar10 + 0x18),0x10,0);
  if (bVar7 != false) {
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeId__);
    if (lVar11 != 0) {
      FUN_01298de8(lVar11,uVar9,*(undefined8 *)Method_ToggleScriptsOnTouch_OnSelected__);
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar4 = Sirenix_OdinInspector_ShowIfGroupAttribute_TypeInfo;
      if (lVar14 != 0) {
        FUN_01320ebc(lVar14,uVar9,*(undefined8 *)puVar6);
        iVar21 = 0;
        do {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar1) {
            uVar18 = 0;
            do {
              if (uVar1 <= uVar18) goto LAB_017be834;
              lVar19 = *(long *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
              if (lVar19 == 0) goto LAB_017be838;
              uVar15 = FUN_00d93c64(lVar19);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x28);
              }
              uVar13 = FUN_0178a8c4(plVar16,0,0);
              if ((uVar13 & 1) == 0) {
LAB_017be3e4:
                uVar13 = FUN_0129eff4(lVar11,uVar15,&stack0x00000008,*(undefined8 *)puVar4);
                if ((uVar13 & 1) == 0) {
                  if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar20 = FUN_017beca0(uVar15);
                  if (iVar21 != 0) goto LAB_017be43c;
LAB_017be40c:
                  if (lVar20 == 0) goto LAB_017be524;
LAB_017be448:
                  if (((*(char *)(lVar20 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                     (*(int *)(in_stack_00000008 + 0x18) == iVar21)) {
                    FUN_00bd9c14(lVar14,lVar19,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<MRUKAnchor>_Remove__);
                  }
                }
                else {
                  if (in_stack_00000008 == 0) goto LAB_017be524;
                  lVar20 = *(long *)(in_stack_00000008 + 0x10);
                  if (iVar21 == 0) goto LAB_017be40c;
LAB_017be43c:
                  if (lVar20 == 0) goto LAB_017be524;
                  if (*(char *)(lVar20 + 0x15) != '\0') goto LAB_017be448;
                }
                if (in_stack_00000008 == 0) {
                  lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetMemberTypes__
                                             );
                  if (lVar19 == 0) goto LAB_017be524;
                  *(long *)(lVar19 + 0x10) = lVar20;
                  *(int *)(lVar19 + 0x18) = iVar21;
                  FUN_0129a054(lVar11,uVar15,lVar19,
                               *(undefined8 *)Oculus_Platform_Request<User>_TypeInfo);
                }
              }
              else {
                if (plVar16 == (long *)0x0) goto LAB_017be524;
                uVar13 = (**(code **)(*plVar16 + 0x2c8))
                                   (plVar16,uVar15,*(undefined8 *)(*plVar16 + 0x2d0));
                if ((uVar13 & 1) != 0) goto LAB_017be3e4;
              }
              uVar1 = *(uint *)(lVar10 + 0x18);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)uVar1);
          }
          puVar2 = StringLiteral_13514;
          if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          unaff_x23 = FUN_017be8ec(unaff_x23);
          if (unaff_x23 == 0) {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_01789ac0(plVar16,0,0);
            puVar3 = StringLiteral_3033;
            puVar2 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_TypeInfo;
            puVar4 = System_Xml_QueryOutputWriter_TypeInfo;
            if ((uVar13 & 1) == 0) {
              if (plVar16 == (long *)0x0) break;
              uVar13 = FUN_0178be4c(plVar16,0);
              if ((uVar13 & 1) != 0) goto LAB_017be5f0;
              uVar15 = FUN_017986cc(plVar16,*(undefined4 *)(lVar14 + 0x18),0);
              plVar16 = (long *)thunk_FUN_00d6225c(uVar15,*(undefined8 *)puVar3);
            }
            else {
LAB_017be5f0:
              plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)(lVar14 + 0x18));
            }
            uVar15 = *(undefined8 *)puVar2;
            goto LAB_017be7fc;
          }
          iVar21 = iVar21 + 1;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar10 = Newtonsoft_Json_Linq_JTokenWriter__WriteComment(unaff_x23,plVar16,1);
        } while (lVar10 != 0);
      }
    }
    goto LAB_017be524;
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01789ac0(plVar16,0,0);
  if ((uVar13 & 1) != 0) {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar1) {
      lVar11 = 0;
      do {
        if (uVar1 <= (uint)lVar11) goto LAB_017be834;
        if (*(long *)(lVar10 + 0x20 + lVar11 * 8) == 0) goto LAB_017be838;
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)uVar1);
    }
    plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3);
    FUN_017953b8(lVar10,plVar16,0,0);
    return plVar16;
  }
  lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar14 == 0) goto LAB_017be524;
  FUN_01320ebc(lVar14,uVar9,*(undefined8 *)puVar6);
  uVar1 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar1) {
    lVar11 = 0;
    do {
      if (uVar1 <= (uint)lVar11) goto LAB_017be834;
      lVar19 = *(long *)(lVar10 + 0x20 + lVar11 * 8);
      if (lVar19 == 0) goto LAB_017be838;
      uVar15 = FUN_00d93c64(lVar19);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x28);
      }
      uVar13 = FUN_0178a8c4(plVar16,0,0);
      if ((uVar13 & 1) == 0) {
LAB_017be694:
        FUN_00bd9c14(lVar14,lVar19,
                     *(undefined8 *)Method_System_Collections_Generic_List<MRUKAnchor>_Remove__);
      }
      else {
        if (plVar16 == (long *)0x0) goto LAB_017be524;
        uVar13 = (**(code **)(*plVar16 + 0x2c8))(plVar16,uVar15,*(undefined8 *)(*plVar16 + 0x2d0));
        if ((uVar13 & 1) != 0) goto LAB_017be694;
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)uVar1);
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01789ac0(plVar16,0,0);
  if ((uVar13 & 1) == 0) {
    if (plVar16 == (long *)0x0) goto LAB_017be524;
    uVar13 = FUN_0178be4c(plVar16,0);
    if ((uVar13 & 1) == 0) {
      uVar15 = FUN_017986cc(plVar16,*(undefined4 *)(lVar14 + 0x18),0);
      plVar16 = (long *)thunk_FUN_00d6225c(uVar15,*(undefined8 *)puVar4);
      goto LAB_017be7f0;
    }
  }
  plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)(lVar14 + 0x18));
LAB_017be7f0:
  uVar15 = *(undefined8 *)puVar5;
LAB_017be7fc:
  FUN_01322a2c(lVar14,plVar16,0,uVar15);
  return plVar16;
}


