/*
FUNCTION_NAME: FUN_0525f878
ENTRY_POINT: 0525f878
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_0525f878(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long local_48;
  
  puVar2 = PTR_DAT_070f3578;
                    /* try { // try from 0525f8a4 to 0535f8af has its CatchHandler @ 0525f970 */
  if ((DAT_0754ae7e & 1) == 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0525f830 with catch @ 0525f8b0
                       try { // try from 0525f8b0 to 0535f8cb has its CatchHandler @ 0525f78c */
    FUN_03188a78(PTR_DAT_070f6030);
    FUN_03188a78(PTR_DAT_070f6038);
    FUN_03188a78(PTR_DAT_070f3578);
                    /* try { // try from 0525f8cc to 0535f8e3 has its CatchHandler @ 0525f960 */
    FUN_03188a78(PTR_DAT_070f6020);
    FUN_03188a78(PTR_DAT_070f3590);
    FUN_03188a78(PTR_DAT_070f6028);
    FUN_03188a78(PTR_DAT_070f3598);
    DAT_0754ae7e = 1;
  }
  local_48 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar5 = FUN_058cf9c8(0);
  if (lVar5 != 0) {
    FUN_05042bb0(lVar5,param_1,&local_48,*(undefined8 *)PTR_DAT_070f6038);
    if (local_48 == 0) {
      return;
    }
    uVar3 = FUN_0583e9d4(local_48,*(undefined8 *)PTR_DAT_070f3598,0);
    if (local_48 == 0) goto LAB_0525fbe0;
    iVar4 = FUN_0583e9d4(local_48,*(undefined8 *)PTR_DAT_070f6020,0);
    lVar5 = local_48;
    puVar1 = PTR_DAT_070c1958;
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
    }
    uVar9 = FUN_0593e698(uVar9,0);
    if (lVar5 == 0) goto LAB_0525fbe0;
    lVar5 = FUN_0583ce0c(lVar5,*(undefined8 *)PTR_DAT_070f3590,uVar9,0);
    lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4(lVar10);
    }
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = thunk_FUN_031c3cac(lVar5,lVar10);
      if (lVar6 == 0) goto LAB_0525fbe4;
    }
    lVar10 = *(long *)(param_3 + 0x20);
    *(long *)(param_1 + 0x30) = lVar6;
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4(lVar10);
    }
    if ((lVar5 != 0) && (lVar6 = thunk_FUN_031c3cac(lVar5,lVar10), lVar6 == 0)) {
LAB_0525fbe4:
                    /* WARNING: Subroutine does not return */
      FUN_03189058(lVar5,lVar10);
    }
    if (iVar4 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      FUN_0525f370(param_1,iVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10)
                  );
      lVar5 = local_48;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar9 = FUN_0593e698(uVar9,0);
      if (lVar5 == 0) goto LAB_0525fbe0;
      lVar5 = FUN_0583ce0c(lVar5,*(undefined8 *)PTR_DAT_070f6028,uVar9,0);
      lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_031c09d4(lVar10);
      }
      if (lVar5 == 0) {
        FUN_059509a4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = thunk_FUN_031c3cac(lVar5,lVar10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(lVar5,lVar10);
      }
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar8 = 0;
        plVar11 = (long *)(lVar6 + 0x20);
        uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar8) {
System_EmptyArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>___cctor:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          if (*plVar11 == 0) {
            FUN_059509a4(0x11,0);
            uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
          }
          if (uVar7 <= uVar8)
          goto System_EmptyArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>___cctor;
          FUN_0525f43c(param_1,*plVar11,plVar11[1],plVar11[2],2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0x110));
          uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar8 = uVar8 + 1;
          plVar11 = plVar11 + 3;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
    }
    lVar5 = *(long *)puVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar5 = FUN_058cf9c8(0);
    if (lVar5 != 0) {
      FUN_0504295c(lVar5,param_1,*(undefined8 *)PTR_DAT_070f6030);
      return;
    }
  }
LAB_0525fbe0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


