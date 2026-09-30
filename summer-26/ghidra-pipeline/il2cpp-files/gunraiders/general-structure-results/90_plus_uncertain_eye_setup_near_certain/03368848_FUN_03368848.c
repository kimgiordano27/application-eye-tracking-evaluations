/*
FUNCTION_NAME: FUN_03368848
ENTRY_POINT: 03368848
PROGRAM: gunraiders-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_03368848(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  puVar2 = Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__;
  if ((DAT_04533544 & 1) == 0) {
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
    DAT_04533544 = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
  ;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = FUN_02357630(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(undefined8 *)puVar3);
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
  ;
  lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar5 != 0) {
    if ((*(uint *)(lVar5 + 0x18) == 0) || (*(uint *)(lVar5 + 0x18) < 8)) {
LAB_03368abc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x20);
    uVar11 = *(undefined8 *)(lVar5 + 0x58);
    uVar12 = *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
    ;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_032e04b8(uVar12,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar3);
    }
    lVar5 = FUN_03378a24(uVar12,0);
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__;
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar13 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar13) goto LAB_03368abc;
          if (lVar4 == 0)
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
          uVar1 = *(uint *)(lVar4 + 0x18);
          iVar8 = (int)*(undefined8 *)(lVar5 + 0x20 + uVar13 * 8);
          if ((int)uVar1 <= iVar8) {
            lVar7 = *(long *)puVar2;
            if ((iVar8 - 7U < 6) || (iVar8 - 0x10U < 2)) {
              lVar9 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar9 == 0)
              goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
              if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                lVar7 = *(long *)(lVar7 + 0x20);
                uVar12 = uVar11;
                goto LAB_03368a2c;
              }
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
            }
            else {
              lVar9 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar9 == 0)
              goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              }
              else {
                lVar7 = *(long *)(lVar7 + 0x20);
                uVar12 = uVar10;
LAB_03368a2c:
                FUN_02d5004c(lVar4,uVar12,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
              }
            }
          }
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      if (lVar4 != 0) {
        FUN_02d51a80(lVar4,*(undefined8 *)
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


