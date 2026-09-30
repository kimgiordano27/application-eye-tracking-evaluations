/*
FUNCTION_NAME: FUN_0632a004
ENTRY_POINT: 0632a004
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_4
*/


long FUN_0632a004(ulong param_1,undefined8 param_2)

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
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar14;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d35cb8);
    FUN_02f07e70(PTR_DAT_06d97288);
    FUN_02f07e70(Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0>_var);
    FUN_02f07e70(PTR_DAT_06d96f38);
    FUN_02f07e70(PTR_DAT_06d96f40);
    FUN_02f07e70(PTR_DAT_06d96f48);
    FUN_02f07e70(PTR_DAT_06d72ae0);
    FUN_02f07e70(PlayFab_DataModels_InitiateFileUploadsRequest_var);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1>_var);
    FUN_02f07e70(Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1,_TParam2>_var
                );
    FUN_02f07e70(
                Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3>_var
                );
    FUN_02f07e70(
                Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var
                );
    FUN_02f07e70(System_ComponentModel_Design_Serialization_InstanceDescriptor_var);
    FUN_02f07e70(Unity_VisualScripting_InstanceActionInvoker<TTarget>_var);
    FUN_02f07e70(Unity_VisualScripting_InstanceFieldAccessor<TTarget,_TField>_var);
    *(undefined1 *)(unaff_x20 + 0x11c) = 1;
  }
  lVar10 = thunk_FUN_02ef1808(*unaff_x21);
  FUN_05645a04(lVar10,0);
  puVar2 = PlayFab_DataModels_InitiateFileUploadsRequest_var;
  puVar1 = PTR_DAT_06d96f38;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = param_2;
    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x10),param_2);
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_06291100(lVar11,0);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar12 = *(long *)puVar2;
    }
    puVar9 = Unity_VisualScripting_InstanceFieldAccessor<TTarget,_TField>_var;
    puVar8 = System_ComponentModel_Design_Serialization_InstanceDescriptor_var;
    puVar7 = 
    Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var
    ;
    puVar6 = 
    Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1,_TParam2,_TParam3>_var;
    puVar5 = Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1,_TParam2>_var;
    puVar4 = Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0>_var;
    puVar3 = PTR_DAT_06d72ae0;
    puVar2 = PTR_DAT_06d35cb8;
    puVar1 = PTR_DAT_06d01eb0;
    if (lVar11 != 0) {
      FUN_062991b8(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20),
                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x28),0);
      uVar14 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar14 = FUN_056109c0(uVar14,0);
      FUN_062a3ee8(lVar11,uVar14,0);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_05130ef0(uVar14,lVar10,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar11 + 0x48) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x48),uVar14);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_04c04c88(uVar14,lVar10,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar11 + 0x50) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x50),uVar14);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_05130ef0(uVar14,lVar10,*(undefined8 *)puVar7,0);
      *(undefined8 *)(lVar11 + 0x80) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x80),uVar14);
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_04c04c88(uVar14,lVar10,*(undefined8 *)puVar8,0);
      *(undefined8 *)(lVar11 + 0x88) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x88),uVar14);
      lVar10 = *(long *)puVar9;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar10 = *(long *)puVar9;
      }
      lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar12 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar10 = *(long *)puVar9;
        }
        uVar14 = **(undefined8 **)(lVar10 + 0xb8);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d97288);
        FUN_04cf3864(lVar12,uVar14,
                     *(undefined8 *)
                      Unity_VisualScripting_InstanceActionInvoker<TTarget,_TParam0,_TParam1>_var,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
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


