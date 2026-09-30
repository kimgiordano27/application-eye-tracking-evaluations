/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$OnDisable
ENTRY_POINT: 05e5f310
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__OnDisable
               (undefined1 param_1 [16],float param_2,ulong param_3,ulong param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined8 uVar20;
  long unaff_x19;
  long lVar21;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 uVar22;
  long *plVar23;
  undefined4 uVar24;
  float fVar25;
  ulong uVar26;
  uint uStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  FUN_02d6084c(*(undefined8 *)(param_5 + 0x9e0));
  FUN_02d6084c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UnityServices_<InitializeAsync>d__21>__
              );
  FUN_02d6084c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UnityServicesInternal_<EnableInitializationAsync>d__35>__
              );
  FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRCpuImage_Format_TypeInfo);
  FUN_02d6084c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UnityServicesInternal_<InitializeAsync>d__27>__
              );
  FUN_02d6084c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UnityServicesInternal_<InitializeServicesAsync>d__32>__
              );
  FUN_02d6084c(PTR_DAT_0675e1b8);
  FUN_02d6084c(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<BoundingSphere>__);
  FUN_02d6084c(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<bool>__);
  FUN_02d6084c(
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
              );
  FUN_02d6084c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UserService_<DeleteUser>d__9>__
              );
  FUN_02d6084c(Method_System_Reflection_Assembly_get_ReflectionOnly__);
  FUN_02d6084c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UserService_<SaveUser>d__4>__
              );
  FUN_02d6084c(Method_System_Reflection_AssemblyFileVersionAttribute__ctor__);
  FUN_02d6084c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<Initialize>d__36>__
              );
  FUN_02d6084c(Method_System_Reflection_AssemblyName_GetObjectData__);
  FUN_02d6084c(Method_System_Array_Sort__);
  FUN_02d6084c(Method_System_Reflection_AssemblyName_InternalGetPublicKeyToken__);
  *(undefined1 *)(unaff_x19 + 0x7e6) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  lVar21 = unaff_x21[10];
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar14 = UnityEngine_Font__add_textureRebuilt(lVar21,0,0);
  if ((uVar14 & 1) != 0) {
    return;
  }
  lVar15 = FUN_05e49eb8();
  if (lVar15 != 0) {
    iVar10 = FUN_05e5ca6c();
    if (iVar10 == 2) {
      if (lVar21 == 0) goto LAB_05e5fd50;
      FUN_06039fa4(lVar21,*(undefined8 *)Method_System_Reflection_Assembly_get_ReflectionOnly__,1,0)
      ;
      FUN_06039fa4(lVar21,*(undefined8 *)
                           Method_System_Reflection_AssemblyFileVersionAttribute__ctor__,1,0);
      FUN_06039fa4(lVar21,*(undefined8 *)
                           Method_System_Reflection_AssemblyName_InternalGetPublicKeyToken__,1,0);
      uVar18 = 1;
    }
    else {
      if (iVar10 == 1) {
        if (lVar21 == 0) goto LAB_05e5fd50;
        uVar18 = 1;
      }
      else {
        if (iVar10 != 0) goto LAB_05e5f530;
        if (lVar21 == 0) goto LAB_05e5fd50;
        uVar18 = 5;
      }
      FUN_06039fa4(lVar21,*(undefined8 *)Method_System_Reflection_Assembly_get_ReflectionOnly__,
                   uVar18,0);
      FUN_06039fa4(lVar21,*(undefined8 *)
                           Method_System_Reflection_AssemblyFileVersionAttribute__ctor__,10,0);
      FUN_06039fa4(lVar21,*(undefined8 *)
                           Method_System_Reflection_AssemblyName_InternalGetPublicKeyToken__,1,0);
      uVar18 = 10;
    }
    FUN_06039fa4(lVar21,*(undefined8 *)Method_System_Reflection_AssemblyName_GetObjectData__,uVar18,
                 0);
  }
