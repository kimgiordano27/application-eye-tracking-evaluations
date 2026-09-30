/*
FUNCTION_NAME: FUN_027a8d94
ENTRY_POINT: 027a8d94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 279
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_10;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027a9878) */
/* WARNING: Removing unreachable block (ram,0x027a9508) */
/* WARNING: Removing unreachable block (ram,0x027a9518) */
/* WARNING: Removing unreachable block (ram,0x027a9880) */
/* WARNING: Removing unreachable block (ram,0x027a9738) */

void FUN_027a8d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long *param_9,long param_10,undefined8 *param_11,ulong param_12,long param_13,
                 byte param_14)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 local_238 [8];
  undefined8 local_230;
  byte *pbStack_228;
  undefined1 *local_220;
  undefined4 *puStack_218;
  undefined4 *local_210;
  long **pplStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined8 *local_1f0;
  undefined8 *puStack_1e8;
  long local_1e0;
  undefined8 *puStack_1d8;
  long local_1d0;
  undefined8 *puStack_1c8;
  long local_1c0;
  undefined8 *puStack_1b8;
  long local_1b0;
  undefined8 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined4 *local_170;
  undefined8 *puStack_168;
  undefined1 *local_160;
  undefined4 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [4];
  undefined1 local_b8 [8];
  undefined4 local_b0;
  byte local_ac [4];
  long *local_a8;
  ulong uVar20;
  ulong uVar22;
  
  local_ac[0] = param_14 & 1;
  local_a8 = param_9;
  if ((DAT_037887a2 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(System_Collections_Generic_List<PlacePoint>_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_Serialization_ValueTypeFixupInfo_TypeInfo);
    thunk_FUN_00d48444(Sirenix_Serialization_NodeInfo___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11696);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
    thunk_FUN_00d48444(System_Numerics_Vector<ushort>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<int>_get_Count__);
    DAT_037887a2 = 1;
  }
  local_b0 = 0;
  local_b8[0] = 0;
  local_bc[0] = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_c8[0] = 0;
  local_cc[0] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = 0;
  local_ec[0] = 0;
  local_f0[0] = 0;
  local_f4[0] = 0;
  local_f8[0] = 0;
  local_fc[0] = 0;
  local_100[0] = 0;
  local_104[0] = 0;
  local_108[0] = 0;
  local_10c[0] = 0;
  local_110[0] = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_134 = 0;
  if (param_13 == 0) {
    return;
  }
  lVar8 = FUN_0274aad0(param_9,0);
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__;
  plVar12 = (long *)
            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if (lVar8 == 0) {
    return;
  }
  iVar5 = FUN_026d4f8c(0);
  FUN_027a8b6c(param_9);
  fVar15 = (float)FUN_027a843c(param_9);
  fVar16 = (float)FUN_027a8464(param_9);
  uVar9 = FUN_027a83cc(param_9);
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864(*plVar12);
  }
  FUN_027a7118(uVar9,param_10,param_9);
  lVar8 = *(long *)(*plVar12 + 0xb8);
  uVar26 = *(undefined4 *)(lVar8 + 0x18);
  uVar25 = *(undefined4 *)(lVar8 + 0x1c);
  uVar24 = *(undefined4 *)(lVar8 + 0x20);
  uVar23 = *(undefined4 *)(lVar8 + 0x24);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026d3158(uVar26,uVar25,uVar24,uVar23,0);
  lVar8 = FUN_026cc3f8(0);
  if (lVar8 == 0) goto LAB_027a9874;
  iVar6 = FUN_026cc440(lVar8,0);
  if (iVar6 != 8) {
    if (*(char *)((long)param_9 + 0x434) != '\0') {
      lVar8 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
      if (lVar8 != 0) {
        uVar9 = FUN_026ce5d8(0);
        uVar10 = FUN_026da82c(uVar9,0);
        if ((uVar10 & 1) != 0) {
          FUN_026ce600(0,0);
          lVar8 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
          if (lVar8 == 0) goto LAB_027a9874;
          *(undefined4 *)(lVar8 + 0x34) = 0;
        }
      }
      *(undefined1 *)((long)param_9 + 0x434) = 0;
    }
    puVar3 = Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__;
    if (*(char *)((long)param_9 + 0x435) != '\0') {
      if ((char)param_9[0x88] == '\0') goto LAB_027a9200;
      lVar8 = param_9[0x87];
      if (*(int *)(*(long *)Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377661a == '\0') {
        thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
        DAT_0377661a = '\x01';
      }
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar3;
      }
      if (lVar8 == **(long **)(lVar11 + 0xb8)) {
LAB_027a91d8:
        iVar6 = FUN_026ce5d8(0);
        if ((iVar6 == 0) && (*(char *)((long)param_9 + 0x3d5) != '\0')) {
LAB_027a91ec:
          FUN_026da7b4(0);
        }
      }
      else {
        lVar8 = param_9[0x87];
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037885f0 == '\0') {
          thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
          DAT_037885f0 = '\x01';
        }
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar3;
        }
        puVar4 = OVRPlugin_OVRP_1_29_0_TypeInfo;
        if (lVar8 == *(long *)(*(long *)(lVar11 + 0xb8) + 8)) goto LAB_027a91d8;
        lVar8 = param_9[0x87];
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_29_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037885f1 == '\0') {
          thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
          DAT_037885f1 = '\x01';
        }
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar4;
        }
        plVar12 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
        ;
        if (lVar8 != **(long **)(lVar11 + 0xb8)) {
          lVar8 = param_9[0x87];
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_037885f2 == '\0') {
            thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
            DAT_037885f2 = '\x01';
          }
          plVar12 = (long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
          ;
          lVar11 = *(long *)puVar4;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar4;
          }
          if (lVar8 != *(long *)(*(long *)(lVar11 + 0xb8) + 8)) goto LAB_027a9200;
          goto LAB_027a91ec;
        }
        FUN_026da7dc(0);
      }
