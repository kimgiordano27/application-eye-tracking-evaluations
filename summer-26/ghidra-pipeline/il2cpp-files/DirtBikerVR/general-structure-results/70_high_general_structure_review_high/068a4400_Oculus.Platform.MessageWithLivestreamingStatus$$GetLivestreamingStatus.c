/*
FUNCTION_NAME: Oculus.Platform.MessageWithLivestreamingStatus$$GetLivestreamingStatus
ENTRY_POINT: 068a4400
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_12;telemetry_or_network_hits_9
*/


void Oculus_Platform_MessageWithLivestreamingStatus__GetLivestreamingStatus(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar15;
  
  puVar4 = PTR_DAT_084b14d8;
  puVar3 = PTR_DAT_084a1540;
  puVar2 = PTR_DAT_08486760;
  do {
    plVar6 = (long *)(**(code **)(*unaff_x21 + 0x248))();
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar6);
    }
    FUN_067e6a34();
    if (*(long *)(unaff_x19 + 0x40) == 0)
    goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    lVar7 = FUN_06bb2084(*(long *)(unaff_x19 + 0x40),plVar6,0);
    if (lVar7 == 0) {
      uVar8 = FUN_068a4838();
      lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14e0);
      FUN_06b8f0c4(lVar7,plVar6,uVar8,0);
      if ((*(long *)(unaff_x19 + 0x40) == 0) ||
         (FUN_06bb23bc(*(long *)(unaff_x19 + 0x40),lVar7,0), lVar7 == 0))
      goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    }
    uVar8 = *(undefined8 *)(lVar7 + 0x38);
    uVar15 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar15 = FUN_0675ff58(uVar15,0);
    uVar9 = FUN_067690d8(uVar8,uVar15,0);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(lVar7 + 0x38) == 0)
      goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
      uVar9 = FUN_0676ab08(*(long *)(lVar7 + 0x38),0);
      if ((uVar9 & 1) != 0) {
        uVar8 = *(undefined8 *)(lVar7 + 0x38);
        uVar15 = *(undefined8 *)PTR_DAT_08495378;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar15 = FUN_0675ff58(uVar15,0);
        uVar9 = FUN_06769d78(uVar8,uVar15,0);
        if ((uVar9 & 1) != 0) {
          iVar5 = (**(code **)(*unaff_x21 + 0x238))();
          if (iVar5 == 2) {
            FUN_067e6a34();
          }
          plVar6 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a1528);
          FUN_04de7d48(plVar6,*(undefined8 *)PTR_DAT_084a1530);
          while (iVar5 = (**(code **)(*unaff_x21 + 0x238))(), iVar5 != 0xe) {
            uVar8 = (**(code **)(*unaff_x21 + 0x248))();
            if (plVar6 == (long *)0x0)
            goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
            lVar12 = plVar6[2];
            lVar13 = *(long *)puVar3;
            *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
            if (lVar12 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
            uVar1 = *(uint *)(plVar6 + 3);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(plVar6 + 3) = uVar1 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
              thunk_FUN_03afed3c();
            }
            else {
              FUN_04de85b0(plVar6,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            FUN_067e6a34();
          }
          plVar10 = *(long **)(lVar7 + 0x38);
          if ((plVar10 != (long *)0x0) &&
             (uVar8 = (**(code **)(*plVar10 + 0x438))(plVar10,*(undefined8 *)(*plVar10 + 0x440)),
             plVar6 != (long *)0x0)) {
            uVar8 = FUN_06776ce4(uVar8,(int)plVar6[3],0);
            lVar7 = *plVar6;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08491af0) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_068a47d4;
                }
                uVar9 = uVar9 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_08491af0,0);
LAB_068a47d4:
            (*(code *)*puVar11)(plVar6,uVar8,0,puVar11[1]);
            goto joined_r0x068a47e8;
          }
          goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
        }
      }
      lVar7 = (**(code **)(*unaff_x21 + 0x248))();
      if (lVar7 != 0) {
        if (unaff_x20 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
        lVar7 = FUN_067df97c();
        if (lVar7 != 0) goto joined_r0x068a47e8;
      }
      if (*(int *)(*(long *)PTR_DAT_084a41f8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    }
    else {
      iVar5 = (**(code **)(*unaff_x21 + 0x238))();
      if (iVar5 == 2) {
        FUN_067e6a34();
      }
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14c8);
      FUN_06b76dc4(uVar8,0);
      while (iVar5 = (**(code **)(*unaff_x21 + 0x238))(), iVar5 != 0xe) {
        FUN_068a4310();
        FUN_067e6a34();
      }
    }
joined_r0x068a47e8:
    if (unaff_x22 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    FUN_06bbc478();
    FUN_067e6a34();
    iVar5 = (**(code **)(*unaff_x21 + 0x238))();
  } while (iVar5 == 4);
  FUN_06bbcad8();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_06bbf460();
    return;
  }
Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


