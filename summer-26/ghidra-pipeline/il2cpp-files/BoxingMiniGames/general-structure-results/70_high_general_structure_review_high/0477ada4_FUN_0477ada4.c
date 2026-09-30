/*
FUNCTION_NAME: FUN_0477ada4
ENTRY_POINT: 0477ada4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_1
*/


void FUN_0477ada4(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_d0 [80];
  undefined1 auStack_80 [80];
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    uVar4 = 0;
    lVar3 = 0x20;
    do {
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 == 0) goto Unity_Collections_NativeArray<ShadowSliceData>__ToArray;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_0477ae94:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_3 == 0) {
Unity_Collections_NativeArray<ShadowSliceData>__ToArray:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      memcpy(auStack_d0,(void *)(lVar2 + lVar3),0x50);
      memcpy(auStack_80,auStack_d0,0x50);
      uVar1 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x40),auStack_80,*(undefined8 *)(param_3 + 0x28))
      ;
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_2 + 0x10);
        if (lVar2 != 0) {
          if ((uint)uVar4 < *(uint *)(lVar2 + 0x18)) {
            memcpy(param_1,(void *)(lVar2 + lVar3),0x50);
            return;
          }
          goto LAB_0477ae94;
        }
        goto Unity_Collections_NativeArray<ShadowSliceData>__ToArray;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x50;
    } while ((long)uVar4 < (long)*(int *)(param_2 + 0x18));
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


