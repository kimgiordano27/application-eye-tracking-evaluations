/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 04df649c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  long lVar13;
  
  if ((*(byte *)(unaff_x21 + 0xdbf) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9720);
    *(undefined1 *)(unaff_x21 + 0xdbf) = 1;
  }
  puVar2 = PTR_DAT_067c9720;
  if (unaff_x20 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar12 = thunk_FUN_02f45270();
    uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067ce5e8);
    FUN_0504ee1c(uVar12,uVar6,0);
  }
  else {
    lVar8 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067c9720) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_04df6514;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0();
LAB_04df6514:
    plVar4 = (long *)(*(code *)*puVar3)();
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c();
    }
    if ((plVar4 != (long *)0x0) && (*plVar4 == lVar8)) {
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      puVar3 = (undefined8 *)
               thunk_FUN_02f66c64(plVar4,*(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x80)
                                         + 0x20);
      lVar8 = *(long *)(unaff_x19 + 0x20);
      uVar12 = *puVar3;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      plVar5 = (long *)thunk_FUN_02f66c64(plVar4,*(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18)
                                                          + 0x80) + 0x40);
      lVar8 = *(long *)(unaff_x19 + 0x20);
      lVar13 = *plVar5;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      puVar3 = (undefined8 *)
               thunk_FUN_02f66c64(plVar4,*(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x80)
                                         + 0x20);
      *puVar3 = 0;
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x80);
      FUN_02f08788(lVar8 + 0x40,8);
      puVar3 = (undefined8 *)thunk_FUN_02f66c64(plVar4,lVar8 + 0x40);
      *puVar3 = 0;
      if (lVar13 != 0) {
        lVar8 = *unaff_x20;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_04df6690;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_02f421d0();
LAB_04df6690:
        uVar10 = (*(code *)*puVar3)();
        if ((uVar10 & 1) == 0) {
          lVar9 = *(long *)(unaff_x19 + 0x20);
          uVar1 = *(ushort *)(lVar9 + 0x135);
          lVar8 = lVar9;
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_02f41e9c(lVar9);
            uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
            lVar8 = *(long *)(unaff_x19 + 0x20);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            FUN_02f41e9c(lVar8);
          }
                    /* WARNING: Could not recover jumptable at 0x04df6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar4,uVar12,lVar13);
          return;
        }
        return;
      }
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar12 = thunk_FUN_02f45270();
    uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067ce5e0);
    uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067ce5e8);
    FUN_0504ee88(uVar12,uVar6,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar12);
}


