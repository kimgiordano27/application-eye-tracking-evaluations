/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 0337b360
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  long *unaff_x24;
  long unaff_x25;
  long *plVar10;
  long unaff_x26;
  undefined8 *puVar11;
  long unaff_x27;
  undefined8 *puVar12;
  long unaff_x28;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  plVar10 = *(long **)(unaff_x25 + 0x1c0);
  puVar13 = *(undefined8 **)(unaff_x28 + 0x278);
  puVar11 = *(undefined8 **)(unaff_x26 + 600);
  puVar12 = *(undefined8 **)(unaff_x27 + 0x298);
  if ((uint)in_x10 < in_w11) {
    *(uint *)(unaff_x19 + 0x18) = (uint)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x20;
  }
  else {
    FUN_02d5004c();
  }
  **(long **)(*plVar10 + 0xb8) = unaff_x19;
  lVar4 = thunk_FUN_01c496e0(*unaff_x23);
  FUN_02d4f880(lVar4,*unaff_x22);
  lVar5 = thunk_FUN_01c496e0(*unaff_x21);
  uVar8 = *puVar13;
  uVar9 = *puVar11;
  uVar14 = *puVar12;
  FUN_03313b6c(lVar5,0);
  *(undefined8 *)(lVar5 + 0x10) = uVar8;
  *(undefined8 *)(lVar5 + 0x18) = uVar9;
  *(undefined8 *)(lVar5 + 0x20) = uVar14;
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = *unaff_x24;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<IntVec3,_List<int>>_Dispose__;
    puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<int,_TerrainMap>_get_Current__;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = thunk_FUN_01c496e0(*unaff_x21);
      uVar8 = *(undefined8 *)puVar2;
      uVar9 = *(undefined8 *)puVar3;
      FUN_03313b6c(lVar5,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar8;
      *(undefined8 *)(lVar5 + 0x18) = uVar8;
      *(undefined8 *)(lVar5 + 0x20) = uVar9;
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
        }
        else {
          FUN_02d5004c(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar5 = thunk_FUN_01c496e0(*unaff_x21);
        uVar8 = *puVar11;
        uVar9 = *puVar12;
        FUN_03313b6c(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar8;
        *(undefined8 *)(lVar5 + 0x18) = uVar8;
        *(undefined8 *)(lVar5 + 0x20) = uVar9;
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *unaff_x24;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
          }
          else {
            FUN_02d5004c(lVar4,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(*(long *)(*plVar10 + 0xb8) + 8) = lVar4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


