/*
FUNCTION_NAME: FUN_06859edc
ENTRY_POINT: 06859edc
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06859edc(long param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (FUN_06859e70(), param_2 == 0))
  goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray;
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((int)uVar2 < 0) goto LAB_06859fa8;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0)
  goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray;
  if ((int)uVar2 < (int)*(uint *)(lVar8 + 0x18)) {
    if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar8 = *(long *)(lVar8 + (ulong)uVar2 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_06859f30;
  }
  else {
LAB_06859f30:
    lVar8 = FUN_06859ff4(param_1,param_2);
    if (lVar8 == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  if (*(long *)(lVar8 + 0x18) == *(long *)(param_2 + 0x20)) {
    puVar5 = (undefined8 *)(lVar8 + 0x10);
    *puVar5 = param_3;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
LAB_06859fa8:
  uVar6 = FUN_033d1ba8(&DAT_0843fc20);
  FUN_033d1ba8(&DAT_083cdc60);
  uVar7 = thunk_FUN_03398a84();
  FUN_0682eb84(uVar7,uVar6,0);
  uVar6 = FUN_033d1ba8(&DAT_08411938);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar7,uVar6);
}


