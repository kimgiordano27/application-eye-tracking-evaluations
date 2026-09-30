/*
FUNCTION_NAME: FUN_076b9ab0
ENTRY_POINT: 076b9ab0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_076b9ab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  puVar1 = System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TypeInfo;
  if ((DAT_0827138a & 1) == 0) {
    FUN_0373b518(System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TypeInfo);
    FUN_0373b518(System_Func<PointerDownEvent>_TypeInfo);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XRAnchorTransferBatch_<ExportAsync>d__10>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<WebOperation_<GetRequestStream>d__50>__
                );
    DAT_0827138a = 1;
  }
  FUN_0788eeb4(0,0);
  FUN_076b97cc(param_1);
  *(undefined1 *)(param_1 + 0x10) = 1;
  lVar10 = *(long *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XRAnchorTransferBatch_<ExportAsync>d__10>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<WebOperation_<GetRequestStream>d__50>__
  ;
  puVar2 = System_Func<PointerDownEvent>_TypeInfo;
  if (lVar10 != 0) {
    FUN_04634028(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                );
    lVar10 = *(long *)(param_1 + 0x20);
    iVar9 = 0;
    do {
      if (lVar10 == 0) goto LAB_076ba050;
      iVar11 = 0;
      while (iVar11 < *(int *)(lVar10 + 0x20)) {
        plVar5 = (long *)FUN_04633e78(lVar10,iVar11,*(undefined8 *)puVar3);
        uVar6 = FUN_076b96fc(plVar5,plVar5);
        if ((uVar6 & 1) != 0) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar10 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076b9c34;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_076b9c34:
          (*(code *)*puVar7)(plVar5,iVar9,puVar7[1]);
        }
        lVar10 = *(long *)(param_1 + 0x20);
        iVar11 = iVar11 + 1;
        if (lVar10 == 0) goto LAB_076ba050;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    iVar9 = 0;
    do {
      if (*(int *)(lVar10 + 0x20) <= iVar9) {
        FUN_04633af8(lVar10,*(undefined8 *)puVar4);
        *(undefined1 *)(param_1 + 0x10) = 0;
        FUN_0788eef0(0,0);
        FUN_0788eeb4(1,0);
        lVar10 = FUN_076ba0f0();
        if (lVar10 != 0) {
          FUN_076ba174();
          *(undefined1 *)(param_1 + 0x11) = 1;
          lVar10 = *(long *)(param_1 + 0x28);
          iVar9 = 3;
          goto LAB_076b9e18;
        }
        break;
      }
      plVar5 = (long *)FUN_04633e78(lVar10,iVar9,*(undefined8 *)puVar3);
      if (plVar5 == (long *)0x0) break;
      lVar10 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_076b9dac;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,2);
LAB_076b9dac:
      (*(code *)*puVar7)(plVar5,puVar7[1]);
      lVar10 = *(long *)(param_1 + 0x20);
      iVar9 = iVar9 + 1;
    } while (lVar10 != 0);
  }
  goto LAB_076ba050;
LAB_076b9e18:
  do {
    if (lVar10 == 0) goto LAB_076ba050;
    iVar11 = 0;
    while (iVar11 < *(int *)(lVar10 + 0x20)) {
      plVar5 = (long *)FUN_04633e78(lVar10,iVar11,*(undefined8 *)puVar3);
      uVar6 = FUN_076b96fc(plVar5,plVar5);
      if ((uVar6 & 1) != 0) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar10 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076b9e98;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_076b9e98:
        (*(code *)*puVar7)(plVar5,iVar9,puVar7[1]);
      }
      lVar10 = *(long *)(param_1 + 0x28);
      iVar11 = iVar11 + 1;
      if (lVar10 == 0) goto LAB_076ba050;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 5);
  iVar9 = 0;
  do {
    if (*(int *)(lVar10 + 0x20) <= iVar9) {
      FUN_04633af8(lVar10,*(undefined8 *)puVar4);
      *(undefined1 *)(param_1 + 0x11) = 0;
      FUN_0788eef0(1,0);
      return;
    }
    plVar5 = (long *)FUN_04633e78(lVar10,iVar9,*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) break;
    lVar10 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_076ba038;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,3);
LAB_076ba038:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
    lVar10 = *(long *)(param_1 + 0x28);
    iVar9 = iVar9 + 1;
  } while (lVar10 != 0);
LAB_076ba050:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


