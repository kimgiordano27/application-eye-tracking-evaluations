/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 06d6c4d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  
  FUN_03c8f898(PTR_DAT_08e6a2a0);
  FUN_03c8f898(PTR_DAT_08e6a280);
  FUN_03c8f898(PTR_DAT_08e6b9e0);
  *(undefined1 *)(unaff_x20 + 0x964) = 1;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xc0), lVar4 != 0)) {
    uVar2 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6b9e0,*(undefined4 *)(lVar4 + 0x18));
    puVar6 = (undefined8 *)(unaff_x19 + 0x38);
    *puVar6 = uVar2;
    thunk_FUN_03d233cc(puVar6,uVar2);
    puVar1 = PTR_DAT_08e6a280;
    plVar8 = (long *)*puVar6;
    if (plVar8 != (long *)0x0) {
      uVar7 = 0;
      lVar4 = 0x20;
      while( true ) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if ((long)(int)(uint)plVar8[3] <= (long)uVar7) break;
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0xc0) == 0)) goto LAB_06d6c5c0;
        lVar5 = FUN_05212a24(*(long *)(lVar5 + 0xc0),uVar7 & 0xffffffff,*(undefined8 *)puVar1);
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0)) {
          uVar2 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar2,0);
        }
        if (*(uint *)(plVar8 + 3) <= uVar7) goto LAB_06d6c620;
        plVar8[uVar7 + 4] = lVar5;
        thunk_FUN_03d233cc((long)plVar8 + lVar4,lVar5);
        plVar8 = (long *)*puVar6;
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + 8;
        if (plVar8 == (long *)0x0) goto LAB_06d6c5c0;
      }
      if (lVar5 != 0) {
        if ((uint)plVar8[3] < 2) {
LAB_06d6c620:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        if (plVar8[5] != 0) {
          uVar2 = FUN_085eb090(plVar8[5],0);
          *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
          thunk_FUN_03d233cc();
          lVar4 = FUN_06d6c770();
          if (lVar4 != 0) {
            uVar9 = FUN_085eb494(lVar4,0);
            *(undefined4 *)(unaff_x19 + 0x44) = uVar9;
            *(undefined4 *)(unaff_x19 + 0x48) = param_2;
            *(undefined4 *)(unaff_x19 + 0x4c) = param_3;
            *(undefined4 *)(unaff_x19 + 0x50) = param_4;
            return;
          }
        }
      }
    }
  }
LAB_06d6c5c0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


