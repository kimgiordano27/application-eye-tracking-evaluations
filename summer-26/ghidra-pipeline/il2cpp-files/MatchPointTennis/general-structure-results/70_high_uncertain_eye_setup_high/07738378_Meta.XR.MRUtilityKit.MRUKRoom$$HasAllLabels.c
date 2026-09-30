/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$HasAllLabels
ENTRY_POINT: 07738378
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__HasAllLabels(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar4;
  undefined8 *unaff_x21;
  ulong uVar5;
  long *unaff_x22;
  long lVar6;
  undefined8 *unaff_x23;
  long lVar7;
  undefined8 *unaff_x24;
  long *plVar8;
  long in_stack_00000088;
  long in_stack_00000090;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  uStack00000000000000d0 = 0;
  uStack00000000000000d8 = 0;
  FUN_05f6aa84(&stack0x000000d0,*(undefined4 *)(unaff_x19 + 0x40),4,1,*unaff_x24);
  unaff_x21[1] = uStack00000000000000d8;
  *unaff_x21 = uStack00000000000000d0;
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  Unity_Collections_NativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_44>___ctor
            (&stack0x00000088,unaff_w20,4,1,*unaff_x23);
  unaff_x22[1] = in_stack_00000090;
  *unaff_x22 = in_stack_00000088;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d008,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    plVar4 = (long *)(unaff_x19 + 0x30);
    *plVar4 = lVar2;
    thunk_FUN_044bb4b4(plVar4,lVar2);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      uVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eec8,
                           *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
      *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x38),uVar3);
      puVar1 = PTR_DAT_09f31a10;
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (lVar2 != 0) {
        lVar7 = 0;
        uVar5 = 0;
        do {
          if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar5) {
            if (*(int *)(unaff_x19 + 0x10) < 5) {
LAB_07738690:
              *(undefined4 *)(unaff_x19 + 0x44) = 0;
              return;
            }
            lVar2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
            if (lVar2 == 0) break;
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_09f31a38;
              thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x20));
              in_stack_00000118._4_4_ = *(undefined4 *)(unaff_x19 + 0x68);
              uVar3 = FUN_07a3b850((long)&stack0x00000118 + 4,0);
              if (1 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x28) = uVar3;
                thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x28),uVar3);
                if (2 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_09f31a40;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x30));
                  in_stack_00000118._4_4_ = *(undefined4 *)(unaff_x19 + 0x58);
                  uVar3 = FUN_07a3b850((long)&stack0x00000118 + 4,0);
                  if (3 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x38) = uVar3;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x38),uVar3);
                    if (4 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_09f31a30;
                      thunk_FUN_044bb4b4();
                      if (*(long *)(unaff_x19 + 0x28) == 0) break;
                      in_stack_00000118._4_4_ = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                      uVar3 = FUN_07a3b850((long)&stack0x00000118 + 4,0);
                      if (5 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x48) = uVar3;
                        thunk_FUN_044bb4b4();
                        uVar3 = FUN_078b57fc(lVar2,0);
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
LAB_077386b0:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar6 = *plVar4;
          FUN_05da2aa8(&stack0x00000088,lVar2,uVar5 & 0xffffffff,*(undefined8 *)puVar1);
          memcpy(&stack0x000000d0,&stack0x00000088,0x48);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_077386b0;
          lVar6 = lVar6 + lVar7 * 8;
          *(undefined8 *)(lVar6 + 0x48) = in_stack_00000100;
          *(undefined8 *)(lVar6 + 0x40) = in_stack_000000f8;
          *(undefined8 *)(lVar6 + 0x58) = in_stack_00000110;
          *(undefined8 *)(lVar6 + 0x50) = in_stack_00000108;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_000000e0;
          *(undefined8 *)(lVar6 + 0x20) = uStack00000000000000d8;
          *(undefined8 *)(lVar6 + 0x38) = in_stack_000000f0;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_000000e8;
          if (*(long *)(unaff_x19 + 0x28) == 0) break;
          plVar8 = *(long **)(unaff_x19 + 0x38);
          FUN_05da2aa8(&stack0x00000088,*(long *)(unaff_x19 + 0x28),uVar5 & 0xffffffff,
                       *(undefined8 *)puVar1);
          lVar2 = in_stack_00000088;
          if (plVar8 == (long *)0x0) break;
          if ((in_stack_00000088 != 0) &&
             (lVar6 = thunk_FUN_04485110(in_stack_00000088,*(undefined8 *)(*plVar8 + 0x40)),
             lVar6 == 0)) {
            uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar3,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar5) goto LAB_077386b0;
          plVar8 = (long *)((long)plVar8 + lVar7 + 0x20);
          *plVar8 = lVar2;
          thunk_FUN_044bb4b4(plVar8,lVar2);
          lVar2 = *(long *)(unaff_x19 + 0x28);
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar2 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


