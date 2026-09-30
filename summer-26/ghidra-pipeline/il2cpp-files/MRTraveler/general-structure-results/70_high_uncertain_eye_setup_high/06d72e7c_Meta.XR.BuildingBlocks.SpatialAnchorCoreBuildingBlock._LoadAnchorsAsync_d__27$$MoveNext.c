/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<LoadAnchorsAsync>d__27$$MoveNext
ENTRY_POINT: 06d72e7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27__MoveNext
               (undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong uVar7;
  long *plVar8;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long lVar9;
  
  uVar2 = FUN_03c8f97c(param_1,0x54);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar2;
  thunk_FUN_03d233cc((long *)(unaff_x19 + 0x1b8),uVar2);
  lVar9 = *(long *)(unaff_x19 + 0x1b8);
  if (lVar9 != 0) {
    uVar7 = 0;
    do {
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar7) {
        lVar9 = *unaff_x23;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar9 = *unaff_x23;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar9 != 0) {
          uVar1 = FUN_069a0964(lVar9,*unaff_x26);
          uVar2 = FUN_03c8f97c(*unaff_x25,uVar1);
          *(undefined8 *)(unaff_x19 + 0x1c8) = uVar2;
          thunk_FUN_03d233cc((long *)(unaff_x19 + 0x1c8),uVar2);
          lVar9 = *(long *)(unaff_x19 + 0x1c8);
          if (lVar9 != 0) {
            uVar7 = 0;
            do {
              if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar7) {
                return;
              }
              lVar4 = *unaff_x23;
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar4 = *unaff_x23;
              }
              uVar1 = FUN_045d6874(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),uVar7 & 0xffffffff,
                                   0xb,*unaff_x24);
              if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_06d73018:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              *(undefined4 *)(lVar9 + uVar7 * 4 + 0x20) = uVar1;
              lVar9 = *(long *)(unaff_x19 + 0x1c8);
              uVar7 = uVar7 + 1;
            } while (lVar9 != 0);
          }
        }
        break;
      }
      plVar8 = *(long **)(unaff_x19 + 0x138);
      if (plVar8 == (long *)0x0) break;
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06d72f08;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*unaff_x27,2);
LAB_06d72f08:
      uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      uVar1 = FUN_045d6874(uVar2,uVar7 & 0xffffffff,0x37,*unaff_x28);
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_06d73018;
      *(undefined4 *)(lVar9 + uVar7 * 4 + 0x20) = uVar1;
      lVar9 = *(long *)(unaff_x19 + 0x1b8);
      uVar7 = uVar7 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


