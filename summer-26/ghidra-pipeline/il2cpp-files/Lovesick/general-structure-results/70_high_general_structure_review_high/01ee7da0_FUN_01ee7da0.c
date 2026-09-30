/*
FUNCTION_NAME: FUN_01ee7da0
ENTRY_POINT: 01ee7da0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


long * FUN_01ee7da0(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_58;
  
                    /* try { // try from 01ee7dc0 to 01fe7dc7 has its CatchHandler @ 01ee8000 */
  if ((DAT_037800a7 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
                    /* try { // try from 01ee7df0 to 01fe7df3 has its CatchHandler @ 01ee7fe0 */
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_TypeInfo);
                    /* try { // try from 01ee7e2c to 01fe7e37 has its CatchHandler @ 01ee7ff8 */
    thunk_FUN_00d48444(StringLiteral_6597);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_037800a7 = 1;
  }
  puVar10 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar10 = System_Collections_Generic_List<HashSet<Face>>_TypeInfo;
LAB_01ee8a6c:
    uVar13 = thunk_FUN_00d48444(puVar10);
    FUN_016ec5b8(uVar7,uVar13,0);
    uVar13 = thunk_FUN_00d48444(PTR_DAT_033ec8d0);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar13);
  }
                    /* try { // try from 01ee7e68 to 01fe7e6b has its CatchHandler @ 01ee7fe8 */
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
                    /* try { // try from 01ee7e6c to 01fe7e7b has its CatchHandler @ 01ee7ff0 */
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01789ac0(param_3,0,0);
  puVar5 = StringLiteral_6597;
  if ((uVar6 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar10 = StringLiteral_6417;
    goto LAB_01ee8a6c;
  }
  uVar7 = thunk_FUN_00d93c64(param_2,0);
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar11 = *(long *)puVar5;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x58);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 01ee7ecc to 01fe7ed3 has its CatchHandler @ 01ee7fe4 */
  uVar6 = FUN_01789ac0(param_3,uVar13,0);
  if ((uVar6 & 1) != 0) {
    param_3 = (long *)param_1[4];
  }
  lVar11 = *(long *)puVar5;
                    /* try { // try from 01ee7ee8 to 01fe7eef has its CatchHandler @ 01ee7fd8 */
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar5;
  }
                    /* try { // try from 01ee7f04 to 01fe7f0b has its CatchHandler @ 01ee7fd4 */
  uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xc0);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar10);
  }
  puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  uVar6 = FUN_01789ac0(param_3,uVar13,0);
  if ((uVar6 & 1) != 0) {
    lVar11 = *(long *)puVar5;
                    /* try { // try from 01ee7f34 to 01fe7f37 has its CatchHandler @ 01ee7fd0 */
                    /* try { // try from 01ee7f38 to 01fe7f3b has its CatchHandler @ 01ee7fcc */
    if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* try { // try from 01ee7f3c to 01fe7f3f has its CatchHandler @ 01ee7fc8 */
      thunk_FUN_00d32864();
                    /* try { // try from 01ee7f40 to 01fe7f43 has its CatchHandler @ 01ee7fc4 */
      lVar11 = *(long *)puVar5;
    }
                    /* try { // try from 01ee7f44 to 01fe7f47 has its CatchHandler @ 01ee7fc0 */
                    /* try { // try from 01ee7f48 to 01fe7f4b has its CatchHandler @ 01ee7fbc */
                    /* try { // try from 01ee7f4c to 01fe7f4f has its CatchHandler @ 01ee7fb8 */
                    /* try { // try from 01ee7f50 to 01fe7f53 has its CatchHandler @ 01ee7fb4 */
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xc0);
                    /* try { // try from 01ee7f54 to 01fe7f57 has its CatchHandler @ 01ee7fb0 */
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                    /* try { // try from 01ee7f58 to 01fe7f6b has its CatchHandler @ 01ee7c04 */
      thunk_FUN_00d32864(*(long *)puVar10);
    }
                    /* try { // try from 01ee7f6c to 01fe7f6f has its CatchHandler @ 01ee7fac */
    uVar6 = FUN_01789ac0(uVar7,uVar13,0);
                    /* try { // try from 01ee7f70 to 01fe7f73 has its CatchHandler @ 01ee7fa8 */
                    /* try { // try from 01ee7f74 to 01fe7f77 has its CatchHandler @ 01ee7fa0 */
                    /* try { // try from 01ee7f78 to 01fe7f7b has its CatchHandler @ 01ee7f9c */
                    /* try { // try from 01ee7f7c to 01fe7f7f has its CatchHandler @ 01ee7f98 */
                    /* try { // try from 01ee7f80 to 01fe7f83 has its CatchHandler @ 01ee7f94 */
                    /* try { // try from 01ee7f84 to 01fe7f8b has its CatchHandler @ 01ee7fa4 */
                    /* try { // try from 01ee7f8c to 01fe7f8f has its CatchHandler @ 01ee7f90 */
    if (((uVar6 & 1) != 0) && (((int)param_1[3] == 0x1a || ((int)param_1[3] == 0x1b)))) {
                    /* catch() { ... } // from try @ 01ee7f8c with catch @ 01ee7f90
                       try { // try from 01ee7f90 to 01fe8017 has its CatchHandler @ 01ee7c04 */
      uVar7 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
                    /* catch() { ... } // from try @ 01ee7f80 with catch @ 01ee7f94 */
                    /* catch() { ... } // from try @ 01ee7f7c with catch @ 01ee7f98 */
                    /* catch() { ... } // from try @ 01ee7f78 with catch @ 01ee7f9c */
      plVar8 = (long *)thunk_FUN_00d6225c(param_2,uVar7);
                    /* catch() { ... } // from try @ 01ee7f74 with catch @ 01ee7fa0 */
                    /* catch() { ... } // from try @ 01ee7f84 with catch @ 01ee7fa4 */
      if (plVar8 != (long *)0x0) {
        return plVar8;
      }
                    /* catch() { ... } // from try @ 01ee7f70 with catch @ 01ee7fa8 */
                    /* catch() { ... } // from try @ 01ee7f6c with catch @ 01ee7fac */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01ee7f54 with catch @ 01ee7fb0 */
      FUN_00da544c(param_2,uVar7);
    }
                    /* catch() { ... } // from try @ 01ee7f50 with catch @ 01ee7fb4 */
    lVar11 = *(long *)puVar5;
                    /* catch() { ... } // from try @ 01ee7f4c with catch @ 01ee7fb8 */
                    /* catch() { ... } // from try @ 01ee7f48 with catch @ 01ee7fbc */
    if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01ee7f44 with catch @ 01ee7fc0 */
      thunk_FUN_00d32864();
                    /* catch() { ... } // from try @ 01ee7f40 with catch @ 01ee7fc4 */
      lVar11 = *(long *)puVar5;
    }
                    /* catch() { ... } // from try @ 01ee7f3c with catch @ 01ee7fc8 */
                    /* catch() { ... } // from try @ 01ee7f38 with catch @ 01ee7fcc */
                    /* catch() { ... } // from try @ 01ee7f34 with catch @ 01ee7fd0 */
                    /* catch() { ... } // from try @ 01ee7f04 with catch @ 01ee7fd4 */
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48);
                    /* catch() { ... } // from try @ 01ee7ee8 with catch @ 01ee7fd8 */
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01ee7d88 with catch @ 01ee7fdc */
                    /* catch() { ... } // from try @ 01ee7c88 with catch @ 01ee7fe0
                       catch() { ... } // from try @ 01ee7df0 with catch @ 01ee7fe0 */
      thunk_FUN_00d32864(*(long *)puVar10);
    }
                    /* catch() { ... } // from try @ 01ee7ecc with catch @ 01ee7fe4 */
                    /* catch() { ... } // from try @ 01ee7e68 with catch @ 01ee7fe8 */
                    /* catch() { ... } // from try @ 01ee7d00 with catch @ 01ee7fec */
                    /* catch() { ... } // from try @ 01ee7e6c with catch @ 01ee7ff0 */
    uVar6 = FUN_01789ac0(uVar7,uVar13,0);
                    /* catch() { ... } // from try @ 01ee7d04 with catch @ 01ee7ff4 */
    if ((uVar6 & 1) != 0) {
                    /* catch() { ... } // from try @ 01ee7e2c with catch @ 01ee7ff8 */
                    /* catch() { ... } // from try @ 01ee7cc4 with catch @ 01ee7ffc */
                    /* catch() { ... } // from try @ 01ee7dc0 with catch @ 01ee8000 */
      if ((int)param_1[3] == 0x1a) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*param_2 == *(long *)puVar3) {
          plVar8 = (long *)FUN_01edacfc(param_2,0);
          return plVar8;
        }
        goto LAB_01ee8a98;
      }
      if ((int)param_1[3] == 0x1b) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 01ee8018 to 01fe802f has its CatchHandler @ 01ee80a8 */
          thunk_FUN_00d32864();
        }
        if (*param_2 == *(long *)puVar3) {
                    /* try { // try from 01ee8030 to 01fe8097 has its CatchHandler @ 01ee7c04 */
          plVar8 = (long *)FUN_01eda4e4(param_2,0);
          return plVar8;
        }
        goto LAB_01ee8a98;
      }
    }
  }
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar5;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 200);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar10);
  }
  uVar6 = FUN_01789ac0(param_3,uVar13,0);
  if ((uVar6 & 1) == 0) {
LAB_01ee81b0:
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    uVar6 = FUN_01789ac0(param_3,uVar13,0);
    if ((uVar6 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x478);
      uVar7 = *(undefined8 *)(*param_1 + 0x480);
      param_3 = param_2;
      goto LAB_01ee8208;
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd8);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    uVar6 = FUN_01789ac0(param_3,uVar13,0);
    if ((uVar6 & 1) != 0) {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      puVar4 = Newtonsoft_Json_Linq_JToken_TypeInfo;
      uVar6 = FUN_01789ac0(uVar7,uVar13,0);
      if ((uVar6 & 1) != 0) {
        iVar1 = (int)param_1[3];
        if (iVar1 == 0x11) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*param_2 != *(long *)puVar3) goto LAB_01ee8a98;
          local_58 = FUN_01eda6cc(param_2,0);
        }
        else if (iVar1 == 0x35) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*param_2 != *(long *)puVar3) goto LAB_01ee8a98;
          local_58 = FUN_01edb1f4(param_2,0);
        }
        else {
          if (iVar1 != 0x36) goto LAB_01ee8304;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*param_2 != *(long *)puVar3) goto LAB_01ee8a98;
          local_58 = FUN_01eda66c(param_2,0);
        }
        uVar7 = *(undefined8 *)puVar4;
