/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeDictionaryArray
ENTRY_POINT: 060ed860
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 ExitGames_Client_Photon_Protocol16__DeserializeDictionaryArray(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 060ed864 to 061edc07 has its CatchHandler @ 060ed864
                       catch() { ... } // from try @ 060ed864 with catch @ 060ed864
                       catch() { ... } // from try @ 060edcc4 with catch @ 060ed864
                       catch() { ... } // from try @ 060ede84 with catch @ 060ed864
                       catch() { ... } // from try @ 060edf58 with catch @ 060ed864
                       catch() { ... } // from try @ 060edf60 with catch @ 060ed864
                       catch() { ... } // from try @ 060edf74 with catch @ 060ed864
                       catch() { ... } // from try @ 060ee040 with catch @ 060ed864
                       catch() { ... } // from try @ 060ee0d4 with catch @ 060ed864 */
  FUN_031f20f4(PTR_DAT_075d6af8);
  FUN_031f20f4(PTR_DAT_075fbf10);
  FUN_031f20f4(PTR_DAT_075fbf18);
  *(undefined1 *)(unaff_x21 + 0x187) = 1;
  puVar3 = PTR_DAT_075fbf08;
  puVar2 = PTR_DAT_075d6af8;
  if (unaff_x20 == 0) {
LAB_060eda74:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (*(int *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_075d6af8 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  iVar4 = FUN_03e5a714(uVar1,*(undefined8 *)puVar3);
  pvVar6 = (void *)FUN_05d26e98(iVar4 * *(int *)(unaff_x20 + 0x18),0);
  FUN_05d27020();
  uVar7 = FUN_06133cc4(pvVar6,*(undefined4 *)(unaff_x20 + 0x18),0);
  free(pvVar6);
  uVar5 = FUN_06133ea4(uVar7,0);
  *(undefined4 *)(unaff_x19 + 1) = uVar5;
  uVar5 = FUN_06134064(uVar7,0);
  *(undefined4 *)((long)unaff_x19 + 0xc) = uVar5;
  uVar8 = FUN_06134224(uVar7,10,0);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0x30;
  if ((uVar8 & 1) == 0) {
    puVar10 = (undefined8 *)PTR_DAT_075fbf10;
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      puVar10 = (undefined8 *)PTR_DAT_075fbf10;
    }
  }
  else {
    uVar5 = FUN_061343e4(uVar7,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar9);
    }
    pvVar6 = (void *)FUN_05d26e98(uVar5,0);
    uVar8 = FUN_061345a4(uVar7,pvVar6,uVar5,0);
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bae0,uVar5);
      if (lVar9 != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_05d27198(pvVar6,lVar9,0,*(undefined4 *)(lVar9 + 0x18),0);
        free(pvVar6);
        *unaff_x19 = lVar9;
        thunk_FUN_0329bf60();
        FUN_0613477c(uVar7,0);
        return 1;
      }
      goto LAB_060eda74;
    }
    puVar10 = (undefined8 *)PTR_DAT_075fbf18;
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      puVar10 = (undefined8 *)PTR_DAT_075fbf18;
    }
  }
  FUN_06deed24(*puVar10,0);
  return 0;
}


