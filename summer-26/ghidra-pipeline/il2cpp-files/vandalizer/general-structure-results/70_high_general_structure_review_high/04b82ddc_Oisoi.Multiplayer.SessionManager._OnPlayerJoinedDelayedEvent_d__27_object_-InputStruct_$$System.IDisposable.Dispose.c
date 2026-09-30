/*
FUNCTION_NAME: Oisoi.Multiplayer.SessionManager.<OnPlayerJoinedDelayedEvent>d__27<object,-InputStruct>$$System.IDisposable.Dispose
ENTRY_POINT: 04b82ddc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int Oisoi_Multiplayer_SessionManager_<OnPlayerJoinedDelayedEvent>d__27<object,_InputStruct>__System_IDisposable_Dispose
              (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  undefined *puVar6;
  
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  iVar2 = FUN_03a1ebc4(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (iVar2 < (int)unaff_w20) {
    thunk_FUN_03257e30(PTR_DAT_0759e028);
    uVar4 = thunk_FUN_0322f148();
    puVar6 = PTR_DAT_075d6308;
  }
  else {
    if (-1 < param_4) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      iVar2 = FUN_03a1ebc4(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
      if ((int)(param_4 + unaff_w20) <= iVar2) {
        iVar2 = FUN_0381e100(param_1 + (ulong)unaff_w20 * 4 + 4,param_4,param_2,0);
        uVar1 = 0;
        if (-1 < iVar2) {
          uVar1 = unaff_w20;
        }
        return uVar1 + iVar2;
      }
    }
    thunk_FUN_03257e30(PTR_DAT_0759e028);
    uVar4 = thunk_FUN_0322f148();
    puVar6 = PTR_DAT_0759e038;
  }
  uVar5 = thunk_FUN_03257e30(puVar6);
  FUN_05d7734c(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar4);
}


