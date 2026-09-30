/*
FUNCTION_NAME: System.Threading.Tasks.TaskToApm.TaskWrapperAsyncResult$$.ctor
ENTRY_POINT: 016e7b68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x016e7f9c) */

void System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResult___ctor
               (ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  long *unaff_x26;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vdivq_f64__);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                      );
    thunk_FUN_00d48444(Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_498);
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaWhiteSpace_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x818) = 1;
  }
  puVar1 = PTR_DAT_033f3600;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = SystemNative_GetReadDirRBufferSize(0);
  in_stack_00000018 = &stack0x000000a0;
  in_stack_000000a0 = 0;
  in_stack_00000010 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  lVar12 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
  lVar6 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar6 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_000000a0 = (**(code **)(*plVar7 + 0x178))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x180));
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vdivq_f64__;
  puVar2 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  puVar1 = System_Xml_Schema_XmlSchemaWhiteSpace_TypeInfo;
  if (in_stack_000000a0 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(int *)(in_stack_000000a0 + 0x18) != 0) {
      lVar6 = in_stack_000000a0 + 0x20;
    }
  }
  lVar12 = 0;
  do {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_015e1988(param_2,0);
    uVar9 = FUN_017b4f64(uVar8,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar9 & 1) != 0) {
      lVar6 = thunk_FUN_00d48444(StringLiteral_498);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_015e1474(0);
      uVar8 = FUN_015e0f04(uVar8,param_2,1,0);
      uVar11 = thunk_FUN_00d48444(Method_FODBlastTheWrongPortraits_WrongPortraitBlasted__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar11);
    }
    do {
      while( true ) {
        do {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar5 = SystemNative_ReadDirR(uVar8,lVar6,uVar4,&stack0x00000090,0);
          if (iVar5 != 0) {
            iVar5 = 0x12;
            goto LAB_016e7e64;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar10 = FUN_016e79b0(&stack0x00000090,param_2);
        } while (lVar10 == 0);
        if ((in_stack_00000098._4_4_ != 0) && (in_stack_00000098._4_4_ != 10)) break;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iVar5 = FUN_015e1c44(lVar10,&stack0x00000020,0);
        if ((iVar5 < 0) || ((in_stack_00000020._4_4_ & 0xf000) != 0x4000)) goto LAB_016e7e34;
LAB_016e7db4:
        if (lVar12 == 0) {
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                     );
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320e50(lVar12,*(undefined8 *)
                               System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
        }
        FUN_00ac1158(lVar12,lVar10,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__
                    );
      }
      if (in_stack_00000098._4_4_ == 4) goto LAB_016e7db4;
LAB_016e7e34:
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar9 = (**(code **)(unaff_x19 + 0x18))
                        (*(undefined8 *)(unaff_x19 + 0x40),lVar10,*(undefined8 *)(unaff_x19 + 0x28))
      ;
    } while ((uVar9 & 1) == 0);
    iVar5 = 0x11;
LAB_016e7e64:
    uVar9 = FUN_017bc96c(uVar8,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_015e19c4(uVar8,0);
    }
    if ((((iVar5 != 0x12) && (iVar5 != 0)) || (lVar12 == 0)) || (*(int *)(lVar12 + 0x18) == 0)) {
      FUN_00bdfb78(&stack0x00000010);
      return;
    }
    FUN_0132138c(lVar12,*(int *)(lVar12 + 0x18) + -1,&stack0x000000a8,
                 *(undefined8 *)Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    param_2 = in_stack_000000a8;
    FUN_01324ac8(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar3);
  } while( true );
}


