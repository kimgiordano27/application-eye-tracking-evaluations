/*
FUNCTION_NAME: Oculus.Platform.MessageWithMicrophoneAvailabilityState$$GetMicrophoneAvailabilityState
ENTRY_POINT: 068a45f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void Oculus_Platform_MessageWithMicrophoneAvailabilityState__GetMicrophoneAvailabilityState
               (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 uVar11;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
code_r0x068a45f8:
  plVar3 = (long *)thunk_FUN_03ac74bc(param_1);
  FUN_04de7d48(plVar3,*(undefined8 *)PTR_DAT_084a1530);
  while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
    uVar4 = (**(code **)(*unaff_x21 + 0x248))();
    if (plVar3 == (long *)0x0)
    goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    lVar7 = plVar3[2];
    lVar8 = *unaff_x27;
    *(int *)((long)plVar3 + 0x1c) = *(int *)((long)plVar3 + 0x1c) + 1;
    if (lVar7 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    uVar1 = *(uint *)(plVar3 + 3);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(plVar3 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0(plVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    FUN_067e6a34();
  }
  plVar5 = *(long **)(unaff_x24 + 0x38);
  if ((plVar5 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440)),
     plVar3 != (long *)0x0)) {
    uVar4 = FUN_06776ce4(uVar4,(int)plVar3[3],0);
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08491af0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_068a47d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)PTR_DAT_08491af0,0);
LAB_068a47d4:
    (*(code *)*puVar6)(plVar3,uVar4,0,puVar6[1]);
    if (unaff_x22 != 0) {
      do {
        FUN_06bbc478();
        FUN_067e6a34();
        iVar2 = (**(code **)(*unaff_x21 + 0x238))();
        if (iVar2 != 4) {
          FUN_06bbcad8();
          if (*(long *)(unaff_x19 + 0x38) != 0) {
            FUN_06bbf460();
            return;
          }
          break;
        }
        plVar3 = (long *)(**(code **)(*unaff_x21 + 0x248))();
        if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)(unaff_x29 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar3);
        }
        FUN_067e6a34();
        if (*(long *)(unaff_x19 + 0x40) == 0) break;
        unaff_x24 = FUN_06bb2084(*(long *)(unaff_x19 + 0x40),plVar3,0);
        if (unaff_x24 == 0) {
          uVar4 = FUN_068a4838();
          unaff_x24 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14e0);
          FUN_06b8f0c4(unaff_x24,plVar3,uVar4,0);
          if ((*(long *)(unaff_x19 + 0x40) == 0) ||
             (FUN_06bb23bc(*(long *)(unaff_x19 + 0x40),unaff_x24,0), unaff_x24 == 0)) break;
        }
        uVar4 = *(undefined8 *)(unaff_x24 + 0x38);
        uVar11 = *unaff_x28;
        if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar11 = FUN_0675ff58(uVar11,0);
        uVar9 = FUN_067690d8(uVar4,uVar11,0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(unaff_x24 + 0x38) == 0) break;
          uVar9 = FUN_0676ab08(*(long *)(unaff_x24 + 0x38),0);
          if ((uVar9 & 1) != 0) {
            uVar4 = *(undefined8 *)(unaff_x24 + 0x38);
            uVar11 = *(undefined8 *)PTR_DAT_08495378;
            if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar11 = FUN_0675ff58(uVar11,0);
            uVar9 = FUN_06769d78(uVar4,uVar11,0);
            if ((uVar9 & 1) != 0) goto code_r0x068a45c4;
          }
          lVar7 = (**(code **)(*unaff_x21 + 0x248))();
          if (lVar7 != 0) {
            if (unaff_x20 == 0) break;
            lVar7 = FUN_067df97c();
            if (lVar7 != 0) goto LAB_068a4710;
          }
          if (*(int *)(*(long *)PTR_DAT_084a41f8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
        }
        else {
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
LAB_068a4710:
        if (unaff_x22 == 0) break;
      } while( true );
    }
  }
Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
code_r0x068a45c4:
  iVar2 = (**(code **)(*unaff_x21 + 0x238))();
  if (iVar2 == 2) {
    FUN_067e6a34();
  }
  param_1 = *(undefined8 *)PTR_DAT_084a1528;
  goto code_r0x068a45f8;
}


