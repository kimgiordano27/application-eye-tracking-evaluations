/*
FUNCTION_NAME: Unity.Entities.EntityQueryBuilder$$WithOptions
ENTRY_POINT: 0309096c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03090c28) */
/* WARNING: Removing unreachable block (ram,0x03090c5c) */

undefined4 Unity_Entities_EntityQueryBuilder__WithOptions(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  undefined8 in_stack_00000008;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  
                    /* try { // try from 03090970 to 0319097f has its CatchHandler @ 03090980 */
  iVar5 = FUN_036a3408();
                    /* catch() { ... } // from try @ 030908ec with catch @ 03090980
                       catch() { ... } // from try @ 03090970 with catch @ 03090980 */
                    /* try { // try from 03090984 to 03190987 has its CatchHandler @ 03090990 */
  if (iVar5 == *(int *)(param_1 + 0x18)) {
                    /* try { // try from 03090988 to 03190993 has its CatchHandler @ 0309076c */
    in_stack_00000008 = 0;
    if (unaff_x19 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03090984 with catch @ 03090990
                        */
      lVar9 = *unaff_x19;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000989_PostfixBurstDelegate_var
             ) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03090a04;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec();
LAB_03090a04:
      plVar7 = (long *)(*(code *)*puVar6)();
      puVar4 = 
      Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A45_PostfixBurstDelegate_var
      ;
      puVar3 = 
      Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A40_PostfixBurstDelegate_var;
      puVar2 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000988_PostfixBurstDelegate_var
      ;
      puVar1 = PTR_DAT_03cbed20;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
LAB_03090a44:
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03090a90;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar1,0);
LAB_03090a90:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03090c2c;
          goto LAB_03090bbc;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03090aec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,0);
LAB_03090aec:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
        uVar10 = FUN_03098078();
        iVar5 = 1;
        if ((uVar10 & 1) == 0) {
          iVar5 = 2;
        }
        lVar9 = *(long *)(*(long *)puVar3 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01a46ff8();
        }
        pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
        if (*pcVar8 == '\0') {
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
      if (plVar7 != (long *)0x0) {
LAB_03090bbc:
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03090c10;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed08,0);
LAB_03090c10:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
    }
LAB_03090c2c:
    FUN_022414f4(&stack0x00000008);
  }
  else {
    uStack000000000000001c = 0;
  }
  return uStack000000000000001c;
}


