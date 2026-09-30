/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_enableMixedReality
ENTRY_POINT: 0336892c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_enableMixedReality(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *in_x9;
  int iVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
  ;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)
           Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
  ;
  if (*(int *)(*in_x9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_032e04b8(uVar9,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  lVar3 = FUN_03378a24(uVar9,0);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar10 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x19 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        iVar5 = (int)*(undefined8 *)(lVar3 + 0x20 + uVar10 * 8);
        if ((int)uVar1 <= iVar5) {
          if ((iVar5 - 7U < 6) || (iVar5 - 0x10U < 2)) {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar6 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_03368a2c;
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar6 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            }
            else {
LAB_03368a2c:
              FUN_02d5004c();
            }
          }
        }
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (unaff_x19 != 0) {
      FUN_02d51a80();
      return;
    }
  }
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


