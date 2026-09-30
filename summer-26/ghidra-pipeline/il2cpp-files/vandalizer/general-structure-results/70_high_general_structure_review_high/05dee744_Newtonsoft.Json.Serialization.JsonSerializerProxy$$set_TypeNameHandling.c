/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 05dee744
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling(long *param_1,long param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
                    /* try { // try from 05dee744 to 05eee77b has its CatchHandler @ 05dee990 */
  if ((DAT_07a4549e & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075b8068);
    FUN_031f20f4(PTR_DAT_075a1480);
    FUN_031f20f4(PTR_DAT_075e8138);
    DAT_07a4549e = 1;
  }
  puVar2 = PTR_DAT_075e8138;
  if (param_2 == 0) {
LAB_05dee8dc:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar6 = *(uint *)(param_1 + 1);
  uVar8 = *(uint *)(param_1 + 2);
  uVar9 = *(uint *)(param_2 + 0x10);
  uVar5 = uVar6 - uVar8;
  if ((int)uVar5 < (int)uVar9) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_075e8138 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    uVar8 = *(uint *)(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 1);
    uVar9 = *(uint *)(param_2 + 0x10);
    uVar5 = uVar6 - uVar8;
  }
  lVar7 = param_1[3];
  lVar10 = *(long *)PTR_DAT_075b8068;
  if ((uVar6 < uVar8) || (uVar5 < uVar9)) {
    FUN_05e21fe0(0);
  }
  lVar11 = *param_1;
  if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  if (lVar7 == 0) goto LAB_05dee8dc;
  iVar3 = FUN_05d4fb94(lVar7,lVar11 + (long)(int)uVar8 * 2,uVar9,param_2,1,0);
  if (iVar3 != 0) {
    return 0;
  }
  uVar6 = *(int *)(param_2 + 0x10) + (int)param_1[2];
  if ((int)uVar6 < (int)*(uint *)(param_1 + 1)) {
    if (*(uint *)(param_1 + 1) <= uVar6) goto LAB_05dee8e0;
    uVar1 = *(undefined2 *)(*param_1 + (long)(int)uVar6 * 2);
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_05d7bb84(uVar1,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  *(uint *)(param_1 + 2) = uVar6;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  iVar3 = FUN_05df7844(param_1,0);
  if ((int)uVar6 < iVar3) {
    if (*(uint *)(param_1 + 1) <= *(uint *)(param_1 + 2)) {
LAB_05dee8e0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined2 *)((long)param_1 + 0x14) =
         *(undefined2 *)(*param_1 + (long)(int)*(uint *)(param_1 + 2) * 2);
  }
  return 1;
}


