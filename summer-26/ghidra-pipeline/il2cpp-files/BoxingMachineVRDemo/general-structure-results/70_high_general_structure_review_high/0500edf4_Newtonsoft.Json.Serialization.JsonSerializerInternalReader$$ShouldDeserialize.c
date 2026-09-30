/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 0500edf4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize
               (long param_1,uint param_2)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  short *psVar5;
  
  psVar1 = (short *)FUN_05015994(param_1,0);
  uVar2 = (ulong)param_2;
  if ((int)param_2 < 1) {
    uVar3 = 0;
LAB_0500ee44:
    uVar4 = uVar3;
    if ((uint)uVar3 == param_2) goto LAB_0500ee4c;
  }
  else {
    uVar3 = 0;
    psVar5 = psVar1;
    do {
      if (*psVar5 == 0) goto LAB_0500ee44;
      uVar3 = uVar3 + 1;
      psVar5 = psVar5 + 1;
      uVar4 = uVar2;
    } while (uVar2 != uVar3);
LAB_0500ee4c:
    uVar3 = uVar4;
    if (0x34 < (ushort)psVar1[param_2]) {
      psVar5 = psVar1 + param_2;
      do {
        uVar3 = uVar2 - 1;
        if ((long)uVar2 < 1) {
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          *psVar1 = 0x31;
          uVar3 = 1;
          goto LAB_0500eed8;
        }
        psVar5 = psVar5 + -1;
        uVar2 = uVar3;
      } while (*psVar5 == 0x39);
      *psVar5 = *psVar5 + 1;
      goto LAB_0500eeb8;
    }
  }
  psVar5 = psVar1 + (uVar3 & 0xffffffff);
  uVar2 = uVar3 & 0xffffffff;
  do {
    psVar5 = psVar5 + -1;
    uVar3 = uVar2 - 1;
    if ((long)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_05015988(param_1,0,0);
      uVar3 = 0;
      goto LAB_0500eed8;
    }
    uVar2 = uVar3;
  } while (*psVar5 == 0x30);
LAB_0500eeb8:
  uVar3 = uVar3 + 1;
LAB_0500eed8:
  *(undefined2 *)
   ((-(uVar3 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar3 & 0xffffffff) << 1) + (long)psVar1) = 0;
  return;
}


