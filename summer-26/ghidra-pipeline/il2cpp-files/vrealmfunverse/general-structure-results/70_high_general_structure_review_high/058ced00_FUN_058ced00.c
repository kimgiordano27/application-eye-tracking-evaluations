/*
FUNCTION_NAME: FUN_058ced00
ENTRY_POINT: 058ced00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_2
*/


void FUN_058ced00(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
                    /* try { // try from 058ced34 to 059cede3 has its CatchHandler @ 058ced34
                       catch() { ... } // from try @ 058ced34 with catch @ 058ced34
                       catch() { ... } // from try @ 058cee04 with catch @ 058ced34
                       catch() { ... } // from try @ 058cee38 with catch @ 058ced34
                       catch() { ... } // from try @ 058cee5c with catch @ 058ced34
                       catch() { ... } // from try @ 058cee80 with catch @ 058ced34 */
  if (DAT_066d3318 == '\0') {
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Type>_Enqueue__);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Type>_Dequeue__);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Type>_get_Count__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Queue<Tuple<SendOrPostCallback,_object>>_get_Count__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Type>__ctor__);
    FUN_02b3c81c(PTR_DAT_0631f388);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Event>__ctor__);
    FUN_02b3c81c(Method_Unity_Properties_Property<Vector3Int,_int>__ctor__);
    FUN_02b3c81c(Method_Unity_Properties_Property<Vector4,_float>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Vector3>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Vector3>_Dequeue__);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<EventBase>_Enqueue__);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Vector3>_Enqueue__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<Vector3>_GetEnumerator__);
    DAT_066d3318 = '\x01';
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_94 = 0;
  uVar7 = FUN_056d9778(2,0);
  FUN_03aaf004(&local_68,4,uVar7,
               *(undefined8 *)Method_System_Collections_Generic_Queue<EventBase>_Enqueue__);
  uStack_88 = param_1[1];
  local_90 = *param_1;
  FUN_03a2007c(&local_b0,&local_90,
               *(undefined8 *)Method_System_Collections_Generic_Queue<Type>__ctor__);
  puVar4 = Method_System_Collections_Generic_Queue<Vector3>_GetEnumerator__;
  puVar3 = Method_System_Collections_Generic_Queue<Type>_Dequeue__;
  puVar2 = PTR_DAT_0631f388;
  iVar8 = (int)local_a0 + 1;
  uStack_78 = plStack_a8;
  uVar6 = uStack_78;
  local_80 = local_b0;
  uStack_78._0_4_ = (int)plStack_a8;
  local_b0 = 0;
  local_70._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
  local_70 = CONCAT44(local_70._4_4_,iVar8);
  lVar10 = *(long *)Method_System_Collections_Generic_Queue<Type>_Dequeue__;
  bVar1 = iVar8 < (int)uStack_78;
  plStack_a8 = &local_80;
  uStack_78 = uVar6;
  if (bVar1) {
    do {
      lVar5 = local_80;
      if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      local_94 = *(undefined4 *)(lVar5 + (long)iVar8 * 4);
      local_70 = CONCAT44(local_94,(int)local_70);
      uVar9 = FUN_03cc9814(param_2,local_94,*(undefined8 *)puVar4);
      if ((uVar9 & 1) != 0) {
        FUN_03aaf1f4(&local_68,&local_94,*(undefined8 *)puVar2);
      }
      iVar8 = (int)local_70 + 1;
      lVar10 = *(long *)puVar3;
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      bVar1 = iVar8 < (int)uStack_78;
    } while (bVar1);
  }
  local_70 = local_70 & 0xffffffff;
  FUN_0471da80(&local_80,*(undefined8 *)Method_System_Collections_Generic_Queue<Type>_Enqueue__);
  lVar10 = local_68;
  if (local_68 != 0) {
    if ((*(ushort *)
          (*(long *)(*(long *)Method_System_Collections_Generic_Queue<Vector3>_Enqueue__ + 0x20) +
          0x135) & 1) == 0) {
      FUN_02b76218();
    }
    lVar5 = local_68;
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
    ;
    if (*(int *)(lVar10 + 8) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      puVar3 = Method_System_Collections_Generic_Queue<Vector3>_Dequeue__;
      FUN_03aaf678(param_4,*(undefined4 *)(lVar5 + 8),0,
                   *(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>_Dequeue__);
      lVar10 = local_68;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aaf678(param_3,*(undefined4 *)(lVar10 + 8),0,*(undefined8 *)puVar3);
      lVar10 = local_68;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aabeb8(param_5,*(undefined4 *)(lVar10 + 8),0,
                   *(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>__ctor__);
      puVar3 = Method_Unity_Properties_Property<Vector3Int,_int>__ctor__;
      auVar11 = FUN_03aaf56c(&local_68,
                             *(undefined8 *)
                              Method_Unity_Properties_Property<Vector3Int,_int>__ctor__);
      auVar12 = FUN_03aaf56c(param_4,*(undefined8 *)puVar3);
      auVar13 = FUN_03aaf56c(param_3,*(undefined8 *)puVar3);
      auVar14 = FUN_03aabdac(param_5,*(undefined8 *)
                                      Method_System_Collections_Generic_Queue<Event>__ctor__);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue<Tuple<SendOrPostCallback,_object>>_get_Count__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar8 = FUN_05cce464(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,
                           auVar13._8_8_,auVar14._0_8_,auVar14._8_8_,0);
      puVar3 = Method_System_Collections_Generic_Queue<Vector3>_Dequeue__;
      FUN_03aaf678(param_4,iVar8,1,
                   *(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>_Dequeue__);
      lVar10 = local_68;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aaf678(param_3,*(int *)(lVar10 + 8) - iVar8,1,*(undefined8 *)puVar3);
      lVar10 = *param_3;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aabeb8(param_5,*(undefined4 *)(lVar10 + 8),1,
                   *(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>__ctor__);
    }
  }
  FUN_03aaf444(&local_68,*(undefined8 *)Method_Unity_Properties_Property<Vector4,_float>__ctor__);
  return;
}


