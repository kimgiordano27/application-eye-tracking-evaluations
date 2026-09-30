/*
FUNCTION_NAME: FUN_014e5998
ENTRY_POINT: 014e5998
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long FUN_014e5998(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = PTR_DAT_033edf28;
  if ((DAT_03776fb0 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0390);
    thunk_FUN_00d48444(Method_System_Collections_Hashtable_HashtableEnumerator_get_Key__);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_TypeBuilder_get_UnderlyingSystemType__);
    thunk_FUN_00d48444(UnityEngine_EventSystems_IDeselectHandler_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f41b0);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(PTR_DAT_033edf28);
    thunk_FUN_00d48444(Method_RCG_Tools_ScreenFade_FadeInWithTime__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13536);
    thunk_FUN_00d48444(StringLiteral_6090);
    thunk_FUN_00d48444(StringLiteral_8702);
    thunk_FUN_00d48444(
                      Method_Polenter_Serialization_Core_SharpSerializerSettings<AdvancedSharpSerializerBinarySettings>_get_AdvancedSettings__
                      );
    DAT_03776fb0 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_014e5d5c(lVar11);
  if ((uVar6 & 1) == 0) {
    lVar11 = FUN_015f5b28(*(undefined8 *)StringLiteral_6090,lVar11,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (lVar11 == 0) goto LAB_014e5cb0;
    uVar6 = FUN_01604784(lVar11,0x3f,0);
    if ((uVar6 & 1) == 0) {
      lVar11 = FUN_015f5b28(lVar11,*(undefined8 *)StringLiteral_8702,0);
      uVar6 = 1;
    }
    else {
      uVar6 = FUN_015fe15c(lVar11,0x3f,0);
      uVar6 = uVar6 & 0xffffffff;
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar7 = FUN_012998a8(*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_033f0390),
       puVar5 = Method_Meta_XR_MRUtilityKit_SerializationHelpers_Vector3ArrayConverter_ReadJson__,
       puVar4 = Method_System_Reflection_Emit_TypeBuilder_get_UnderlyingSystemType__,
       puVar3 = Method_RCG_Tools_ScreenFade_FadeInWithTime__,
       puVar2 = UnityEngine_EventSystems_IDeselectHandler_TypeInfo,
       puVar1 = System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo, lVar7 == 0
       )) goto LAB_014e5cb0;
    FUN_01311764(lVar7,&local_98,*(undefined8 *)PTR_DAT_033f41b0);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar8 = FUN_012c2b80(&local_80,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      uVar9 = FUN_00bc3fa8(&local_80,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01299bc0(*(long *)(param_1 + 0x20),uVar9,&local_98,*(undefined8 *)puVar5);
      uVar10 = local_98;
      uVar8 = FUN_015ff8a0(uVar9,0);
      if (((uVar8 & 1) == 0) && (uVar8 = FUN_015ff8a0(uVar10,0), (uVar8 & 1) == 0)) {
        if ((uVar6 & 1) == 0) {
          lVar11 = FUN_015f5b28(lVar11,*(undefined8 *)
                                        Method_Polenter_Serialization_Core_SharpSerializerSettings<AdvancedSharpSerializerBinarySettings>_get_AdvancedSettings__
                                ,0);
        }
        lVar7 = FUN_02898320(uVar10,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_01601fc0(lVar7,*(undefined8 *)StringLiteral_13536,*(undefined8 *)puVar3,0);
        lVar11 = FUN_0160073c(lVar11,uVar9,*(undefined8 *)puVar1,uVar10,0);
        uVar6 = 0;
      }
    }
    FUN_012c2b7c(&local_80,
                 *(undefined8 *)Method_System_Collections_Hashtable_HashtableEnumerator_get_Key__);
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__
                            );
  if (lVar7 != 0) {
    FUN_01fc3894(lVar7,lVar11,0);
    return lVar7;
  }
LAB_014e5cb0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


