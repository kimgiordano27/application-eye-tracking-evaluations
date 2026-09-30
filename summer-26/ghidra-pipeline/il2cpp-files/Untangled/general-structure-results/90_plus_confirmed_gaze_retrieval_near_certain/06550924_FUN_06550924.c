/*
FUNCTION_NAME: FUN_06550924
ENTRY_POINT: 06550924
PROGRAM: Untangled-libil2cpp.so
SCORE: 139
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_18;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_06550924(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong local_70;
  long *local_68;
  
  if ((DAT_071ce643 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02600);
    FUN_02f07e70(PTR_DAT_06d02200);
    FUN_02f07e70(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04128);
    FUN_02f07e70(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_02f07e70(OVRPlugin_Vector2f___TypeInfo);
    FUN_02f07e70(OVRPlugin_Vector3f___TypeInfo);
    FUN_02f07e70(OVRPlugin_Vector4f___TypeInfo);
    FUN_02f07e70(OVRPlugin_Vector4s___TypeInfo);
    FUN_02f07e70(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02bc8);
                    /* try { // try from 065509dc to 06650a67 has its CatchHandler @ 065509dc
                       catch() { ... } // from try @ 065509dc with catch @ 065509dc
                       catch() { ... } // from try @ 06550cd4 with catch @ 065509dc
                       catch() { ... } // from try @ 06550d24 with catch @ 065509dc */
    FUN_02f07e70(PTR_DAT_06d04148);
    FUN_02f07e70(PTR_DAT_06d040b0);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo);
    FUN_02f07e70(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo);
    FUN_02f07e70(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04188);
    FUN_02f07e70(PTR_DAT_06d04190);
    FUN_02f07e70(System_ParameterizedStrings_FormatParam___TypeInfo);
    FUN_02f07e70(UnityEngine_ParticleSystem_Burst___TypeInfo);
                    /* try { // try from 06550a68 to 06650a6f has its CatchHandler @ 06550cf4 */
    FUN_02f07e70(UnityEngine_ParticleSystem_Particle___TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_LowLevel_InputEventTrace_DeviceInfo___TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d38e18);
    DAT_071ce643 = 1;
  }
  local_68 = (long *)0x0;
  if (param_2 != 0) {
    if ((DAT_071ce6ba & 1) == 0) {
                    /* try { // try from 06550ab0 to 06650ae7 has its CatchHandler @ 06550d08 */
      FUN_02f07e70(PTR_DAT_06d02350);
      DAT_071ce6ba = 1;
    }
    puVar1 = PTR_DAT_06d38e18;
    plVar14 = *(long **)(param_2 + 0x10);
    if ((plVar14 == (long *)0x0) || (*plVar14 != *(long *)PTR_DAT_06d02350)) {
      if ((DAT_071ce6b8 & 1) == 0) {
        FUN_02f07e70(PTR_DAT_06d040b0);
        DAT_071ce6b8 = 1;
        plVar14 = *(long **)(param_2 + 0x10);
      }
      puVar2 = UnityEngine_ParticleSystem_Particle___TypeInfo;
      puVar5 = UnityEngine_InputSystem_LowLevel_InputEventTrace_DeviceInfo___TypeInfo;
      if ((plVar14 == (long *)0x0) || (*plVar14 != *(long *)PTR_DAT_06d040b0)) {
                    /* try { // try from 06550b34 to 06650b5b has its CatchHandler @ 06550d0c */
        uVar7 = FUN_0654e2e0(param_2);
        local_70 = CONCAT44(local_70._4_4_,uVar7);
        uVar8 = thunk_FUN_02ef1438(*(undefined8 *)puVar5,&local_70);
        uVar8 = FUN_05465b44(*(undefined8 *)puVar2,param_4,uVar8,0);
        lVar15 = *(long *)puVar1;
LAB_06550b70:
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar15);
        }
        uVar8 = FUN_0654e488(uVar8);
        return uVar8;
      }
      uVar7 = FUN_065512f0(param_2);
      local_70 = CONCAT44(local_70._4_4_,uVar7);
      uVar8 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,&local_70);
      if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d04128);
      }
      uVar8 = FUN_05636834(param_4,uVar8,0);
      *param_3 = uVar8;
      thunk_FUN_02f411dc(param_3,uVar8);
      lVar15 = *(long *)puVar1;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar15 = *(long *)puVar1;
      }
