/*
FUNCTION_NAME: FUN_01ee70a0
ENTRY_POINT: 01ee70a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long * FUN_01ee70a0(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
                    /* catch() { ... } // from try @ 01ee6f0c with catch @ 01ee70a0 */
                    /* catch() { ... } // from try @ 01ee6d9c with catch @ 01ee70a4 */
                    /* catch() { ... } // from try @ 01ee6ecc with catch @ 01ee70a8 */
                    /* catch() { ... } // from try @ 01ee6d5c with catch @ 01ee70ac */
                    /* catch() { ... } // from try @ 01ee6e60 with catch @ 01ee70b0 */
                    /* try { // try from 01ee70c8 to 01fe70df has its CatchHandler @ 01ee7158 */
  if ((DAT_037800a5 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
                    /* try { // try from 01ee70e0 to 01fe7147 has its CatchHandler @ 01ee6c94 */
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(StringLiteral_6597);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_037800a5 = 1;
  }
  puVar6 = StringLiteral_6597;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec5b8(uVar7,uVar12,0);
    uVar12 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Dictionary<string,_PropertyInfo>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar12);
  }
  uVar7 = thunk_FUN_00d93c64(param_2,0);
  lVar11 = *(long *)puVar6;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar11 = *(long *)puVar6;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xc0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01789ac0(uVar7,uVar12,0);
  puVar3 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(param_1 + 0x18) == 0x1a) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Type>_Add__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = *(undefined8 *)puVar3;
      lVar11 = thunk_FUN_00d6225c(param_2,uVar7);
      if (lVar11 != 0) {
        plVar9 = (long *)FUN_01f6acd8(lVar11,0);
        return plVar9;
      }
LAB_01ee75e0:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2,uVar7);
    }
    if (*(int *)(param_1 + 0x18) == 0x1b) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = *(undefined8 *)puVar3;
      lVar11 = thunk_FUN_00d6225c(param_2,uVar7);
      if (lVar11 != 0) {
        plVar9 = (long *)FUN_01edb268(lVar11,0);
        return plVar9;
      }
      goto LAB_01ee75e0;
    }
  }
  lVar11 = *(long *)puVar6;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar6;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  uVar8 = FUN_01789ac0(uVar7,uVar12,0);
  if ((uVar8 & 1) == 0) {
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar6;
    }
    uVar8 = FUN_01eda168(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd0),0);
    puVar5 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
    if (((uVar8 & 1) != 0) && (*(int *)(param_1 + 0x18) == 0x1c)) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      bVar2 = *(byte *)(*(long *)puVar5 + 300);
      if ((bVar2 <= *(byte *)(*param_2 + 300)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) {
        plVar9 = (long *)FUN_01edb254(param_2,0);
        return plVar9;
      }
      goto LAB_01ee75d8;
    }
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar6;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    uVar8 = FUN_01789ac0(uVar7,uVar12,0);
    puVar4 = Newtonsoft_Json_Linq_JToken_TypeInfo;
    if ((uVar8 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0x11) {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar4 + 0x40)) {
          puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_2);
          plVar9 = (long *)FUN_01edb430(*puVar10,0);
          return plVar9;
        }
        goto LAB_01ee75d8;
      }
      if (iVar1 == 0x35) {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar4 + 0x40)) {
          puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_2);
          plVar9 = (long *)FUN_01edbe9c(*puVar10,0);
          return plVar9;
        }
        goto LAB_01ee75d8;
      }
      if (iVar1 == 0x36) {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar4 + 0x40)) {
          puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_2);
          plVar9 = (long *)FUN_01edb3d0(*puVar10,0);
          return plVar9;
        }
        goto LAB_01ee75d8;
      }
    }
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar6;
    }
    uVar8 = FUN_01eda168(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 200),0);
    puVar4 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    if (((uVar8 & 1) != 0) &&
       ((*(int *)(param_1 + 0x18) == 0x1d || (*(int *)(param_1 + 0x18) == 0x1e)))) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      bVar2 = *(byte *)(*(long *)puVar4 + 300);
      if ((bVar2 <= *(byte *)(*param_2 + 300)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
        plVar9 = (long *)FUN_01edbb60(param_2,param_3,0);
        return plVar9;
      }
      goto LAB_01ee75d8;
    }
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar6;
    }
    param_2 = (long *)FUN_01ee75ec(param_1,param_2,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48),
                                   param_3);
    if (param_2 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  if (*param_2 == *(long *)puVar3) {
    return param_2;
  }
LAB_01ee75d8:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(param_2);
}


