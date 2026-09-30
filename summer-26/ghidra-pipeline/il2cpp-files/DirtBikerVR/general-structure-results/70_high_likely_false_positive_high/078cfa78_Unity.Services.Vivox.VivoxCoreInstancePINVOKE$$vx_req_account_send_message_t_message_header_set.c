/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_send_message_t_message_header_set
ENTRY_POINT: 078cfa78
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_send_message_t_message_header_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(UnityEngine_Pool_ObjectPool<TypePathVisitor>_TypeInfo);
  FUN_03a8a718(UnityEngine_Pool_ObjectPool<ATGTextJobSystem_ManagedJobData>_TypeInfo);
  FUN_03a8a718(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
  FUN_03a8a718(System_Nullable<short>_TypeInfo);
  FUN_03a8a718(UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo);
  FUN_03a8a718(
              System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
              );
  FUN_03a8a718(PTR_DAT_0848b028);
  FUN_03a8a718(System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<PanelSettings>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ParameterExpression>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa22) = 1;
  puVar1 = System_Nullable<short>_TypeInfo;
  lVar9 = *(long *)(unaff_x19 + 10);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x12);
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = -1;
      goto LAB_078cfd90;
    }
    plVar10 = (long *)(unaff_x19 + 8);
    if (*plVar10 == 0) {
      lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      FUN_078c4250();
      *plVar10 = lVar3;
      thunk_FUN_03afed3c(plVar10,lVar3);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078cc9f8(lVar9,*plVar10);
    plVar12 = (long *)(unaff_x19 + 0xc);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = FUN_065d217c(*plVar12,0);
    *plVar12 = lVar3;
    thunk_FUN_03afed3c(plVar12);
    plVar11 = *(long **)(lVar9 + 0x40);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078cfc1c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo,0
                         );
LAB_078cfc1c:
    uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    piVar8 = unaff_x19 + 0xe;
    *(undefined8 *)piVar8 = uVar5;
    thunk_FUN_03afed3c(piVar8);
    plVar11 = *(long **)piVar8;
    lVar13 = *plVar12;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848b028);
    FUN_078f61bc(lVar3,0);
    if (*plVar10 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*plVar10 + 0x18);
    }
    uVar5 = FUN_078a10cc(*(undefined8 *)(lVar9 + 0x28),uVar5,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    thunk_FUN_03afed3c();
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(*plVar10 + 0x28);
    thunk_FUN_03afed3c();
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
           ) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x22) * 0x10 + 0x138);
          goto LAB_078cfd08;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                          ,0x22);
LAB_078cfd08:
    lVar3 = (*(code *)*puVar4)(plVar11,lVar13,lVar3,puVar4[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_067c4bec(lVar3,0);
    uVar7 = FUN_0666e8e0(&stack0x00000018,0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffeb10(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000018,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar9 = FUN_078cc2bc(lVar9,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 8),0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000010 =
       FUN_058b71ec(lVar9,*(undefined8 *)System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000010,
                       *(undefined8 *)System_Collections_Generic_List<ParameterExpression>_TypeInfo)
  ;
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000010;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff1628(unaff_x19 + 2,&stack0x00000010);
    return;
  }
LAB_078cfd90:
  uVar5 = FUN_0587c704(&stack0x00000010,
                       *(undefined8 *)System_Collections_Generic_List<PanelSettings>_TypeInfo);
  puVar2 = Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo;
  piVar8 = unaff_x19 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *unaff_x19 = -2;
  thunk_FUN_03afed3c(piVar8,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


