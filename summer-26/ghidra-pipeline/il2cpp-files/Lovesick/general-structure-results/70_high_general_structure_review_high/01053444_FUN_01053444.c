/*
FUNCTION_NAME: FUN_01053444
ENTRY_POINT: 01053444
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_01053444(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0377607e & 1) == 0) {
    thunk_FUN_00d48444(Method_Oculus_Interaction_ActiveStateGroup_<>c_<InjectActiveStates>b__11_0__)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MRUKAnchor>_get_Item__);
    thunk_FUN_00d48444(Method_Obi_ObiConstraints<ObiStretchShearConstraintsBatch>_AddBatch__);
    thunk_FUN_00d48444(Method_MedleyBarCustomer_OnDoorCloseComplete__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtq_u32__);
    thunk_FUN_00d48444(Unity_Mathematics_bool2_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10919);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_IsMatch__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__);
    DAT_0377607e = 1;
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar4 + 0x30);
    lVar5 = *(long *)(lVar4 + 0x68);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar4 != 0) &&
       (FUN_026c8404(lVar4,param_1,
                     *(undefined8 *)
                      Method_Obi_ObiConstraints<ObiStretchShearConstraintsBatch>_AddBatch__,0),
       lVar5 != 0)) {
      FUN_026c84dc(lVar5,lVar4,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x70);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar4 != 0) &&
           (FUN_026c8404(lVar4,param_1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<MRUKAnchor>_get_Item__,0),
           lVar5 != 0)) {
          FUN_026c84dc(lVar5,lVar4,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x78);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if ((lVar4 != 0) &&
               (FUN_026c8404(lVar4,param_1,
                             *(undefined8 *)
                              Method_Oculus_Interaction_ActiveStateGroup_<>c_<InjectActiveStates>b__11_0__
                             ,0),
               puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo,
               lVar5 != 0)) {
              FUN_026c84dc(lVar5,lVar4,0);
              FUN_01053140(param_1,*(undefined4 *)(param_1 + 0x20));
              FUN_01053860(param_1);
              uVar6 = *(undefined8 *)(param_1 + 0x58);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_0268b5e4(uVar6,0);
              if ((uVar3 & 1) != 0) {
                if (*(long *)(param_1 + 0x58) == 0) goto LAB_0105385c;
                lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 0x138);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                            Method_System_Text_RegularExpressions_Regex_IsMatch__);
                if ((lVar4 == 0) ||
                   (FUN_013df2bc(lVar4,param_1,*(undefined8 *)Unity_Mathematics_bool2_TypeInfo,0),
                   lVar5 == 0)) goto LAB_0105385c;
                FUN_013df780(lVar5,lVar4,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__);
              }
              uVar6 = *(undefined8 *)(param_1 + 0x60);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_02681b9c(uVar6,0,0);
              if ((uVar3 & 1) != 0) {
                if (*(long *)(param_1 + 0x60) == 0) goto LAB_0105385c;
                lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0xf8);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar4 == 0) ||
                   (FUN_026c8404(lVar4,param_1,
                                 *(undefined8 *)Method_MedleyBarCustomer_OnDoorCloseComplete__,0),
                   lVar5 == 0)) goto LAB_0105385c;
                FUN_026c84dc(lVar5,lVar4,0);
                if (*(long *)(param_1 + 0x60) == 0) goto LAB_0105385c;
                FUN_02878718(*(long *)(param_1 + 0x60),0,0);
              }
              uVar6 = *(undefined8 *)(param_1 + 0x48);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_02681b9c(uVar6,0,0);
              if ((uVar3 & 1) != 0) {
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (lVar4 = FUN_024a1bc8(*(long *)(param_1 + 0x48),0), lVar4 == 0))
                goto LAB_0105385c;
                FUN_02858f9c(0,lVar4,0);
              }
              uVar6 = *(undefined8 *)(param_1 + 0x68);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_02681b9c(uVar6,0,0);
              if ((uVar3 & 1) != 0) {
                if (*(long *)(param_1 + 0x68) == 0) goto LAB_0105385c;
                lVar5 = *(long *)(*(long *)(param_1 + 0x68) + 0xf8);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar4 == 0) ||
                   (FUN_026c8404(lVar4,param_1,*(undefined8 *)StringLiteral_10919,0), lVar5 == 0))
                goto LAB_0105385c;
                FUN_026c84dc(lVar5,lVar4,0);
                if (*(long *)(param_1 + 0x68) == 0) goto LAB_0105385c;
                FUN_02878718(*(long *)(param_1 + 0x68),0,0);
              }
              uVar6 = *(undefined8 *)(param_1 + 0x70);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_02681b9c(uVar6,0,0);
              if ((uVar3 & 1) == 0) {
                return;
              }
              if (*(long *)(param_1 + 0x70) != 0) {
                lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar4 != 0) &&
                   (FUN_026c8404(lVar4,param_1,
                                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtq_u32__,0
                                ), lVar5 != 0)) {
                  FUN_026c84dc(lVar5,lVar4,0);
                  if (*(long *)(param_1 + 0x70) != 0) {
                    FUN_02878718(*(long *)(param_1 + 0x70),0,0);
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
LAB_0105385c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


