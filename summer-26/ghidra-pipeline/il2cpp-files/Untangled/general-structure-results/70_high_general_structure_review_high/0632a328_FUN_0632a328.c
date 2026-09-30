/*
FUNCTION_NAME: FUN_0632a328
ENTRY_POINT: 0632a328
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_4
*/


long FUN_0632a328(undefined8 param_1)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  
  puVar1 = Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TResult>_var;
  if ((DAT_071cd11d & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d35cb8);
    FUN_02f07e70(PTR_DAT_06d97288);
    FUN_02f07e70(Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TResult>_var);
    FUN_02f07e70(PTR_DAT_06d96f38);
    FUN_02f07e70(PTR_DAT_06d96f40);
    FUN_02f07e70(PTR_DAT_06d96f48);
    FUN_02f07e70(PTR_DAT_06d72ae0);
    FUN_02f07e70(PlayFab_DataModels_InitiateFileUploadsRequest_var);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(
                Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TResult>_var
                );
    FUN_02f07e70(
                Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TResult>_var
                );
    FUN_02f07e70(
                Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TResult>_var
                );
    FUN_02f07e70(
                Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TParam4,_TResult>_var
                );
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Utils_InstanceHandle_var);
    FUN_02f07e70(Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TResult>_var);
    FUN_02f07e70(Unity_VisualScripting_InstanceFieldAccessor<TTarget,_TField>_var);
    DAT_071cd11d = 1;
  }
  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_05645a04(lVar10,0);
  puVar2 = PlayFab_DataModels_InitiateFileUploadsRequest_var;
  puVar1 = PTR_DAT_06d96f38;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = param_1;
    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x10),param_1);
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_06291100(lVar11,0);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar12 = *(long *)puVar2;
    }
    puVar9 = Meta_XR_ImmersiveDebugger_Utils_InstanceHandle_var;
    puVar8 = 
    Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TParam4,_TResult>_var
    ;
    puVar7 = 
    Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TResult>_var
    ;
    puVar6 = 
    Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TResult>_var;
    puVar5 = Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TResult>_var;
    puVar4 = Unity_VisualScripting_InstanceFieldAccessor<TTarget,_TField>_var;
    puVar3 = PTR_DAT_06d72ae0;
    puVar2 = PTR_DAT_06d35cb8;
    puVar1 = PTR_DAT_06d01eb0;
    if (lVar11 != 0) {
      FUN_062991b8(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x30),
                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x38),0);
      uVar14 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar14 = FUN_056109c0(uVar14,0);
      FUN_062a3ee8(lVar11,uVar14,0);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_05130ef0(uVar14,lVar10,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar11 + 0x48) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x48),uVar14);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_04c04c88(uVar14,lVar10,*(undefined8 *)puVar7,0);
      *(undefined8 *)(lVar11 + 0x50) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x50),uVar14);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_05130ef0(uVar14,lVar10,*(undefined8 *)puVar8,0);
      *(undefined8 *)(lVar11 + 0x80) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x80),uVar14);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_04c04c88(uVar14,lVar10,*(undefined8 *)puVar9,0);
      *(undefined8 *)(lVar11 + 0x88) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x88),uVar14);
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar10 = *(long *)puVar4;
      }
      lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
      if (lVar12 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar10 = *(long *)puVar4;
        }
        uVar14 = **(undefined8 **)(lVar10 + 0xb8);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d97288);
        FUN_04cf3864(lVar12,uVar14,
                     *(undefined8 *)
                      Unity_VisualScripting_InstanceFunctionInvoker<TTarget,_TParam0,_TParam1,_TResult>_var
                     ,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar13 = lVar12;
        thunk_FUN_02f411dc(plVar13,lVar12);
      }
      *(long *)(lVar11 + 0x58) = lVar12;
      thunk_FUN_02f411dc((long *)(lVar11 + 0x58),lVar12);
      return lVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


