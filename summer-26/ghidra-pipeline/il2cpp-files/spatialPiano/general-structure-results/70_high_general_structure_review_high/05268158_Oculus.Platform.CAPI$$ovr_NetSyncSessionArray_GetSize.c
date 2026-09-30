/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSessionArray_GetSize
ENTRY_POINT: 05268158
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_NetSyncSessionArray_GetSize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long *unaff_x24;
  
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar6 = FUN_052682b0();
  puVar4 = UnityEngine_Events_UnityAction<HoverEnterEventArgs>_TypeInfo;
  puVar3 = UnityEngine_Events_UnityAction<Guid>_TypeInfo;
  puVar2 = UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo;
  puVar1 = UnityEngine_Events_UnityAction<FocusEnterEventArgs>_TypeInfo;
  if (lVar6 != 0) {
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar10 = 0;
      do {
        lVar7 = FUN_03abf644(lVar6,iVar10,*(undefined8 *)puVar4);
        if (lVar7 == 0) goto LAB_052682ac;
        uVar5 = FUN_060f5e80(lVar7,0);
        lVar7 = *unaff_x24;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar7);
          lVar7 = *unaff_x24;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_052682ac;
        uVar8 = FUN_048554f8(lVar7,uVar5,*(undefined8 *)puVar1);
        if ((uVar8 & 1) == 0) {
          lVar7 = *unaff_x24;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar7 = *unaff_x24;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          FUN_03abf644(lVar6,iVar10,*(undefined8 *)puVar4);
          uVar9 = FUN_05268340();
          if (lVar7 == 0) goto LAB_052682ac;
          FUN_048552f0(lVar7,uVar5,uVar9,*(undefined8 *)puVar3);
        }
        lVar7 = *unaff_x24;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar7 = *unaff_x24;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if ((lVar7 == 0) || (lVar7 = FUN_04855264(lVar7,uVar5,*(undefined8 *)puVar2), lVar7 == 0))
        goto LAB_052682ac;
        FUN_05267280();
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar6 + 0x18));
    }
    return;
  }
LAB_052682ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


