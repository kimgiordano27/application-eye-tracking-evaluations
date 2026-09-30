/*
FUNCTION_NAME: FUN_06301168
ENTRY_POINT: 06301168
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


long FUN_06301168(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  if ((DAT_076de6d4 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fa20);
    thunk_FUN_032e1da0(PTR_DAT_0727f070);
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    thunk_FUN_032e1da0(Firebase_Analytics_FirebaseAnalytics_TypeInfo);
    thunk_FUN_032e1da0(Firebase_Analytics_FirebaseAnalyticsPINVOKE_TypeInfo);
    thunk_FUN_032e1da0(System_IO_FileStreamAsyncResult_TypeInfo);
    thunk_FUN_032e1da0(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    thunk_FUN_032e1da0(Firebase_FirebaseApp_TypeInfo);
    thunk_FUN_032e1da0(Firebase_Platform_FirebaseAppPlatform_TypeInfo);
    DAT_076de6d4 = 1;
  }
  puVar7 = Firebase_FirebaseApp_TypeInfo;
  puVar6 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Firebase_Platform_FirebaseAppPlatform_TypeInfo);
    FUN_059660a0(lVar8,0);
    *(undefined4 *)(lVar8 + 0x10) = 0x17;
    *(undefined4 *)(lVar8 + 0x34) = uVar3;
    return lVar8;
  }
  bVar5 = 0;
  uVar15 = 0;
  iVar13 = 0;
  iVar12 = 0;
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar13) {
      if (iVar13 - iVar12 != 0 && iVar12 <= iVar13) {
        FUN_041e44f8(lVar8,iVar12,iVar13 - iVar12,
                     *(undefined8 *)Firebase_Analytics_FirebaseAnalyticsPINVOKE_TypeInfo);
      }
      lVar8 = FUN_0630181c(param_1,0x17);
      return lVar8;
    }
    lVar8 = FUN_041e29a8(lVar8,iVar13,*(undefined8 *)puVar6);
    if (iVar12 < iVar13) {
      if (*(long *)(param_1 + 0x18) == 0) break;
      FUN_041e29fc(*(long *)(param_1 + 0x18),iVar12,lVar8,*(undefined8 *)puVar7);
    }
    if (lVar8 == 0) break;
    iVar14 = *(int *)(lVar8 + 0x10);
    if (iVar14 < 0x17) {
      if ((iVar14 == 9) || (iVar14 == 0xc)) {
        uVar2 = *(uint *)(lVar8 + 0x34);
        uVar1 = uVar2 & 0x41;
        if ((bool)(uVar15 != uVar1 | bVar5 ^ 1)) {
          bVar5 = 1;
          uVar15 = uVar1;
        }
        else {
          if (*(long *)(param_1 + 0x18) == 0) break;
          iVar12 = iVar12 + -1;
          lVar9 = FUN_041e29a8(*(long *)(param_1 + 0x18),iVar12,*(undefined8 *)puVar6);
          if (lVar9 == 0) break;
          if (*(int *)(lVar9 + 0x10) == 9) {
            *(undefined4 *)(lVar9 + 0x10) = 0xc;
            uVar4 = *(undefined2 *)(lVar9 + 0x28);
            if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar10 = FUN_058e6bb4(0);
            if (*(int *)(*(long *)PTR_DAT_0727f070 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)PTR_DAT_0727f070);
            }
            uVar10 = FUN_058ac7fc(uVar4,uVar10,0);
            *(undefined8 *)(lVar9 + 0x20) = uVar10;
            thunk_FUN_0333a630();
          }
          if ((uVar2 >> 6 & 1) == 0) {
            uVar10 = *(undefined8 *)(lVar9 + 0x20);
            if (*(int *)(lVar8 + 0x10) == 9) {
              if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar11 = System_Threading_WaitHandle___ctor(lVar8 + 0x28,0);
            }
            else {
              uVar11 = *(undefined8 *)(lVar8 + 0x20);
            }
          }
          else {
            if (*(int *)(lVar8 + 0x10) == 9) {
              if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar10 = System_Threading_WaitHandle___ctor(lVar8 + 0x28,0);
            }
            else {
              uVar10 = *(undefined8 *)(lVar8 + 0x20);
            }
            uVar11 = *(undefined8 *)(lVar9 + 0x20);
          }
          uVar10 = FUN_057a19ac(uVar10,uVar11,0);
          *(undefined8 *)(lVar9 + 0x20) = uVar10;
          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x20),uVar10);
          bVar5 = 1;
        }
      }
      else {
LAB_063013e8:
        bVar5 = 0;
      }
    }
    else {
      if (iVar14 != 0x17) {
        if ((iVar14 != 0x19) ||
           (((*(uint *)(param_1 + 0x34) ^ *(uint *)(lVar8 + 0x34)) >> 6 & 1) != 0))
        goto LAB_063013e8;
        lVar9 = *(long *)(lVar8 + 0x18);
        if (lVar9 == 0) break;
        iVar14 = 0;
        while (iVar14 < *(int *)(lVar9 + 0x18)) {
          lVar9 = FUN_041e29a8(lVar9,iVar14,*(undefined8 *)puVar6);
          if (lVar9 == 0) goto LAB_06301494;
          *(long *)(lVar9 + 0x38) = param_1;
          thunk_FUN_0333a630((long *)(lVar9 + 0x38),param_1);
          lVar9 = *(long *)(lVar8 + 0x18);
          iVar14 = iVar14 + 1;
          if (lVar9 == 0) goto LAB_06301494;
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        FUN_041e3b80(*(long *)(param_1 + 0x18),iVar13 + 1,lVar9,
                     *(undefined8 *)Firebase_Analytics_FirebaseAnalytics_TypeInfo);
      }
      iVar12 = iVar12 + -1;
    }
    lVar8 = *(long *)(param_1 + 0x18);
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 1;
  } while (lVar8 != 0);
LAB_06301494:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


