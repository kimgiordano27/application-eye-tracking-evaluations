/*
FUNCTION_NAME: FUN_040b8a60
ENTRY_POINT: 040b8a60
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_040b8a60(long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_1c0 [72];
  undefined1 auStack_178 [72];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [72];
  
  uStack_f0 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (param_3 == param_4) {
    return;
  }
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x18) <= param_3) || (*(uint *)(param_1 + 0x18) <= param_4)) {
Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Copy:
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    if (param_2 != 0) {
      lVar4 = param_1 + (long)(int)param_3 * 0x48;
      lVar3 = param_1 + (long)(int)param_4 * 0x48;
      memcpy(auStack_178,(void *)(lVar4 + 0x20),0x48);
      memcpy(auStack_1c0,(void *)(lVar3 + 0x20),0x48);
      if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02e7568c();
      }
      memcpy(auStack_98,auStack_178,0x48);
      memcpy(auStack_e0,auStack_1c0,0x48);
      iVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),auStack_98,auStack_e0,
                         *(undefined8 *)(param_2 + 0x28));
      if (0 < iVar2) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (((uVar1 <= param_3) ||
            (memcpy(&uStack_130,(void *)(lVar4 + 0x20),0x48), uVar1 <= param_4)) ||
           (memmove((void *)(lVar4 + 0x20),(void *)(lVar3 + 0x20),0x48),
           *(uint *)(param_1 + 0x18) <= param_4))
        goto 
        Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Copy
        ;
        memcpy((void *)(lVar3 + 0x20),&uStack_130,0x48);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


