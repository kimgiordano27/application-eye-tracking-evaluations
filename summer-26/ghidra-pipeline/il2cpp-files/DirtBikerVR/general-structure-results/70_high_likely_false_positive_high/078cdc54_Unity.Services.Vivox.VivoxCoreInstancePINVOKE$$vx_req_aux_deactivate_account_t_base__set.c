/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_deactivate_account_t_base__set
ENTRY_POINT: 078cdc54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_deactivate_account_t_base__set(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718();
  FUN_03a8a718(Unity_Collections_NativeSlice<CopyMeshJobData>_TypeInfo);
  FUN_03a8a718(Unity_Collections_NativeSlice<NudgeJobData>_TypeInfo);
  FUN_03a8a718(UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo);
  FUN_03a8a718(
              System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
              );
  FUN_03a8a718(PTR_DAT_08488b28);
  FUN_03a8a718(System_Collections_Generic_List<PanelSettings>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ParameterExpression>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  FUN_03a8a718(UnityEngine_UIElements_ObjectListPool<string>_TypeInfo);
  FUN_03a8a718(UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>_TypeInfo);
  FUN_03a8a718(OVRTask<object>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa18) = 1;
  plVar6 = (long *)System_Nullable<short>_TypeInfo;
  lVar11 = *(long *)(unaff_x19 + 8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x10);
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
      goto LAB_078ce0bc;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = FUN_078cc9f8(lVar11,*(undefined8 *)(unaff_x19 + 10));
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_create_account_t_number_get
              (uVar7,*(undefined8 *)(unaff_x19 + 10));
    plVar12 = *(long **)(lVar11 + 0x40);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_078cddac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)
                                   UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo,0
                         );
LAB_078cddac:
    uVar7 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    *(undefined8 *)(unaff_x19 + 0xc) = uVar7;
    thunk_FUN_03afed3c();
    lVar8 = *(long *)(unaff_x19 + 10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar12 = *(long **)(unaff_x19 + 0xc);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    uVar1 = *(undefined4 *)(lVar8 + 0x30);
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848af08);
    FUN_078f5d24(lVar8,0);
    puVar2 = PTR_DAT_08488b28;
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack000000000000000c = 0;
    FUN_05294928((long)&stack0x00000008 + 4,*(undefined1 *)(*(long *)(unaff_x19 + 10) + 0x35),
                 *(undefined8 *)PTR_DAT_08488b28);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined2 *)(lVar8 + 0x10) = uStack000000000000000c;
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x38);
    thunk_FUN_03afed3c();
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000008 = 0;
    FUN_05294928(&stack0x00000008,*(undefined1 *)(*(long *)(unaff_x19 + 10) + 0x34),
                 *(undefined8 *)puVar2);
    *(undefined2 *)(lVar8 + 0x20) = uStack0000000000000008;
    puVar2 = OVRTask<object>_TypeInfo;
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *(long *)(*(long *)(unaff_x19 + 10) + 0x40);
    if (lVar13 == 0) {
      uVar15 = 0;
    }
    else {
      lVar4 = *(long *)OVRTask<object>_TypeInfo;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar2;
      }
      puVar3 = *(undefined8 **)(lVar4 + 0xb8);
      lVar14 = puVar3[1];
      if (lVar14 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar3 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar15 = *puVar3;
        lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     Unity_Collections_NativeSlice<NudgeJobData>_TypeInfo);
        FUN_0495c41c(lVar14,uVar15,
                     *(undefined8 *)UnityEngine_UIElements_ObjectListPool<string>_TypeInfo,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar5 = lVar14;
        thunk_FUN_03afed3c(plVar5,lVar14);
        lVar4 = *(long *)puVar2;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar2;
      }
      puVar3 = *(undefined8 **)(lVar4 + 0xb8);
      lVar16 = puVar3[2];
      if (lVar16 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar3 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar15 = *puVar3;
        lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     Unity_Collections_NativeSlice<CopyMeshJobData>_TypeInfo);
        FUN_0495c41c(lVar16,uVar15,
                     *(undefined8 *)UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>_TypeInfo,
                     0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar6 = lVar16;
        thunk_FUN_03afed3c(plVar6,lVar16);
        plVar6 = (long *)System_Nullable<short>_TypeInfo;
      }
      uVar15 = FUN_044dec2c(lVar13,lVar14,lVar16,
                            *(undefined8 *)
                             Unity_Collections_NativeSlice<ConvertMeshJobData>_TypeInfo);
    }
    *(undefined8 *)(lVar8 + 0x30) = uVar15;
    thunk_FUN_03afed3c();
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar15 = FUN_078a10cc(*(undefined8 *)(lVar11 + 0x28),
                          *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x18),0);
    *(undefined8 *)(lVar8 + 0x28) = uVar15;
    thunk_FUN_03afed3c();
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
           ) {
          puVar3 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0x1a) * 0x10 + 0x138);
          goto LAB_078ce02c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)
                                   System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                          ,0x1a);
LAB_078ce02c:
    lVar8 = (*(code *)*puVar3)(plVar12,uVar7,uVar1,lVar8,puVar3[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 = FUN_067c4bec(lVar8,0);
    uVar9 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*plVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffe438(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000028,0);
  lVar8 = *(long *)(unaff_x19 + 10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar11 = FUN_078cc2bc(lVar11,*(undefined8 *)(unaff_x19 + 0xc),lVar8,*(undefined8 *)(lVar8 + 0x40))
  ;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000020 =
       FUN_058b71ec(lVar11,*(undefined8 *)System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  uVar9 = FUN_0587c6c4(&stack0x00000020,
                       *(undefined8 *)System_Collections_Generic_List<ParameterExpression>_TypeInfo)
  ;
  if ((uVar9 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*plVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff0d08(unaff_x19 + 2,&stack0x00000020);
    return;
  }
LAB_078ce0bc:
  uVar7 = FUN_0587c704(&stack0x00000020,
                       *(undefined8 *)System_Collections_Generic_List<PanelSettings>_TypeInfo);
  puVar2 = Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo;
  piVar10 = unaff_x19 + 0xc;
  piVar10[0] = 0;
  piVar10[1] = 0;
  *unaff_x19 = -2;
  thunk_FUN_03afed3c(piVar10,0);
  if (*(int *)(*plVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar2);
  return;
}


