/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_sessiongroup_set_session_3d_position$$.ctor
ENTRY_POINT: 07865714
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_set_session_3d_position___ctor
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  undefined2 in_stack_00000008;
  undefined2 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000010 = 0;
  FUN_0529a878(&stack0x00000010,*(undefined4 *)(lVar4 + 0x14),*unaff_x23);
  puVar1 = PTR_DAT_08488b28;
  if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *(long *)(*unaff_x22 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uStack000000000000000c = 0;
  FUN_05294928(&stack0x0000000c,*(undefined1 *)(lVar4 + 0x10),*(undefined8 *)PTR_DAT_08488b28);
  if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *(long *)(*unaff_x22 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (lVar4 != 0) {
    in_stack_00000008 = 0;
    FUN_05294928(&stack0x00000008,*(undefined1 *)(lVar4 + 0x11),*(undefined8 *)puVar1);
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(*unaff_x22 + 0x10);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_ICollection<ExceptionDispatchInfo>_TypeInfo
                                );
      FUN_0787c24c(uVar2,in_stack_00000018,in_stack_00000010,uStack000000000000000c,
                   in_stack_00000008,uVar5,0);
      lVar4 = FUN_048197b0();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000038 =
           FUN_058b71ec(lVar4,*(undefined8 *)
                               System_Collections_Generic_ICollection<IDataNode>_TypeInfo);
      uVar3 = FUN_0587c6c4(&stack0x00000038,
                           *(undefined8 *)System_Collections_Generic_ICollection<Group>_TypeInfo);
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000038;
        thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03ff43d0(unaff_x19 + 2,&stack0x00000038);
      }
      else {
        lVar4 = FUN_0587c704(&stack0x00000038,
                             *(undefined8 *)System_Collections_Generic_ICollection<Graphic>_TypeInfo
                            );
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        uVar6 = *(undefined8 *)(unaff_x19 + 0xc);
        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo
                                  );
        FUN_049639e4(uVar2,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo,0);
        uVar2 = FUN_044d3220(uVar5,uVar2,
                             *(undefined8 *)
                              System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo
                            );
        uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_HashSet<Binding>_TypeInfo);
        FUN_04de7e84(uVar5,uVar2,
                     *(undefined8 *)System_Collections_Generic_ICollection<Expression>_TypeInfo);
        puVar1 = System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo;
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 0xc) = 0;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