LAB_05e5f530:
  if (unaff_x21[7] == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(unaff_x21[7] + 0x30);
  }
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<BoundingSphere>__ +
              0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = FUN_05e56000();
  if (lVar15 == 0) {
LAB_05e5fb5c:
    puVar4 = Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
    if (*(int *)(*(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (lVar21 == 0) goto LAB_05e5fd50;
    thunk_FUN_06038ab8(lVar21,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c),0xffffffff,0
                      );
    thunk_FUN_06038bc0(0x43200000,lVar21,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0
                      );
    thunk_FUN_06038bc0(0x43200000,lVar21,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),0
                      );
  }
  else {
    if (((unaff_x21[7] == 0) || (lVar15 = *(long *)(unaff_x21[7] + 0x18), lVar15 == 0)) ||
       (lVar15 = *(long *)(lVar15 + 0x70), lVar15 == 0)) goto LAB_05e5fd50;
    FUN_03aaceb0(&stack0x00000028,lVar15,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UnityServicesInternal_<InitializeServicesAsync>d__32>__
                );
    puVar8 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UnityServicesInternal_<InitializeAsync>d__27>__
    ;
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UnityServices_<InitializeAsync>d__21>__
    ;
    puVar6 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SuccessManager_<LeaderboardOperations>d__19>__
    ;
    puVar4 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__;
    uStack0000000000000020 = 0;
    uVar22 = 0;
    uVar13 = 0;
    bVar3 = false;
    in_stack_00000050 = in_stack_00000038;
    in_stack_00000048 = in_stack_00000030;
    in_stack_00000040 = in_stack_00000028;
    while (uVar14 = FUN_04a7a4a0(&stack0x00000040,*(undefined8 *)puVar7), plVar9 = in_stack_00000050
          , (uVar14 & 1) != 0) {
      if (in_stack_00000050 != (long *)0x0) {
        lVar15 = *in_stack_00000050;
        bVar1 = *(byte *)(lVar15 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
          bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
            bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
            if (((bVar2 <= bVar1) &&
                (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar8 &&
                 ((uVar11 ^ 1) & 1) == 0)) &&
               (uVar14 = FUN_0606637c(in_stack_00000050,0), (uVar14 & 1) != 0)) {
              if (*(int *)(*(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__ + 0xe4)
                  == 0) {
                thunk_FUN_02dbd7b4();
              }
              puVar5 = Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              thunk_FUN_06038ab8(lVar21,*(undefined4 *)
                                         (*(long *)(*(long *)
                                                  Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__
                                                  + 0xb8) + 0x1c),(int)plVar9[6],0);
              thunk_FUN_06038bc0((float)*(int *)((long)plVar9 + 0x34),lVar21,
                                 *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
              bVar3 = true;
              thunk_FUN_06038bc0((float)(int)plVar9[7],lVar21,
                                 *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20),0);
            }
          }
          else {
            if (*(int *)(*(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__ + 0xe4) ==
                0) {
              thunk_FUN_02dbd7b4();
            }
            puVar5 = Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            thunk_FUN_06038cd0((int)plVar9[6],*(undefined4 *)((long)plVar9 + 0x34),(int)plVar9[7],
                               *(undefined4 *)((long)plVar9 + 0x3c),lVar21,
                               *(undefined4 *)
                                (*(long *)(*(long *)
                                            Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__
                                          + 0xb8) + 8),0);
            param_2 = *(float *)((long)plVar9 + 0x44);
            param_3 = (ulong)*(uint *)(plVar9 + 9);
            param_4 = (ulong)*(uint *)((long)plVar9 + 0x4c);
            uVar22 = 1;
            thunk_FUN_06038cd0((int)plVar9[8],param_2,param_3,lVar21,
                               *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),0);
          }
        }
        else {
          plVar23 = in_stack_00000050 + 8;
          lVar15 = *plVar23;
          uVar14 = param_3;
          uVar26 = param_4;
          if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            uVar14 = param_3;
            uVar26 = param_4;
          }
          uVar16 = FUN_0606a004(lVar15,0,0);
          if (((uVar16 & 1) == 0) || ((int)plVar9[9] != 1)) {
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__Update:
            plVar23 = plVar9 + 7;
            lVar15 = *plVar23;
            if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar16 = FUN_0606a004(lVar15,0,0);
            bVar19 = true;
            if ((uVar16 & 1) != 0) goto LAB_05e5f814;
            bVar19 = true;
            plVar23 = (long *)0x0;
          }
          else {
            if ((unaff_x21[7] == 0) || (lVar15 = *(long *)(unaff_x21[7] + 0x18), lVar15 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar15 = *(long *)(lVar15 + 0x40);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar18 = thunk_FUN_02d709fc(lVar15,0);
            uVar20 = *(undefined8 *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<bool>__
            ;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar20 = FUN_05015c2c(uVar20,0);
            uVar16 = FUN_0501ed54(uVar18,uVar20,0);
            if ((uVar16 & 1) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__Update;
            bVar19 = false;
LAB_05e5f814:
            plVar23 = (long *)*plVar23;
          }
          if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uStack0000000000000020 = FUN_0606a004(plVar23,0,0);
          uVar16 = FUN_0606a004(plVar23,0,0);
          if ((uVar16 & 1) != 0) {
            uVar18 = (**(code **)(*unaff_x21 + 0x198))();
            uVar12 = thunk_FUN_04e8bd3c(uVar18,*(undefined8 *)Method_System_Array_Sort__,0);
            if (((plVar23 == (long *)0x0) || (((uVar12 ^ 1) & 1) != 0)) ||
               (*plVar23 != *(long *)PTR_DAT_06786f78)) {
              if ((plVar23 == (long *)0x0) || (*plVar23 != *(long *)PTR_DAT_06786f78)) {
                lVar15 = unaff_x21[10];
                if (*(int *)(*(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__ + 0xe4
                            ) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                thunk_FUN_06038ef0(lVar15,**(undefined4 **)
                                            (*(long *)
                                              Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__
                                            + 0xb8),plVar23,0);
              }
            }
            else {
              lVar15 = unaff_x21[10];
              if (*(int *)(*(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__ + 0xe4)
                  == 0) {
                thunk_FUN_02dbd7b4();
              }
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              thunk_FUN_06038ef0(lVar15,*(undefined4 *)
                                         (*(long *)(*(long *)
                                                  Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__
                                                  + 0xb8) + 4),plVar23,0);
            }
          }
          param_3 = uVar14;
          param_4 = uVar26;
          if (*(char *)((long)plVar9 + 0x4c) != '\0') {
            if (bVar19) {
              uVar18 = FUN_05e5d988(plVar9);
              plVar23 = (long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
              fVar25 = param_2;
              param_3 = uVar14;
              param_4 = uVar26;
              uVar24 = FUN_05e5dbc0(plVar9);
            }
            else {
              uVar18 = FUN_05e5daa4(plVar9);
              plVar23 = (long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
              fVar25 = param_2;
              param_3 = uVar14;
              param_4 = uVar26;
              uVar24 = FUN_05e5dcdc(plVar9);
            }
            lVar15 = unaff_x21[10];
            if (*(int *)(*plVar23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            thunk_FUN_06038cd0(uVar18,1.0 - (param_2 + (float)uVar26),uVar14,uVar26,lVar15,
                               *(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0x10),0);
            if (unaff_x21[10] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar13 = 1;
            param_2 = 1.0 - (fVar25 + (float)param_4);
            thunk_FUN_06038cd0(uVar24,param_2,param_3,unaff_x21[10],
                               *(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0x14),0);
          }
        }
      }
    }
    FUN_04a7a49c(&stack0x00000040,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Ua2CoreInitializeCallback_<Initialize>d__1>__
                );
    if (*(int *)(*(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05e5fedc(lVar21,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UserService_<DeleteUser>d__9>__
                 ,uVar13);
    FUN_05e5fedc(lVar21,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<Initialize>d__36>__
                 ,uStack0000000000000020 & 1);
    FUN_05e5fedc(lVar21,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UserService_<SaveUser>d__4>__
                 ,uVar22);
    if (!bVar3) goto LAB_05e5fb5c;
  }
  if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRCpuImage_Format_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar15 = FUN_0602ed08(0);
  if ((uVar11 & 1) != 0) {
    if (lVar15 == 0) goto LAB_05e5fd50;
    uVar14 = FUN_0602ed60(lVar15,0);
    puVar4 = Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
    if ((uVar14 & 1) != 0) {
      lVar17 = *(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar17 = *(long *)puVar4;
      }
      uVar22 = *(undefined4 *)(*(long *)(lVar17 + 0xb8) + 0x28);
      uVar13 = FUN_0602f048(lVar15,0);
      if (lVar21 == 0) goto LAB_05e5fd50;
      thunk_FUN_06038ab8(lVar21,uVar22,uVar13,0);
      uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24);
      FUN_0602f1b0(lVar15,0);
      thunk_FUN_06038bc0(lVar21,uVar22,0);
      uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c);
      iVar10 = FUN_0602f318(lVar15,0);
      fVar25 = (float)iVar10;
      goto LAB_05e5fd18;
    }
  }
  puVar4 = Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
  if (*(int *)(*(long *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__ + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (lVar21 != 0) {
    thunk_FUN_06038ab8(lVar21,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28),0xffffffff,0
                      );
    fVar25 = 160.0;
    thunk_FUN_06038bc0(0x43200000,lVar21,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24),0
                      );
    uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c);
LAB_05e5fd18:
    thunk_FUN_06038bc0(fVar25,lVar21,uVar22,0);
    return;
  }
LAB_05e5fd50:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