LAB_01ee8770:
        plVar8 = (long *)thunk_FUN_00d61fa0(uVar7,&local_58);
        return plVar8;
      }
LAB_01ee8304:
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd8);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar6 = FUN_01789ac0(uVar7,uVar13,0);
      if (((uVar6 & 1) != 0) &&
         (((iVar1 = (int)param_1[3], iVar1 == 0x11 || (iVar1 == 0x35)) || (iVar1 == 0x36)))) {
        if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar4 + 0x40)) {
          puVar9 = (undefined8 *)thunk_FUN_00d624a0(param_2);
          local_58 = *puVar9;
          uVar7 = *(undefined8 *)puVar4;
          goto LAB_01ee8770;
        }
        goto LAB_01ee8a98;
      }
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd0);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    uVar6 = FUN_01789ac0(param_3,uVar13,0);
    if ((uVar6 & 1) != 0) {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar6 = FUN_01789ac0(uVar7,uVar13,0);
      if (((uVar6 & 1) != 0) && ((int)param_1[3] == 0x1c)) {
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Type>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*param_2 == *(long *)puVar3) {
          plVar8 = (long *)FUN_01f6f274(param_2,0);
          return plVar8;
        }
        goto LAB_01ee8a98;
      }
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      uVar6 = FUN_01eda168(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd0),0);
      if (((uVar6 & 1) != 0) && ((int)param_1[3] == 0x1c)) {
        lVar11 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
        if (*(byte *)(*param_2 + 300) < *(byte *)(lVar11 + 300)) goto LAB_01ee8a98;
        lVar12 = *(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar11 + 300) * 8;
        goto LAB_01ee819c;
      }
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    puVar4 = Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_TypeInfo;
    uVar6 = FUN_01789ac0(param_3,uVar13,0);
    if ((uVar6 & 1) != 0) {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xc0);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar6 = FUN_01789ac0(uVar7,uVar13,0);
      if (((uVar6 & 1) == 0) || (((int)param_1[3] != 0x1a && ((int)param_1[3] != 0x1b)))) {
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar5;
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar10);
        }
        uVar6 = FUN_01789ac0(uVar7,uVar13,0);
        if ((uVar6 & 1) != 0) {
          lVar11 = param_1[2];
          plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (plVar8 == (long *)0x0) goto LAB_01ee8aa0;
          if (*param_2 == *(long *)puVar3) {
            FUN_01eb6998(plVar8,lVar11,param_2,param_4,0);
            return plVar8;
          }
          goto LAB_01ee8a98;
        }
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar5;
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd8);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar10);
        }
        uVar6 = FUN_01789ac0(uVar7,uVar13,0);
        if (((uVar6 & 1) == 0) ||
           (((iVar1 = (int)param_1[3], iVar1 != 0x11 && (iVar1 != 0x35)) && (iVar1 != 0x36)))) {
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar5;
          }
          uVar6 = FUN_01eda168(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd0),0);
          if (((uVar6 & 1) == 0) || ((int)param_1[3] != 0x1c)) {
            lVar11 = *(long *)puVar5;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = *(long *)puVar5;
            }
            uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50);
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar10);
            }
            uVar6 = FUN_01789ac0(uVar7,uVar13,0);
            if ((uVar6 & 1) == 0) {
              lVar11 = *(long *)puVar5;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar11 = *(long *)puVar5;
              }
              uVar6 = FUN_01eda168(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 200),0);
              if (((uVar6 & 1) != 0) && (((int)param_1[3] == 0x1d || ((int)param_1[3] == 0x1e)))) {
                lVar11 = param_1[2];
                plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if (plVar8 != (long *)0x0) {
                  FUN_01eb6cec(plVar8,lVar11,param_2,param_4,0);
                  return plVar8;
                }
                goto LAB_01ee8aa0;
              }
              goto LAB_01ee8848;
            }
            goto LAB_01ee88d0;
          }
        }
      }
      lVar11 = param_1[2];
      plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (plVar8 != (long *)0x0) {
        FUN_01eb6c48(plVar8,lVar11,param_2,0);
        return plVar8;
      }