LAB_027a9200:
      lVar8 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
      if (lVar8 != 0) {
        lVar8 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
        if (lVar8 == 0) goto LAB_027a9874;
        iVar6 = *(int *)(lVar8 + 0x34);
        iVar7 = FUN_026ce5d8(0);
        if (iVar6 != iVar7) {
          lVar8 = param_9[0x87];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_0377661a == '\0') {
            thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
            DAT_0377661a = '\x01';
          }
          lVar11 = *(long *)puVar3;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar3;
          }
          if (lVar8 != **(long **)(lVar11 + 0xb8)) {
            uVar23 = FUN_026ce5d8(0);
            *(undefined4 *)((long)param_9 + 0x444) = uVar23;
          }
        }
        lVar8 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
        uVar23 = FUN_026ce5d8(0);
        if (lVar8 == 0) goto LAB_027a9874;
        *(undefined4 *)(lVar8 + 0x34) = uVar23;
      }
      *(undefined1 *)((long)param_9 + 0x435) = 0;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377661a == '\0') {
        thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
        DAT_0377661a = '\x01';
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar3;
      }
      param_9[0x87] = **(long **)(lVar8 + 0xb8);
    }
  }
  lVar8 = FUN_026cc3f8(0);
  if (lVar8 == 0) goto LAB_027a9874;
  local_b0 = FUN_026cc440(lVar8,0);
  pbStack_228 = local_ac;
  local_220 = local_bc;
  puStack_218 = &local_c0;
  local_210 = &local_c4;
  pplStack_208 = &local_a8;
  local_1f0 = &uStack_d8;
  puStack_1e8 = &local_e0;
  local_1b0 = (long)&local_130 + 4;
  local_230 = 0;
  puStack_1a8 = &local_e8;
  local_1a0 = local_ec;
  puStack_198 = local_f0;
  local_200 = local_c8;
  puStack_1f8 = local_cc;
  local_190 = local_f4;
  puStack_188 = local_f8;
  local_170 = &local_b0;
  puStack_168 = &local_130;
  local_160 = local_104;
  puStack_158 = &local_134;
  local_1e0 = (long)&local_120 + 4;
  puStack_1d8 = &local_120;
  local_1d0 = (long)&uStack_118 + 4;
  puStack_1c8 = &uStack_118;
  local_1c0 = (long)&uStack_128 + 4;
  puStack_1b8 = &uStack_128;
  local_180 = local_fc;
  puStack_178 = local_100;
  local_150 = local_108;
  puStack_148 = local_10c;
  local_140 = local_110;
  uStack_258 = param_11[5];
  local_260 = param_11[4];
  uStack_248 = param_11[7];
  uStack_250 = param_11[6];
  uStack_278 = param_11[1];
  local_280 = *param_11;
  uStack_268 = param_11[3];
  uStack_270 = param_11[2];
  local_238[0] = 0;
  FUN_026d51d8(param_1,param_2,param_3,param_4,local_238,&local_280,0);
  puVar3 = System_Runtime_Serialization_ValueTypeFixupInfo_TypeInfo;
  lVar8 = *(long *)System_Runtime_Serialization_ValueTypeFixupInfo_TypeInfo;
  local_b8[0] = local_238[0];
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar3;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  puVar3 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  uVar10 = FUN_017bc96c(uVar9,**(undefined8 **)
                                (*(long *)
                                  Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                + 0xb8),0);
  if ((uVar10 & 1) != 0) {
    FUN_0265d9e8(uVar9,0);
  }
  (**(code **)(param_13 + 0x18))(*(undefined8 *)(param_13 + 0x40),*(undefined8 *)(param_13 + 0x28));
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar10 = FUN_017bc96c(uVar9,**(undefined8 **)(*(long *)puVar3 + 0xb8),0);
  if ((uVar10 & 1) != 0) {
    FUN_0265dab4(uVar9,0);
  }
  FUN_026d522c(local_b8,0);
  FUN_00ce7598(&local_230);
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_027a7388(param_5,param_6,param_7,param_8,param_10);
  FUN_027a8c7c(local_a8);
  if (param_10 == 0) goto LAB_027a9874;
  iVar6 = FUN_026cc440(param_10,0);
  if (iVar6 == 8) {
    fVar17 = (float)FUN_027a843c(local_a8);
    if (DAT_037757b6 == '\0') {
      thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
      DAT_037757b6 = '\x01';
    }
    puVar3 = System_Func<Assembly[]>_TypeInfo;
    fVar2 = DAT_028aa898;
    fVar18 = ABS(fVar15);
    if (ABS(fVar15) <= ABS(fVar17)) {
      fVar18 = ABS(fVar17);
    }
    fVar21 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8);
    fVar19 = fVar21 * 8.0;
    fVar1 = fVar18 * DAT_028aa898;
    if (fVar18 * DAT_028aa898 <= fVar19) {
      fVar1 = fVar19;
    }
    if (ABS(fVar17 - fVar15) < fVar1) {
      fVar15 = (float)FUN_027a8464(local_a8);
      if (DAT_037757b6 == '\0') {
        thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
        DAT_037757b6 = '\x01';
      }
      fVar21 = **(float **)(*(long *)puVar3 + 0xb8);
      fVar17 = ABS(fVar16);
      if (ABS(fVar16) <= ABS(fVar15)) {
        fVar17 = ABS(fVar15);
      }
      fVar19 = fVar21 * 8.0;
      fVar1 = fVar17 * fVar2;
      if (fVar17 * fVar2 <= fVar19) {
        fVar1 = fVar19;
      }
      if (ABS(fVar15 - fVar16) < fVar1) goto LAB_027a975c;
    }
    uVar22 = (ulong)(uint)fVar21;
    uVar20 = (ulong)(uint)fVar19;
    uVar10 = (ulong)(uint)fVar1;
    if ((param_12 & 1) != 0) {
      uVar9 = FUN_02688370(0);
      uVar10 = FUN_026886bc(param_1,param_2,param_3,param_4,uVar9,uVar10,uVar20,uVar22,0);
      puVar3 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
      if ((uVar10 & 1) != 0) {
        plVar12 = (long *)FUN_02746b14(local_a8,0);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar8 == 0) ||
           (FUN_016f27fc(lVar8,local_a8,
                         *(undefined8 *)System_Collections_Generic_List<PlacePoint>_TypeInfo,0),
           plVar12 == (long *)0x0)) {
LAB_027a9874:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)Sirenix_Serialization_NodeInfo___TypeInfo) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_027a97f0;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_00d59724(plVar12,*(long *)Sirenix_Serialization_NodeInfo___TypeInfo,1);
LAB_027a97f0:
        (*(code *)*puVar13)(plVar12,lVar8,puVar13[1]);
        goto LAB_027a975c;
      }
    }
    FUN_0274a398(local_a8,8,0);
  }
LAB_027a975c:
  iVar6 = FUN_026cc440(param_10,0);
  if ((iVar6 != 0xb) && (iVar6 = FUN_026cc440(param_10,0), puVar3 = StringLiteral_302, iVar6 != 0xc)
     ) {
    iVar6 = FUN_026d4f8c(0);
    if (iVar5 < iVar6) {
      iVar6 = *(int *)(*(long *)puVar3 + 0xe0);
      puVar13 = (undefined8 *)System_Numerics_Vector<ushort>_TypeInfo;
    }
    else {
      if (iVar5 <= iVar6) goto LAB_027a9810;
      iVar6 = *(int *)(*(long *)puVar3 + 0xe0);
      puVar13 = (undefined8 *)Method_System_Collections_Generic_Stack<int>_get_Count__;
    }
    if (iVar6 == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*puVar13,0);
  }
LAB_027a9810:
  while (iVar6 = FUN_026d4f8c(0), iVar5 < iVar6) {
    FUN_026d0ce8(0);
  }
  iVar5 = FUN_026cc440(param_10,0);
  if (iVar5 == 0xc) {
    FUN_0274a398(local_a8,0x800,0);
  }
  return;
}


