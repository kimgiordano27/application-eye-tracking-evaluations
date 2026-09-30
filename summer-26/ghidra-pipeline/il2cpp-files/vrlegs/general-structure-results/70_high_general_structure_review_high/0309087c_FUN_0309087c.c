/*
FUNCTION_NAME: FUN_0309087c
ENTRY_POINT: 0309087c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_5;telemetry_or_network_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x03090c5c) */
/* WARNING: Removing unreachable block (ram,0x03090c28) */

undefined4 FUN_0309087c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  char *pcVar11;
  int *piVar12;
  ulong local_60;
  ulong local_58;
  int local_48;
  uint local_44;
  
  puVar1 = PTR_DAT_03cbdf88;
                    /* try { // try from 03090884 to 031908bf has its CatchHandler @ 0309076c */
  if ((DAT_0412b534 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed08);
                    /* try { // try from 030908c0 to 031908c3 has its CatchHandler @ 030908d0 */
                    /* try { // try from 030908c4 to 031908c7 has its CatchHandler @ 030908cc */
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000989_PostfixBurstDelegate_var
                );
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0309083c with catch @ 030908c8
                       try { // try from 030908c8 to 031908eb has its CatchHandler @ 0309076c */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030908c4 with catch @ 030908cc
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030908c0 with catch @ 030908d0
                        */
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000988_PostfixBurstDelegate_var
                );
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03090854 with catch @ 030908d4
                        */
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(Unity_Entities_ChunkDataUtility_SwapComponents_000000DB_PostfixBurstDelegate_var);
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_CalculateBaseEntityIndexArray_00000A43_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A40_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A45_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    DAT_0412b534 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_036cee6c(param_1,0,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    lVar8 = FUN_036a4d24(param_1,0);
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = FUN_036a4d24(param_1,0);
    if (lVar8 != 0) {
      iVar6 = FUN_036a3408(param_1,0);
      if (iVar6 != *(int *)(lVar8 + 0x18)) {
        return 0;
      }
      local_58 = 0;
      if (param_2 != (long *)0x0) {
        lVar8 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000989_PostfixBurstDelegate_var
               ) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03090a04;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01a472ec(param_2,*(long *)
                                       UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000989_PostfixBurstDelegate_var
                              ,0);
LAB_03090a04:
        plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
        puVar5 = 
        Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A45_PostfixBurstDelegate_var
        ;
        puVar4 = 
        Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A40_PostfixBurstDelegate_var;
        puVar3 = 
        Unity_Entities_ChunkIterationUtility_CalculateBaseEntityIndexArray_00000A43_PostfixBurstDelegate_var
        ;
        puVar2 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000988_PostfixBurstDelegate_var
        ;
        puVar1 = PTR_DAT_03cbed20;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
LAB_03090a44:
        do {
          lVar8 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03090a90;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar1,0);
LAB_03090a90:
          uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
          if ((uVar7 & 1) == 0) goto joined_r0x03090b84;
          lVar8 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03090aec;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar2,0);
LAB_03090aec:
          (*(code *)*puVar9)(plVar10,puVar9[1]);
          uVar7 = FUN_03098078();
          iVar6 = 1;
          if ((uVar7 & 1) == 0) {
            iVar6 = 2;
          }
          lVar8 = *(long *)(*(long *)puVar4 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01a46ff8();
          }
          pcVar11 = (char *)thunk_FUN_01a59484(&local_58,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
          if (*pcVar11 == '\0') {
            local_60 = 0;
            local_48 = iVar6;
            FUN_02241190(&local_60,&local_48,*(undefined8 *)puVar3);
            local_58 = local_60;
            goto LAB_03090a44;
          }
          FUN_022412e0(&local_58,&local_48,*(undefined8 *)puVar5);
        } while (local_48 == iVar6);
        local_60 = 0;
        local_48 = 3;
        FUN_02241190(&local_60,&local_48,*(undefined8 *)puVar3);
        local_58 = local_60;
joined_r0x03090b84:
        if (plVar10 != (long *)0x0) {
          lVar8 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbed08) {
                puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03090c10;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed08,0);
LAB_03090c10:
          (*(code *)*puVar9)(plVar10,puVar9[1]);
        }
      }
      local_60 = local_60 & 0xffffffff00000000;
      FUN_022414f4(&local_58,&local_60,&local_44,
                   *(undefined8 *)
                    Unity_Entities_ChunkDataUtility_SwapComponents_000000DB_PostfixBurstDelegate_var
                  );
      return local_44;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


