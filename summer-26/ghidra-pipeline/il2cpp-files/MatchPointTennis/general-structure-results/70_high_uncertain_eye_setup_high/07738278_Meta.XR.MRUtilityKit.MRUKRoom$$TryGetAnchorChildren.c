/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetAnchorChildren
ENTRY_POINT: 07738278
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetAnchorChildren(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 uStack000000000000011c;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x988));
  FUN_04447ba8(PTR_DAT_09f31a10);
  FUN_04447ba8(PTR_DAT_09f2d008);
  FUN_04447ba8(PTR_DAT_09f261c8);
  FUN_04447ba8(PTR_DAT_09f31a18);
  FUN_04447ba8(PTR_DAT_09f26db8);
  FUN_04447ba8(PTR_DAT_09f31a20);
  FUN_04447ba8(PTR_DAT_09f31a28);
  FUN_04447ba8(PTR_DAT_09f2d130);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f1eec8);
  FUN_04447ba8(PTR_DAT_09f31a30);
  FUN_04447ba8(PTR_DAT_09f31a38);
  FUN_04447ba8(PTR_DAT_09f31a40);
  *(undefined1 *)(unaff_x21 + 0x203) = 1;
  uStack000000000000011c = 0;
  plVar5 = (long *)(unaff_x19 + 0x60);
  if (*plVar5 != 0) {
    FUN_05f6ad44(plVar5,*(undefined8 *)PTR_DAT_09f31a18);
  }
  puVar2 = PTR_DAT_09f31a20;
  puVar1 = PTR_DAT_09f26db8;
  plVar7 = (long *)(unaff_x19 + 0x50);
  if (*plVar7 != 0) {
    FUN_05f6ef58(plVar7,*(undefined8 *)PTR_DAT_09f261c8);
  }
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  FUN_05f6aa84(&stack0x000000d0,*(undefined4 *)(unaff_x19 + 0x40),4,1,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_000000d8;
  *plVar5 = in_stack_000000d0;
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  Unity_Collections_NativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_44>___ctor
            (&stack0x00000088,unaff_w20,4,1,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000090;
  *plVar7 = in_stack_00000088;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d008,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    plVar5 = (long *)(unaff_x19 + 0x30);
    *plVar5 = lVar3;
    thunk_FUN_044bb4b4(plVar5,lVar3);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      uVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eec8,
                           *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
      *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x38),uVar4);
      puVar1 = PTR_DAT_09f31a10;
      lVar3 = *(long *)(unaff_x19 + 0x28);
      if (lVar3 != 0) {
        lVar9 = 0;
        uVar6 = 0;
        do {
          if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
            if (*(int *)(unaff_x19 + 0x10) < 5) {
LAB_07738690:
              *(undefined4 *)(unaff_x19 + 0x44) = 0;
              return;
            }
            lVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_09f31a38;
              thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
              uStack000000000000011c = *(undefined4 *)(unaff_x19 + 0x68);
              uVar4 = FUN_07a3b850(&stack0x0000011c,0);
              if (1 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x28) = uVar4;
                thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x28),uVar4);
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_09f31a40;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30));
                  uStack000000000000011c = *(undefined4 *)(unaff_x19 + 0x58);
                  uVar4 = FUN_07a3b850(&stack0x0000011c,0);
                  if (3 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x38) = uVar4;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x38),uVar4);
                    if (4 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_09f31a30;
                      thunk_FUN_044bb4b4();
                      if (*(long *)(unaff_x19 + 0x28) == 0) break;
                      uStack000000000000011c = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                      uVar4 = FUN_07a3b850(&stack0x0000011c,0);
                      if (5 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x48) = uVar4;
                        thunk_FUN_044bb4b4();
                        uVar4 = FUN_078b57fc(lVar3,0);
                        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                        }
                        FUN_094c652c(uVar4,0);
                        goto LAB_07738690;
                      }
                    }
                  }
                }
              }
            }
LAB_077386b0:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar8 = *plVar5;
          FUN_05da2aa8(&stack0x00000088,lVar3,uVar6 & 0xffffffff,*(undefined8 *)puVar1);
          memcpy(&stack0x000000d0,&stack0x00000088,0x48);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_077386b0;
          lVar8 = lVar8 + lVar9 * 8;
          *(undefined8 *)(lVar8 + 0x48) = in_stack_00000100;
          *(undefined8 *)(lVar8 + 0x40) = in_stack_000000f8;
          *(undefined8 *)(lVar8 + 0x58) = in_stack_00000110;
          *(undefined8 *)(lVar8 + 0x50) = in_stack_00000108;
          *(undefined8 *)(lVar8 + 0x28) = in_stack_000000e0;
          *(undefined8 *)(lVar8 + 0x20) = in_stack_000000d8;
          *(undefined8 *)(lVar8 + 0x38) = in_stack_000000f0;
          *(undefined8 *)(lVar8 + 0x30) = in_stack_000000e8;
          if (*(long *)(unaff_x19 + 0x28) == 0) break;
          plVar7 = *(long **)(unaff_x19 + 0x38);
          FUN_05da2aa8(&stack0x00000088,*(long *)(unaff_x19 + 0x28),uVar6 & 0xffffffff,
                       *(undefined8 *)puVar1);
          lVar3 = in_stack_00000088;
          if (plVar7 == (long *)0x0) break;
          if ((in_stack_00000088 != 0) &&
             (lVar8 = thunk_FUN_04485110(in_stack_00000088,*(undefined8 *)(*plVar7 + 0x40)),
             lVar8 == 0)) {
            uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar4,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar6) goto LAB_077386b0;
          plVar7 = (long *)((long)plVar7 + lVar9 + 0x20);
          *plVar7 = lVar3;
          thunk_FUN_044bb4b4(plVar7,lVar3);
          lVar3 = *(long *)(unaff_x19 + 0x28);
          uVar6 = uVar6 + 1;
          lVar9 = lVar9 + 8;
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


