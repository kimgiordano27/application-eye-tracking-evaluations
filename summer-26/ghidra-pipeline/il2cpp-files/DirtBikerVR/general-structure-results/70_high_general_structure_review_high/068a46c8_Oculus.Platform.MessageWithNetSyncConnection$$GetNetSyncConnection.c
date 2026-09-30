/*
FUNCTION_NAME: Oculus.Platform.MessageWithNetSyncConnection$$GetNetSyncConnection
ENTRY_POINT: 068a46c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_11;telemetry_or_network_hits_9
*/


void Oculus_Platform_MessageWithNetSyncConnection__GetNetSyncConnection(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  do {
    lVar6 = FUN_067df97c();
    if (lVar6 != 0) goto joined_r0x068a4710;
    do {
      if (*(int *)(*(long *)PTR_DAT_084a41f8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
joined_r0x068a4710:
      while( true ) {
        while( true ) {
          if (unaff_x22 == 0)
          goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
          FUN_06bbc478();
          FUN_067e6a34();
          iVar2 = (**(code **)(*unaff_x21 + 0x238))();
          if (iVar2 != 4) {
            FUN_06bbcad8();
            if (*(long *)(unaff_x19 + 0x38) != 0) {
              FUN_06bbf460();
              return;
            }
            goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
          }
          plVar3 = (long *)(**(code **)(*unaff_x21 + 0x248))();
          if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)(unaff_x29 + 0x90))) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(plVar3);
          }
          FUN_067e6a34();
          if (*(long *)(unaff_x19 + 0x40) == 0)
          goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
          lVar6 = FUN_06bb2084(*(long *)(unaff_x19 + 0x40),plVar3,0);
          if (lVar6 == 0) {
            uVar4 = FUN_068a4838();
            lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14e0);
            FUN_06b8f0c4(lVar6,plVar3,uVar4,0);
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (FUN_06bb23bc(*(long *)(unaff_x19 + 0x40),lVar6,0), lVar6 == 0))
            goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
          }
          uVar4 = *(undefined8 *)(lVar6 + 0x38);
          uVar12 = *unaff_x28;
          if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar12 = FUN_0675ff58(uVar12,0);
          uVar5 = FUN_067690d8(uVar4,uVar12,0);
          if ((uVar5 & 1) == 0) break;
          iVar2 = (**(code **)(*unaff_x21 + 0x238))();
          if (iVar2 == 2) {
            FUN_067e6a34();
          }
          uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14c8);
          FUN_06b76dc4(uVar4,0);
          while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
            FUN_068a4310();
            FUN_067e6a34();
          }
        }
        if (*(long *)(lVar6 + 0x38) == 0)
        goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
        uVar5 = FUN_0676ab08(*(long *)(lVar6 + 0x38),0);
        if ((uVar5 & 1) == 0) break;
        uVar4 = *(undefined8 *)(lVar6 + 0x38);
        uVar12 = *(undefined8 *)PTR_DAT_08495378;
        if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar12 = FUN_0675ff58(uVar12,0);
        uVar5 = FUN_06769d78(uVar4,uVar12,0);
        if ((uVar5 & 1) == 0) break;
        iVar2 = (**(code **)(*unaff_x21 + 0x238))();
        if (iVar2 == 2) {
          FUN_067e6a34();
        }
        plVar3 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a1528);
        FUN_04de7d48(plVar3,*(undefined8 *)PTR_DAT_084a1530);
        while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
          uVar4 = (**(code **)(*unaff_x21 + 0x248))();
          if (plVar3 == (long *)0x0)
          goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
          lVar9 = plVar3[2];
          lVar10 = *unaff_x27;
          *(int *)((long)plVar3 + 0x1c) = *(int *)((long)plVar3 + 0x1c) + 1;
          if (lVar9 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
          uVar1 = *(uint *)(plVar3 + 3);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(plVar3 + 3) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(plVar3,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          FUN_067e6a34();
        }
        plVar7 = *(long **)(lVar6 + 0x38);
        if ((plVar7 == (long *)0x0) ||
           (uVar4 = (**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440)),
           plVar3 == (long *)0x0))
        goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
        uVar4 = FUN_06776ce4(uVar4,(int)plVar3[3],0);
        lVar6 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08491af0) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_068a47d4;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)PTR_DAT_08491af0,0);
LAB_068a47d4:
        (*(code *)*puVar8)(plVar3,uVar4,0,puVar8[1]);
      }
      lVar6 = (**(code **)(*unaff_x21 + 0x248))();
    } while (lVar6 == 0);
    if (unaff_x20 == 0) {
Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  } while( true );
}


