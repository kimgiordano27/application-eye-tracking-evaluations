/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSessionArray_GetElement
ENTRY_POINT: 052680d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_NetSyncSessionArray_GetElement(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  
  puVar1 = UnityEngine_Events_UnityAction<Component>_TypeInfo;
  if ((DAT_06bbaac9 & 1) == 0) {
    FUN_02f08768(UnityEngine_Events_UnityAction<FocusEnterEventArgs>_TypeInfo);
    FUN_02f08768(UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo);
    FUN_02f08768(UnityEngine_Events_UnityAction<Guid>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cf730);
    FUN_02f08768(UnityEngine_Events_UnityAction<HoverEnterEventArgs>_TypeInfo);
    FUN_02f08768(UnityEngine_Events_UnityAction<Component>_TypeInfo);
    DAT_06bbaac9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar7 = FUN_052682b0(param_2);
  puVar5 = UnityEngine_Events_UnityAction<HoverEnterEventArgs>_TypeInfo;
  puVar4 = UnityEngine_Events_UnityAction<Guid>_TypeInfo;
  puVar3 = UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo;
  puVar2 = UnityEngine_Events_UnityAction<FocusEnterEventArgs>_TypeInfo;
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar11 = 0;
      do {
        lVar8 = FUN_03abf644(lVar7,iVar11,*(undefined8 *)puVar5);
        if (lVar8 == 0) goto LAB_052682ac;
        uVar6 = FUN_060f5e80(lVar8,0);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar8);
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_052682ac;
        uVar9 = FUN_048554f8(lVar8,uVar6,*(undefined8 *)puVar2);
        if ((uVar9 & 1) == 0) {
          lVar8 = *(long *)puVar1;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar8 = *(long *)puVar1;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          uVar10 = FUN_03abf644(lVar7,iVar11,*(undefined8 *)puVar5);
          uVar10 = FUN_05268340(param_1,uVar10);
          if (lVar8 == 0) goto LAB_052682ac;
          FUN_048552f0(lVar8,uVar6,uVar10,*(undefined8 *)puVar4);
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if ((lVar8 == 0) || (lVar8 = FUN_04855264(lVar8,uVar6,*(undefined8 *)puVar3), lVar8 == 0))
        goto LAB_052682ac;
        FUN_05267280();
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar7 + 0x18));
    }
    return;
  }
LAB_052682ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


