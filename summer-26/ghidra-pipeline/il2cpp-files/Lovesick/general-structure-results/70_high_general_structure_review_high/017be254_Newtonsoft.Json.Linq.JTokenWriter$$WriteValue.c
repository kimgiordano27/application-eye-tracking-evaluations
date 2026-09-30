/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JTokenWriter$$WriteValue
ENTRY_POINT: 017be254
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


undefined8 Newtonsoft_Json_Linq_JTokenWriter__WriteValue(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  uint uVar13;
  long unaff_x23;
  long *unaff_x24;
  long lVar14;
  undefined8 *unaff_x26;
  long lVar15;
  int iVar16;
  long *unaff_x28;
  long in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0178a8c4();
  if ((uVar8 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    if (unaff_x19 == (long *)0x0) goto LAB_017be524;
    bVar6 = FUN_0178bde4();
    bVar6 = bVar6 & 1;
  }
  if ((bVar6 & unaff_w21) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = FUN_017beca0();
    if (lVar9 == 0) goto LAB_017be524;
    unaff_w21 = unaff_w21 & *(char *)(lVar9 + 0x15) != '\0';
  }
  if (unaff_x20 == 0) {
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
  uVar7 = FUN_017724a8(*(undefined4 *)(unaff_x20 + 0x18),0x10,0);
  if ((unaff_w21 & 1) != 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeId__);
    if (lVar9 != 0) {
      FUN_01298de8(lVar9,uVar7,*(undefined8 *)Method_ToggleScriptsOnTouch_OnSelected__);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Sirenix_OdinInspector_ShowIfGroupAttribute_TypeInfo;
      if (lVar10 != 0) {
        FUN_01320ebc(lVar10,uVar7,*(undefined8 *)puVar5);
        iVar16 = 0;
        do {
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (0 < (int)uVar1) {
            uVar13 = 0;
            do {
              if (uVar1 <= uVar13) goto LAB_017be834;
              lVar14 = *(long *)(unaff_x20 + (long)(int)uVar13 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_017be838;
              uVar11 = FUN_00d93c64(lVar14);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x28);
              }
              uVar8 = FUN_0178a8c4();
              if ((uVar8 & 1) == 0) {
LAB_017be3e4:
                uVar8 = FUN_0129eff4(lVar9,uVar11,&stack0x00000008,*(undefined8 *)puVar2);
                if ((uVar8 & 1) == 0) {
                  if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar15 = FUN_017beca0(uVar11);
                  if (iVar16 != 0) goto LAB_017be43c;
LAB_017be40c:
                  if (lVar15 == 0) goto LAB_017be524;
LAB_017be448:
                  if (((*(char *)(lVar15 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                     (*(int *)(in_stack_00000008 + 0x18) == iVar16)) {
                    FUN_00bd9c14(lVar10,lVar14,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<MRUKAnchor>_Remove__);
                  }
                }
                else {
                  if (in_stack_00000008 == 0) goto LAB_017be524;
                  lVar15 = *(long *)(in_stack_00000008 + 0x10);
                  if (iVar16 == 0) goto LAB_017be40c;
LAB_017be43c:
                  if (lVar15 == 0) goto LAB_017be524;
                  if (*(char *)(lVar15 + 0x15) != '\0') goto LAB_017be448;
                }
                if (in_stack_00000008 == 0) {
                  lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetMemberTypes__
                                             );
                  if (lVar14 == 0) goto LAB_017be524;
                  *(long *)(lVar14 + 0x10) = lVar15;
                  *(int *)(lVar14 + 0x18) = iVar16;
                  FUN_0129a054(lVar9,uVar11,lVar14,
                               *(undefined8 *)Oculus_Platform_Request<User>_TypeInfo);
                }
              }
              else {
                if (unaff_x19 == (long *)0x0) goto LAB_017be524;
                uVar8 = (**(code **)(*unaff_x19 + 0x2c8))();
                if ((uVar8 & 1) != 0) goto LAB_017be3e4;
              }
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar1);
          }
          puVar3 = StringLiteral_13514;
          if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          unaff_x23 = FUN_017be8ec(unaff_x23);
          if (unaff_x23 == 0) {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_01789ac0();
            puVar4 = StringLiteral_3033;
            puVar3 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_TypeInfo;
            puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
            if ((uVar8 & 1) == 0) {
              if (unaff_x19 == (long *)0x0) break;
              uVar8 = FUN_0178be4c();
              if ((uVar8 & 1) != 0) goto LAB_017be5f0;
              uVar11 = FUN_017986cc();
              uVar11 = thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar4);
            }
            else {
LAB_017be5f0:
              uVar11 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)(lVar10 + 0x18));
            }
            uVar12 = *(undefined8 *)puVar3;
            goto LAB_017be7fc;
          }
          iVar16 = iVar16 + 1;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          unaff_x20 = Newtonsoft_Json_Linq_JTokenWriter__WriteComment(unaff_x23);
        } while (unaff_x20 != 0);
      }
    }
    goto LAB_017be524;
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01789ac0();
  if ((uVar8 & 1) != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) goto LAB_017be834;
        if (*(long *)(unaff_x20 + 0x20 + lVar9 * 8) == 0) goto LAB_017be838;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
    uVar11 = FUN_00da4fb8(*(undefined8 *)puVar3);
    FUN_017953b8();
    return uVar11;
  }
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar10 == 0) goto LAB_017be524;
  FUN_01320ebc(lVar10,uVar7,*(undefined8 *)puVar5);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (0 < (int)uVar1) {
    lVar9 = 0;
    do {
      if (uVar1 <= (uint)lVar9) {
LAB_017be834:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar14 = *(long *)(unaff_x20 + 0x20 + lVar9 * 8);
      if (lVar14 == 0) {
LAB_017be838:
        thunk_FUN_00d48444(Method_System_WeakReference__ctor__);
        uVar11 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar12 = thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_Face_ToQuad__);
        FUN_016aa9bc(uVar11,uVar12,0);
        uVar12 = thunk_FUN_00d48444(StringLiteral_12611);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,uVar12);
      }
      FUN_00d93c64(lVar14);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x28);
      }
      uVar8 = FUN_0178a8c4();
      if ((uVar8 & 1) == 0) {
LAB_017be694:
        FUN_00bd9c14(lVar10,lVar14,
                     *(undefined8 *)Method_System_Collections_Generic_List<MRUKAnchor>_Remove__);
      }
      else {
        if (unaff_x19 == (long *)0x0) goto LAB_017be524;
        uVar8 = (**(code **)(*unaff_x19 + 0x2c8))();
        if ((uVar8 & 1) != 0) goto LAB_017be694;
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)uVar1);
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01789ac0();
  if ((uVar8 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_017be524;
    uVar8 = FUN_0178be4c();
    if ((uVar8 & 1) == 0) {
      uVar11 = FUN_017986cc();
      uVar11 = thunk_FUN_00d6225c(uVar11,*unaff_x26);
      goto LAB_017be7f0;
    }
  }
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)(lVar10 + 0x18));
LAB_017be7f0:
  uVar12 = *(undefined8 *)puVar4;
LAB_017be7fc:
  FUN_01322a2c(lVar10,uVar11,0,uVar12);
  return uVar11;
}


