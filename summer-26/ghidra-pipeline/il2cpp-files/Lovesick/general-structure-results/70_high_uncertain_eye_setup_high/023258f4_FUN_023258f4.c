/*
FUNCTION_NAME: FUN_023258f4
ENTRY_POINT: 023258f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_023258f4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_033ecb50;
  if ((DAT_03781c72 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(PTR_DAT_033ecb50);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt16_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3907);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_ResolveType__
                      );
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<Type,_ComponentExtensions_ComponentCopyData>_TypeInfo
                      );
    DAT_03781c72 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x18) = 0xffffffffffffffff;
  FUN_017b46ec(lVar4,0);
  uVar1 = _UNK_02956e18;
  uVar6 = _DAT_02956e10;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  *param_2 = lVar4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_0202015c(param_1,*(undefined8 *)StringLiteral_3907,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = FUN_0201bf00(lVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = FUN_0201bd24(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar4 = FUN_01602744(lVar4,0x2e,0,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0176f230(*(undefined8 *)(lVar4 + 0x20),*param_2 + 0x10,0);
    if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0176f230(*(undefined8 *)(lVar4 + 0x28),*param_2 + 0x14,0);
    if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0176f230(*(undefined8 *)(lVar4 + 0x30),*param_2 + 0x18,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_0202015c(param_1,*(undefined8 *)
                                  Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_ResolveType__
                         ,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_0201bf00(lVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar7 = *param_2;
      uVar6 = FUN_0201bd24(lVar4,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined8 *)(lVar7 + 0x20) = uVar6;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_0202015c(param_1,*(undefined8 *)
                                  System_Collections_Generic_Dictionary<Type,_ComponentExtensions_ComponentCopyData>_TypeInfo
                         ,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *param_2;
    uVar5 = FUN_0201bf00(lVar4,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      FUN_0201bd24(lVar4,0);
      uVar3 = FUN_023268b8();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined4 *)(lVar7 + 0x1c) = uVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_0202015c(param_1,*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt16_TypeInfo
                         ,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_0201bf00(lVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar7 = *param_2;
      uVar6 = FUN_0201bd24(lVar4,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined8 *)(lVar7 + 0x28) = uVar6;
    }
    uVar6 = 1;
  }
  return uVar6;
}


