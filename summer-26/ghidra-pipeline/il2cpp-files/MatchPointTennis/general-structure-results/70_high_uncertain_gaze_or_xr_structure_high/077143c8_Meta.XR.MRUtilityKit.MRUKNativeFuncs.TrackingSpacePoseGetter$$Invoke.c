/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.TrackingSpacePoseGetter$$Invoke
ENTRY_POINT: 077143c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_TrackingSpacePoseGetter__Invoke(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int unaff_w19;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  lVar2 = FUN_04447c90(*param_1,10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_09f30a18;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x20));
    puVar1 = PTR_DAT_09f30790;
    uVar3 = FUN_094cc6fc(&stack0x00000050,*(undefined8 *)PTR_DAT_09f30790,0,0);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x28),uVar3);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_09f30a28;
        thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x30));
        uVar3 = FUN_094cc6fc(&stack0x00000040,*(undefined8 *)puVar1,0,0);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x38),uVar3);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_09f30a38;
            thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x40));
            uVar3 = FUN_094cc6fc(&stack0x00000020,*(undefined8 *)puVar1,0,0);
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = uVar3;
              thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x48),uVar3);
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_09f30a20;
                thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x50));
                uVar3 = FUN_094cc6fc(&stack0x00000030,*(undefined8 *)puVar1,0,0);
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = uVar3;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x58),uVar3);
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)PTR_DAT_09f30a30;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x60));
                    in_stack_00000008 = *(undefined8 *)PTR_DAT_09f30a10;
                    in_stack_00000010 = 0xffffffffffffffff;
                    in_stack_00000018 = unaff_w19;
                    uVar3 = FUN_07a742b0(&stack0x00000008,0);
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = uVar3;
                      thunk_FUN_044bb4b4();
                      uVar3 = FUN_078b57fc(lVar2,0);
                      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                      }
                      FUN_094c652c(uVar3,0);
                      if (unaff_w19 != 4) {
                        uVar5 = uStack0000000000000030;
                        uVar6 = uStack0000000000000038;
                        uVar7 = uStack0000000000000020;
                        uVar8 = uStack0000000000000028;
                        if ((unaff_w19 == 3) ||
                           (uVar5 = uStack0000000000000034, uVar6 = uStack000000000000003c,
                           uVar7 = uStack0000000000000024, uVar8 = uStack000000000000002c,
                           unaff_w19 == 2)) {
                          uVar4 = FUN_0775d310(uVar5,uVar6,uVar7,uVar8,0);
                        }
                        else {
                          uVar4 = FUN_0775d168(&stack0x00000030,&stack0x00000020,0);
                        }
                        if ((uVar4 & 1) == 0) {
                          return 0;
                        }
                      }
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


