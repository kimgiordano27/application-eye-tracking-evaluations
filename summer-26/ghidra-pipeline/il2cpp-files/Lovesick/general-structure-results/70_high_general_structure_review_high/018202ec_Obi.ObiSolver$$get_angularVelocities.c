/*
FUNCTION_NAME: Obi.ObiSolver$$get_angularVelocities
ENTRY_POINT: 018202ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Obi_ObiSolver__get_angularVelocities(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_64;
  
  if ((DAT_0377948f & 1) == 0) {
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<EdgeMeshHeader>_RemoveAt__);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_BaseSpeechService_SetRequestEventListener<WitResponseNode>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<GetDownloadedText>d__99>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_f64_s64__);
    thunk_FUN_00d48444(System_Collections_Generic_List<XRNodeState>_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugShapes_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_VolumeParameter<DepthOfFieldMode>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SerializationErrorCallback>_Add__);
    thunk_FUN_00d48444(System_Predicate<ScriptableRenderPass>_TypeInfo);
    thunk_FUN_00d48444(Obi_OniConstraintsBatchImpl_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_729);
    DAT_0377948f = 1;
  }
  puVar7 = System_Collections_Generic_List<XRNodeState>_TypeInfo;
  auVar6 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar19 = ZEXT816(0);
  local_80 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  local_90 = ZEXT816(0);
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  lVar18 = *(long *)(param_1 + 8);
  switch(*param_1) {
  case 0:
    local_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *param_1 = 0xffffffff;
LAB_01820774:
    local_90 = auVar4;
    FUN_0127e70c(local_80,&local_64,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<SerializationErrorCallback>_Add__);
    if (local_64 != 0) {
switchD_01820400_default:
      do {
        puVar14 = StringLiteral_729;
        puVar13 = Method_Meta_WitAi_BaseSpeechService_SetRequestEventListener<WitResponseNode>__;
        puVar12 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<GetDownloadedText>d__99>__
        ;
        puVar11 = Newtonsoft_Json_JsonReader_State_TypeInfo;
        puVar10 = UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
        ;
        puVar9 = Obi_OniConstraintsBatchImpl_TypeInfo;
        puVar8 = System_Predicate<ScriptableRenderPass>_TypeInfo;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar16 = *(long *)(lVar18 + 0x80);
joined_r0x0182046c:
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar2 = *(uint *)(lVar18 + 0x8c);
        if (*(uint *)(lVar16 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar1 = *(ushort *)(lVar16 + (long)(int)uVar2 * 2 + 0x20);
        if (0xd < uVar1) {
          if (uVar1 != 0x20) {
            if (uVar1 == 0x2f) {
              lVar18 = FUN_01810a00(lVar18,1,*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar19 = FUN_017e7d94(lVar18,0,0);
              local_90 = auVar19;
              uVar15 = FUN_016a1974(local_90,0);
              auVar19 = local_80;
              if ((uVar15 & 1) == 0) {
                *param_1 = 1;
                *(undefined1 (*) [16])(param_1 + 0x10) = local_90;
                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_90,param_1,
                             *(undefined8 *)Method_Obi_ObiNativeList<EdgeMeshHeader>_RemoveAt__);
                return;
              }
              goto LAB_0182065c;
            }
            if (uVar1 == 0x7d) {
              FUN_01806a80(lVar18,0xd,0);
              *(int *)(lVar18 + 0x8c) = *(int *)(lVar18 + 0x8c) + 1;
              goto LAB_01820668;
            }
LAB_018204f8:
            if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_016f68bc(uVar1,0);
            if ((uVar15 & 1) == 0) {
              lVar18 = FUN_01811714(lVar18,*(undefined8 *)(param_1 + 10),0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              local_a0 = FUN_013bdbc8(lVar18,0,*(undefined8 *)puVar10);
              uVar15 = FUN_0127e6c0(local_a0,*(undefined8 *)puVar8);
              auVar5 = local_90;
              auVar6 = local_80;
              if ((uVar15 & 1) == 0) {
                *param_1 = 3;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_a0;
                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01098fc0(param_1 + 2,local_a0,param_1,*(undefined8 *)puVar12);
                return;
              }
              goto LAB_018205e4;
            }
            uVar2 = *(uint *)(lVar18 + 0x8c);
          }
LAB_0182054c:
          *(uint *)(lVar18 + 0x8c) = uVar2 + 1;
LAB_01820550:
          lVar16 = *(long *)(lVar18 + 0x80);
          goto joined_r0x0182046c;
        }
        if (uVar1 < 10) {
          if (uVar1 != 0) {
            if (uVar1 != 9) goto LAB_018204f8;
            goto LAB_0182054c;
          }
          if (*(uint *)(lVar18 + 0x88) == uVar2) {
            lVar16 = FUN_018102bc(lVar18,0,*(undefined8 *)(param_1 + 10),0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            auVar19 = FUN_013bdbc8(lVar16,0,*(undefined8 *)puVar14);
            local_80 = auVar19;
            uVar15 = FUN_0127e6c0(local_80,*(undefined8 *)puVar9);
            auVar4 = local_90;
            if ((uVar15 & 1) == 0) {
              *param_1 = 0;
              *(undefined1 (*) [16])(param_1 + 0xc) = local_80;
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)puVar13);
              return;
            }
            goto LAB_01820774;
          }
          goto LAB_0182054c;
        }
        if (uVar1 == 10) {
          FUN_01815490(lVar18,0);
          goto LAB_01820550;
        }
        if (uVar1 != 0xd) goto LAB_018204f8;
        lVar16 = FUN_018104d4(lVar18,0,*(undefined8 *)(param_1 + 10),0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar19 = FUN_017e7d94(lVar16,0,0);
        local_90 = auVar19;
        uVar15 = FUN_016a1974(local_90,0);
        auVar3 = local_80;
        if ((uVar15 & 1) == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_90;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_90,param_1,
                       *(undefined8 *)Method_Obi_ObiNativeList<EdgeMeshHeader>_RemoveAt__);
          return;
        }
FUN_0182059c:
        local_80 = auVar3;
        FUN_016a1990(local_90,0);
      } while( true );
    }
    uVar17 = 0;
    break;
  case 1:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
LAB_0182065c:
    local_80 = auVar19;
    FUN_016a1990(local_90,0);
LAB_01820668:
    uVar17 = 1;
    break;
  case 2:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
    goto FUN_0182059c;
  case 3:
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *param_1 = 0xffffffff;
LAB_018205e4:
    local_90 = auVar5;
    local_80 = auVar6;
    FUN_0127e70c(local_a0,&local_64,
                 *(undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    uVar17 = (undefined1)local_64;
    break;
  default:
    goto switchD_01820400_default;
  }
  *param_1 = 0xfffffffe;
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_f64_s64__;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_64 = CONCAT31(local_64._1_3_,uVar17);
  FUN_011ccb9c(param_1 + 2,&local_64,*(undefined8 *)puVar8);
  return;
}


