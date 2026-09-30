/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$get_IsArray
ENTRY_POINT: 04e91a68
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


ulong Best_HTTP_JSON_LitJson_JsonData__get_IsArray
                (long param_1,long param_2,int param_3,long param_4,int param_5,long param_6,
                long param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long in_x9;
  uint in_w10;
  uint in_w11;
  uint in_w12;
  uint in_w13;
  uint in_w14;
  uint in_w15;
  uint in_w16;
  uint in_w17;
  ulong uVar7;
  
  while( true ) {
    uVar4 = param_1 + (ulong)*(uint *)(param_7 + 0x20);
    uVar6 = uVar4 >> 0x20;
    *(int *)(param_7 + 0x20) = (int)uVar4;
    if (in_x9 == 8) {
      return uVar6;
    }
    if (param_4 == in_x9) break;
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar2 = *(uint *)(param_6 + 0x18);
    iVar3 = (int)in_x9;
    uVar5 = param_5 + iVar3;
    if (uVar2 <= uVar5) break;
    lVar1 = param_6 + (long)(int)uVar5 * 4;
    uVar4 = (ulong)*(uint *)(param_2 + (long)(param_3 + iVar3) * 4 + 0x20);
    uVar7 = (ulong)*(uint *)(lVar1 + 0x20) + uVar4 * in_w10;
    *(int *)(lVar1 + 0x20) = (int)uVar7;
    if (uVar2 <= uVar5 + 1) break;
    lVar1 = param_6 + (long)(param_5 + iVar3 + 1) * 4;
    uVar7 = (uVar7 >> 0x20) + uVar4 * in_w11 + (ulong)*(uint *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x20) = (int)uVar7;
    if (uVar2 <= uVar5 + 2) break;
    lVar1 = param_6 + (long)(param_5 + iVar3 + 2) * 4;
    uVar7 = (uVar7 >> 0x20) + uVar4 * in_w12 + (ulong)*(uint *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x20) = (int)uVar7;
    if (uVar2 <= uVar5 + 3) break;
    lVar1 = param_6 + (long)(param_5 + iVar3 + 3) * 4;
    uVar7 = (uVar7 >> 0x20) + uVar4 * in_w13 + (ulong)*(uint *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x20) = (int)uVar7;
    if (uVar2 <= uVar5 + 4) break;
    lVar1 = param_6 + (long)(param_5 + iVar3 + 4) * 4;
    uVar7 = (uVar7 >> 0x20) + uVar4 * in_w14 + (ulong)*(uint *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x20) = (int)uVar7;
    if (uVar2 <= uVar5 + 5) break;
    lVar1 = param_6 + (long)(param_5 + iVar3 + 5) * 4;
    uVar7 = (uVar7 >> 0x20) + uVar4 * in_w15 + (ulong)*(uint *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x20) = (int)uVar7;
    if (uVar2 <= uVar5 + 6) break;
    lVar1 = param_6 + (long)(param_5 + iVar3 + 6) * 4;
    uVar7 = (uVar7 >> 0x20) + uVar4 * in_w16 + (ulong)*(uint *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x20) = (int)uVar7;
    if (uVar2 <= uVar5 + 7) break;
    lVar1 = param_6 + (long)(param_5 + iVar3 + 7) * 4;
    uVar4 = (uVar7 >> 0x20) + uVar4 * in_w17 + (ulong)*(uint *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x20) = (int)uVar4;
    if (uVar2 <= uVar5 + 8) break;
    param_1 = uVar6 + (uVar4 >> 0x20);
    in_x9 = in_x9 + 1;
    param_7 = param_6 + (long)(param_5 + iVar3 + 8) * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


