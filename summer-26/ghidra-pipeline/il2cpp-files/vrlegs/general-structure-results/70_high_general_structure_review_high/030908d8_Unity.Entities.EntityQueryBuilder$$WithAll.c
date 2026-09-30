/*
FUNCTION_NAME: Unity.Entities.EntityQueryBuilder$$WithAll
ENTRY_POINT: 030908d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x03090c5c) */
/* WARNING: Removing unreachable block (ram,0x03090c28) */

undefined4 Unity_Entities_EntityQueryBuilder__WithAll(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xd20));
  FUN_01ab69ac(Unity_Entities_ChunkDataUtility_SwapComponents_000000DB_PostfixBurstDelegate_var);
                    /* try { // try from 030908ec to 03190903 has its CatchHandler @ 03090980 */
  FUN_01ab69ac(
              Unity_Entities_ChunkIterationUtility_CalculateBaseEntityIndexArray_00000A43_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(
              Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A40_PostfixBurstDelegate_var
              );
                    /* try { // try from 03090904 to 0319096f has its CatchHandler @ 0309076c */
  FUN_01ab69ac(
              Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A45_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(PTR_DAT_03cbdf88);
  *(undefined1 *)(unaff_x21 + 0x534) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (unaff_x20 != 0) {
    lVar7 = FUN_036a4d24();
    if (lVar7 == 0) {
      return 0;
    }
    lVar7 = FUN_036a4d24();
    if (lVar7 != 0) {
      iVar5 = FUN_036a3408();
      if (iVar5 != *(int *)(lVar7 + 0x18)) {
        return 0;
      }
      in_stack_00000008 = 0;
      if (unaff_x19 != (long *)0x0) {
        lVar7 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000989_PostfixBurstDelegate_var
               ) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03090a04;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec();
LAB_03090a04:
        plVar9 = (long *)(*(code *)*puVar8)();
        puVar4 = 
        Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A45_PostfixBurstDelegate_var
        ;
        puVar3 = 
        Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A40_PostfixBurstDelegate_var;
        puVar2 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000988_PostfixBurstDelegate_var
        ;
        puVar1 = PTR_DAT_03cbed20;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
LAB_03090a44:
        do {
          lVar7 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03090a90;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar1,0);
LAB_03090a90:
          uVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
          if ((uVar6 & 1) == 0) goto joined_r0x03090b84;
          lVar7 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03090aec;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,0);
LAB_03090aec:
          (*(code *)*puVar8)(plVar9,puVar8[1]);
          uVar6 = FUN_03098078();
          iVar5 = 1;
          if ((uVar6 & 1) == 0) {
            iVar5 = 2;
          }
          lVar7 = *(long *)(*(long *)puVar3 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01a46ff8();
          }
          pcVar10 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
          if (*pcVar10 == '\0') {
            iStack0000000000000018 = iVar5;
            FUN_02241190();
            in_stack_00000008 = 0;
            goto LAB_03090a44;
          }
          FUN_022412e0(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar4);
        } while (iStack0000000000000018 == iVar5);
        iStack0000000000000018 = 3;
        FUN_02241190();
        in_stack_00000008 = 0;
joined_r0x03090b84:
        if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03090c10;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cbed08,0);
LAB_03090c10:
          (*(code *)*puVar8)(plVar9,puVar8[1]);
        }
      }
      FUN_022414f4(&stack0x00000008);
      return uStack000000000000001c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


