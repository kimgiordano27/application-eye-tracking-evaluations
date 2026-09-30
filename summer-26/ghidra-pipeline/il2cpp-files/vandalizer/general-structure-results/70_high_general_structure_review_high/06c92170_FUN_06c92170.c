/*
FUNCTION_NAME: FUN_06c92170
ENTRY_POINT: 06c92170
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x06c92224) */

long FUN_06c92170(float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
                 long param_6,long param_7)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  
  if ((DAT_07a50794 & 1) == 0) {
    FUN_031f20f4(
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075e0838);
    FUN_031f20f4(PTR_DAT_075e0848);
    DAT_07a50794 = 1;
  }
  if (param_5 == 0) {
LAB_06c9232c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = *(uint *)(param_5 + 0x18);
  if (*(int *)(*(long *)
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
              + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar3 = FUN_06c92794((ulong)uVar1);
  puVar2 = PTR_DAT_075e0848;
  if (0 < (int)uVar1) {
    fVar9 = 0.0;
    uVar4 = 0;
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    puVar5 = (undefined8 *)(lVar3 + 0x20);
    do {
      uVar8 = FUN_04837df8(param_5,uVar4 & 0xffffffff,*(undefined8 *)puVar2);
      if ((param_6 == 0) || (fVar6 = (float)FUN_06e417d8(param_6,0), param_7 == 0))
      goto LAB_06c9232c;
      fVar10 = fVar9;
      fVar11 = param_3;
      fVar12 = param_4;
      fVar7 = (float)FUN_06e417d8(uVar8,param_7,0);
      fVar9 = fVar9 + param_1 * (fVar10 - fVar9);
      param_3 = param_3 + param_1 * (fVar11 - param_3);
      param_4 = param_4 + param_1 * (fVar12 - param_4);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_06e41554(fVar6 + param_1 * (fVar7 - fVar6),fVar9,param_3,param_4,uVar8,&local_98,0);
      if (lVar3 == 0) goto LAB_06c9232c;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(puVar5 + 2) = local_88;
      puVar5[1] = uStack_90;
      *puVar5 = local_98;
      puVar5 = (undefined8 *)((long)puVar5 + 0x14);
    } while (uVar1 != uVar4);
  }
  return lVar3;
}


