/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_sessiongroup_reset_focus$$.ctor
ENTRY_POINT: 0786554c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_reset_focus___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x248));
  FUN_03a8a718(PTR_DAT_08491c30);
  FUN_03a8a718(PTR_DAT_08488b28);
  FUN_03a8a718(System_Collections_Generic_ICollection<ExtensionDataMember>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<Graphic>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<Group>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<IDataNode>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<IEventSystemHandler>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<IMetricObserver>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<IQosResult>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x63f) = 1;
  puVar2 = System_Collections_Generic_HashSet<CustomPostProcessVolumeComponent>_TypeInfo;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 10);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_ICollection<IEventSystemHandler>_TypeInfo
                              );
    FUN_0679343c(lVar3,0);
    plVar9 = (long *)(unaff_x19 + 0xc);
    *plVar9 = lVar3;
    thunk_FUN_03afed3c(plVar9,lVar3);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(*plVar9 + 0x10) = *(undefined8 *)(unaff_x19 + 8);
    thunk_FUN_03afed3c();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar10 = *(long **)(lVar8 + 0x10);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_ICollection<Exception>_TypeInfo);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_HashSet<RealtimeView>_TypeInfo) {
          lVar3 = lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138;
          goto LAB_078656c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_HashSet<RealtimeView>_TypeInfo,
                         2);
LAB_078656c4:
    FUN_0496d698(uVar4,plVar10,*(undefined8 *)(lVar3 + 8),0);
    puVar1 = PTR_DAT_08491c30;
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(*plVar9 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = 0;
    FUN_0529a878(&stack0x00000018,*(undefined4 *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_08491c30);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(*plVar9 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000010 = 0;
    FUN_0529a878(&stack0x00000010,*(undefined4 *)(lVar3 + 0x14),*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_08488b28;
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(*plVar9 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack000000000000000c = 0;
    FUN_05294928((long)&stack0x00000008 + 4,*(undefined1 *)(lVar3 + 0x10),
                 *(undefined8 *)PTR_DAT_08488b28);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(*plVar9 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000008 = 0;
    FUN_05294928(&stack0x00000008,*(undefined1 *)(lVar3 + 0x11),*(undefined8 *)puVar1);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(*plVar9 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = *(undefined8 *)(lVar3 + 0x20);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_ICollection<ExceptionDispatchInfo>_TypeInfo
                              );
    FUN_0787c24c(uVar5,in_stack_00000018,in_stack_00000010,uStack000000000000000c,
                 uStack0000000000000008,uVar11,0);
    lVar3 = FUN_048197b0(lVar8,*(undefined8 *)
                                System_Collections_Generic_ICollection<IQosResult>_TypeInfo,uVar4,
                         uVar5,*(undefined8 *)
                                System_Collections_Generic_ICollection<IMetricObserver>_TypeInfo);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000038 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_Collections_Generic_ICollection<IDataNode>_TypeInfo);
    uVar6 = FUN_0587c6c4(&stack0x00000038,
                         *(undefined8 *)System_Collections_Generic_ICollection<Group>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000038;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff43d0(unaff_x19 + 2,&stack0x00000038);
      return;
    }
  }
  lVar3 = FUN_0587c704(&stack0x00000038,
                       *(undefined8 *)System_Collections_Generic_ICollection<Graphic>_TypeInfo);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo
                              );
    FUN_049639e4(uVar4,uVar11,
                 *(undefined8 *)
                  System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo,0);
    uVar4 = FUN_044d3220(uVar5,uVar4,
                         *(undefined8 *)
                          System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo
                        );
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_HashSet<Binding>_TypeInfo);
    FUN_04de7e84(uVar5,uVar4,
                 *(undefined8 *)System_Collections_Generic_ICollection<Expression>_TypeInfo);
    puVar1 = System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo;
    *unaff_x19 = -2;
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


