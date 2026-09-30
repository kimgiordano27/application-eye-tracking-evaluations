/*
FUNCTION_NAME: FUN_038eba34
ENTRY_POINT: 038eba34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void FUN_038eba34(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(3);
  }
  if (((int)param_3 < 0) || (*(int *)(param_2 + 0x18) < (int)param_3)) {
    FUN_05027ebc(0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = System_Array_EmptyInternalEnumerator<KeyValuePair<ulong,_object>>__Dispose
                      (*(long *)(param_1 + 0x10),
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(param_2 + 0x18) - param_3) < iVar3) {
      FUN_05027654(5,0);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar2) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto System_Collections_Generic_List<AsyncGPUReadbackRequest>___ctor;
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 0x28);
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_038ebb24:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          if (-1 < *(int *)(puVar6 + -1)) {
            if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_038ebb24;
            lVar1 = (long)(int)param_3;
            param_3 = param_3 + 1;
            *(undefined8 *)(param_2 + lVar1 * 8 + 0x20) = *puVar6;
            thunk_FUN_02dd37b4();
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 0x12;
        } while (uVar2 != uVar5);
      }
      return;
    }
  }
System_Collections_Generic_List<AsyncGPUReadbackRequest>___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


