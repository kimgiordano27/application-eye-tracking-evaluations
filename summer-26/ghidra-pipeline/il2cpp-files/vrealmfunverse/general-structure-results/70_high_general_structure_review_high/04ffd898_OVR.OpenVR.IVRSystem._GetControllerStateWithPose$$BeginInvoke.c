/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 04ffd898
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  long unaff_x25;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  lVar2 = unaff_x19[0xb];
  FUN_02c52d64(0);
  if (lVar2 != 0) {
    FUN_05c9b4fc(lVar2,0);
    lVar2 = unaff_x19[0xb];
    FUN_02d81684(0);
    if (lVar2 != 0) {
      FUN_05c9c3b0(lVar2,0);
      lVar2 = unaff_x19[0xf];
      FUN_02c52d64(0);
      if (lVar2 != 0) {
        FUN_05c9b4fc(lVar2,0);
        lVar2 = unaff_x19[0xf];
        FUN_02d81684(0);
        if (lVar2 != 0) {
          FUN_05c9c3b0(lVar2,0);
          if (unaff_x19[0x12] != 0) {
            FUN_05c9b4fc(unaff_x19[0x12],0);
            FUN_04ff443c(&stack0x00000080);
            uVar14 = in_stack_00000098;
            uVar13 = uStack0000000000000094;
            uVar12 = uStack0000000000000090;
            uVar11 = uStack000000000000008c;
            uVar17 = uStack0000000000000088;
            uVar16 = uStack0000000000000084;
            uVar15 = uStack0000000000000080;
            FUN_04ff443c(&stack0x00000080);
            uVar7 = uStack0000000000000088;
            uVar5 = uStack0000000000000084;
            uVar10 = uStack0000000000000080;
            lVar2 = *unaff_x20;
            uStack0000000000000078 = uStack0000000000000094;
            uStack000000000000007c = uStack0000000000000090;
            uStack0000000000000070 = uStack000000000000008c;
            uStack0000000000000074 = in_stack_00000098;
            uVar3 = in_stack_00000098;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              uVar3 = thunk_FUN_02b9ad44(in_stack_00000098,uStack0000000000000084);
              lVar2 = *unaff_x20;
            }
            if (*(int *)(*(long *)(lVar2 + 0xb8) + 0x120) == 2) {
              uVar8 = uVar7;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44(uVar3,uVar5);
                uVar8 = uVar7;
              }
              FUN_0504491c(&stack0x00000080,4,0);
              uVar14 = in_stack_00000098;
              uVar13 = uStack0000000000000094;
              uVar12 = uStack0000000000000090;
              uVar11 = uStack000000000000008c;
              uVar17 = uStack0000000000000088;
              uVar16 = uStack0000000000000084;
              uVar15 = uStack0000000000000080;
              FUN_0504491c(&stack0x00000080,5,0);
              uVar7 = uStack0000000000000088;
              uVar10 = uStack0000000000000080;
              if (unaff_x19[0x10] == 0) goto LAB_04ffdda0;
              lVar2 = unaff_x19[4];
              uStack0000000000000078 = uStack0000000000000094;
              uStack000000000000007c = uStack0000000000000090;
              uStack0000000000000074 = in_stack_00000098;
              uVar5 = uStack0000000000000090;
              FUN_05c9bf94(unaff_x19[0x10],0);
              if (lVar2 == 0) goto LAB_04ffdda0;
              uVar3 = FUN_05c9dc9c(lVar2,0);
              if (unaff_x19[0x11] == 0) goto LAB_04ffdda0;
              lVar2 = unaff_x19[4];
              uVar6 = uVar5;
              uVar9 = uVar8;
              FUN_05c9bf94(unaff_x19[0x11],0);
              if (lVar2 == 0) goto LAB_04ffdda0;
              uVar4 = FUN_05c9dc9c(lVar2,0);
              if (unaff_x19[4] == 0) goto LAB_04ffdda0;
              uStack0000000000000070 = uStack000000000000008c;
              FUN_05c9a10c(unaff_x19[4],0);
              FUN_05c7b504(0);
              if (unaff_x19[0x10] == 0) goto LAB_04ffdda0;
              FUN_05c9a10c(unaff_x19[0x10],0);
              if (unaff_x19[4] == 0) goto LAB_04ffdda0;
              FUN_05c9a10c(unaff_x19[4],0);
              FUN_05c7b504(0);
              if (unaff_x19[0x11] == 0) goto LAB_04ffdda0;
              FUN_05c9a10c(unaff_x19[0x11],0);
              FUN_05044804(uVar3,uVar5,uVar8,uVar4,uVar6,uVar9,0);
              uVar5 = uStack0000000000000084;
            }
            if (unaff_x19[0x11] != 0) {
              FUN_05c9b4fc(uVar10,uVar5,uVar7,unaff_x19[0x11],0);
              if (unaff_x19[0x11] != 0) {
                FUN_05c9c3b0(uStack0000000000000070,uStack000000000000007c,uStack0000000000000078,
                             uStack0000000000000074,unaff_x19[0x11],0);
                if (unaff_x19[0x10] != 0) {
                  FUN_05c9b4fc(uVar15,uVar16,uVar17,unaff_x19[0x10],0);
                  if (unaff_x19[0x10] != 0) {
                    FUN_05c9c3b0(uVar11,uVar12,uVar13,uVar14,unaff_x19[0x10],0);
                    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (*(char *)(unaff_x25 + 0x3b0) == '\0') {
                      FUN_02b3c81c(PTR_DAT_063234c8);
                      *(undefined1 *)(unaff_x25 + 0x3b0) = 1;
                    }
                    lVar2 = *unaff_x20;
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar2 = *unaff_x20;
                    }
                    if (**(long **)(lVar2 + 0xb8) != 0) {
                      if (*(char *)(**(long **)(lVar2 + 0xb8) + 0x11e) != '\0') {
                        if (*(int *)(lVar2 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        lVar2 = FUN_0504884c(0);
                        if (lVar2 != 0) {
                          if (unaff_x19[6] == 0) goto LAB_04ffdda0;
                          uVar1 = FUN_05c89340(unaff_x19[6],0);
                          FUN_05fb65c0(lVar2,uVar1,0,0);
                          FUN_05fb65c0(lVar2,unaff_x19[8],1,0);
                          FUN_05fb65c0(lVar2,unaff_x19[9],2,0);
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
LAB_04ffdda0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


