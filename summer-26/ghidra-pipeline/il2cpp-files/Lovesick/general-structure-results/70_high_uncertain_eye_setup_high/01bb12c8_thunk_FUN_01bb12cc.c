/*
FUNCTION_NAME: thunk_FUN_01bb12cc
ENTRY_POINT: 01bb12c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_01bb12cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377e6fa & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateStaticMethodCaller__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1463);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<BillingPlan>__ctor__);
    thunk_FUN_00d48444(Method_System_Delegate_Combine__);
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__
                      );
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_ClientContextReplySink_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Vector2Int>_set_Item__);
    DAT_0377e6fa = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02681b9c(uVar11,0,0);
  if ((uVar8 & 1) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_02681b9c(uVar11,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  puVar6 = StringLiteral_1463;
  puVar5 = Method_System_Delegate_Combine__;
  puVar4 = Method_System_Collections_Generic_List<BillingPlan>__ctor__;
  puVar3 = Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__;
  puVar2 = System_Runtime_Remoting_Messaging_ClientContextReplySink_TypeInfo;
  puVar1 = PTR_DAT_033f3868;
  FUN_010c2c5c(param_1,&uStack_48,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateStaticMethodCaller__);
  *(undefined8 *)(param_1 + 0x58) = uStack_48;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar3,0);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar6,0);
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar2,0);
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar9 != 0) {
    FUN_0268afbc(lVar9,*(undefined8 *)
                        DigitalOpus_MB_Core_MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray_TypeInfo
                 ,0);
    FUN_0268c458(lVar9,0x3d,0);
    lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                       (lVar9,0);
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar11 = FUN_0268fd10(*(long *)(param_1 + 0x58),0), puVar3 = OVRPlugin_OVRP_1_93_0_TypeInfo,
       puVar2 = UnityEngine_Pose___TypeInfo, lVar10 != 0)) {
      FUN_026a0040(lVar10,uVar11,0,0);
      uVar11 = FUN_010e5800(lVar9,*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0x60) = uVar11;
      lVar9 = FUN_010e5800(lVar9,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x70) = lVar9;
      if (lVar9 != 0) {
        FUN_0266830c(lVar9,0,0);
        if (*(long *)(param_1 + 0x70) != 0) {
          FUN_026682c8(*(long *)(param_1 + 0x70),0,0);
          if (*(long *)(param_1 + 0x70) != 0) {
            FUN_02668350(*(long *)(param_1 + 0x70),0,0);
            if (*(long *)(param_1 + 0x70) != 0) {
              FUN_02668394(*(long *)(param_1 + 0x70),0,0);
              if (*(long *)(param_1 + 0x70) != 0) {
                FUN_02668594(*(long *)(param_1 + 0x70),0,0);
                if (*(long *)(param_1 + 0x70) != 0) {
                  FUN_0266622c(*(long *)(param_1 + 0x70),0,0);
                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar9 != 0) {
                    FUN_0268afbc(lVar9,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<int,_Vector2Int>_set_Item__
                                 ,0);
                    FUN_0268c458(lVar9,0x3d,0);
                    lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                       (lVar9,0);
                    if ((*(long *)(param_1 + 0x58) != 0) &&
                       (uVar11 = FUN_0268fd10(*(long *)(param_1 + 0x58),0), lVar10 != 0)) {
                      FUN_026a0040(lVar10,uVar11,0,0);
                      uVar11 = FUN_010e5800(lVar9,*(undefined8 *)puVar3);
                      *(undefined8 *)(param_1 + 0x68) = uVar11;
                      lVar9 = FUN_010e5800(lVar9,*(undefined8 *)puVar2);
                      *(long *)(param_1 + 0x78) = lVar9;
                      if (lVar9 != 0) {
                        FUN_0266830c(lVar9,0,0);
                        if (*(long *)(param_1 + 0x78) != 0) {
                          FUN_026682c8(*(long *)(param_1 + 0x78),0,0);
                          if (*(long *)(param_1 + 0x78) != 0) {
                            FUN_02668350(*(long *)(param_1 + 0x78),0,0);
                            if (*(long *)(param_1 + 0x78) != 0) {
                              FUN_02668394(*(long *)(param_1 + 0x78),0,0);
                              if (*(long *)(param_1 + 0x78) != 0) {
                                FUN_02668594(*(long *)(param_1 + 0x78),0,0);
                                if (*(long *)(param_1 + 0x78) != 0) {
                                  FUN_0266622c(*(long *)(param_1 + 0x78),0,0);
                                  FUN_01bb0684(param_1);
                                  FUN_01bb0d0c(param_1);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


