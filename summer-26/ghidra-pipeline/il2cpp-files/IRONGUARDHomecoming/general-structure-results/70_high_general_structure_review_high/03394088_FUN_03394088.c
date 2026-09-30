/*
FUNCTION_NAME: FUN_03394088
ENTRY_POINT: 03394088
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_03394088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_04832233 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Jobs_IJobExtensions_Schedule<NativeReferenceDisposeJob>__);
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_GetObjectData__);
    DAT_04832233 = 1;
  }
  uVar2 = FUN_03393b84(param_2,param_4);
  puVar1 = Method_System_Net_HttpWebRequest_GetObjectData__;
  if ((param_1 == 0) || (plVar9 = *(long **)(param_1 + 0xa0), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Jobs_IJobExtensions_Schedule<NativeReferenceDisposeJob>__) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto 
        System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteSerializationHeaderEnd;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Jobs_IJobExtensions_Schedule<NativeReferenceDisposeJob>__
                        ,5);
System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteSerializationHeaderEnd:
  uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_0338ebe0(uVar5,param_1,uVar4,uVar2,param_3);
  return uVar5;
}


