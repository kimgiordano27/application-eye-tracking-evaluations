/*
FUNCTION_NAME: FUN_0259d57c
ENTRY_POINT: 0259d57c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_0259d57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_38;
  
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03782fc1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_6565);
    thunk_FUN_00d48444(System_IO_FileLoadException_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6bc0);
    thunk_FUN_00d48444(Method_System_Diagnostics_TraceListener_set_IndentSize__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2348);
    thunk_FUN_00d48444(StringLiteral_2734);
    thunk_FUN_00d48444(Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__);
    thunk_FUN_00d48444(Method_System_MonoCustomAttrs_GetCustomAttributes__);
    thunk_FUN_00d48444(System_Func<SimpleDissolve,_string>_TypeInfo);
    DAT_03782fc1 = 1;
  }
  local_38 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = StringLiteral_302;
  uVar6 = FUN_0268b4e0(param_2,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0268b4e0(param_3,0,0);
    puVar5 = Method_System_MonoCustomAttrs_GetCustomAttributes__;
    puVar3 = PTR_DAT_033f6bc0;
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar6 = FUN_01322618(*(long *)(param_1 + 0x48),param_2,*(undefined8 *)PTR_DAT_033f6bc0);
        if ((uVar6 & 1) == 0) {
          uVar7 = FUN_015f6780(*(undefined8 *)
                                Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__,
                               param_2,0);
          uVar8 = FUN_015f6780(*(undefined8 *)puVar5,param_2,0);
UnityEngine_ResourceRequest___ctor:
          uVar8 = FUN_015f5b28(uVar7,uVar8,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          FUN_026611ec(uVar8,param_1,0);
          return;
        }
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar6 = FUN_01322618(*(long *)(param_1 + 0x48),param_3,*(undefined8 *)puVar3);
          puVar3 = System_IO_FileLoadException_TypeInfo;
          if ((uVar6 & 1) == 0) {
            uVar7 = FUN_015f6780(*(undefined8 *)System_Func<SimpleDissolve,_string>_TypeInfo,param_3
                                 ,0);
            uVar8 = FUN_015f6780(*(undefined8 *)puVar5,param_3,0);
            goto UnityEngine_ResourceRequest___ctor;
          }
          uVar6 = FUN_0259d89c(param_1,param_2,&local_38);
          if ((uVar6 & 1) == 0) {
            lVar11 = *(long *)(param_1 + 0x50);
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>__ctor__
                                      );
            puVar4 = OVR_OpenVR_IVRIOBuffer__Close_TypeInfo;
            if (lVar9 != 0) {
              FUN_0259da88();
              *(undefined8 *)(lVar9 + 0x10) = param_2;
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              if (lVar10 != 0) {
                FUN_01320e50(lVar10,*(undefined8 *)
                                     Method_System_Diagnostics_TraceListener_set_IndentSize__);
                FUN_00c3c2cc(lVar10,param_3,*(undefined8 *)puVar3);
                *(long *)(lVar9 + 0x18) = lVar10;
                if (lVar11 != 0) {
                  FUN_00cc5364(lVar11,lVar9,*(undefined8 *)StringLiteral_6565);
                  return;
                }
              }
            }
          }
          else if ((local_38 != 0) && (*(long *)(local_38 + 0x18) != 0)) {
            FUN_00c3c2cc(*(long *)(local_38 + 0x18),param_3,*(undefined8 *)puVar3);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
    puVar2 = (undefined8 *)StringLiteral_2734;
  }
  else {
    iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
    puVar2 = (undefined8 *)PTR_DAT_033f2348;
  }
  if (iVar1 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4(*puVar2,0);
  return;
}


