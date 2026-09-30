/*
FUNCTION_NAME: FUN_0140be90
ENTRY_POINT: 0140be90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 FUN_0140be90(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long local_308;
  undefined1 auStack_300 [72];
  undefined1 auStack_2b8 [72];
  undefined1 auStack_270 [72];
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [72];
  long local_198 [9];
  undefined1 auStack_150 [76];
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  if ((DAT_03776948 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_11852);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<AudioSource,_float>_get_Item__);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlDateTime_FromTimeSpan__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_XR_FeatureType___TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<VRequestResponse<byte[]>>_GetAwaiter__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderGraphPass>__ctor__);
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12558);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_34__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroup_Name__);
    thunk_FUN_00d48444(StringLiteral_3843);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<WriteTokenSyncReadingAsync>d__31>__
                      );
    DAT_03776948 = 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_104 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_01298da0(lVar3,*(undefined8 *)Method_System_Data_SqlTypes_SqlDateTime_FromTimeSpan__);
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 != 0) {
      lVar10 = *(long *)Method_System_Threading_Tasks_Task<VRequestResponse<byte[]>>_GetAwaiter__;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar14 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar14) {
          FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar14,0);
        }
      }
      if (*(int *)(param_1 + 0x10) < 5) {
        local_308 = 0;
        puVar16 = (undefined8 *)StringLiteral_12558;
      }
      else {
        local_308 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                      );
        puVar2 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<WriteTokenSyncReadingAsync>d__31>__
        ;
        if (local_308 == 0) goto LAB_0140c6c8;
        FUN_0160aa4c(local_308,0);
        FUN_0160c8e8(local_308,*(undefined8 *)puVar2,0);
        puVar16 = (undefined8 *)StringLiteral_12558;
      }
      StringLiteral_12558 = (undefined *)puVar16;
      if (param_3 != 0) {
        if (0 < *(int *)(param_3 + 0x18)) {
          iVar14 = 0;
          do {
            FUN_0132138c(param_3,iVar14,local_198,*puVar16);
            if (local_198[0] == 0) goto LAB_0140c6c8;
            if (*(char *)(local_198[0] + 0xb9) == '\0') {
              FUN_0132138c(param_3,iVar14,local_198,*puVar16);
              lVar11 = local_198[0];
              if (local_198[0] == 0) goto LAB_0140c6c8;
              *(int *)(param_1 + 0x40) = *(int *)(local_198[0] + 0x38) + *(int *)(param_1 + 0x40);
              if (*(long *)(local_198[0] + 0xe8) == 0) goto LAB_0140c6c8;
              uVar4 = *(ulong *)(*(long *)(local_198[0] + 0xe8) + 0x18);
              lVar10 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                    uVar4 & 0xffffffff);
              local_68 = 0;
              if (0 < (int)uVar4) {
                uVar12 = 0;
                lVar13 = 0x20;
                do {
                  lVar9 = *(long *)(lVar11 + 0x128);
                  if (lVar9 == 0) goto LAB_0140c6c8;
                  if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_0140c6cc;
                  if (*(char *)(lVar9 + uVar12 + 0x20) != '\0') {
                    lVar9 = *(long *)(lVar11 + 0xe8);
                    if (lVar9 == 0) goto LAB_0140c6c8;
                    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_0140c6cc;
                    memcpy(&local_b0,(void *)(lVar9 + lVar13),0x48);
                    memmove(auStack_150,(void *)(lVar9 + lVar13),0x48);
                    uVar5 = FUN_0129eff4(lVar3,auStack_150,(long)&local_b8 + 4,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<AudioSource,_float>_get_Item__
                                        );
                    if ((uVar5 & 1) == 0) {
                      memcpy(local_198,&local_b0,0x48);
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0140c6c8;
                      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
                      memcpy(auStack_1e0,local_198,0x48);
                      local_64 = uVar1;
                      FUN_0129a054(lVar3,auStack_1e0,&local_64,*(undefined8 *)StringLiteral_11852);
                      lVar9 = *(long *)(param_1 + 0x28);
                      if (lVar9 == 0) goto LAB_0140c6c8;
                      local_b8 = CONCAT44(*(undefined4 *)(lVar9 + 0x18),(undefined4)local_b8);
                      local_68 = local_68 + 1;
                      memcpy(auStack_228,&local_b0,0x48);
                      FUN_00bbe3e4(lVar9,auStack_228,
                                   *(undefined8 *)UnityEngine_InputSystem_XR_FeatureType___TypeInfo)
                      ;
                    }
                    if (lVar10 == 0) goto LAB_0140c6c8;
                    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0140c6cc;
                    *(undefined4 *)(lVar10 + 0x20 + uVar12 * 4) = local_b8._4_4_;
                  }
                  uVar12 = uVar12 + 1;
                  lVar13 = lVar13 + 0x48;
                } while ((uVar4 & 0xffffffff) != uVar12);
              }
              *(long *)(lVar11 + 0xf0) = lVar10;
              if (4 < *(int *)(param_1 + 0x10)) {
                plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                if (plVar6 == (long *)0x0) goto LAB_0140c6c8;
                lVar11 = *(long *)(lVar11 + 0x20);
                if ((lVar11 != 0) &&
                   (lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0
                   )) {
LAB_0140c6d0:
                  uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar7,0);
                }
                uVar8 = *(uint *)(plVar6 + 3);
                if (uVar8 == 0) {
LAB_0140c6cc:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar6[4] = lVar11;
                if (*(long *)Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroup_Name__ != 0) {
                  lVar11 = thunk_FUN_00d6225c(*(long *)
                                               Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroup_Name__
                                              ,*(undefined8 *)(*plVar6 + 0x40));
                  if (lVar11 == 0) goto LAB_0140c6d0;
                  uVar8 = *(uint *)(plVar6 + 3);
                }
                if (uVar8 < 2) goto LAB_0140c6cc;
                plVar6[5] = *(long *)Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroup_Name__;
                lVar11 = FUN_0176eb1c(&local_68,0);
                if ((lVar11 != 0) &&
                   (lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0
                   )) goto LAB_0140c6d0;
                uVar8 = *(uint *)(plVar6 + 3);
                if (uVar8 < 3) goto LAB_0140c6cc;
                plVar6[6] = lVar11;
                if (*(long *)StringLiteral_3843 != 0) {
                  lVar11 = thunk_FUN_00d6225c(*(long *)StringLiteral_3843,
                                              *(undefined8 *)(*plVar6 + 0x40));
                  if (lVar11 == 0) goto LAB_0140c6d0;
                  uVar8 = *(uint *)(plVar6 + 3);
                }
                if (uVar8 < 4) goto LAB_0140c6cc;
                plVar6[7] = *(long *)StringLiteral_3843;
                if (lVar10 == 0) goto LAB_0140c6c8;
                local_b8 = CONCAT44(local_b8._4_4_,(int)*(undefined8 *)(lVar10 + 0x18));
                lVar11 = FUN_0176eb1c(&local_b8,0);
                if ((lVar11 != 0) &&
                   (lVar10 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0
                   )) goto LAB_0140c6d0;
                if (*(uint *)(plVar6 + 3) < 5) goto LAB_0140c6cc;
                plVar6[8] = lVar11;
                uVar7 = FUN_01600844(plVar6,0);
                if (local_308 == 0) goto LAB_0140c6c8;
                FUN_0160c8e8(local_308,uVar7,0);
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(param_3 + 0x18));
        }
        if (param_2 != 0) {
          if (0 < *(int *)(param_2 + 0x18)) {
            iVar14 = 0;
            do {
              FUN_0132138c(param_2,iVar14,local_198,*puVar16);
              lVar11 = local_198[0];
              if (local_198[0] == 0) goto LAB_0140c6c8;
              *(int *)(param_1 + 0x40) = *(int *)(local_198[0] + 0x38) + *(int *)(param_1 + 0x40);
              if (*(long *)(local_198[0] + 0xe8) == 0) goto LAB_0140c6c8;
              uVar4 = *(ulong *)(*(long *)(local_198[0] + 0xe8) + 0x18);
              lVar10 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                    uVar4 & 0xffffffff);
              if (0 < (int)uVar4) {
                uVar12 = 0;
                lVar13 = 0x20;
                do {
                  lVar9 = *(long *)(lVar11 + 0x128);
                  if (lVar9 == 0) goto LAB_0140c6c8;
                  if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_0140c6cc;
                  if (*(char *)(lVar9 + uVar12 + 0x20) != '\0') {
                    lVar9 = *(long *)(lVar11 + 0xe8);
                    if (lVar9 == 0) goto LAB_0140c6c8;
                    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_0140c6cc;
                    memcpy(&local_100,(void *)(lVar9 + lVar13),0x48);
                    memmove(auStack_270,(void *)(lVar9 + lVar13),0x48);
                    uVar5 = FUN_0129eff4(lVar3,auStack_270,&local_104,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<AudioSource,_float>_get_Item__
                                        );
                    if ((uVar5 & 1) == 0) {
                      memcpy(local_198,&local_100,0x48);
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0140c6c8;
                      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
                      memcpy(auStack_2b8,local_198,0x48);
                      local_64 = uVar1;
                      FUN_0129a054(lVar3,auStack_2b8,&local_64,*(undefined8 *)StringLiteral_11852);
                      lVar9 = *(long *)(param_1 + 0x28);
                      if (lVar9 == 0) goto LAB_0140c6c8;
                      local_104 = *(undefined4 *)(lVar9 + 0x18);
                      memcpy(auStack_300,&local_100,0x48);
                      FUN_00bbe3e4(lVar9,auStack_300,
                                   *(undefined8 *)UnityEngine_InputSystem_XR_FeatureType___TypeInfo)
                      ;
                    }
                    if (lVar10 == 0) goto LAB_0140c6c8;
                    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0140c6cc;
                    *(undefined4 *)(lVar10 + 0x20 + uVar12 * 4) = local_104;
                  }
                  uVar12 = uVar12 + 1;
                  lVar13 = lVar13 + 0x48;
                } while ((uVar4 & 0xffffffff) != uVar12);
              }
              *(long *)(lVar11 + 0xf0) = lVar10;
              if (4 < *(int *)(param_1 + 0x10)) {
                if (lVar10 == 0) goto LAB_0140c6c8;
                uVar15 = *(undefined8 *)(lVar11 + 0x20);
                local_b8 = CONCAT44(local_b8._4_4_,(int)*(undefined8 *)(lVar10 + 0x18));
                uVar7 = FUN_0176eb1c(&local_b8,0);
                uVar7 = FUN_01600424(uVar15,*(undefined8 *)StringLiteral_3843,uVar7,0);
                if (local_308 == 0) goto LAB_0140c6c8;
                FUN_0160c8e8(local_308,uVar7,0);
              }
              iVar14 = iVar14 + 1;
              puVar16 = (undefined8 *)StringLiteral_12558;
            } while (iVar14 < *(int *)(param_2 + 0x18));
          }
          puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_34__;
          if (4 < *(int *)(param_1 + 0x10)) {
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_0140c6c8;
            local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
            uVar7 = FUN_0176eb1c(&local_b8,0);
            uVar7 = FUN_015f5b28(*(undefined8 *)puVar2,uVar7,0);
            puVar2 = StringLiteral_302;
            if (local_308 == 0) goto LAB_0140c6c8;
            FUN_0160c8e8(local_308,uVar7,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660dac(local_308,0);
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
          }
        }
      }
    }
  }
LAB_0140c6c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


