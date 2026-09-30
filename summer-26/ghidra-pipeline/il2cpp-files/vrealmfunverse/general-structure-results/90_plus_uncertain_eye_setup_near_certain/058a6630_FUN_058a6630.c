/*
FUNCTION_NAME: FUN_058a6630
ENTRY_POINT: 058a6630
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_058a6630(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong unaff_x26;
  ulong uVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long lStack_68;
  undefined *puVar9;
  
  lStack_68 = param_2;
  if ((DAT_066d31b2 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__);
    FUN_02b3c81c(PTR_DAT_06323cb8);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
                );
    FUN_02b3c81c(PTR_DAT_06320cb0);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                );
    DAT_066d31b2 = 1;
  }
  if (param_2 != 0) {
    plVar12 = (long *)(param_2 + 0x18);
    *(long *)(param_1 + 0x40) = *plVar12;
    thunk_FUN_02bb0e9c();
    if (*plVar12 != 0) {
      FUN_05cb4284(*plVar12,0);
      lVar10 = *(long *)(param_1 + 0x30);
      if (lVar10 != 0) {
        bVar5 = false;
        iVar14 = 0;
        puVar13 = (undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__;
        plVar16 = (long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__;
        do {
          lVar10 = *(long *)(lVar10 + 0x18);
          if ((*(ushort *)(*(long *)(*plVar16 + 0x20) + 0x135) & 1) == 0) {
            FUN_02b76218();
          }
          if (*(int *)(lVar10 + 8) <= iVar14) {
            return;
          }
          if (*(long *)(param_1 + 0x30) == 0) break;
          puVar6 = (undefined4 *)FUN_03ab2128(*(long *)(param_1 + 0x30) + 0x18,iVar14,*puVar13);
          if (*(char *)((long)puVar6 + 0x7a) == '\0') {
            iVar2 = puVar6[1];
            FUN_058a4cd8(param_1,param_2,param_3,puVar6);
            if ((puVar6[1] == 3) && (*(char *)(puVar6 + 0x1e) != '\0')) {
              if (*(char *)(param_2 + 0x38) == '\0') {
                lVar10 = *plVar12;
                if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_05cc8fd8(param_2 + 0x10,lVar10,0);
              }
              if (*plVar12 == 0) break;
              FUN_05cb2938(*plVar12,0);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__ +
                          0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              lVar10 = FUN_057fb858(*(undefined8 *)
                                     Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                                    ,0);
              if (lVar10 == 0) break;
              FUN_05cb637c(lVar10,2,0);
              *plVar12 = lVar10;
              thunk_FUN_02bb0e9c(plVar12,lVar10);
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (puVar6[0x1d] != -1) {
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar10 == 0)) break;
              auVar17 = FUN_04447b64(lVar10,puVar6[0x1d],
                                     *(undefined8 *)
                                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
                                    );
              if (*plVar12 == 0) break;
              FUN_05cbb5cc(*plVar12,auVar17._0_8_,auVar17._8_8_,0);
            }
            if (((iVar2 == 2) && ((int)puVar6[7] < 1)) && (-1 < (int)puVar6[8])) {
              if (*(long *)(param_1 + 0x30) == 0) break;
              lVar10 = FUN_03ab1904(*(long *)(param_1 + 0x30) + 0x60,puVar6[8],
                                    *(undefined8 *)
                                     Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
              if (*(int *)(*(long *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44(*(long *)
                                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                  );
              }
              if (*(int *)(lVar10 + 400) < 1) goto LAB_058a68d4;
              FUN_058a552c(param_1,param_2,param_3,lVar10);
              bVar1 = false;
              bVar5 = true;
            }
            else {
LAB_058a68d4:
              bVar1 = true;
            }
            if ((0 < (int)puVar6[7]) && (*(char *)((long)puVar6 + 0x7b) != '\0')) {
              if (!bVar5) {
                thunk_FUN_02ba3594(PTR_DAT_06312bc0);
                uVar7 = thunk_FUN_02b79644();
                puVar9 = Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<FetchAnchorsAsync>d__56>__;
                goto LAB_058a6c40;
              }
              if (*plVar12 == 0) break;
              FUN_05cbaf20(*plVar12,0);
            }
            if (0 < (int)puVar6[0x13]) {
              auVar17 = FUN_058a6c8c(puVar6,*(undefined8 *)(param_1 + 0x30));
              lVar10 = auVar17._0_8_;
              if (0 < auVar17._8_4_) {
                uVar15 = auVar17._8_8_ & 0xffffffff;
                puVar11 = (undefined4 *)(lVar10 + 0xc);
                do {
                  unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)(uint)puVar11[-1];
                  lVar10 = FUN_058a6114(lVar10,plVar12,param_3,*puVar11,
                                        *(undefined8 *)(puVar11 + -3),unaff_x26,1);
                  uVar15 = uVar15 - 1;
                  puVar11 = puVar11 + 5;
                } while (uVar15 != 0);
              }
            }
            if (*param_4 == 0) break;
            uVar7 = FUN_037a6268(*param_4,*puVar6,
                                 *(undefined8 *)
                                  Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
            FUN_058a6318(uVar7,&lStack_68);
            plVar16 = (long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__;
            if (0 < (int)puVar6[0x13]) {
              if (*plVar12 == 0) break;
              FUN_05cb4284(*plVar12,0);
            }
            if (*(char *)((long)puVar6 + 0x7e) != '\0') {
              if (*plVar12 == 0) break;
              auVar17 = FUN_05cbb588(*plVar12,0);
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar10 == 0)) break;
              FUN_04447bf4(lVar10,*puVar6,auVar17._0_8_,auVar17._8_8_,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                          );
            }
            puVar13 = (undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__;
            if (iVar2 == 2) {
              if (puVar6[7] != -1) {
                bVar1 = true;
              }
              if (((puVar6[7] == 2) || (!bVar1)) && (-1 < (int)puVar6[8])) {
                if (*(long *)(param_1 + 0x30) == 0) break;
                lVar10 = FUN_03ab1904(*(long *)(param_1 + 0x30) + 0x60,puVar6[8],
                                      *(undefined8 *)
                                       Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
                if (*(int *)(*(long *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                            + 0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                    );
                }
                if (0 < *(int *)(lVar10 + 400)) {
                  if (!bVar5) {
                    thunk_FUN_02ba3594(PTR_DAT_06312bc0);
                    uVar7 = thunk_FUN_02b79644();
                    puVar9 = Method_OVRTaskBuilder<bool>_Start<OVRSceneRoom_<LoadRoom>d__19>__;
LAB_058a6c40:
                    uVar8 = thunk_FUN_02ba3594(puVar9);
                    FUN_04db2a6c(uVar7,uVar8,0);
                    uVar8 = thunk_FUN_02ba3594(
                                              Method_OVRTaskBuilder<bool>_Start<OVRSceneManager_<FetchAnchorsAsync>d__37>__
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_02b3c988(uVar7,uVar8);
                  }
                  if (*(char *)(lVar10 + 0x2c1) != '\0') {
                    if (*plVar12 == 0) break;
                    FUN_05cb7c58(*plVar12,0,0);
                  }
                  if (*plVar12 == 0) break;
                  FUN_05cbafc8(*plVar12,0);
                  cVar3 = *(char *)(lVar10 + 0x2c2);
                  **(undefined1 **)(*(long *)PTR_DAT_06323cb8 + 0xb8) = 0;
                  if ((cVar3 != '\0') || (uVar15 = FUN_058ac818(lVar10,0), (uVar15 & 1) != 0)) {
                    if (*plVar12 == 0) break;
                    thunk_FUN_05cbb2d4(*plVar12,0);
                  }
                  bVar5 = false;
                }
              }
            }
            else if (!bVar4) {
              lVar10 = *plVar12;
              if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05cc90bc(param_2 + 0x10,lVar10,1,0);
              puVar13 = (undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__
              ;
              lVar10 = *plVar12;
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__ +
                          0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_057fb8f0(lVar10,0);
              *plVar12 = *(long *)(param_1 + 0x40);
              thunk_FUN_02bb0e9c(plVar12);
            }
            FUN_058a5cb8(param_1,param_2,param_3,puVar6);
          }
          lVar10 = *(long *)(param_1 + 0x30);
          iVar14 = iVar14 + 1;
        } while (lVar10 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


