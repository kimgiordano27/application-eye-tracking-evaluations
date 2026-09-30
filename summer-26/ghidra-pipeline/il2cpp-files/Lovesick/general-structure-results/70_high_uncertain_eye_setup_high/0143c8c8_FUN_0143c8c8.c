/*
FUNCTION_NAME: FUN_0143c8c8
ENTRY_POINT: 0143c8c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
FUN_0143c8c8(long param_1,long param_2,long param_3,uint param_4,uint param_5,int param_6,
            int param_7,undefined4 param_8,undefined4 param_9)

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
  int *piVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined8 local_100;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  
  if ((DAT_03776a0e & 1) == 0) {
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
    DAT_03776a0e = 1;
  }
  puVar3 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  local_bc = 0;
  if (param_3 != 0) {
    uVar7 = FUN_01325140(param_3,*(undefined8 *)StringLiteral_9168);
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
          if (*(int *)(param_1 + 0x10) < 4) {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00da518c();
            }
          }
          else {
            if (param_2 == 0) goto code_r0x0143d75c;
            uStack_a8 = CONCAT44(*(undefined4 *)(param_2 + 0x18),(undefined4)uStack_a8);
            uVar7 = FUN_0176eb1c((long)&uStack_a8 + 4,0);
            uVar7 = FUN_015f5b28(*(undefined8 *)puVar4,uVar7,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            FUN_02660dac(uVar7,0);
          }
          puVar3 = StringLiteral_4419;
          if (*(int *)(param_2 + 0x18) < 1) {
            iVar13 = 0;
            local_100 = 0;
          }
          else {
            iVar14 = 0;
            iVar13 = 0;
            local_100 = 0;
            do {
              puVar4 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
              FUN_0132138c(param_2,iVar14,&local_d8,
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__);
              fVar15 = (float)local_d8;
              FUN_0132138c(param_2,iVar14,&local_d8,*(undefined8 *)puVar4);
              fVar5 = local_d8._4_4_;
              FUN_0132138c(param_3,iVar14,&local_d8,*(undefined8 *)puVar3);
              uVar11 = local_d8;
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
              if (iVar1 <= param_6) {
                iVar1 = param_6;
              }
              *(int *)(lVar10 + 0x14) = iVar1;
              if (iVar2 <= param_7) {
                iVar2 = param_7;
              }
              *(int *)(lVar10 + 0x10) = iVar14;
              piVar12 = (int *)(lVar10 + 0x18);
              *piVar12 = iVar2;
              if (*(int *)(param_1 + 0x18) == 1) {
                FUN_0132138c(param_3,iVar14,&local_d8,*(undefined8 *)puVar3);
                iVar2 = iVar2 + (int)(float)local_d8 * -2;
                *(int *)(lVar10 + 0x1c) = iVar13;
                *(undefined4 *)(lVar10 + 0x20) = 0;
                *(int *)(lVar10 + 0x18) = iVar2;
                local_d8 = 0;
                local_d0 = 0;
                FUN_0268834c((float)*(int *)(lVar10 + 0x14),(float)iVar2,(float)iVar13,0,&local_d8,0
                            );
                FUN_00bbfeb8(local_d8 & 0xffffffff,local_d8._4_4_,local_d0 & 0xffffffff,
                             local_d0._4_4_,lVar8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                            );
                if ((int)local_100 <= *(int *)(lVar10 + 0x18)) {
                  local_100._0_4_ = *(int *)(lVar10 + 0x18);
                }
                piVar12 = (int *)(lVar10 + 0x14);
              }
              else {
                FUN_0132138c(param_3,iVar14,&local_d8,*(undefined8 *)puVar3);
                iVar1 = iVar1 - ((uint)(local_d8 >> 0x1f) & 0xfffffffe);
                *(undefined4 *)(lVar10 + 0x1c) = 0;
                *(int *)(lVar10 + 0x20) = iVar13;
                *(int *)(lVar10 + 0x14) = iVar1;
                local_d8 = 0;
                local_d0 = 0;
                FUN_0268834c((float)iVar1,(float)*(int *)(lVar10 + 0x18),0,(float)iVar13,&local_d8,0
                            );
                FUN_00bbfeb8(local_d8 & 0xffffffff,local_d8._4_4_,local_d0 & 0xffffffff,
                             local_d0._4_4_,lVar8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                            );
                if (local_100._4_4_ <= *(int *)(lVar10 + 0x14)) {
                  local_100._4_4_ = *(int *)(lVar10 + 0x14);
                }
              }
              iVar13 = *piVar12 + iVar13;
              FUN_00bbf6f0(lVar9,lVar10,
                           *(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(param_2 + 0x18));
          }
          bVar6 = *(int *)(param_1 + 0x18) != 1;
          iVar14 = iVar13;
          if (bVar6) {
            iVar14 = local_100._4_4_;
            local_100._0_4_ = iVar13;
          }
          local_88._4_4_ = (uint)(float)iVar14;
          local_88._0_4_ = (uint)(float)(int)local_100;
          if (bVar6) {
            if (*(char *)(param_1 + 0x14) == '\0') {
              if ((int)param_5 <= (int)(uint)local_88) {
                local_88._0_4_ = param_5;
              }
            }
            else {
              fVar15 = logf((float)(int)(uint)local_88);
              fVar15 = exp2f((float)(int)(fVar15 / DAT_0293f7bc));
              local_88._0_4_ = 0x80000000;
              if (fVar15 != INFINITY) {
                local_88._0_4_ = (int)fVar15;
              }
              if ((uint)local_88 < 3) {
                local_88._0_4_ = 2;
              }
              if ((int)param_5 <= (int)(uint)local_88) {
                local_88._0_4_ = param_5;
              }
            }
          }
          else {
            if (*(char *)(param_1 + 0x14) != '\0') {
              fVar15 = logf((float)(int)local_88._4_4_);
              fVar15 = exp2f((float)(int)(fVar15 / DAT_0293f7bc));
              local_88._4_4_ = 0x80000000;
              if (fVar15 != INFINITY) {
                local_88._4_4_ = (int)fVar15;
              }
              if (local_88._4_4_ < 3) {
                local_88._4_4_ = 2;
              }
            }
            if ((int)param_4 <= (int)local_88._4_4_) {
              local_88._4_4_ = param_4;
            }
          }
          FUN_0132138c(param_3,0,&local_d8,*(undefined8 *)puVar3);
          uVar11 = FUN_01435f44((float)iVar14,(float)(int)local_100,param_1,lVar9,param_4,param_5,
                                local_d8,param_6,param_7,param_8,param_9,(long)&local_88 + 4,
                                &local_88,(long)&uStack_98 + 4,&uStack_98,(long)&local_a0 + 4,
                                &local_a0);
          puVar3 = Method_System_Collections_Generic_Dictionary<int,_SpriteAsset>_TryGetValue__;
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660dac(*(undefined8 *)puVar3,0);
            return 0;
          }
          FUN_01325140(param_3,*(undefined8 *)StringLiteral_9168);
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


