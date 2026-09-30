/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 077384e0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar4;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000088;
  undefined8 in_stack_00000118;
  
  do {
    lVar1 = thunk_FUN_04485110(unaff_x22,*(undefined8 *)(param_1 + 0x40));
    if (lVar1 == 0) {
      uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar3,0);
    }
    do {
      if (*(uint *)(unaff_x26 + 3) <= unaff_x21) {
LAB_077386b0:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar2 = (long *)((long)unaff_x26 + unaff_x23 + 0x20);
      *plVar2 = unaff_x22;
      thunk_FUN_044bb4b4(plVar2,unaff_x22);
      lVar1 = *(long *)(unaff_x19 + 0x28);
      unaff_x21 = unaff_x21 + 1;
      unaff_x23 = unaff_x23 + 8;
      if (lVar1 == 0) {
LAB_0773851c:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x21) {
        if (*(int *)(unaff_x19 + 0x10) < 5) {
LAB_07738690:
          *(undefined4 *)(unaff_x19 + 0x44) = 0;
          return;
        }
        lVar1 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) != 0) {
            *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR_DAT_09f31a38;
            thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x20));
            in_stack_00000118._4_4_ = *(undefined4 *)(unaff_x19 + 0x68);
            uVar3 = FUN_07a3b850((long)&stack0x00000118 + 4,0);
            if (1 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x28) = uVar3;
              thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x28),uVar3);
              if (2 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)PTR_DAT_09f31a40;
                thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x30));
                in_stack_00000118._4_4_ = *(undefined4 *)(unaff_x19 + 0x58);
                uVar3 = FUN_07a3b850((long)&stack0x00000118 + 4,0);
                if (3 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x38) = uVar3;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x38),uVar3);
                  if (4 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_09f31a30;
                    thunk_FUN_044bb4b4();
                    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0773851c;
                    in_stack_00000118._4_4_ = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                    uVar3 = FUN_07a3b850((long)&stack0x00000118 + 4,0);
                    if (5 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x48) = uVar3;
                      thunk_FUN_044bb4b4();
                      uVar3 = FUN_078b57fc(lVar1,0);
                      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                      }
                      FUN_094c652c(uVar3,0);
                      goto LAB_07738690;
                    }
                  }
                }
              }
            }
          }
          goto LAB_077386b0;
        }
        goto LAB_0773851c;
      }
      lVar4 = *unaff_x20;
      FUN_05da2aa8(&stack0x00000088,lVar1,unaff_x21 & 0xffffffff,*unaff_x24);
      memcpy(&stack0x000000d0,&stack0x00000088,0x48);
      uVar6 = unaff_x25[4];
      uVar5 = unaff_x25[7];
      uVar3 = unaff_x25[6];
      uVar10 = unaff_x25[1];
      uVar9 = *unaff_x25;
      uVar8 = unaff_x25[3];
      uVar7 = unaff_x25[2];
      if (lVar4 == 0) goto LAB_0773851c;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_077386b0;
      lVar4 = lVar4 + unaff_x23 * 8;
      *(undefined8 *)(lVar4 + 0x48) = unaff_x25[5];
      *(undefined8 *)(lVar4 + 0x40) = uVar6;
      *(undefined8 *)(lVar4 + 0x58) = uVar5;
      *(undefined8 *)(lVar4 + 0x50) = uVar3;
      *(undefined8 *)(lVar4 + 0x28) = uVar10;
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0773851c;
      unaff_x26 = *(long **)(unaff_x19 + 0x38);
      FUN_05da2aa8(&stack0x00000088,*(long *)(unaff_x19 + 0x28),unaff_x21 & 0xffffffff,*unaff_x24);
      if (unaff_x26 == (long *)0x0) goto LAB_0773851c;
      unaff_x22 = in_stack_00000088;
    } while (in_stack_00000088 == 0);
    param_1 = *unaff_x26;
  } while( true );
}


