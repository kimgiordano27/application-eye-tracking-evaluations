/*
FUNCTION_NAME: FUN_054b73e0
ENTRY_POINT: 054b73e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


ulong FUN_054b73e0(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  undefined4 local_34 [13];
  
  do {
    plVar13 = param_3;
    if ((DAT_066d1093 & 1) == 0) {
      FUN_02b3c81c(PTR_DAT_06313048);
      FUN_02b3c81c(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_TypeInfo);
      FUN_02b3c81c(System_Runtime_Serialization_XmlFormatCollectionReaderDelegate_TypeInfo);
      FUN_02b3c81c(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo);
      FUN_02b3c81c(UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo);
      FUN_02b3c81c(RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo);
      FUN_02b3c81c(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
      FUN_02b3c81c(System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo);
      FUN_02b3c81c(
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<WaitAsync>d__46>__
                  );
      FUN_02b3c81c(
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
                  );
      FUN_02b3c81c(
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12>__
                  );
      FUN_02b3c81c(
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithGroup>d__26>__
                  );
      FUN_02b3c81c(
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithUser>d__27>__
                  );
      FUN_02b3c81c(
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_ColocationSessionEventHandler_<LoadScene>d__14>__
                  );
      DAT_066d1093 = 1;
    }
    puVar5 = System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo;
    local_34[0] = 0;
    if (param_2 == plVar13) goto LAB_054b7c5c;
    if (param_2 == (long *)0x0) {
LAB_054b76ec:
      uVar18 = FUN_054b9184(param_1,plVar13);
      return uVar18;
    }
    lVar10 = *(long *)
              System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *(long *)puVar5;
    }
    plVar14 = (long *)**(long **)(lVar10 + 0xb8);
    if (plVar14 == param_2) goto LAB_054b76ec;
    if (plVar13 == (long *)0x0) goto LAB_054b796c;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      plVar14 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
    }
    puVar5 = UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo;
    if (plVar14 == plVar13) goto LAB_054b796c;
    lVar10 = *(long *)UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo;
    uVar18 = (ulong)*(byte *)(lVar10 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + uVar18 * 8 + -8) == lVar10)) {
      param_2 = (long *)FUN_054b8f08(param_1,param_2);
      lVar10 = *(long *)puVar5;
      uVar18 = (ulong)*(byte *)(lVar10 + 0x130);
    }
    puVar8 = RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo;
    puVar7 = UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_TypeInfo;
    puVar6 = System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo;
    puVar4 = System_Runtime_Serialization_XmlFormatCollectionReaderDelegate_TypeInfo;
    lVar22 = *plVar13;
    bVar1 = *(byte *)(lVar22 + 0x130);
    uVar17 = (uint)uVar18;
    if ((bVar1 < uVar17) || (*(long *)(*(long *)(lVar22 + 200) + uVar18 * 8 + -8) != lVar10)) {
      lVar15 = *(long *)System_Runtime_Serialization_XmlFormatCollectionReaderDelegate_TypeInfo;
      bVar2 = *(byte *)(lVar15 + 0x130);
      uVar19 = (ulong)bVar2;
      if (((uint)bVar2 <= (uint)bVar1) &&
         (*(long *)(*(long *)(lVar22 + 200) + uVar19 * 8 + -8) == lVar15)) {
        if (param_2 != (long *)0x0) {
          lVar22 = *param_2;
          if ((uVar17 <= *(byte *)(lVar22 + 0x130)) &&
             (*(long *)(*(long *)(lVar22 + 200) + uVar18 * 8 + -8) == lVar10)) {
            uVar11 = FUN_02762a58(param_2);
            uVar12 = FUN_02762a58(plVar13,*(undefined8 *)puVar4);
            uVar18 = FUN_054b9468(param_1,uVar11,uVar12);
            return uVar18;
          }
          if (((uint)bVar2 <= (uint)*(byte *)(lVar22 + 0x130)) &&
             (*(long *)(*(long *)(lVar22 + 200) + uVar19 * 8 + -8) == lVar15)) {
            uVar11 = FUN_02762a58(param_2,lVar15);
            uVar12 = FUN_02762a58(plVar13,*(undefined8 *)puVar4);
            uVar18 = FUN_054b961c(param_1,uVar11,uVar12);
            return uVar18;
          }
        }
        uVar11 = FUN_02762a58(param_2,*(undefined8 *)
                                       RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                             );
        uVar12 = FUN_02762a58(plVar13,*(undefined8 *)puVar4);
        uVar18 = FUN_054b971c(param_1,uVar11,uVar12);
        return uVar18;
      }
      lVar20 = *(long *)UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_TypeInfo;
      bVar3 = *(byte *)(lVar20 + 0x130);
      uVar21 = (ulong)bVar3;
      uVar23 = (uint)bVar1;
      if ((uVar23 < bVar3) || (*(long *)(*(long *)(lVar22 + 200) + uVar21 * 8 + -8) != lVar20)) {
        lVar15 = *(long *)
                  System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo;
        bVar1 = *(byte *)(lVar15 + 0x130);
        if ((bVar1 <= uVar23) &&
           (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar1 * 8 + -8) == lVar15)) {
          puVar16 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithUser>d__27>__
          ;
          if (param_2 == (long *)0x0) goto FUN_054b7950;
          lVar22 = *param_2;
          bVar2 = *(byte *)(lVar22 + 0x130);
          if ((uVar17 <= bVar2) && (*(long *)(*(long *)(lVar22 + 200) + uVar18 * 8 + -8) == lVar10))
          goto LAB_054b7974;
          if (((uint)bVar2 < (uint)bVar1) ||
             (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar1 * 8 + -8) != lVar15)) {
            bVar1 = *(byte *)(*(long *)
                               System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo +
                             0x130);
            if ((bVar2 < bVar1) ||
               (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo))
            goto FUN_054b7950;
            uVar11 = FUN_02762a58(param_2);
            uVar12 = FUN_02762a58(plVar13,*(undefined8 *)puVar6);
            uVar18 = FUN_054baba8(param_1,uVar11,uVar12);
            if ((uVar18 & 1) == 0) {
              lVar10 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
              local_34[0] = (undefined4)param_2[2];
              uVar11 = FUN_04d06fa4(0);
              uVar11 = FUN_04d78d58(local_34,uVar11,0);
              if (lVar10 == 0) goto LAB_054b7dd0;
              FUN_0275a400(lVar10,uVar11);
              FUN_0275a434(lVar10,0,uVar11);
              local_34[0] = *(undefined4 *)((long)param_2 + 0x14);
              uVar11 = FUN_04d06fa4(0);
              uVar11 = FUN_04d78d58(local_34,uVar11,0);
              FUN_0275a400(lVar10,uVar11);
              FUN_0275a434(lVar10,1,uVar11);
              local_34[0] = (undefined4)plVar13[2];
              uVar11 = FUN_04d06fa4(0);
              uVar11 = FUN_04d78d58(local_34,uVar11,0);
              FUN_0275a400(lVar10,uVar11);
              FUN_0275a434(lVar10,2,uVar11);
              local_34[0] = *(undefined4 *)((long)plVar13 + 0x14);
              uVar11 = FUN_04d06fa4(0);
              uVar11 = FUN_04d78d58(local_34,uVar11,0);
              FUN_0275a400(lVar10,uVar11);
              FUN_0275a434(lVar10,3,uVar11);
              puVar16 = (undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_ColocationSessionEventHandler_<LoadScene>d__14>__
              ;
              goto LAB_054b7dbc;
            }
          }
          else {
            if ((plVar13[5] == 0) || (param_2[5] == 0)) {
              uVar18 = FUN_054baa1c(param_1,param_2,plVar13);
              return uVar18;
            }
            uVar18 = FUN_054ba428(param_1,param_2,plVar13,0);
            if ((uVar18 & 1) == 0) goto LAB_054b796c;
          }
LAB_054b7c5c:
          uVar17 = 1;
          goto LAB_054b7c60;
        }
        lVar15 = *(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo;
        bVar1 = *(byte *)(lVar15 + 0x130);
        if ((uVar23 < bVar1) ||
           (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
        goto LAB_054b796c;
        puVar16 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithGroup>d__26>__
        ;
        if (param_2 == (long *)0x0) goto FUN_054b7950;
        lVar22 = *param_2;
        bVar2 = *(byte *)(lVar22 + 0x130);
        if ((uVar17 <= bVar2) && (*(long *)(*(long *)(lVar22 + 200) + uVar18 * 8 + -8) == lVar10)) {
LAB_054b7974:
          uVar11 = FUN_02762a58(param_2);
          uVar12 = FUN_02762a58(plVar13,*(undefined8 *)
                                         RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                               );
          uVar18 = FUN_054b9b64(param_1,uVar11,uVar12);
          return uVar18;
        }
        if (((uint)bVar2 < (uint)bVar1) ||
           (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar1 * 8 + -8) != lVar15)) {
          if ((bVar2 < bVar3) || (*(long *)(*(long *)(lVar22 + 200) + uVar21 * 8 + -8) != lVar20))
          goto FUN_054b7950;
          lVar10 = FUN_02762a58(param_2,*(undefined8 *)
                                         RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                               );
          if (lVar10 == 0) {
LAB_054b7dd0:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar14 = (long *)FUN_02762a58(param_2,*(undefined8 *)puVar8);
          lVar10 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
          if (lVar10 == 0) goto LAB_054b7dd0;
          iVar9 = FUN_04d238d0(lVar10,0);
          puVar16 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithGroup>d__26>__
          ;
          if (iVar9 != 1) goto FUN_054b7950;
        }
      }
      else {
        if (param_2 == (long *)0x0) goto LAB_054b796c;
        lVar22 = *param_2;
        bVar1 = *(byte *)(lVar22 + 0x130);
        if ((uVar17 <= bVar1) && (*(long *)(*(long *)(lVar22 + 200) + uVar18 * 8 + -8) == lVar10))
        goto LAB_054b7974;
        if (((uint)bVar1 < (uint)bVar3) ||
           (*(long *)(*(long *)(lVar22 + 200) + uVar21 * 8 + -8) != lVar20)) {
          bVar3 = *(byte *)(*(long *)
                             System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo +
                           0x130);
          if ((bVar1 < bVar3) ||
             (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo)) {
            bVar3 = *(byte *)(*(long *)
                               System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                             + 0x130);
            puVar16 = (undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<WaitAsync>d__46>__
            ;
            if (((bVar3 <= bVar1) &&
                (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar3 * 8 + -8) ==
                 *(long *)
                  System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo))
               || ((bVar2 <= bVar1 &&
                   (*(long *)(*(long *)(lVar22 + 200) + uVar19 * 8 + -8) == lVar15))))
            goto FUN_054b7950;
            goto LAB_054b796c;
          }
          uVar11 = FUN_02762a58(param_2);
          uVar12 = FUN_02762a58(plVar13,*(undefined8 *)puVar7);
          uVar18 = FUN_054ba718(param_1,uVar11,uVar12);
          if ((uVar18 & 1) != 0) goto LAB_054b7c5c;
          lVar10 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
          local_34[0] = (undefined4)param_2[2];
          uVar11 = FUN_04d06fa4(0);
          uVar11 = FUN_04d78d58(local_34,uVar11,0);
          if (lVar10 == 0) goto LAB_054b7dd0;
          FUN_0275a400(lVar10,uVar11);
          FUN_0275a434(lVar10,0,uVar11);
          local_34[0] = *(undefined4 *)((long)param_2 + 0x14);
          uVar11 = FUN_04d06fa4(0);
          uVar11 = FUN_04d78d58(local_34,uVar11,0);
          FUN_0275a400(lVar10,uVar11);
          FUN_0275a434(lVar10,1,uVar11);
          local_34[0] = (undefined4)plVar13[2];
          uVar11 = FUN_04d06fa4(0);
          uVar11 = FUN_04d78d58(local_34,uVar11,0);
          FUN_0275a400(lVar10,uVar11);
          FUN_0275a434(lVar10,2,uVar11);
          local_34[0] = *(undefined4 *)((long)plVar13 + 0x14);
          uVar11 = FUN_04d06fa4(0);
          uVar11 = FUN_04d78d58(local_34,uVar11,0);
          FUN_0275a400(lVar10,uVar11);
          FUN_0275a434(lVar10,3,uVar11);
          puVar16 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
          ;
LAB_054b7dbc:
          uVar11 = FUN_05580fc0(*puVar16,lVar10,0);
          goto LAB_054b795c;
        }
      }
      puVar5 = RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo;
      uVar11 = FUN_02762a58(param_2,*(undefined8 *)
                                     RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                           );
      uVar12 = FUN_02762a58(plVar13,*(undefined8 *)puVar5);
      uVar17 = 1;
      uVar18 = FUN_054ba428(param_1,uVar11,uVar12,1);
      if ((uVar18 & 1) != 0) goto LAB_054b7c60;
      goto LAB_054b796c;
    }
    param_3 = (long *)FUN_054b8f08(param_1,plVar13);
    if (param_3 == (long *)0x0) {
LAB_054b7750:
      puVar16 = (undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12>__
      ;
      if (param_2 != (long *)0x0) {
        lVar10 = *(long *)puVar5;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == lVar10)) {
          uVar11 = FUN_02762a58(param_2);
          uVar18 = FUN_054b9248(param_1,uVar11,plVar13);
          return uVar18;
        }
      }
FUN_054b7950:
      uVar11 = FUN_0557fa0c(*puVar16,0);
LAB_054b795c:
      *(undefined8 *)(param_1 + 0x40) = uVar11;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar11);
LAB_054b796c:
      uVar17 = 0;
LAB_054b7c60:
      return (ulong)uVar17;
    }
    bVar1 = *(byte *)(*(long *)
                       System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                     + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo))
    goto LAB_054b7750;
  } while( true );
}


