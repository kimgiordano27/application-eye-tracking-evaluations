/*
FUNCTION_NAME: FUN_0350ded4
ENTRY_POINT: 0350ded4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0350e510) */
/* WARNING: Removing unreachable block (ram,0x0350e524) */
/* WARNING: Removing unreachable block (ram,0x0350e24c) */
/* WARNING: Removing unreachable block (ram,0x0350e4a4) */
/* WARNING: Removing unreachable block (ram,0x0350e4cc) */
/* WARNING: Removing unreachable block (ram,0x0350e4d0) */

void FUN_0350ded4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0412dd6a & 1) == 0) {
    FUN_01ab69ac(_Common_Shop_Scripts_OculusRecharge_IAPLambdaClient_PostData_TypeInfo);
    FUN_01ab69ac(_Common_Shop_Scripts_OculusRecharge_IAPManager_<>c_TypeInfo);
    FUN_01ab69ac(UniHumanoid_Humanoid_<>c__DisplayClass176_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbedc0);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed10);
    FUN_01ab69ac(PTR_DAT_03cbed18);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbed30);
    FUN_01ab69ac(PTR_DAT_03cbed38);
    FUN_01ab69ac(UniHumanoid_IBoneExtensions_<Traverse>d__0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Serializers_IDictionarySerializer_<GetObjectStream>d__0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbedd8);
    FUN_01ab69ac(PTR_DAT_03cbede0);
    FUN_01ab69ac(PTR_DAT_03d18d90);
    FUN_01ab69ac(PTR_DAT_03cbedf0);
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_CopyComponentArrayToChunksWithoutFilter_00000A3C_BurstDirectCall_TypeInfo
                );
    DAT_0412dd6a = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar15 = ZEXT816(0);
  local_88 = 0;
  iVar13 = *param_1;
  if (iVar13 != 0) {
    lVar14 = *(long *)(param_1 + 8);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar7 = *(undefined8 *)(lVar14 + 0x10);
    uVar12 = *(undefined8 *)(lVar14 + 0x18);
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbedd8);
    FUN_03942904(lVar5,uVar7,uVar12,0);
    plVar11 = (long *)(param_1 + 10);
    *plVar11 = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar5);
    plVar10 = *(long **)(lVar14 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed10) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0350e0a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed10,0);
LAB_0350e0a0:
    plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
    puVar4 = PTR_DAT_03cbed38;
    puVar3 = PTR_DAT_03cbed30;
    puVar2 = PTR_DAT_03cbed20;
    puVar1 = PTR_DAT_03cbed18;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0350e120;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar2,0);
LAB_0350e120:
      uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar8 & 1) == 0) {
        if ((-1 < iVar13) || (plVar10 == (long *)0x0)) goto LAB_0350e240;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_0350e218;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0350e200;
      }
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0350e17c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar1,0);
LAB_0350e17c:
      auVar15 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      lVar5 = *plVar11;
      local_80 = auVar15;
      FUN_01b5f2c8(local_80,&local_70,*(undefined8 *)puVar3);
      uVar7 = local_70;
      FUN_01b5f3b4(local_80,&local_70,*(undefined8 *)puVar4);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_03943d7c(lVar5,uVar7,local_70,0);
    } while( true );
  }
  local_88 = *(undefined8 *)(param_1 + 0xc);
  iVar13 = -1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = -1;
  goto LAB_0350e368;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0350e200:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0350e234;
    }
  }
LAB_0350e218:
  puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed08,0);
LAB_0350e234:
  (*(code *)*puVar6)(plVar10,puVar6[1]);
LAB_0350e240:
  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_03944360(*plVar11,*(undefined4 *)(lVar14 + 0x28),0);
  if (*(long *)(lVar14 + 0x30) != 0) {
    uVar8 = thunk_FUN_025bd1c0(*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_03cbedf0,0);
    if ((uVar8 & 1) == 0) {
      uVar8 = thunk_FUN_025bd1c0(*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_03d18d90,0);
      if ((uVar8 & 1) == 0) {
        uVar8 = thunk_FUN_025bd1c0(*(undefined8 *)(lVar14 + 0x18),
                                   *(undefined8 *)
                                    Unity_Entities_ChunkIterationUtility_CopyComponentArrayToChunksWithoutFilter_00000A3C_BurstDirectCall_TypeInfo
                                   ,0);
        if ((uVar8 & 1) == 0) goto LAB_0350e2fc;
      }
    }
    lVar5 = *plVar11;
    uVar12 = *(undefined8 *)(lVar14 + 0x30);
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbede0);
    FUN_039447ac(uVar7,uVar12,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_03942cb0(lVar5,uVar7,0);
  }
LAB_0350e2fc:
  lVar5 = *plVar11;
  uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbedc0);
  FUN_03942520(uVar7,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_03942ba4(lVar5,uVar7,0);
  if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  XRIF__Core_Common_PhysicsRigStateSync__Spawned(*plVar11,0);
  local_88 = FUN_0350e798();
  uVar8 = FUN_0209f888(&local_88,
                       *(undefined8 *)
                        QFSW_QC_Serializers_IDictionarySerializer_<GetObjectStream>d__0_TypeInfo);
  auVar15 = local_80;
  if ((uVar8 & 1) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = local_88;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xc,0);
    if (*(int *)(*(long *)UniHumanoid_Humanoid_<>c__DisplayClass176_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01f07574(param_1 + 2,&local_88,param_1,
                 *(undefined8 *)
                  _Common_Shop_Scripts_OculusRecharge_IAPLambdaClient_PostData_TypeInfo);
    return;
  }
LAB_0350e368:
  local_80 = auVar15;
  FUN_0209f8cc(&local_88,&local_68,
               *(undefined8 *)UniHumanoid_IBoneExtensions_<Traverse>d__0_TypeInfo);
  if ((iVar13 < 0) && (plVar11 = *(long **)(param_1 + 10), plVar11 != (long *)0x0)) {
    lVar14 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0350e44c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)PTR_DAT_03cbed08,0);
LAB_0350e44c:
    (*(code *)*puVar6)(plVar11,puVar6[1]);
  }
  *param_1 = -2;
  if (*(int *)(*(long *)UniHumanoid_Humanoid_<>c__DisplayClass176_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02145584(param_1 + 2,local_68,
               *(undefined8 *)_Common_Shop_Scripts_OculusRecharge_IAPManager_<>c_TypeInfo);
  return;
}


