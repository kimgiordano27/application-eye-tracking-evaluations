/*
FUNCTION_NAME: FUN_06300d80
ENTRY_POINT: 06300d80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


long FUN_06300d80(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  
  if ((DAT_076de6d3 & 1) == 0) {
    thunk_FUN_032e1da0(Firebase_Analytics_FirebaseAnalytics_TypeInfo);
    thunk_FUN_032e1da0(Firebase_Analytics_FirebaseAnalyticsPINVOKE_TypeInfo);
    thunk_FUN_032e1da0(System_IO_FileStreamAsyncResult_TypeInfo);
    thunk_FUN_032e1da0(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    thunk_FUN_032e1da0(Firebase_FirebaseApp_TypeInfo);
    thunk_FUN_032e1da0(Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo);
    thunk_FUN_032e1da0(Firebase_Platform_FirebaseAppPlatform_TypeInfo);
    DAT_076de6d3 = 1;
  }
  puVar6 = Firebase_FirebaseApp_TypeInfo;
  puVar5 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Firebase_Platform_FirebaseAppPlatform_TypeInfo);
    FUN_059660a0(lVar8,0);
    *(undefined4 *)(lVar8 + 0x10) = 0x16;
    *(undefined4 *)(lVar8 + 0x34) = uVar2;
    return lVar8;
  }
  bVar4 = 0;
  uVar7 = 0;
  uVar16 = 0;
  iVar13 = 0;
  iVar12 = 0;
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar13) {
      if (iVar13 - iVar12 != 0 && iVar12 <= iVar13) {
        FUN_041e44f8(lVar8,iVar12,iVar13 - iVar12,
                     *(undefined8 *)Firebase_Analytics_FirebaseAnalyticsPINVOKE_TypeInfo);
      }
      lVar8 = FUN_0630181c(param_1,0x16);
      return lVar8;
    }
    lVar8 = FUN_041e29a8(lVar8,iVar13,*(undefined8 *)puVar5);
    if (iVar12 < iVar13) {
      if (*(long *)(param_1 + 0x18) == 0) break;
      FUN_041e29fc(*(long *)(param_1 + 0x18),iVar12,lVar8,*(undefined8 *)puVar6);
    }
    if (lVar8 == 0) break;
    iVar14 = *(int *)(lVar8 + 0x10);
    if (iVar14 < 0x16) {
      if ((iVar14 == 9) || (iVar14 == 0xb)) {
        uVar1 = *(uint *)(lVar8 + 0x34) & 0x41;
        bVar3 = (bool)(uVar16 != uVar1 | bVar4 ^ 1);
        if (iVar14 == 0xb) {
          if ((uVar7 & 1) == 0 && !bVar3) {
            uVar15 = *(undefined8 *)(lVar8 + 0x20);
            if (*(int *)(*(long *)Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar9 = FUN_062f57cc(uVar15,0);
            if ((uVar9 & 1) != 0) goto LAB_06300fb0;
          }
          uVar15 = *(undefined8 *)(lVar8 + 0x20);
          if (*(int *)(*(long *)Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar7 = FUN_062f57cc(uVar15,0);
          uVar7 = uVar7 ^ 1;
        }
        else {
          if ((uVar7 & 1) == 0 && !bVar3) {
LAB_06300fb0:
            if (*(long *)(param_1 + 0x18) != 0) {
              iVar12 = iVar12 + -1;
              lVar10 = FUN_041e29a8(*(long *)(param_1 + 0x18),iVar12,*(undefined8 *)puVar5);
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x10) == 9) {
                  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                               Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo);
                  FUN_062f45bc(lVar11,0);
                  if (lVar11 == 0) break;
                  FUN_062f4724(lVar11,*(undefined2 *)(lVar10 + 0x28),0);
                }
                else {
                  uVar15 = *(undefined8 *)(lVar10 + 0x20);
                  if (*(int *)(*(long *)Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo + 0xe0) == 0
                     ) {
                    thunk_FUN_032cd7c0();
                  }
                  lVar11 = FUN_062f61a4(uVar15,0);
                }
                if (*(int *)(lVar8 + 0x10) == 9) {
                  if (lVar11 == 0) break;
                  FUN_062f4724(lVar11,*(undefined2 *)(lVar8 + 0x28),0);
                }
                else {
                  uVar15 = *(undefined8 *)(lVar8 + 0x20);
                  if (*(int *)(*(long *)Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo + 0xe0) == 0
                     ) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar15 = FUN_062f61a4(uVar15,0);
                  if (lVar11 == 0) break;
                  FUN_062f4848(lVar11,uVar15,0);
                }
                *(undefined4 *)(lVar10 + 0x10) = 0xb;
                uVar15 = FUN_062f6468(lVar11,0);
                *(undefined8 *)(lVar10 + 0x20) = uVar15;
                thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x20),uVar15);
                goto LAB_063010c4;
              }
            }
            break;
          }
          uVar7 = 0;
        }
        bVar4 = 1;
        uVar16 = uVar1;
      }
      else {
LAB_06300f7c:
        uVar7 = 0;
        bVar4 = 0;
      }
    }
    else {
      if (iVar14 != 0x16) {
        if (iVar14 != 0x18) goto LAB_06300f7c;
        lVar10 = *(long *)(lVar8 + 0x18);
        if (lVar10 == 0) break;
        iVar14 = 0;
        while (iVar14 < *(int *)(lVar10 + 0x18)) {
          lVar10 = FUN_041e29a8(lVar10,iVar14,*(undefined8 *)puVar5);
          if (lVar10 == 0) goto LAB_063010d8;
          *(long *)(lVar10 + 0x38) = param_1;
          thunk_FUN_0333a630((long *)(lVar10 + 0x38),param_1);
          lVar10 = *(long *)(lVar8 + 0x18);
          iVar14 = iVar14 + 1;
          if (lVar10 == 0) goto LAB_063010d8;
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        FUN_041e3b80(*(long *)(param_1 + 0x18),iVar13 + 1,lVar10,
                     *(undefined8 *)Firebase_Analytics_FirebaseAnalytics_TypeInfo);
      }
      iVar12 = iVar12 + -1;
    }
LAB_063010c4:
    lVar8 = *(long *)(param_1 + 0x18);
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 1;
  } while (lVar8 != 0);
LAB_063010d8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


