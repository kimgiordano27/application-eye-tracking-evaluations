/*
FUNCTION_NAME: System.Xml.Serialization.XmlTypeMapMemberAttribute$$get_Namespace
ENTRY_POINT: 054b7558
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


ulong System_Xml_Serialization_XmlTypeMapMemberAttribute__get_Namespace(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    lVar12 = *unaff_x22;
    uVar17 = (ulong)*(byte *)(lVar12 + 0x130);
    plVar13 = unaff_x20;
    do {
      puVar7 = RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo;
      puVar6 = UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_TypeInfo;
      puVar5 = System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo;
      puVar4 = System_Runtime_Serialization_XmlFormatCollectionReaderDelegate_TypeInfo;
      lVar21 = *plVar13;
      bVar1 = *(byte *)(lVar21 + 0x130);
      uVar16 = (uint)uVar17;
      if ((bVar1 < uVar16) || (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) != lVar12)) {
        lVar14 = *(long *)System_Runtime_Serialization_XmlFormatCollectionReaderDelegate_TypeInfo;
        bVar2 = *(byte *)(lVar14 + 0x130);
        uVar18 = (ulong)bVar2;
        if (((uint)bVar2 <= (uint)bVar1) &&
           (*(long *)(*(long *)(lVar21 + 200) + uVar18 * 8 + -8) == lVar14)) {
          if (param_1 != (long *)0x0) {
            lVar21 = *param_1;
            if ((uVar16 <= *(byte *)(lVar21 + 0x130)) &&
               (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar12)) {
              uVar10 = FUN_02762a58(param_1);
              uVar11 = FUN_02762a58(plVar13,*(undefined8 *)puVar4);
              uVar17 = FUN_054b9468(unaff_x19,uVar10,uVar11);
              return uVar17;
            }
            if (((uint)bVar2 <= (uint)*(byte *)(lVar21 + 0x130)) &&
               (*(long *)(*(long *)(lVar21 + 200) + uVar18 * 8 + -8) == lVar14)) {
              uVar10 = FUN_02762a58(param_1,lVar14);
              uVar11 = FUN_02762a58(plVar13,*(undefined8 *)puVar4);
              uVar17 = FUN_054b961c(unaff_x19,uVar10,uVar11);
              return uVar17;
            }
          }
          uVar10 = FUN_02762a58(param_1,*(undefined8 *)
                                         RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                               );
          uVar11 = FUN_02762a58(plVar13,*(undefined8 *)puVar4);
          uVar17 = FUN_054b971c(unaff_x19,uVar10,uVar11);
          return uVar17;
        }
        lVar19 = *(long *)UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_TypeInfo;
        bVar3 = *(byte *)(lVar19 + 0x130);
        uVar20 = (ulong)bVar3;
        uVar22 = (uint)bVar1;
        if ((uVar22 < bVar3) || (*(long *)(*(long *)(lVar21 + 200) + uVar20 * 8 + -8) != lVar19)) {
          lVar14 = *(long *)
                    System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo;
          bVar1 = *(byte *)(lVar14 + 0x130);
          if ((uVar22 < bVar1) ||
             (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
            lVar14 = *(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo;
            bVar1 = *(byte *)(lVar14 + 0x130);
            if ((uVar22 < bVar1) ||
               (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
            goto LAB_054b796c;
            puVar15 = (undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithGroup>d__26>__
            ;
            if (param_1 != (long *)0x0) {
              lVar21 = *param_1;
              bVar2 = *(byte *)(lVar21 + 0x130);
              if ((uVar16 <= bVar2) &&
                 (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar12))
              goto LAB_054b7974;
              if (((uint)bVar1 <= (uint)bVar2) &&
                 (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) == lVar14)) {
LAB_054b79b4:
                puVar4 = RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo;
                uVar10 = FUN_02762a58(param_1,*(undefined8 *)
                                               RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                                     );
                uVar11 = FUN_02762a58(plVar13,*(undefined8 *)puVar4);
                uVar16 = 1;
                uVar17 = FUN_054ba428(unaff_x19,uVar10,uVar11,1);
                if ((uVar17 & 1) != 0) goto LAB_054b7c60;
                goto LAB_054b796c;
              }
              if ((bVar3 <= bVar2) &&
                 (*(long *)(*(long *)(lVar21 + 200) + uVar20 * 8 + -8) == lVar19)) {
                lVar12 = FUN_02762a58(param_1,*(undefined8 *)
                                               RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                                     );
                if (lVar12 == 0) {
LAB_054b7dd0:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                plVar9 = (long *)FUN_02762a58(param_1,*(undefined8 *)puVar7);
                lVar12 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
                if (lVar12 == 0) goto LAB_054b7dd0;
                iVar8 = FUN_04d238d0(lVar12,0);
                puVar15 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithGroup>d__26>__
                ;
                if (iVar8 == 1) goto LAB_054b79b4;
              }
            }
          }
          else {
            puVar15 = (undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SharedAnchorManager_<ShareAnchorsWithUser>d__27>__
            ;
            if (param_1 != (long *)0x0) {
              lVar21 = *param_1;
              bVar2 = *(byte *)(lVar21 + 0x130);
              if ((uVar16 <= bVar2) &&
                 (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar12))
              goto LAB_054b7974;
              if (((uint)bVar2 < (uint)bVar1) ||
                 (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
                bVar1 = *(byte *)(*(long *)
                                   System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo
                                 + 0x130);
                if ((bVar2 < bVar1) ||
                   (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo))
                goto FUN_054b7950;
                uVar10 = FUN_02762a58(param_1);
                uVar11 = FUN_02762a58(plVar13,*(undefined8 *)puVar5);
                uVar17 = FUN_054baba8(unaff_x19,uVar10,uVar11);
                if ((uVar17 & 1) == 0) {
                  lVar12 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
                  in_stack_00000008._4_4_ = (undefined4)param_1[2];
                  uVar10 = FUN_04d06fa4(0);
                  uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
                  if (lVar12 == 0) goto LAB_054b7dd0;
                  FUN_0275a400(lVar12,uVar10);
                  FUN_0275a434(lVar12,0,uVar10);
                  in_stack_00000008._4_4_ = *(undefined4 *)((long)param_1 + 0x14);
                  uVar10 = FUN_04d06fa4(0);
                  uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
                  FUN_0275a400(lVar12,uVar10);
                  FUN_0275a434(lVar12,1,uVar10);
                  in_stack_00000008._4_4_ = (undefined4)plVar13[2];
                  uVar10 = FUN_04d06fa4(0);
                  uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
                  FUN_0275a400(lVar12,uVar10);
                  FUN_0275a434(lVar12,2,uVar10);
                  in_stack_00000008._4_4_ = *(undefined4 *)((long)plVar13 + 0x14);
                  uVar10 = FUN_04d06fa4(0);
                  uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
                  FUN_0275a400(lVar12,uVar10);
                  FUN_0275a434(lVar12,3,uVar10);
                  puVar15 = (undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_ColocationSessionEventHandler_<LoadScene>d__14>__
                  ;
                  goto LAB_054b7dbc;
                }
              }
              else {
                if ((plVar13[5] == 0) || (param_1[5] == 0)) {
                  uVar17 = FUN_054baa1c(unaff_x19,param_1,plVar13);
                  return uVar17;
                }
                uVar17 = FUN_054ba428(unaff_x19,param_1,plVar13,0);
                if ((uVar17 & 1) == 0) goto LAB_054b796c;
              }
LAB_054b7c5c:
              uVar16 = 1;
              goto LAB_054b7c60;
            }
          }
          goto FUN_054b7950;
        }
        if (param_1 == (long *)0x0) goto LAB_054b796c;
        lVar21 = *param_1;
        bVar1 = *(byte *)(lVar21 + 0x130);
        if ((uVar16 <= bVar1) && (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar12)) {
LAB_054b7974:
          uVar10 = FUN_02762a58(param_1);
          uVar11 = FUN_02762a58(plVar13,*(undefined8 *)
                                         RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo
                               );
          uVar17 = FUN_054b9b64(unaff_x19,uVar10,uVar11);
          return uVar17;
        }
        if (((uint)bVar3 <= (uint)bVar1) &&
           (*(long *)(*(long *)(lVar21 + 200) + uVar20 * 8 + -8) == lVar19)) goto LAB_054b79b4;
        bVar3 = *(byte *)(*(long *)
                           System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo +
                         0x130);
        if ((bVar1 < bVar3) ||
           (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo)) {
          bVar3 = *(byte *)(*(long *)
                             System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                           + 0x130);
          puVar15 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<WaitAsync>d__46>__
          ;
          if (((bVar3 <= bVar1) &&
              (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar3 * 8 + -8) ==
               *(long *)
                System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo)) ||
             ((bVar2 <= bVar1 && (*(long *)(*(long *)(lVar21 + 200) + uVar18 * 8 + -8) == lVar14))))
          goto FUN_054b7950;
          goto LAB_054b796c;
        }
        uVar10 = FUN_02762a58(param_1);
        uVar11 = FUN_02762a58(plVar13,*(undefined8 *)puVar6);
        uVar17 = FUN_054ba718(unaff_x19,uVar10,uVar11);
        if ((uVar17 & 1) != 0) goto LAB_054b7c5c;
        lVar12 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
        in_stack_00000008._4_4_ = (undefined4)param_1[2];
        uVar10 = FUN_04d06fa4(0);
        uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
        if (lVar12 == 0) goto LAB_054b7dd0;
        FUN_0275a400(lVar12,uVar10);
        FUN_0275a434(lVar12,0,uVar10);
        in_stack_00000008._4_4_ = *(undefined4 *)((long)param_1 + 0x14);
        uVar10 = FUN_04d06fa4(0);
        uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
        FUN_0275a400(lVar12,uVar10);
        FUN_0275a434(lVar12,1,uVar10);
        in_stack_00000008._4_4_ = (undefined4)plVar13[2];
        uVar10 = FUN_04d06fa4(0);
        uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
        FUN_0275a400(lVar12,uVar10);
        FUN_0275a434(lVar12,2,uVar10);
        in_stack_00000008._4_4_ = *(undefined4 *)((long)plVar13 + 0x14);
        uVar10 = FUN_04d06fa4(0);
        uVar10 = FUN_04d78d58((long)&stack0x00000008 + 4,uVar10,0);
        FUN_0275a400(lVar12,uVar10);
        FUN_0275a434(lVar12,3,uVar10);
        puVar15 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
        ;
LAB_054b7dbc:
        uVar10 = FUN_05580fc0(*puVar15,lVar12,0);
LAB_054b795c:
        *(undefined8 *)(unaff_x19 + 0x40) = uVar10;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),uVar10);
LAB_054b796c:
        uVar16 = 0;
LAB_054b7c60:
        return (ulong)uVar16;
      }
      unaff_x20 = (long *)FUN_054b8f08(unaff_x19,plVar13);
      if (unaff_x20 == (long *)0x0) {
LAB_054b7750:
        puVar15 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12>__
        ;
        if (param_1 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x22 + 0x130);
          if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
            uVar10 = FUN_02762a58(param_1);
            uVar17 = FUN_054b9248(unaff_x19,uVar10,plVar13);
            return uVar17;
          }
        }
FUN_054b7950:
        uVar10 = FUN_0557fa0c(*puVar15,0);
        goto LAB_054b795c;
      }
      bVar1 = *(byte *)(*(long *)
                         System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                       + 0x130);
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo))
      goto LAB_054b7750;
      if ((DAT_066d1093 & 1) == 0) {
        FUN_02b3c81c(PTR_DAT_06313048);
        FUN_02b3c81c(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_TypeInfo);
        FUN_02b3c81c(System_Runtime_Serialization_XmlFormatCollectionReaderDelegate_TypeInfo);
        FUN_02b3c81c(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                    );
        FUN_02b3c81c(UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo);
        FUN_02b3c81c(RootMotion_FinalIK_VRIKCalibrator_CalibrationData_Target_TypeInfo);
        FUN_02b3c81c(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo
                    );
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
      puVar4 = System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo;
      in_stack_00000008._4_4_ = 0;
      if (param_1 == unaff_x20) goto LAB_054b7c5c;
      if (param_1 == (long *)0x0) {
LAB_054b76ec:
        uVar17 = FUN_054b9184(unaff_x19,unaff_x20);
        return uVar17;
      }
      lVar12 = *(long *)
                System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar12 = *(long *)puVar4;
      }
      plVar13 = (long *)**(long **)(lVar12 + 0xb8);
      if (plVar13 == param_1) goto LAB_054b76ec;
      if (unaff_x20 == (long *)0x0) goto LAB_054b796c;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar13 = (long *)**(long **)(*(long *)puVar4 + 0xb8);
      }
      unaff_x22 = (long *)UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo;
      if (plVar13 == unaff_x20) goto LAB_054b796c;
      lVar12 = *(long *)UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo;
      uVar17 = (ulong)*(byte *)(lVar12 + 0x130);
      plVar13 = unaff_x20;
    } while ((*(byte *)(*param_1 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
            (*(long *)(*(long *)(*param_1 + 200) + uVar17 * 8 + -8) != lVar12));
    param_1 = (long *)FUN_054b8f08(unaff_x19,param_1);
  } while( true );
}


