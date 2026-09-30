/*
FUNCTION_NAME: FUN_0741f7e4
ENTRY_POINT: 0741f7e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0741faf0) */
/* WARNING: Removing unreachable block (ram,0x0741fb28) */
/* WARNING: Removing unreachable block (ram,0x0741fb58) */

void FUN_0741f7e4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  puVar2 = Unity_Netcode_NetworkConnectionManager_TypeInfo;
  if ((DAT_08269a13 & 1) == 0) {
    FUN_0373b518(System_Data_SqlTypes_SqlInt64_TypeInfo);
    FUN_0373b518(UnityEngine_Physics_TypeInfo);
    FUN_0373b518(UnityEngine_Physics2D_TypeInfo);
    FUN_0373b518(UnityEngine_ProBuilder_Shapes_Sphere_TypeInfo);
    FUN_0373b518(System_Runtime_Remoting_Metadata_SoapTypeAttribute_TypeInfo);
    FUN_0373b518(System_Runtime_Remoting_SoapServices_TypeInfo);
    FUN_0373b518(System_Data_Common_SqlInt64Storage_TypeInfo);
    FUN_0373b518(System_Data_SqlTypes_SqlMoney_TypeInfo);
    FUN_0373b518(System_Data_Common_SqlMoneyStorage_TypeInfo);
    FUN_0373b518(System_NonSerializedAttribute_TypeInfo);
    FUN_0373b518(Unity_Netcode_NetworkConnectionManager_TypeInfo);
    DAT_08269a13 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    FUN_0754d370(lVar5,0);
  }
  if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_05b28714(*(long *)(param_1 + 0x100),*(undefined8 *)UnityEngine_Physics_TypeInfo);
  puVar4 = System_Data_SqlTypes_SqlMoney_TypeInfo;
  puVar3 = UnityEngine_Physics2D_TypeInfo;
  puVar2 = System_NonSerializedAttribute_TypeInfo;
  lVar10 = *(long *)(param_1 + 0xa8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = *(int *)(lVar10 + 0x20);
  if (iVar1 < 1) {
    fVar14 = 0.0;
  }
  else {
    iVar12 = 0;
    fVar14 = 0.0;
    while( true ) {
      uVar6 = FUN_04530b2c(lVar10,iVar12,*(undefined8 *)puVar4);
      lVar10 = thunk_FUN_037787d0(uVar6,*(undefined8 *)puVar2);
      if (lVar10 == 0) {
        if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        fVar14 = 1.0;
        FUN_05b28570(0x3f800000,*(long *)(param_1 + 0x100),uVar6,*(undefined8 *)puVar3);
      }
      iVar12 = iVar12 + 1;
      if (iVar1 == iVar12) break;
      lVar10 = *(long *)(param_1 + 0xa8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
  }
  puVar4 = System_Data_Common_SqlInt64Storage_TypeInfo;
  lVar10 = *(long *)(param_1 + 0xa0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = *(int *)(lVar10 + 0x20);
  if (0 < iVar1) {
    iVar12 = 0;
    while( true ) {
      uVar6 = FUN_04530b2c(lVar10,iVar12,*(undefined8 *)puVar4);
      lVar10 = thunk_FUN_037787d0(uVar6,*(undefined8 *)puVar2);
      if ((lVar10 == 0) && (uVar7 = FUN_0741cdbc(param_1,uVar6), (uVar7 & 1) == 0)) {
        if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_05b28570(0,*(long *)(param_1 + 0x100),uVar6,*(undefined8 *)puVar3);
      }
      iVar12 = iVar12 + 1;
      if (iVar1 == iVar12) break;
      lVar10 = *(long *)(param_1 + 0xa0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
  }
  puVar4 = System_Data_Common_SqlMoneyStorage_TypeInfo;
  lVar10 = *(long *)(param_1 + 0xf8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = *(int *)(lVar10 + 0x20);
  if (iVar1 < 1) {
LAB_0741facc:
    if (lVar5 != 0) {
      FUN_0754d3f8(lVar5,0);
    }
    if (*(long *)(param_1 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_052d0370(fVar14,*(long *)(param_1 + 0xe0),
                 *(undefined8 *)System_Data_SqlTypes_SqlInt64_TypeInfo);
    return;
  }
  iVar12 = 0;
  do {
    plVar8 = (long *)FUN_04530b2c(lVar10,iVar12,*(undefined8 *)puVar4);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0741fa84;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,1);
LAB_0741fa84:
    fVar13 = (float)(*(code *)*puVar9)(plVar8,param_1,puVar9[1]);
    if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_05b28570(*(long *)(param_1 + 0x100),plVar8,*(undefined8 *)puVar3);
    iVar12 = iVar12 + 1;
    if (fVar14 <= fVar13) {
      fVar14 = fVar13;
    }
    if (iVar12 == iVar1) goto LAB_0741facc;
    lVar10 = *(long *)(param_1 + 0xf8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  } while( true );
}


