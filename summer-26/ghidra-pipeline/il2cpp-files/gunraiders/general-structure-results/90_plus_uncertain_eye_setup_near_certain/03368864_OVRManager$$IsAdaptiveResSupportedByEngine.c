/*
FUNCTION_NAME: OVRManager$$IsAdaptiveResSupportedByEngine
ENTRY_POINT: 03368864
PROGRAM: gunraiders-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__IsAdaptiveResSupportedByEngine(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  plVar9 = *(long **)(unaff_x19 + 0x330);
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_get_Current__
                );
    FUN_01c5d288(PTR_DAT_0422fb28);
    *(undefined1 *)(unaff_x20 + 0x544) = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
  ;
  lVar3 = *plVar9;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *plVar9;
  }
  lVar3 = FUN_02357630(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),*(undefined8 *)puVar2);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
  ;
  lVar4 = *(long *)(*(long *)(*plVar9 + 0xb8) + 8);
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 8)) {
LAB_03368abc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar10 = *(undefined8 *)(lVar4 + 0x20);
    uVar11 = *(undefined8 *)(lVar4 + 0x58);
    uVar12 = *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
    ;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_032e04b8(uVar12,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    lVar4 = FUN_03378a24(uVar12,0);
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar13 = 0;
        uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar13) goto LAB_03368abc;
          if (lVar3 == 0)
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
          uVar1 = *(uint *)(lVar3 + 0x18);
          iVar7 = (int)*(undefined8 *)(lVar4 + 0x20 + uVar13 * 8);
          if ((int)uVar1 <= iVar7) {
            lVar6 = *(long *)puVar2;
            if ((iVar7 - 7U < 6) || (iVar7 - 0x10U < 2)) {
              lVar8 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar8 == 0)
              goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
              if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                lVar6 = *(long *)(lVar6 + 0x20);
                uVar12 = uVar11;
                goto LAB_03368a2c;
              }
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
            }
            else {
              lVar8 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar8 == 0)
              goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              }
              else {
                lVar6 = *(long *)(lVar6 + 0x20);
                uVar12 = uVar10;
LAB_03368a2c:
                FUN_02d5004c(lVar3,uVar12,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x70));
              }
            }
          }
          uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      if (lVar3 != 0) {
        FUN_02d51a80(lVar3,*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
                    );
        return;
      }
    }
  }
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


