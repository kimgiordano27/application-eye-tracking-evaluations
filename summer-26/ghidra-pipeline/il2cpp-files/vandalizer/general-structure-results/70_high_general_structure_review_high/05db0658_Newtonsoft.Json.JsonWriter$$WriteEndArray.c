/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteEndArray
ENTRY_POINT: 05db0658
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__WriteEndArray(float param_1,long param_2,int param_3)

{
  double dVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if ((DAT_07a4523f & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d8b78);
    FUN_031f20f4(PTR_DAT_075eacc0);
    DAT_07a4523f = 1;
  }
  FUN_05e44034(param_2,0);
  puVar2 = PTR_DAT_0759b388;
  dVar1 = DAT_014bb9a8;
  if (param_3 < 0) {
    thunk_FUN_03257e30(PTR_DAT_0759e028);
    uVar5 = thunk_FUN_0322f148();
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075b2b60);
    uVar6 = thunk_FUN_03257e30(PTR_DAT_075d67a8);
    FUN_05d72b58(uVar5,uVar4,uVar6,0);
  }
  else {
    if ((param_1 < DAT_014ba83c) || (1.0 < param_1)) {
      in_stack_00000018 = 0x3fb999999999999a;
      uVar4 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x80),&stack0x00000018);
      in_stack_00000008 = 0x3ff0000000000000;
      uVar6 = thunk_FUN_0322ed78(*(undefined8 *)(puVar2 + 0x80),&stack0x00000008);
      uVar5 = thunk_FUN_03257e30(PTR_DAT_075eacc8);
      uVar4 = FUN_05c6a634(uVar5,uVar4,uVar6,0);
      thunk_FUN_03257e30(PTR_DAT_0759e028);
      uVar6 = thunk_FUN_0322f148();
      uVar5 = thunk_FUN_03257e30(PTR_DAT_075eacd0);
      FUN_05d72b58(uVar6,uVar5,uVar4,0);
      uVar4 = thunk_FUN_03257e30(PTR_DAT_075eacd8);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar6,uVar4);
    }
    fVar7 = (float)param_3 / (param_1 * DAT_014ba6e8);
    *(float *)(param_2 + 0x24) = param_1 * DAT_014ba6e8;
    puVar2 = PTR_DAT_075eacc0;
    if ((double)fVar7 <= dVar1) {
      if (fVar7 <= 3.0) {
        iVar3 = 3;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_075d8b78 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iVar3 = -0x80000000;
        if (fVar7 != INFINITY) {
          iVar3 = (int)fVar7;
        }
        iVar3 = FUN_05da3f20(iVar3);
      }
      uVar4 = FUN_031f21dc(*(undefined8 *)puVar2,iVar3);
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      thunk_FUN_0329bf60((undefined8 *)(param_2 + 0x10),uVar4);
      fVar7 = *(float *)(param_2 + 0x24) * (float)iVar3;
      iVar3 = -0x80000000;
      if (fVar7 != INFINITY) {
        iVar3 = (int)fVar7;
      }
      *(int *)(param_2 + 0x20) = iVar3;
      thunk_FUN_03200ae0();
      *(undefined1 *)(param_2 + 0x2c) = 0;
      return;
    }
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar5 = thunk_FUN_0322f148();
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075ea7e8);
    uVar6 = thunk_FUN_03257e30(PTR_DAT_075b2b60);
    FUN_05d6f3dc(uVar5,uVar4,uVar6,0);
  }
  uVar4 = thunk_FUN_03257e30(PTR_DAT_075eacd8);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar5,uVar4);
}


