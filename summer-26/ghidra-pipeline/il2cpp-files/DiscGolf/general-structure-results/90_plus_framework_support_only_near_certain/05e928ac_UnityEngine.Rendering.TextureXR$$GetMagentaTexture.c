/*
FUNCTION_NAME: UnityEngine.Rendering.TextureXR$$GetMagentaTexture
ENTRY_POINT: 05e928ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_16;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Rendering_TextureXR__GetMagentaTexture(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong uVar11;
  uint unaff_w26;
  undefined8 *unaff_x27;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x29;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x308));
  FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_02d965b8(PTR_DAT_06a0e4a8);
  FUN_02d965b8(Method_Unity_Collections_NativeArray<PacketBuffer>__ctor__);
  FUN_02d965b8(Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>__ctor__);
  FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__)
  ;
  FUN_02d965b8(PTR_DAT_069fc720);
  *(undefined1 *)(unaff_x21 + 0xc9f) = 1;
  plVar8 = (long *)(unaff_x20 + 0x20);
  lVar13 = *plVar8;
  plVar9 = (long *)(unaff_x20 + 0x30);
  lVar10 = *plVar9;
  uVar3 = FUN_02d966a4(*unaff_x29,unaff_w26);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  LeanTween__value();
  lVar4 = FUN_02d966a4(*unaff_x27,unaff_w26);
  *plVar8 = lVar4;
  LeanTween__value(plVar8,lVar4);
  lVar4 = thunk_FUN_02dd3144(*unaff_x25);
  FUN_04eda970(lVar4,*unaff_x24);
  *plVar9 = lVar4;
  LeanTween__value(plVar9,lVar4);
  puVar1 = Method_Unity_Collections_NativeArray<NetworkEndpoint>__ctor__;
  if (0 < (int)unaff_w26) {
    uVar11 = 0;
    lVar4 = 0x20;
    do {
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05e92acc;
      uVar5 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                        (*(long *)(unaff_x20 + 0x50),*unaff_x19,*(undefined8 *)puVar1);
      if ((uVar5 & 1) != 0) {
        if (((*(long *)(unaff_x20 + 0x50) == 0) ||
            (lVar6 = FUN_04f94af4(*(long *)(unaff_x20 + 0x50),*unaff_x19,
                                  *(undefined8 *)
                                   Method_Unity_Collections_NativeArray<PacketBuffer>__ctor__),
            lVar10 == 0)) ||
           (uVar2 = FUN_04edb670(lVar10,lVar6,*(undefined8 *)PTR_DAT_06a0e4a8), lVar13 == 0))
        goto LAB_05e92acc;
        if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_05e92ad0;
        if (*plVar9 == 0) {
LAB_05e92acc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar3 = *(undefined8 *)(lVar13 + (ulong)uVar2 * 8 + 0x20);
        FUN_04edb6dc(*plVar9,lVar6,uVar11 & 0xffffffff,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>__ctor__);
        lVar7 = *plVar8;
        if (lVar7 == 0) goto LAB_05e92acc;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_05e92ad0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        *(undefined8 *)(lVar7 + lVar4) = uVar3;
        LeanTween__value(lVar7 + lVar4,uVar3);
        plVar12 = *(long **)(unaff_x20 + 0x28);
        if (plVar12 == (long *)0x0) goto LAB_05e92acc;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0)) {
          uVar3 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar3,0);
        }
        if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_05e92ad0;
        *(long *)((long)plVar12 + lVar4) = lVar6;
        LeanTween__value((long)plVar12 + lVar4,lVar6);
      }
      uVar11 = uVar11 + 1;
      unaff_x19 = unaff_x19 + 1;
      lVar4 = lVar4 + 8;
    } while (unaff_w26 != uVar11);
  }
  return;
}


