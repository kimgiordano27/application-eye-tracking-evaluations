/*
FUNCTION_NAME: FUN_05e92854
ENTRY_POINT: 05e92854
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05e92854(long param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__;
  puVar1 = PTR_DAT_069fc720;
  if ((DAT_06dc3c9f & 1) == 0) {
    FUN_02d965b8(Method_Unity_Collections_NativeArray<NetworkEndpoint>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02d965b8(PTR_DAT_06a0e4a8);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<PacketBuffer>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                );
    FUN_02d965b8(PTR_DAT_069fc720);
    DAT_06dc3c9f = 1;
  }
  plVar11 = (long *)(param_1 + 0x20);
  lVar16 = *plVar11;
  plVar12 = (long *)(param_1 + 0x30);
  lVar13 = *plVar12;
  uVar6 = FUN_02d966a4(*(undefined8 *)puVar1,param_3);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  LeanTween__value();
  lVar7 = FUN_02d966a4(*(undefined8 *)puVar2,param_3);
  *plVar11 = lVar7;
  LeanTween__value(plVar11,lVar7);
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_04eda970(lVar7,*(undefined8 *)puVar4);
  *plVar12 = lVar7;
  LeanTween__value(plVar12,lVar7);
  puVar1 = Method_Unity_Collections_NativeArray<NetworkEndpoint>__ctor__;
  if (0 < (int)param_3) {
    uVar14 = 0;
    lVar7 = 0x20;
    do {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_05e92acc;
      uVar8 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                        (*(long *)(param_1 + 0x50),*param_2,*(undefined8 *)puVar1);
      if ((uVar8 & 1) != 0) {
        if (((*(long *)(param_1 + 0x50) == 0) ||
            (lVar9 = FUN_04f94af4(*(long *)(param_1 + 0x50),*param_2,
                                  *(undefined8 *)
                                   Method_Unity_Collections_NativeArray<PacketBuffer>__ctor__),
            lVar13 == 0)) ||
           (uVar5 = FUN_04edb670(lVar13,lVar9,*(undefined8 *)PTR_DAT_06a0e4a8), lVar16 == 0))
        goto LAB_05e92acc;
        if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_05e92ad0;
        if (*plVar12 == 0) {
LAB_05e92acc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = *(undefined8 *)(lVar16 + (ulong)uVar5 * 8 + 0x20);
        FUN_04edb6dc(*plVar12,lVar9,uVar14 & 0xffffffff,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>__ctor__);
        lVar10 = *plVar11;
        if (lVar10 == 0) goto LAB_05e92acc;
        if (*(uint *)(lVar10 + 0x18) <= uVar14) {
LAB_05e92ad0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        *(undefined8 *)(lVar10 + lVar7) = uVar6;
        LeanTween__value(lVar10 + lVar7,uVar6);
        plVar15 = *(long **)(param_1 + 0x28);
        if (plVar15 == (long *)0x0) goto LAB_05e92acc;
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
          uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar6,0);
        }
        if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_05e92ad0;
        *(long *)((long)plVar15 + lVar7) = lVar9;
        LeanTween__value((long)plVar15 + lVar7,lVar9);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      lVar7 = lVar7 + 8;
    } while (param_3 != uVar14);
  }
  return;
}


