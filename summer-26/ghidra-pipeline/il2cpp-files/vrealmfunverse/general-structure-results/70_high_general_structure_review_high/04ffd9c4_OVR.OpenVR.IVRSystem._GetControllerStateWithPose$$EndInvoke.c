/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 04ffd9c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int in_w8;
  long *unaff_x19;
  long *unaff_x20;
  long lVar13;
  long unaff_x25;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0504491c(&stack0x00000080,4,0);
  uVar10 = in_stack_00000098;
  uVar9 = uStack0000000000000094;
  uVar7 = uStack0000000000000090;
  uVar6 = uStack000000000000008c;
  uVar4 = uStack0000000000000088;
  uVar3 = uStack0000000000000084;
  uVar1 = uStack0000000000000080;
  FUN_0504491c(&stack0x00000080,5,0);
  uVar11 = in_stack_00000098;
  uVar8 = uStack0000000000000090;
  uVar5 = uStack0000000000000088;
  uVar2 = uStack0000000000000080;
  if (unaff_x19[0x10] != 0) {
    lVar13 = unaff_x19[4];
    uVar16 = uStack0000000000000090;
    FUN_05c9bf94(unaff_x19[0x10],0);
    if (lVar13 != 0) {
      uVar14 = FUN_05c9dc9c(lVar13,0);
      if (unaff_x19[0x11] != 0) {
        lVar13 = unaff_x19[4];
        uVar17 = uVar16;
        uVar18 = param_3;
        FUN_05c9bf94(unaff_x19[0x11],0);
        if (lVar13 != 0) {
          uVar15 = FUN_05c9dc9c(lVar13,0);
          if (unaff_x19[4] != 0) {
            FUN_05c9a10c(unaff_x19[4],0);
            FUN_05c7b504(0);
            if (unaff_x19[0x10] != 0) {
              FUN_05c9a10c(unaff_x19[0x10],0);
              if (unaff_x19[4] != 0) {
                FUN_05c9a10c(unaff_x19[4],0);
                FUN_05c7b504(0);
                if (unaff_x19[0x11] != 0) {
                  FUN_05c9a10c(unaff_x19[0x11],0);
                  FUN_05044804(uVar14,uVar16,param_3,uVar15,uVar17,uVar18,0);
                  if (unaff_x19[0x11] != 0) {
                    FUN_05c9b4fc(uVar2,uStack0000000000000084,uVar5,unaff_x19[0x11],0);
                    if (unaff_x19[0x11] != 0) {
                      FUN_05c9c3b0(uStack000000000000008c,uVar8,uStack0000000000000094,uVar11,
                                   unaff_x19[0x11],0);
                      if (unaff_x19[0x10] != 0) {
                        FUN_05c9b4fc(uVar1,uVar3,uVar4,unaff_x19[0x10],0);
                        if (unaff_x19[0x10] != 0) {
                          FUN_05c9c3b0(uVar6,uVar7,uVar9,uVar10,unaff_x19[0x10],0);
                          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                          }
                          if (*(char *)(unaff_x25 + 0x3b0) == '\0') {
                            FUN_02b3c81c(PTR_DAT_063234c8);
                            *(undefined1 *)(unaff_x25 + 0x3b0) = 1;
                          }
                          lVar13 = *unaff_x20;
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar13 = *unaff_x20;
                          }
                          if (**(long **)(lVar13 + 0xb8) != 0) {
                            if (*(char *)(**(long **)(lVar13 + 0xb8) + 0x11e) != '\0') {
                              if (*(int *)(lVar13 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                              }
                              lVar13 = FUN_0504884c(0);
                              if (lVar13 != 0) {
                                if (unaff_x19[6] == 0) goto LAB_04ffdda0;
                                uVar12 = FUN_05c89340(unaff_x19[6],0);
                                FUN_05fb65c0(lVar13,uVar12,0,0);
                                FUN_05fb65c0(lVar13,unaff_x19[8],1,0);
                                FUN_05fb65c0(lVar13,unaff_x19[9],2,0);
                              }
                            }
                            (**(code **)(*unaff_x19 + 0x1f8))();
                            (**(code **)(*unaff_x19 + 0x1e8))();
                            return;
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
      }
    }
  }
LAB_04ffdda0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


