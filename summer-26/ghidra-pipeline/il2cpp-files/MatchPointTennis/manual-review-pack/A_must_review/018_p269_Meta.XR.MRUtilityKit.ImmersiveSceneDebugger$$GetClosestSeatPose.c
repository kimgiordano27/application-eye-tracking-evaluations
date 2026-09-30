/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPose
ENTRY_POINT: 0771c7b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPose(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  
  uVar2 = FUN_07718568();
  if (((uVar2 & 1) != 0) &&
     ((*(char *)((long)unaff_x20 + 0x84) == '\0' || (uVar2 = FUN_0771b814(), (uVar2 & 1) != 0)))) {
    iVar1 = (**(code **)(*unaff_x20 + 0x378))();
    plVar6 = (long *)PTR_DAT_09f1e538;
    if ((iVar1 == 1) || (*(char *)((long)unaff_x20 + 0x84) != '\0')) {
LAB_0771c80c:
      lVar3 = FUN_0771b240();
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + 0x3c) = *(undefined1 *)(unaff_x19 + 0x34);
        unaff_x20[0x1a] = 0;
        thunk_FUN_044bb4b4(unaff_x21,0);
        iVar1 = (**(code **)(*unaff_x20 + 0x378))();
        if (iVar1 == 1) {
          uVar4 = FUN_0771abd4(*(undefined4 *)(unaff_x19 + 0x30));
          *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
          thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar4);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        uVar4 = Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetLargestSurfaceDebugger
                          (*(undefined4 *)(unaff_x19 + 0x30));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar4);
        *(undefined4 *)(unaff_x19 + 0x10) = 2;
        return 1;
      }
      goto LAB_0771cd08;
    }
    lVar3 = unaff_x20[0x11];
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_0952c404(lVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x20[0x11] != 0) {
        plVar5 = (long *)FUN_094e2354(unaff_x20[0x11],0);
        lVar3 = unaff_x20[0x17];
        if (lVar3 != 0) {
          iVar1 = 0;
          do {
            if (*(int *)(lVar3 + 0x18) <= iVar1) goto LAB_0771c80c;
            uVar4 = FUN_05badb74(lVar3,iVar1,*(undefined8 *)PTR_DAT_09f1e8c0);
            lVar3 = FUN_0775e914(uVar4,0);
            if (lVar3 == 0) break;
            if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
              uVar2 = 0;
              uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
              do {
                if (uVar7 <= uVar2) goto LAB_0771cd0c;
                lVar8 = *(long *)(lVar3 + 0x20 + uVar2 * 8);
                if (*(int *)(*plVar6 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar7 = FUN_09531730(lVar8,0,0);
                if ((uVar7 & 1) != 0) {
                  if (lVar8 == 0) goto LAB_0771cd08;
                  uVar4 = FUN_094e2354(lVar8,0);
                  if (*(int *)(*plVar6 + 0xe4) == 0) {
                    thunk_FUN_044a54b4(*plVar6);
                  }
                  uVar7 = FUN_09531730(uVar4,plVar5,0);
                  if ((uVar7 & 1) != 0) {
                    lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
                    if (lVar8 == 0) goto LAB_0771cd08;
                    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0771cd0c:
                    /* WARNING: Subroutine does not return */
                      FUN_04447e4c();
                    }
                    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_09f30ea0;
                    thunk_FUN_044bb4b4();
                    if (unaff_x20[0x17] == 0) goto LAB_0771cd08;
                    plVar6 = (long *)FUN_05badb74(unaff_x20[0x17],iVar1,
                                                  *(undefined8 *)PTR_DAT_09f1e8c0);
                    if (plVar6 == (long *)0x0) {
                      uVar4 = 0;
                    }
                    else {
                      if (plVar6 == (long *)0x0) goto LAB_0771cd08;
                      uVar4 = (**(code **)(*plVar6 + 0x168))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x170));
                    }
                    if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_0771cd0c;
                    *(undefined8 *)(lVar8 + 0x28) = uVar4;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28));
                    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0771cd0c;
                    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_09f30e68;
                    thunk_FUN_044bb4b4();
                    if (plVar5 == (long *)0x0) {
                      uVar4 = 0;
                    }
                    else {
                      if (plVar5 == (long *)0x0) goto LAB_0771cd08;
                      uVar4 = (**(code **)(*plVar5 + 0x168))
                                        (plVar5,*(undefined8 *)(*plVar5 + 0x170));
                    }
                    if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0771cd0c;
                    *(undefined8 *)(lVar8 + 0x38) = uVar4;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x38));
                    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0771cd0c;
                    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_09f30e98;
                    thunk_FUN_044bb4b4();
                    uVar4 = FUN_078b57fc(lVar8,0);
                    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                    }
                    FUN_094c33b0(uVar4,0);
                    plVar6 = (long *)PTR_DAT_09f1e538;
                  }
                }
                uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
                uVar2 = uVar2 + 1;
              } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
            }
            lVar3 = unaff_x20[0x17];
            iVar1 = iVar1 + 1;
          } while (lVar3 != 0);
        }
      }
      goto LAB_0771cd08;
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30e48,0);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x11) = 1;
    return 0;
  }
LAB_0771cd08:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


