/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 050f789c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long lVar7;
  long *unaff_x29;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *plStack0000000000000018;
  uint uStack0000000000000020;
  uint uStack0000000000000024;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000058;
  long *in_stack_00000070;
  
  do {
    thunk_FUN_02dd37b4(param_1,unaff_x28);
    lVar7 = *in_stack_00000008;
    uVar3 = FUN_050f85e4(unaff_x27);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *(long *)(lVar7 + 0x10);
    lVar6 = *(long *)PTR_DAT_0677fd28;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    plStack0000000000000018 = unaff_x27;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    do {
      do {
        uVar3 = *(undefined8 *)PTR_DAT_0677fd48;
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_05015c2c(uVar3,0);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar3,unaff_x24,&stack0x00000058);
        if ((uVar4 & 1) != 0) {
          lVar7 = *in_stack_00000028;
          if (lVar7 == 0) {
            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fd40);
            FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0677fd38);
          }
          *in_stack_00000028 = lVar7;
          thunk_FUN_02dd37b4(in_stack_00000028,lVar7);
          lVar7 = *in_stack_00000028;
          uVar3 = FUN_050f869c(unaff_x27);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar6 = *(long *)PTR_DAT_0677fd20;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          unaff_x24 = unaff_x27;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar7,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        do {
          uVar1 = *(uint *)(unaff_x26 + 0x18);
          unaff_w22 = unaff_w22 + 1;
          if ((int)uVar1 <= (int)unaff_w22) {
            do {
              uVar4 = FUN_04a7a4a0(&stack0x00000060,*(undefined8 *)PTR_DAT_0677fd10);
              plVar2 = in_stack_00000070;
              if ((uVar4 & 1) == 0) {
                FUN_04a7a49c(&stack0x00000060,*(undefined8 *)PTR_DAT_0677fd08);
                return;
              }
              if (*(int *)(*unaff_x19 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uStack0000000000000024 = FUN_050f7df8(plVar2);
              uStack0000000000000020 = FUN_050f7ecc(plVar2);
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              unaff_x26 = (**(code **)(*plVar2 + 0x7b8))
                                    (plVar2,0x36,*(undefined8 *)(*plVar2 + 0x7c0));
              if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar1 = *(uint *)(unaff_x26 + 0x18);
            } while ((int)uVar1 < 1);
            unaff_w22 = 0;
            unaff_x24 = (long *)0x0;
            unaff_x29 = (long *)0x0;
            unaff_x20 = (long *)0x0;
            unaff_x23 = (long *)0x0;
            plStack0000000000000018 = (long *)0x0;
          }
          if (uVar1 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          unaff_x27 = *(long **)(unaff_x26 + (long)(int)unaff_w22 * 8 + 0x20);
          if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar4 = (**(code **)(*unaff_x27 + 0x338))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x340));
        } while ((uVar4 & 1) != 0);
        in_stack_00000058 = 0;
        unaff_x25 = (**(code **)(*unaff_x27 + 0x238))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x240))
        ;
        if ((uStack0000000000000024 & 1) == 0) {
          uVar3 = *(undefined8 *)PTR_DAT_06773968;
          if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar3 = FUN_05015c2c(uVar3,0);
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar3,unaff_x23,&stack0x00000058);
          if ((uVar4 & 1) != 0) {
            lVar7 = *in_stack_00000010;
            if (lVar7 == 0) {
              lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
              FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0677fc48);
            }
            *in_stack_00000010 = lVar7;
            thunk_FUN_02dd37b4(in_stack_00000010,lVar7);
            lVar7 = *in_stack_00000010;
            uVar3 = FUN_050f85e4(unaff_x27);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar5 = *(long *)(lVar7 + 0x10);
            lVar6 = *(long *)PTR_DAT_0677fd28;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            unaff_x23 = unaff_x27;
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494(lVar7,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar3 = *(undefined8 *)PTR_DAT_06773980;
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_05015c2c(uVar3,0);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar3,unaff_x20,&stack0x00000058);
        if ((uVar4 & 1) != 0) {
          lVar7 = *in_stack_00000038;
          if (lVar7 == 0) {
            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
            FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0677fc48);
          }
          *in_stack_00000038 = lVar7;
          thunk_FUN_02dd37b4(in_stack_00000038,lVar7);
          lVar7 = *in_stack_00000038;
          uVar3 = FUN_050f85e4(unaff_x27);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar6 = *(long *)PTR_DAT_0677fd28;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          unaff_x20 = unaff_x27;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar7,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar3 = *(undefined8 *)PTR_DAT_06773978;
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_05015c2c(uVar3,0);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar3,unaff_x29,&stack0x00000058);
        if ((uVar4 & 1) != 0) {
          lVar7 = *in_stack_00000030;
          if (lVar7 == 0) {
            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
            FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0677fc48);
          }
          *in_stack_00000030 = lVar7;
          thunk_FUN_02dd37b4(in_stack_00000030,lVar7);
          lVar7 = *in_stack_00000030;
          uVar3 = FUN_050f85e4(unaff_x27);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar6 = *(long *)PTR_DAT_0677fd28;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          unaff_x29 = unaff_x27;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar7,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while ((uStack0000000000000020 & 1) != 0);
      uVar3 = *(undefined8 *)PTR_DAT_06773970;
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_05015c2c(uVar3,0);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar3,plStack0000000000000018,&stack0x00000058);
    } while ((uVar4 & 1) == 0);
    unaff_x28 = *in_stack_00000008;
    if (unaff_x28 == 0) {
      unaff_x28 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
      FUN_03aabc60(unaff_x28,*(undefined8 *)PTR_DAT_0677fc48);
    }
    *in_stack_00000008 = unaff_x28;
    param_1 = in_stack_00000008;
  } while( true );
}


