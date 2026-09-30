/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 069e13e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  long unaff_x25;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  uStack000000000000005c = uStack0000000000000088;
  uStack0000000000000078 = uStack0000000000000094;
  uStack000000000000007c = uStack0000000000000090;
  uStack0000000000000074 = in_stack_00000098;
  uStack0000000000000060 = param_1;
  uStack0000000000000064 = param_2;
  FUN_07cac280();
  if (unaff_x21 != 0) {
    uVar3 = FUN_07cadf5c();
    if (unaff_x19[0x11] != 0) {
      lVar2 = unaff_x19[4];
      uVar5 = uStack0000000000000090;
      uVar6 = param_3;
      FUN_07cac280(unaff_x19[0x11],0);
      if (lVar2 != 0) {
        uVar4 = FUN_07cadf5c(lVar2,0);
        if (unaff_x19[4] != 0) {
          uStack000000000000003c = unaff_s13;
          uStack000000000000006c = unaff_s11;
          FUN_07cac4e0(unaff_x19[4],0);
          FUN_07c8abb0(0);
          if (unaff_x19[0x10] != 0) {
            uStack000000000000002c = unaff_s12;
            uStack0000000000000034 = unaff_s8;
            FUN_07cac4e0(unaff_x19[0x10],0);
            if (unaff_x19[4] != 0) {
              FUN_07cac4e0(unaff_x19[4],0);
              FUN_07c8abb0(0);
              if (unaff_x19[0x11] != 0) {
                FUN_07cac4e0(unaff_x19[0x11],0);
                FUN_06a281e0(uVar3,uStack0000000000000090,param_3,uVar4,uVar5,uVar6,0);
                if (unaff_x19[0x11] != 0) {
                  FUN_07cab7ec(uStack0000000000000064,uStack0000000000000060,uStack000000000000005c,
                               unaff_x19[0x11],0);
                  if (unaff_x19[0x11] != 0) {
                    FUN_07cac71c(uStack000000000000008c,uStack000000000000007c,
                                 uStack0000000000000078,uStack0000000000000074,unaff_x19[0x11],0);
                    if (unaff_x19[0x10] != 0) {
                      FUN_07cab7ec(uStack000000000000006c,uStack000000000000003c,unaff_s14,
                                   unaff_x19[0x10],0);
                      if (unaff_x19[0x10] != 0) {
                        FUN_07cac71c(uStack0000000000000034,unaff_s9,uStack000000000000002c,
                                     unaff_s10,unaff_x19[0x10],0);
                        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                        }
                        if (*(char *)(unaff_x25 + 0xb13) == '\0') {
                          FUN_03a8a718(PTR_DAT_08488c38);
                          *(undefined1 *)(unaff_x25 + 0xb13) = 1;
                        }
                        lVar2 = *unaff_x20;
                        if (*(int *)(lVar2 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                          lVar2 = *unaff_x20;
                        }
                        if (**(long **)(lVar2 + 0xb8) != 0) {
                          if (*(char *)(**(long **)(lVar2 + 0xb8) + 0x11e) != '\0') {
                            if (*(int *)(lVar2 + 0xe4) == 0) {
                              thunk_FUN_03ae8be4();
                            }
                            lVar2 = FUN_06a2c228(0);
                            if (lVar2 != 0) {
                              if (unaff_x19[6] == 0) goto LAB_069e1778;
                              uVar1 = FUN_07c98f88(unaff_x19[6],0);
                              FUN_07fd5820(lVar2,uVar1,0,0);
                              FUN_07fd5820(lVar2,unaff_x19[8],1,0);
                              FUN_07fd5820(lVar2,unaff_x19[9],2,0);
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
LAB_069e1778:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