LAB_01ee8aa0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01ee8848:
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x90);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    uVar6 = FUN_01789ac0(param_3,uVar13,0);
    if ((uVar6 & 1) != 0) {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar6 = FUN_01789ac0(uVar7,uVar13,0);
      if ((uVar6 & 1) != 0) {
LAB_01ee88d0:
        lVar11 = *(long *)puVar4;
        lVar12 = *param_2;
        goto LAB_01ee81a0;
      }
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x90);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    uVar6 = FUN_01789ac0(param_3,uVar13,0);
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01789ac0(uVar7,uVar13,0);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01ee8a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (long *)(**(code **)(*param_1 + 0x518))
                                   (param_1,param_2,param_3,param_4,
                                    *(undefined8 *)(*param_1 + 0x520));
        return plVar8;
      }
      lVar11 = *(long *)puVar4;
      if (*param_2 == lVar11) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x218);
        uVar7 = *(undefined8 *)(lVar11 + 0x220);
        param_1 = param_2;
LAB_01ee8208:
                    /* WARNING: Could not recover jumptable at 0x01ee8224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (long *)(*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4,uVar7);
        return plVar8;
      }
      goto LAB_01ee8a98;
    }
    param_2 = (long *)(**(code **)(*param_1 + 0x508))
                                (param_1,param_2,uVar13,param_4,*(undefined8 *)(*param_1 + 0x510));
    if (param_2 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                       + 300);
      if ((*(byte *)(*param_2 + 300) < bVar2) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_2);
      }
    }
  }
  else {
    lVar11 = *(long *)puVar5;
                    /* try { // try from 01ee8098 to 01fe80a7 has its CatchHandler @ 01ee80a8 */
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
                    /* catch() { ... } // from try @ 01ee8018 with catch @ 01ee80a8
                       catch() { ... } // from try @ 01ee8098 with catch @ 01ee80a8 */
                    /* try { // try from 01ee80ac to 01fe80af has its CatchHandler @ 01ee80b8 */
                    /* try { // try from 01ee80b0 to 01fe80bb has its CatchHandler @ 01ee7c04 */
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48);
                    /* catch() { ... } // from try @ 01ee80ac with catch @ 01ee80b8 */
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    uVar6 = FUN_01789ac0(uVar7,uVar13,0);
    if (((uVar6 & 1) != 0) && (((int)param_1[3] == 0x1d || ((int)param_1[3] == 0x1e)))) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*param_2 == *(long *)puVar3) {
        plVar8 = (long *)FUN_01edae38(param_2,param_4,0);
        return plVar8;
      }
      goto LAB_01ee8a98;
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    uVar6 = FUN_01eda168(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 200),0);
    if (((uVar6 & 1) == 0) || (((int)param_1[3] != 0x1d && ((int)param_1[3] != 0x1e))))
    goto LAB_01ee81b0;
    lVar11 = *(long *)Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    if (*(byte *)(*param_2 + 300) < *(byte *)(lVar11 + 300)) goto LAB_01ee8a98;
    lVar12 = *(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar11 + 300) * 8;
LAB_01ee819c:
    lVar12 = *(long *)(lVar12 + -8);
LAB_01ee81a0:
    if (lVar12 != lVar11) {
LAB_01ee8a98:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2);
    }
  }
  return param_2;
}