LAB_06551234:
      return *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8);
    }
    lVar15 = FUN_0654e594(param_2);
                    /* try { // try from 06550ba8 to 06650bb3 has its CatchHandler @ 06550cf8 */
    lVar9 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02600,1);
    if (lVar9 != 0) {
                    /* try { // try from 06550bb8 to 06650bcb has its CatchHandler @ 06550d00 */
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_06551284:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(undefined2 *)(lVar9 + 0x20) = 0x2c;
                    /* try { // try from 06550be4 to 06650bef has its CatchHandler @ 06550cf8 */
      if ((lVar15 != 0) &&
         (lVar15 = FUN_05467ed0(lVar15,lVar9,1,0),
         puVar1 = MS_Internal_Xml_XPath_Operator_Op___TypeInfo, lVar15 != 0)) {
        if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
          lVar24 = 0;
          uVar25 = 0;
          uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                    /* try { // try from 06550c1c to 06650c1f has its CatchHandler @ 06550cd4 */
          lVar9 = lVar15 + 0x20;
          puVar18 = (undefined8 *)
                    UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
          plVar14 = (long *)PTR_DAT_06d04128;
          do {
                    /* try { // try from 06550c20 to 06650c2f has its CatchHandler @ 06550ce4 */
            if (uVar16 <= uVar25) goto LAB_06551284;
            uVar8 = *(undefined8 *)(lVar9 + uVar25 * 8);
                    /* try { // try from 06550c34 to 06650c3f has its CatchHandler @ 06550ce0 */
            if (*(int *)(*plVar14 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar10 = FUN_05637038(param_4,0);
            uVar16 = FUN_03bdc2ec(uVar10,uVar8,*puVar18);
                    /* try { // try from 06550c54 to 06650c6f has its CatchHandler @ 06550cfc */
            if ((uVar16 & 1) == 0) {
              if (*(int *)(*plVar14 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
                    /* try { // try from 06550c70 to 06650c77 has its CatchHandler @ 06550cdc */
              uVar10 = FUN_05636f0c(param_4,0);
              uVar10 = FUN_03a08f68(uVar10,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo);
              lVar17 = *(long *)puVar1;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                    /* try { // try from 06550c98 to 06650c9f has its CatchHandler @ 06550cd8 */
                thunk_FUN_02f12b58(lVar17);
                lVar17 = *(long *)puVar1;
              }
              lVar20 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
              if (lVar20 == 0) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(lVar17);
                  lVar17 = *(long *)puVar1;
                }
                    /* try { // try from 06550cc4 to 06650cc7 has its CatchHandler @ 06550d04 */
                uVar21 = **(undefined8 **)(lVar17 + 0xb8);
                    /* try { // try from 06550cc8 to 06650ccb has its CatchHandler @ 06550cf0 */
                    /* try { // try from 06550ccc to 06650ccf has its CatchHandler @ 06550cec */
                    /* try { // try from 06550cd0 to 06650cd3 has its CatchHandler @ 06550ce8 */
                    /* catch() { ... } // from try @ 06550c1c with catch @ 06550cd4
                       try { // try from 06550cd4 to 06650d1f has its CatchHandler @ 065509dc */
                lVar20 = thunk_FUN_02ef1808(*(undefined8 *)
                                             OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo
                                           );
                    /* catch() { ... } // from try @ 06550c98 with catch @ 06550cd8 */
                    /* catch() { ... } // from try @ 06550c70 with catch @ 06550cdc */
                    /* catch() { ... } // from try @ 06550c34 with catch @ 06550ce0 */
                    /* catch() { ... } // from try @ 06550c20 with catch @ 06550ce4 */
                    /* catch() { ... } // from try @ 06550cd0 with catch @ 06550ce8 */
                    /* catch() { ... } // from try @ 06550ccc with catch @ 06550cec */
                    /* catch() { ... } // from try @ 06550cc8 with catch @ 06550cf0 */
                FUN_0513ca78(lVar20,uVar21,
                             *(undefined8 *)
                              OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo,0);
                    /* catch() { ... } // from try @ 06550a68 with catch @ 06550cf4 */
                    /* catch() { ... } // from try @ 06550ba8 with catch @ 06550cf8
                       catch() { ... } // from try @ 06550be4 with catch @ 06550cf8 */
                    /* catch() { ... } // from try @ 06550c54 with catch @ 06550cfc */
                    /* catch() { ... } // from try @ 06550bb8 with catch @ 06550d00 */
                plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                *plVar11 = lVar20;
                    /* catch() { ... } // from try @ 06550cc4 with catch @ 06550d04 */
                thunk_FUN_02f411dc(plVar11,lVar20);
              }
                    /* catch() { ... } // from try @ 06550ab0 with catch @ 06550d08 */
                    /* catch() { ... } // from try @ 06550b34 with catch @ 06550d0c */
              uVar10 = FUN_03a291ec(uVar10,lVar20,*(undefined8 *)OVRPlugin_Vector2f___TypeInfo);
                    /* try { // try from 06550d20 to 06650d23 has its CatchHandler @ 06550d3c */
              lVar17 = *(long *)puVar1;
                    /* try { // try from 06550d24 to 06650d5b has its CatchHandler @ 065509dc */
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02f12b58(lVar17);
                lVar17 = *(long *)puVar1;
              }
                    /* catch() { ... } // from try @ 06550d20 with catch @ 06550d3c */
              lVar20 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
              if (lVar20 == 0) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(lVar17);
                  lVar17 = *(long *)puVar1;
                }
                    /* try { // try from 06550d5c to 06650d67 has its CatchHandler @ 06550d68 */
                uVar21 = **(undefined8 **)(lVar17 + 0xb8);
                    /* catch() { ... } // from try @ 06550d5c with catch @ 06550d68 */
                lVar20 = thunk_FUN_02ef1808(*(undefined8 *)OVRPlugin_Vector4f___TypeInfo);
                FUN_05135d70(lVar20,uVar21,
                             *(undefined8 *)RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo,0)
                ;
                plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                *plVar11 = lVar20;
                thunk_FUN_02f411dc(plVar11,lVar20);
                lVar17 = *(long *)puVar1;
              }
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02f12b58(lVar17);
                lVar17 = *(long *)puVar1;
              }
              lVar22 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
              if (lVar22 == 0) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(lVar17);
                  lVar17 = *(long *)puVar1;
                }
                uVar21 = **(undefined8 **)(lVar17 + 0xb8);
                lVar22 = thunk_FUN_02ef1808(*(undefined8 *)OVRPlugin_Vector4s___TypeInfo);
                FUN_05135d70(lVar22,uVar21,
                             *(undefined8 *)
                              UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo
                             ,0);
                plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                *plVar14 = lVar22;
                thunk_FUN_02f411dc(plVar14,lVar22);
                plVar14 = (long *)PTR_DAT_06d04128;
              }
              lVar17 = FUN_03a2f1a8(uVar10,lVar20,lVar22,
                                    *(undefined8 *)OVRPlugin_Vector3f___TypeInfo);
              if (lVar17 == 0) goto LAB_06551288;
              uVar16 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                                 (lVar17,uVar8,&local_68,
                                  *(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
              puVar18 = (undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
              if ((uVar16 & 1) == 0) {
                uVar10 = *(undefined8 *)UnityEngine_ParticleSystem_Burst___TypeInfo;
                uVar21 = *(undefined8 *)System_ParameterizedStrings_FormatParam___TypeInfo;
                if (param_4 == (long *)0x0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (**(code **)(*param_4 + 0x168))
                                     (param_4,*(undefined8 *)(*param_4 + 0x170));
                }
                puVar1 = PTR_DAT_06d38e18;
                uVar8 = FUN_05465734(uVar21,uVar8,uVar10,uVar13,0);
                lVar15 = *(long *)puVar1;
                goto LAB_06550b70;
              }
              if (local_68 == (long *)0x0) goto LAB_06551288;
              uVar8 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170));
              if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_06551284;
              *(undefined8 *)(lVar9 + uVar25 * 8) = uVar8;
              thunk_FUN_02f411dc(lVar9 + lVar24,uVar8);
            }
            uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar25 = uVar25 + 1;
            lVar24 = lVar24 + 8;
          } while ((long)uVar25 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_05636770(param_4,0);
        puVar5 = PTR_DAT_06d04188;
        puVar1 = PTR_DAT_06d01eb0;
        uVar10 = *(undefined8 *)PTR_DAT_06d04188;
        if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01eb0);
        }
        uVar10 = FUN_056109c0(uVar10,0);
        uVar25 = FUN_05619d34(uVar8,uVar10,0);
        puVar6 = PTR_DAT_06d04190;
        puVar4 = PTR_DAT_06d04148;
        puVar3 = PTR_DAT_06d040b0;
        puVar2 = PTR_DAT_06d02200;
        uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
        iVar19 = (int)*(ulong *)(lVar15 + 0x18);
        if ((uVar25 & 1) == 0) {
          if (iVar19 < 1) {
            puVar18 = (undefined8 *)PTR_DAT_06d040b0;
            local_70 = 0;
          }
          else {
            uVar25 = 0;
            uVar23 = 0;
            do {
              if (uVar16 <= uVar25) goto LAB_06551284;
              uVar8 = *(undefined8 *)(lVar15 + 0x20 + uVar25 * 8);
              if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar8 = FUN_05635d10(param_4,uVar8,0);
              lVar9 = *(long *)puVar1;
              uVar10 = *(undefined8 *)puVar4;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_02f12b58(lVar9);
              }
              uVar10 = FUN_056109c0(uVar10,0);
              lVar9 = *(long *)puVar2;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_02f12b58(lVar9);
              }
              plVar14 = (long *)FUN_05567ac0(uVar8,uVar10,0);
              if (plVar14 == (long *)0x0) goto LAB_06551288;
              if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar3 + 0x40))
              goto LAB_0655128c;
              puVar12 = (ulong *)thunk_FUN_02ef195c();
              uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
              uVar25 = uVar25 + 1;
              uVar23 = *puVar12 | uVar23;
              puVar18 = (undefined8 *)PTR_DAT_06d040b0;
              local_70 = uVar23;
            } while ((long)uVar25 < (long)(int)*(uint *)(lVar15 + 0x18));
          }
        }
        else if (iVar19 < 1) {
          puVar18 = (undefined8 *)PTR_DAT_06d04190;
          local_70 = 0;
        }
        else {
          uVar25 = 0;
          uVar23 = 0;
          do {
            if (uVar16 <= uVar25) goto LAB_06551284;
            uVar8 = *(undefined8 *)(lVar15 + 0x20 + uVar25 * 8);
            if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar8 = FUN_05635d10(param_4,uVar8,0);
            lVar9 = *(long *)puVar1;
            uVar10 = *(undefined8 *)puVar5;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02f12b58(lVar9);
            }
            uVar10 = FUN_056109c0(uVar10,0);
            lVar9 = *(long *)puVar2;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02f12b58(lVar9);
            }
            plVar14 = (long *)FUN_05567ac0(uVar8,uVar10,0);
            if (plVar14 == (long *)0x0) goto LAB_06551288;
            if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
LAB_0655128c:
                    /* WARNING: Subroutine does not return */
              FUN_02f08440();
            }
            puVar12 = (ulong *)thunk_FUN_02ef195c();
            uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar25 = uVar25 + 1;
            uVar23 = *puVar12 | uVar23;
            puVar18 = (undefined8 *)PTR_DAT_06d04190;
            local_70 = uVar23;
          } while ((long)uVar25 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
        uVar8 = thunk_FUN_02ef1438(*puVar18,&local_70);
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d04128);
        }
        uVar8 = FUN_05636834(param_4,uVar8,0);
        *param_3 = uVar8;
        thunk_FUN_02f411dc();
        puVar1 = PTR_DAT_06d38e18;
        lVar15 = *(long *)PTR_DAT_06d38e18;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar15 = *(long *)puVar1;
        }
        goto LAB_06551234;
      }
    }
  }
LAB_06551288:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


