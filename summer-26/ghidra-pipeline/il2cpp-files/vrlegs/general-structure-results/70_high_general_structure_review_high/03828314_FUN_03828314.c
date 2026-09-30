/*
FUNCTION_NAME: FUN_03828314
ENTRY_POINT: 03828314
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_03828314(long param_1)

{
  undefined1 (*__src) [16];
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_1e0 [80];
  undefined8 local_190;
  undefined4 local_188;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined8 local_150 [2];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 local_114;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_04137de4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>_Add__)
    ;
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<Type,_ITweenPlugin>_Add__);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>__ctor__);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                );
    DAT_04137de4 = 1;
  }
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
  ;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
  ;
  puVar2 = PTR_DAT_03cbe438;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  if (*(int *)(param_1 + 200) == -1) {
    return;
  }
  auVar1 = ZEXT816(0);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_02215a88(*(long *)(param_1 + 0x18),*(int *)(param_1 + 200),&local_b0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                );
    iVar5 = FUN_022337d8(&local_b0,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    FUN_0367b7bc(0 < iVar5,0);
    iVar5 = FUN_022337d8(&local_a0,*(undefined8 *)puVar3);
    FUN_0367b7bc(0 < iVar5,0);
    __src = (undefined1 (*) [16])(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_a8;
    *(undefined8 *)(param_1 + 0x30) = local_b0;
    memcpy(local_150,&local_b0,0x50);
    *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_134,uStack_138);
    *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_13c,local_140);
    uVar8 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    *(undefined1 *)(param_1 + 0x76) = 1;
    *(byte *)(param_1 + 0x74) = uStack_70._4_1_ & 1;
    *(undefined1 *)(param_1 + 0x80) = 1;
    iVar5 = FUN_022337d8(__src,*(undefined8 *)puVar4);
    auVar1._8_8_ = local_c0._8_8_;
    auVar1._0_8_ = local_c0._0_8_;
    if (*(long *)(param_1 + 0xd0) != 0) {
      local_c0 = FUN_020a358c(*(long *)(param_1 + 0xd0),iVar5,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                             );
      puVar3 = Method_System_Collections_Generic_Dictionary<Type,_ITweenPlugin>_Add__;
      puVar2 = Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>__ctor__;
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          FUN_02233354(__src,iVar6,local_150,*(undefined8 *)puVar3);
          uStack_e8 = uStack_12c;
          uStack_d8 = uStack_11c;
          local_e0 = uStack_124;
          local_190 = local_150[0];
          local_188 = 0x3f800000;
          local_d0 = local_114;
          uStack_16c = uStack_12c;
          uStack_15c = uStack_11c;
          local_164 = uStack_124;
          local_154 = local_114;
          FUN_02233490(local_c0,iVar6,&local_190,*(undefined8 *)puVar2);
          iVar6 = iVar6 + 1;
        } while (iVar5 != iVar6);
      }
      *__src = local_c0;
      iVar5 = *(int *)(param_1 + 0x118);
      iVar6 = FUN_022337d8(__src,*(undefined8 *)puVar4);
      *(int *)(param_1 + 0x118) = iVar6 + iVar5;
      iVar5 = *(int *)(param_1 + 0x11c);
      iVar6 = FUN_022337d8(param_1 + 0x40,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                          );
      lVar7 = *(long *)(param_1 + 0x18);
      *(int *)(param_1 + 0x11c) = iVar6 + iVar5;
      memcpy(local_150,__src,0x50);
      puVar2 = Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>_Add__;
      auVar1 = local_c0;
      if (lVar7 != 0) {
        memcpy(auStack_1e0,local_150,0x50);
        FUN_01b5f01c(lVar7,auStack_1e0,*(undefined8 *)puVar2);
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)*__src = 0;
        return;
      }
    }
  }
  local_c0 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


