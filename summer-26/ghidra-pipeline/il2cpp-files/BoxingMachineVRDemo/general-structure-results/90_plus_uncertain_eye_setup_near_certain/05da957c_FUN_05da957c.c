/*
FUNCTION_NAME: FUN_05da957c
ENTRY_POINT: 05da957c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_05da957c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar1 = PTR_DAT_06763330;
  if ((DAT_06b82f35 & 1) == 0) {
    FUN_02d6084c(Method_System_ReadOnlySpan<ScriptableRenderer>_op_Implicit__);
    FUN_02d6084c(Method_System_ReadOnlySpan<ScriptableRendererData>_op_Implicit__);
    FUN_02d6084c(Method_System_ReadOnlySpan<float>_GetPinnableReference__);
    FUN_02d6084c(Method_System_ReadOnlySpan<float>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<SubPassDescriptor>_GetPinnableReference__);
    FUN_02d6084c(Method_System_ReadOnlySpan<SubPassDescriptor>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<SubviewOcclusionTest>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<ushort>__ctor__);
    FUN_02d6084c(Method_System_ReadOnlySpan<ushort>__ctor__);
    FUN_02d6084c(Method_System_ReadOnlySpan<ushort>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<ushort>_op_Implicit__);
    FUN_02d6084c(Method_System_ReadOnlySpan<ulong>__ctor__);
    FUN_02d6084c(PTR_DAT_0676c6d0);
    FUN_02d6084c(PTR_DAT_0676a758);
    FUN_02d6084c(PTR_DAT_06769ac8);
    FUN_02d6084c(Method_System_ReadOnlySpan<ResourceHandle>_get_Length__);
    FUN_02d6084c(PTR_DAT_0676c6d8);
    FUN_02d6084c(Method_System_ReadOnlySpan<ulong>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_06763330);
    FUN_02d6084c(Method_System_ReadOnlySpan<ulong>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_06769ab8);
    FUN_02d6084c(Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__);
    FUN_02d6084c(Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__);
    FUN_02d6084c(Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__);
    DAT_06b82f35 = 1;
  }
  puVar12 = Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__;
  puVar11 = Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__;
  puVar10 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__;
  puVar9 = Method_System_ReadOnlySpan<ulong>_get_Length__;
  puVar8 = Method_System_ReadOnlySpan<ulong>_GetPinnableReference__;
  puVar7 = Method_System_ReadOnlySpan<ScriptableRenderer>_op_Implicit__;
  puVar6 = PTR_DAT_0676c6d8;
  puVar5 = PTR_DAT_0676c6d0;
  puVar4 = PTR_DAT_0676a758;
  puVar3 = PTR_DAT_06769ac8;
  puVar2 = PTR_DAT_06769ab8;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    lVar14 = FUN_035d1fbc(param_1,*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_0676a758);
    if (lVar14 != 0) {
      FUN_05da9378();
      *(long *)(param_1 + 0x90) = lVar14;
      thunk_FUN_02dd37b4((long *)(param_1 + 0x90),lVar14);
      lVar14 = FUN_035d1fbc(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
      if (lVar14 != 0) {
        FUN_05da9378();
        *(long *)(param_1 + 0x98) = lVar14;
        thunk_FUN_02dd37b4((long *)(param_1 + 0x98),lVar14);
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_04d61e54(uVar13,param_1,*(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__,0);
        uVar13 = FUN_035d2be4(param_1,*(undefined8 *)puVar8,uVar13,*(undefined8 *)puVar6);
        *(undefined8 *)(param_1 + 0xa8) = uVar13;
        thunk_FUN_02dd37b4();
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_04d61e54(uVar13,param_1,*(undefined8 *)Method_System_ReadOnlySpan<ushort>_get_Length__,0
                    );
        uVar13 = FUN_035d2be4(param_1,*(undefined8 *)puVar12,uVar13,*(undefined8 *)puVar6);
        *(undefined8 *)(param_1 + 0xb0) = uVar13;
        thunk_FUN_02dd37b4();
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_04d61e54(uVar13,param_1,*(undefined8 *)Method_System_ReadOnlySpan<ushort>_op_Implicit__,
                     0);
        uVar13 = FUN_035d2be4(param_1,*(undefined8 *)puVar10,uVar13,*(undefined8 *)puVar6);
        *(undefined8 *)(param_1 + 0xb8) = uVar13;
        thunk_FUN_02dd37b4();
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_04d61e54(uVar13,param_1,*(undefined8 *)Method_System_ReadOnlySpan<ulong>__ctor__,0);
        uVar13 = FUN_035d2be4(param_1,*(undefined8 *)puVar11,uVar13,*(undefined8 *)puVar6);
        *(undefined8 *)(param_1 + 0xc0) = uVar13;
        thunk_FUN_02dd37b4();
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_04d61e54(uVar13,param_1,
                     *(undefined8 *)Method_System_ReadOnlySpan<ScriptableRendererData>_op_Implicit__
                     ,0);
        uVar13 = FUN_035d2be4(param_1,*(undefined8 *)puVar9,uVar13,*(undefined8 *)puVar6);
        *(undefined8 *)(param_1 + 200) = uVar13;
        thunk_FUN_02dd37b4();
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_04d61e54(uVar13,param_1,
                     *(undefined8 *)Method_System_ReadOnlySpan<float>_GetPinnableReference__,0);
        uVar13 = FUN_035d2be4(param_1,*(undefined8 *)
                                       Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__
                              ,uVar13,*(undefined8 *)puVar6);
LAB_05da9b74:
        *(undefined8 *)(param_1 + 0xd0) = uVar13;
        thunk_FUN_02dd37b4();
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa8),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xb0),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb0),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xb8),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb8),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xc0),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xc0),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 200),0)
        ;
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 200),0)
        ;
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xd0),0
                          );
        thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xd0),0
                          );
        return;
      }
    }
  }
  else {
    uVar13 = FUN_035d2028(param_1,*(undefined8 *)puVar1,
                          *(undefined8 *)Method_System_ReadOnlySpan<ResourceHandle>_get_Length__);
    *(undefined8 *)(param_1 + 0x90) = uVar13;
    thunk_FUN_02dd37b4();
    uVar13 = FUN_035d2448(0,param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x98) = uVar13;
    thunk_FUN_02dd37b4();
    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    FUN_04d61e54(uVar13,param_1,*(undefined8 *)puVar7,0);
    lVar14 = FUN_035d2be4(param_1,*(undefined8 *)puVar8,uVar13,*(undefined8 *)puVar6);
    puVar1 = Method_System_ReadOnlySpan<float>_get_Length__;
    if (lVar14 != 0) {
      uVar13 = FUN_05dc064c(lVar14,0);
      *(undefined8 *)(param_1 + 0xa8) = uVar13;
      thunk_FUN_02dd37b4();
      uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
      FUN_04d61e54(uVar13,param_1,*(undefined8 *)puVar1,0);
      lVar14 = FUN_035d2be4(param_1,*(undefined8 *)puVar12,uVar13,*(undefined8 *)puVar6);
      puVar1 = Method_System_ReadOnlySpan<SubPassDescriptor>_GetPinnableReference__;
      if (lVar14 != 0) {
        uVar13 = FUN_05dc064c(lVar14,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar13;
        thunk_FUN_02dd37b4();
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_04d61e54(uVar13,param_1,*(undefined8 *)puVar1,0);
        lVar14 = FUN_035d2be4(param_1,*(undefined8 *)puVar10,uVar13,*(undefined8 *)puVar6);
        puVar1 = Method_System_ReadOnlySpan<SubPassDescriptor>_get_Length__;
        if (lVar14 != 0) {
          uVar13 = FUN_05dc064c(lVar14,0);
          *(undefined8 *)(param_1 + 0xb8) = uVar13;
          thunk_FUN_02dd37b4();
          uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
          FUN_04d61e54(uVar13,param_1,*(undefined8 *)puVar1,0);
          lVar14 = FUN_035d2be4(param_1,*(undefined8 *)puVar11,uVar13,*(undefined8 *)puVar6);
          puVar1 = Method_System_ReadOnlySpan<SubviewOcclusionTest>_get_Length__;
          if (lVar14 != 0) {
            uVar13 = FUN_05dc064c(lVar14,0);
            *(undefined8 *)(param_1 + 0xc0) = uVar13;
            thunk_FUN_02dd37b4();
            uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
            FUN_04d61e54(uVar13,param_1,*(undefined8 *)puVar1,0);
            lVar14 = FUN_035d2be4(param_1,*(undefined8 *)puVar9,uVar13,*(undefined8 *)puVar6);
            puVar1 = Method_System_ReadOnlySpan<ushort>__ctor__;
            if (lVar14 != 0) {
              uVar13 = FUN_05dc064c(lVar14,0);
              *(undefined8 *)(param_1 + 200) = uVar13;
              thunk_FUN_02dd37b4();
              uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
              FUN_04d61e54(uVar13,param_1,*(undefined8 *)puVar1,0);
              lVar14 = FUN_035d2be4(param_1,*(undefined8 *)
                                             Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__
                                    ,uVar13,*(undefined8 *)puVar6);
              if (lVar14 != 0) {
                uVar13 = FUN_05dc064c(lVar14,0);
                goto LAB_05da9b74;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


