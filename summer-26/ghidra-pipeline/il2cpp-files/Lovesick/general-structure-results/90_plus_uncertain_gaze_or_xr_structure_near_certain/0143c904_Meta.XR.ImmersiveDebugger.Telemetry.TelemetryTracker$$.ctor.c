/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 0143c904
PROGRAM: Lovesick-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;validity_or_gating_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor
          (ulong param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x19;
  undefined4 unaff_w24;
  int *piVar12;
  uint unaff_w25;
  int iVar13;
  uint unaff_w26;
  int iVar14;
  float fVar15;
  uint uStack0000000000000054;
  undefined4 uStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  int iStack0000000000000068;
  int iStack000000000000006c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  ulong in_stack_00000090;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  uint uStack00000000000000d8;
  uint uStack00000000000000dc;
  undefined4 in_stack_00000160;
  
  iStack0000000000000068 = param_7;
  iStack000000000000006c = param_8;
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    thunk_FUN_00d48444(PTR_DAT_033f05c0);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_3457);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_System_Nullable<ErrorCode>_get_HasValue__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                      );
    thunk_FUN_00d48444(StringLiteral_9168);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_8754);
    thunk_FUN_00d48444(StringLiteral_387);
    thunk_FUN_00d48444(StringLiteral_13670);
    thunk_FUN_00d48444(StringLiteral_4419);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__);
    thunk_FUN_00d48444(System_Data_AutoIncrementBigInteger_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3ef8);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(StringLiteral_9909);
    thunk_FUN_00d48444(Method_MedleyBossPushPhase_StartPhase__);
    thunk_FUN_00d48444(System_Collections_Generic_List<Link>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eb498);
    thunk_FUN_00d48444(System_Xml_Serialization_XmlCustomFormatter_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5960);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<NavMeshSurface>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Edge>_ToArray__);
    thunk_FUN_00d48444(StringLiteral_2477);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_SpriteAsset>_TryGetValue__)
    ;
    thunk_FUN_00d48444(Method_System_Convert_ToString__);
    *(undefined1 *)(unaff_x19 + 0xa0e) = 1;
  }
  puVar3 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
  _uStack00000000000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b0 = 0;
  _uStack00000000000000b8 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000a4 = 0;
  if (param_4 != 0) {
    uVar7 = FUN_01325140(param_4,*(undefined8 *)StringLiteral_9168);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo;
    if (lVar8 != 0) {
      FUN_017b46ec(lVar8,0);
      *(undefined8 *)(lVar8 + 0x28) = uVar7;
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_033f3ef8;
      if (lVar8 != 0) {
        FUN_01320e50(lVar8,*(undefined8 *)
                            Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar3 = StringLiteral_302;
        if (lVar9 != 0) {
          FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_8754);
          puVar4 = Method_System_Convert_ToString__;
          if (*(int *)(param_2 + 0x10) < 4) {
            if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00da518c();
            }
          }
          else {
            if (param_3 == 0) goto code_r0x0143d75c;
            _uStack00000000000000b8 =
                 CONCAT44(*(undefined4 *)(param_3 + 0x18),uStack00000000000000b8);
            uVar7 = FUN_0176eb1c((long)&stack0x000000b8 + 4,0);
            uVar7 = FUN_015f5b28(*(undefined8 *)puVar4,uVar7,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            FUN_02660dac(uVar7,0);
          }
          puVar3 = StringLiteral_4419;
          uStack0000000000000054 = unaff_w26;
          uStack000000000000005c = unaff_w24;
          if (*(int *)(param_3 + 0x18) < 1) {
            iVar13 = 0;
            _iStack0000000000000060 = 0;
          }
          else {
            iVar14 = 0;
            iVar13 = 0;
            _iStack0000000000000060 = 0;
            do {
              puVar4 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
              FUN_0132138c(param_3,iVar14,&stack0x00000088,
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__);
              fVar15 = fStack0000000000000088;
              FUN_0132138c(param_3,iVar14,&stack0x00000088,*(undefined8 *)puVar4);
              fVar5 = fStack000000000000008c;
              FUN_0132138c(param_4,iVar14,&stack0x00000088,*(undefined8 *)puVar3);
              uVar11 = _fStack0000000000000088;
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
              if (lVar10 == 0) goto code_r0x0143d75c;
              iVar1 = -0x80000000;
              if (fVar15 != INFINITY) {
                iVar1 = (int)fVar15;
              }
              iVar2 = -0x80000000;
              if (fVar5 != INFINITY) {
                iVar2 = (int)fVar5;
              }
              FUN_017b46ec(lVar10,0);
              iVar1 = ((uint)(uVar11 >> 0x1f) & 0xfffffffe) + iVar1;
              iVar2 = iVar2 + (int)uVar11 * 2;
              if (iVar1 <= iStack0000000000000068) {
                iVar1 = iStack0000000000000068;
              }
              *(int *)(lVar10 + 0x14) = iVar1;
              if (iVar2 <= iStack000000000000006c) {
                iVar2 = iStack000000000000006c;
              }
              *(int *)(lVar10 + 0x10) = iVar14;
              piVar12 = (int *)(lVar10 + 0x18);
              *piVar12 = iVar2;
              if (*(int *)(param_2 + 0x18) == 1) {
                FUN_0132138c(param_4,iVar14,&stack0x00000088,*(undefined8 *)puVar3);
                iVar2 = iVar2 + (int)fStack0000000000000088 * -2;
                *(int *)(lVar10 + 0x1c) = iVar13;
                *(undefined4 *)(lVar10 + 0x20) = 0;
                *(int *)(lVar10 + 0x18) = iVar2;
                _fStack0000000000000088 = 0;
                in_stack_00000090 = 0;
                FUN_0268834c((float)*(int *)(lVar10 + 0x14),(float)iVar2,(float)iVar13,0,
                             &stack0x00000088,0);
                FUN_00bbfeb8(_fStack0000000000000088 & 0xffffffff,fStack000000000000008c,
                             in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,lVar8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                            );
                if (iStack0000000000000060 <= *(int *)(lVar10 + 0x18)) {
                  iStack0000000000000060 = *(int *)(lVar10 + 0x18);
                }
                piVar12 = (int *)(lVar10 + 0x14);
              }
              else {
                FUN_0132138c(param_4,iVar14,&stack0x00000088,*(undefined8 *)puVar3);
                iVar1 = iVar1 - ((uint)(_fStack0000000000000088 >> 0x1f) & 0xfffffffe);
                *(undefined4 *)(lVar10 + 0x1c) = 0;
                *(int *)(lVar10 + 0x20) = iVar13;
                *(int *)(lVar10 + 0x14) = iVar1;
                _fStack0000000000000088 = 0;
                in_stack_00000090 = 0;
                FUN_0268834c((float)iVar1,(float)*(int *)(lVar10 + 0x18),0,(float)iVar13,
                             &stack0x00000088,0);
                FUN_00bbfeb8(_fStack0000000000000088 & 0xffffffff,fStack000000000000008c,
                             in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,lVar8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                            );
                if (iStack0000000000000064 <= *(int *)(lVar10 + 0x14)) {
                  iStack0000000000000064 = *(int *)(lVar10 + 0x14);
                }
              }
              iVar13 = *piVar12 + iVar13;
              FUN_00bbf6f0(lVar9,lVar10,
                           *(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(param_3 + 0x18));
          }
          bVar6 = *(int *)(param_2 + 0x18) != 1;
          iVar14 = iVar13;
          if (bVar6) {
            iVar14 = iStack0000000000000064;
            iStack0000000000000060 = iVar13;
          }
          uStack00000000000000dc = (uint)(float)iVar14;
          uStack00000000000000d8 = (uint)(float)iStack0000000000000060;
          if (bVar6) {
            if (*(char *)(param_2 + 0x14) == '\0') {
              if ((int)unaff_w25 <= (int)uStack00000000000000d8) {
                uStack00000000000000d8 = unaff_w25;
              }
            }
            else {
              fVar15 = logf((float)(int)uStack00000000000000d8);
              fVar15 = exp2f((float)(int)(fVar15 / DAT_0293f7bc));
              uStack00000000000000d8 = 0x80000000;
              if (fVar15 != INFINITY) {
                uStack00000000000000d8 = (int)fVar15;
              }
              if (uStack00000000000000d8 < 3) {
                uStack00000000000000d8 = 2;
              }
              if ((int)unaff_w25 <= (int)uStack00000000000000d8) {
                uStack00000000000000d8 = unaff_w25;
              }
            }
          }
          else {
            if (*(char *)(param_2 + 0x14) != '\0') {
              fVar15 = logf((float)(int)uStack00000000000000dc);
              fVar15 = exp2f((float)(int)(fVar15 / DAT_0293f7bc));
              uStack00000000000000dc = 0x80000000;
              if (fVar15 != INFINITY) {
                uStack00000000000000dc = (int)fVar15;
              }
              if (uStack00000000000000dc < 3) {
                uStack00000000000000dc = 2;
              }
            }
            if ((int)uStack0000000000000054 <= (int)uStack00000000000000dc) {
              uStack00000000000000dc = uStack0000000000000054;
            }
          }
          FUN_0132138c(param_4,0,&stack0x00000088,*(undefined8 *)puVar3);
          uVar11 = FUN_01435f44((float)iVar14,(float)iStack0000000000000060,param_2,lVar9,
                                uStack0000000000000054,unaff_w25,_fStack0000000000000088,
                                iStack0000000000000068,iStack000000000000006c,uStack000000000000005c
                               );
          puVar3 = Method_System_Collections_Generic_Dictionary<int,_SpriteAsset>_TryGetValue__;
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660dac(*(undefined8 *)puVar3,0);
            return 0;
          }
          FUN_01325140(param_4,*(undefined8 *)StringLiteral_9168);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
          if (lVar8 != 0) {
            uVar7 = FUN_014412e4();
            return uVar7;
          }
        }
      }
    }
  }
code_r0x0143d75c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


