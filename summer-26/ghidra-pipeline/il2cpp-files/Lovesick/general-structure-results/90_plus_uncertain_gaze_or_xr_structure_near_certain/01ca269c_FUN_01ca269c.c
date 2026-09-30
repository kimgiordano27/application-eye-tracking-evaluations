/*
FUNCTION_NAME: FUN_01ca269c
ENTRY_POINT: 01ca269c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_01ca269c(long *param_1,long param_2,long param_3,byte param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  long local_68;
  byte local_60;
  undefined7 uStack_5f;
  byte local_54 [4];
  
  puVar2 = 
  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
  ;
  if ((DAT_0377ed39 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_2367);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor,_Transform>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_System_Net_Configuration_HttpWebRequestElement__ctor__);
    thunk_FUN_00d48444(OVRPlugin_Vector3f_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6ae0);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033ecc98);
    thunk_FUN_00d48444(Method_System_Text_DecoderNLS_GetCharCount__);
    thunk_FUN_00d48444(PTR_DAT_033ee8a0);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(System_Xml_Schema_Numeric10FacetsChecker_TypeInfo);
    DAT_0377ed39 = 1;
  }
  lVar4 = *(long *)puVar2;
  local_68 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  thunk_FUN_00d8e500();
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)OVRPlugin_Vector3f_TypeInfo);
    if (lVar4 == 0) goto LAB_01ca2b00;
    FUN_012539c0(lVar4,0x32,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor,_Transform>_MoveNext__
                );
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    thunk_FUN_00d8e500();
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
  }
  uVar5 = FUN_01253a70(lVar4,param_1,&local_68,*(undefined8 *)StringLiteral_2367);
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)PTR_DAT_033f6ae0;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar11,0);
    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
    if (plVar7 == (long *)0x0) goto LAB_01ca2b00;
    if ((param_1 != (long *)0x0) &&
       (lVar8 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
    goto LAB_01ca2b08;
    if ((int)plVar7[3] == 0) goto LAB_01ca2b04;
    plVar7[4] = (long)param_1;
    if (((plVar6 == (long *)0x0) ||
        (lVar8 = (**(code **)(*plVar6 + 0x928))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x930)),
        lVar8 == 0)) ||
       (plVar6 = (long *)FUN_0178c398(lVar8,*(undefined8 *)
                                             System_Xml_Schema_Numeric10FacetsChecker_TypeInfo,0x18,
                                      0), param_1 == (long *)0x0)) goto LAB_01ca2b00;
    uVar5 = (**(code **)(*param_1 + 0x5b8))(param_1,*(undefined8 *)(*param_1 + 0x5c0));
    if ((uVar5 & 1) != 0) {
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
      if (plVar7 != (long *)0x0) {
        if ((param_2 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
LAB_01ca2b08:
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        uVar10 = *(uint *)(plVar7 + 3);
        if (uVar10 == 0) goto LAB_01ca2b04;
        plVar7[4] = param_2;
        if (param_3 != 0) {
          lVar4 = thunk_FUN_00d6225c(param_3,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar4 == 0) goto LAB_01ca2b08;
          uVar10 = *(uint *)(plVar7 + 3);
        }
        puVar2 = StringLiteral_9958;
        if (1 < uVar10) {
          plVar7[5] = param_3;
          local_60 = param_4 & 1;
          lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_60);
          if ((lVar4 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_01ca2b08;
          uVar10 = *(uint *)(plVar7 + 3);
          if (2 < uVar10) {
            plVar7[6] = lVar4;
            if (param_5 != 0) {
              lVar4 = thunk_FUN_00d6225c(param_5,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar4 == 0) goto LAB_01ca2b08;
              uVar10 = *(uint *)(plVar7 + 3);
            }
            if (3 < uVar10) {
              plVar7[7] = param_5;
              if (plVar6 != (long *)0x0) {
                plVar6 = (long *)FUN_016ac474(plVar6,0,plVar7,0);
                if (plVar6 == (long *)0x0) {
                  return (long *)0x0;
                }
                bVar1 = *(byte *)(*(long *)PTR_DAT_033ee8a0 + 300);
                if ((bVar1 <= *(byte *)(*plVar6 + 300)) &&
                   (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_033ee8a0)) {
                  return plVar6;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              goto LAB_01ca2b00;
            }
          }
        }
LAB_01ca2b04:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      goto LAB_01ca2b00;
    }
    uVar11 = *(undefined8 *)PTR_DAT_033ecc98;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01780344(uVar11,0);
    if (plVar6 == (long *)0x0) goto LAB_01ca2b00;
    lVar8 = (**(code **)(*plVar6 + 0x448))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x450));
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      uVar11 = *(undefined8 *)Method_System_Text_DecoderNLS_GetCharCount__;
      lVar9 = thunk_FUN_00d6225c(lVar8,uVar11);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar8,uVar11);
      }
    }
    local_68 = lVar9;
    FUN_0125440c(lVar4,param_1,lVar9,
                 *(undefined8 *)Method_System_Net_Configuration_HttpWebRequestElement__ctor__);
  }
  if (local_68 != 0) {
    local_54[0] = param_4 & 1;
    (**(code **)(local_68 + 0x18))
              (*(undefined8 *)(local_68 + 0x40),param_2,param_3,local_54,param_5,&local_60,
               *(undefined8 *)(local_68 + 0x28));
    return (long *)CONCAT71(uStack_5f,local_60);
  }
LAB_01ca2b00:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


