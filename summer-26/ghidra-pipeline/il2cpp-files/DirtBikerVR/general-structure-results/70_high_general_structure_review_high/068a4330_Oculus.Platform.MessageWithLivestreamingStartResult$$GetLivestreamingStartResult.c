/*
FUNCTION_NAME: Oculus.Platform.MessageWithLivestreamingStartResult$$GetLivestreamingStartResult
ENTRY_POINT: 068a4330
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_14;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


void Oculus_Platform_MessageWithLivestreamingStartResult__GetLivestreamingStartResult
               (long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar17;
  
  if ((*(byte *)(unaff_x22 + 0x742) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08495378);
    FUN_03a8a718(PTR_DAT_084a41f8);
    FUN_03a8a718(PTR_DAT_084b14e0);
    FUN_03a8a718(PTR_DAT_084b14d8);
    FUN_03a8a718(PTR_DAT_084b14c8);
    FUN_03a8a718(PTR_DAT_08491af0);
    FUN_03a8a718(PTR_DAT_084a1540);
    FUN_03a8a718(PTR_DAT_084a1530);
    FUN_03a8a718(PTR_DAT_084ab6a8);
    FUN_03a8a718(PTR_DAT_084a1528);
    *(undefined1 *)(unaff_x22 + 0x742) = 1;
  }
  if ((param_2 != 0) && (lVar6 = FUN_06b86954(param_2,0), param_1 != (long *)0x0)) {
    FUN_067e6a34(param_1,0);
    iVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    puVar4 = PTR_DAT_084b14d8;
    puVar3 = PTR_DAT_084a1540;
    puVar2 = PTR_DAT_08486760;
    if (iVar5 == 4) {
      do {
        plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar7);
        }
        FUN_067e6a34(param_1,0);
        if (*(long *)(param_2 + 0x40) == 0)
        goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
        lVar8 = FUN_06bb2084(*(long *)(param_2 + 0x40),plVar7,0);
        if (lVar8 == 0) {
          uVar9 = FUN_068a4838(param_1);
          lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14e0);
          FUN_06b8f0c4(lVar8,plVar7,uVar9,0);
          if ((*(long *)(param_2 + 0x40) == 0) ||
             (FUN_06bb23bc(*(long *)(param_2 + 0x40),lVar8,0), lVar8 == 0))
          goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
        }
        uVar9 = *(undefined8 *)(lVar8 + 0x38);
        uVar17 = *(undefined8 *)puVar4;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_0675ff58(uVar17,0);
        uVar10 = FUN_067690d8(uVar9,uVar17,0);
        if ((uVar10 & 1) == 0) {
          if (*(long *)(lVar8 + 0x38) == 0)
          goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
          uVar10 = FUN_0676ab08(*(long *)(lVar8 + 0x38),0);
          if ((uVar10 & 1) != 0) {
            uVar9 = *(undefined8 *)(lVar8 + 0x38);
            uVar17 = *(undefined8 *)PTR_DAT_08495378;
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar17 = FUN_0675ff58(uVar17,0);
            uVar10 = FUN_06769d78(uVar9,uVar17,0);
            if ((uVar10 & 1) != 0) {
              iVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
              if (iVar5 == 2) {
                FUN_067e6a34(param_1,0);
              }
              plVar11 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a1528);
              FUN_04de7d48(plVar11,*(undefined8 *)PTR_DAT_084a1530);
              while (iVar5 = (**(code **)(*param_1 + 0x238))
                                       (param_1,*(undefined8 *)(*param_1 + 0x240)), iVar5 != 0xe) {
                uVar9 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
                if (plVar11 == (long *)0x0)
                goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
                lVar14 = plVar11[2];
                lVar15 = *(long *)puVar3;
                *(int *)((long)plVar11 + 0x1c) = *(int *)((long)plVar11 + 0x1c) + 1;
                if (lVar14 == 0)
                goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
                uVar1 = *(uint *)(plVar11 + 3);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(plVar11 + 3) = uVar1 + 1;
                  *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                  thunk_FUN_03afed3c();
                }
                else {
                  FUN_04de85b0(plVar11,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                FUN_067e6a34(param_1,0);
              }
              plVar12 = *(long **)(lVar8 + 0x38);
              if ((plVar12 != (long *)0x0) &&
                 (uVar9 = (**(code **)(*plVar12 + 0x438))(plVar12,*(undefined8 *)(*plVar12 + 0x440))
                 , plVar11 != (long *)0x0)) {
                lVar8 = FUN_06776ce4(uVar9,(int)plVar11[3],0);
                lVar14 = *plVar11;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08491af0) {
                      puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_068a47d4;
                    }
                    uVar10 = uVar10 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_08491af0,0);
LAB_068a47d4:
                (*(code *)*puVar13)(plVar11,lVar8,0,puVar13[1]);
                goto joined_r0x068a47e8;
              }
              goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
            }
          }
          lVar8 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
          if (lVar8 != 0) {
            if (unaff_x20 == 0)
            goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
            lVar8 = FUN_067df97c();
            if (lVar8 != 0) goto joined_r0x068a47e8;
          }
          lVar8 = *(long *)PTR_DAT_084a41f8;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar8 = *(long *)PTR_DAT_084a41f8;
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
        }
        else {
          iVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
          if (iVar5 == 2) {
            FUN_067e6a34(param_1,0);
          }
          lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14c8);
          FUN_06b76dc4(lVar8,0);
          while (iVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240)),
                iVar5 != 0xe) {
            FUN_068a4310(param_1,lVar8);
            FUN_067e6a34(param_1,0);
          }
        }
joined_r0x068a47e8:
        if (lVar6 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
        FUN_06bbc478(lVar6,plVar7,lVar8,0);
        FUN_067e6a34(param_1,0);
        iVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      } while (iVar5 == 4);
    }
    else if (lVar6 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    FUN_06bbcad8(lVar6,0);
    if (*(long *)(param_2 + 0x38) != 0) {
      FUN_06bbf460(*(long *)(param_2 + 0x38),lVar6,0);
      return;
    }
  }
Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


