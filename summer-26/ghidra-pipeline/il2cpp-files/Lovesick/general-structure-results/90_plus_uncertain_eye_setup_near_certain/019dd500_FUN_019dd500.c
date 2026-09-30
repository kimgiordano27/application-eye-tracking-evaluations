/*
FUNCTION_NAME: FUN_019dd500
ENTRY_POINT: 019dd500
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_019dd500(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  uint local_70;
  undefined4 local_6c;
  undefined8 local_68;
  long local_60;
  undefined4 local_54;
  
  if ((DAT_0377a7af & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ecbe0);
    thunk_FUN_00d48444(Method_System_UriBuilder_ToString__);
    thunk_FUN_00d48444(Unity_Burst_BurstCompiler_<>c_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                      );
    thunk_FUN_00d48444(
                      Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserFiles>b__3_0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_f32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_3926);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef210);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<char>__ctor__);
    thunk_FUN_00d48444(Oculus_Platform_Models_AchievementProgressList_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    DAT_0377a7af = 1;
  }
  local_68 = 0;
  local_60 = 0;
  local_6c = 0;
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar12 = FUN_00bfbd30(*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_033ecbe0);
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_f32__;
    plVar22 = *(long **)(param_1 + 0x48);
    if (plVar22 != (long *)0x0) {
      lVar18 = *plVar22;
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_f32__) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_019dd670;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar22,*(long *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_f32__,0);
LAB_019dd670:
      puVar10 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserFiles>b__3_0__;
      puVar9 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__;
      uVar20 = (*(code *)*puVar13)(plVar22,uVar4,uVar12,&local_60,puVar13[1]);
      puVar7 = PTR_DAT_033ef210;
      if ((uVar20 & 1) == 0) {
        local_54 = *(undefined4 *)(param_1 + 0x5c);
        plVar22 = *(long **)(param_1 + 0x40);
        uVar24 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,&local_54);
        local_70 = uVar12;
        uVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar9,&local_70);
        uVar24 = FUN_01600b5c(*(undefined8 *)puVar7,uVar24,uVar16,0);
        if (plVar22 == (long *)0x0) goto LAB_019ddb04;
        (**(code **)(*plVar22 + 0x558))(plVar22,uVar24,*(undefined8 *)(*plVar22 + 0x560));
        bVar11 = 0;
      }
      else {
        plVar22 = *(long **)(param_1 + 0x48);
        if (plVar22 == (long *)0x0) goto LAB_019ddb04;
        lVar19 = *plVar22;
        uVar4 = *(undefined4 *)(param_1 + 0x5c);
        lVar18 = *(long *)puVar6;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar18) {
              puVar13 = (undefined8 *)(lVar19 + (long)(*piVar21 + 2) * 0x10 + 0x138);
              goto LAB_019dd768;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar22,lVar18,2);
LAB_019dd768:
        local_68 = (*(code *)*puVar13)(plVar22,uVar4,uVar12,puVar13[1]);
        lVar18 = *(long *)(param_1 + 0x60);
        if (lVar18 == 0) goto LAB_019ddb04;
        plVar22 = *(long **)(param_1 + 0x48);
        uVar4 = *(undefined4 *)(param_1 + 0x5c);
        lVar19 = **(long **)(*(long *)(*(long *)Method_System_UriBuilder_ToString__ + 0x20) + 0xc0);
        if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
          lVar19 = FUN_00d5941c();
        }
        puVar14 = (undefined4 *)thunk_FUN_00d32ed4(lVar18,*(undefined8 *)(lVar19 + 0x80));
        lVar18 = *(long *)(param_1 + 0x60);
        if (lVar18 == 0) goto LAB_019ddb04;
        uVar5 = *puVar14;
        lVar19 = **(long **)(*(long *)(*(long *)Unity_Burst_BurstCompiler_<>c_TypeInfo + 0x20) +
                            0xc0);
        if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
          lVar19 = FUN_00d5941c();
        }
        puVar13 = (undefined8 *)thunk_FUN_00d32ed4(lVar18,*(long *)(lVar19 + 0x80) + 0x40);
        puVar7 = Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__
        ;
        if (plVar22 == (long *)0x0) goto LAB_019ddb04;
        lVar19 = *plVar22;
        lVar18 = *(long *)puVar6;
        uVar24 = *puVar13;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar18) {
              puVar13 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_019dd864;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar22,lVar18,1);
LAB_019dd864:
        bVar11 = (*(code *)*puVar13)(plVar22,uVar4,uVar12,uVar5,uVar24,puVar13[1]);
        lVar18 = *(long *)(*(long *)puVar7 + 0x20);
        if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
          lVar18 = FUN_00d5941c(lVar18);
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 8);
        if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
          lVar18 = FUN_00d5941c();
        }
        puVar7 = Oculus_Platform_Models_AchievementProgressList_TypeInfo;
        puVar6 = PTR_DAT_033ea8a0;
        pcVar15 = (char *)thunk_FUN_00d32ed4(&local_68,*(undefined8 *)(lVar18 + 0x80));
        puVar8 = 
        Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__;
        if (*pcVar15 == '\0') {
          lVar18 = *(long *)Method_Sirenix_Serialization_Serializer<char>__ctor__;
        }
        else {
          FUN_01347408(&local_68,&local_54,*(undefined8 *)StringLiteral_3926);
          local_6c = local_54;
          lVar18 = FUN_017841b4(&local_6c,*(undefined8 *)puVar8,0);
        }
        plVar23 = *(long **)(param_1 + 0x40);
        plVar22 = (long *)FUN_00da4fb8(*(undefined8 *)puVar6,5);
        local_54 = *(undefined4 *)(param_1 + 0x5c);
        uVar24 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,&local_54);
        local_70 = uVar12;
        uVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar9,&local_70);
        lVar19 = FUN_01600b5c(*(undefined8 *)puVar7,uVar24,uVar16,0);
        if (plVar22 == (long *)0x0) goto LAB_019ddb04;
        if ((lVar19 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar17 == 0)) {
LAB_019ddb0c:
          uVar24 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar24,0);
        }
        lVar17 = local_60;
        uVar12 = *(uint *)(plVar22 + 3);
        if (uVar12 == 0) {
LAB_019ddb08:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar22[4] = lVar19;
        if (local_60 != 0) {
          lVar19 = thunk_FUN_00d6225c(local_60,*(undefined8 *)(*plVar22 + 0x40));
          if (lVar19 == 0) goto LAB_019ddb0c;
          uVar12 = *(uint *)(plVar22 + 3);
        }
        puVar6 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
        if (uVar12 < 2) goto LAB_019ddb08;
        plVar22[5] = lVar17;
        lVar19 = *(long *)puVar6;
        if (lVar19 != 0) {
          lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar22 + 0x40));
          if (lVar19 == 0) goto LAB_019ddb0c;
          uVar12 = *(uint *)(plVar22 + 3);
        }
        if (uVar12 < 3) goto LAB_019ddb08;
        plVar22[6] = *(long *)puVar6;
        if (lVar18 != 0) {
          lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar22 + 0x40));
          if (lVar19 == 0) goto LAB_019ddb0c;
          uVar12 = *(uint *)(plVar22 + 3);
        }
        puVar6 = StringLiteral_12935;
        if (uVar12 < 4) goto LAB_019ddb08;
        plVar22[7] = lVar18;
        lVar18 = *(long *)puVar6;
        if (lVar18 != 0) {
          lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar22 + 0x40));
          if (lVar18 == 0) goto LAB_019ddb0c;
          uVar12 = *(uint *)(plVar22 + 3);
        }
        if (uVar12 < 5) goto LAB_019ddb08;
        plVar22[8] = *(long *)puVar6;
        uVar24 = FUN_01600844(plVar22,0);
        if (plVar23 == (long *)0x0) goto LAB_019ddb04;
        (**(code **)(*plVar23 + 0x558))(plVar23,uVar24,*(undefined8 *)(*plVar23 + 0x560));
      }
      bVar11 = bVar11 & 1;
      if (bVar11 != *(byte *)(param_1 + 0x58)) {
        if (bVar11 == 0) {
          puVar14 = (undefined4 *)(param_1 + 0x20);
          puVar1 = (undefined4 *)(param_1 + 0x24);
          puVar2 = (undefined4 *)(param_1 + 0x28);
          puVar3 = (undefined4 *)(param_1 + 0x2c);
        }
        else {
          puVar14 = (undefined4 *)(param_1 + 0x30);
          puVar1 = (undefined4 *)(param_1 + 0x34);
          puVar2 = (undefined4 *)(param_1 + 0x38);
          puVar3 = (undefined4 *)(param_1 + 0x3c);
        }
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_019ddb04;
        FUN_0267d974(*puVar14,*puVar1,*puVar2,*puVar3,*(long *)(param_1 + 0x50),0);
        *(byte *)(param_1 + 0x58) = bVar11;
      }
      return;
    }
  }
LAB_019ddb04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


