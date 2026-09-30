/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 050f77b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *in_x9;
  long lVar4;
  long lVar5;
  int in_w10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x29;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  uint uStack0000000000000020;
  uint uStack0000000000000024;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000058;
  long *in_stack_00000070;
  
  do {
    lVar4 = *in_x9;
    *(int *)(unaff_x29 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(unaff_x29 + 0x18);
    plVar7 = unaff_x27;
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x29 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(unaff_x29,param_3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    do {
      if ((uStack0000000000000020 & 1) == 0) {
        uVar6 = *(undefined8 *)PTR_DAT_06773970;
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_05015c2c(uVar6,0);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar2 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar6,in_stack_00000018,&stack0x00000058);
        if ((uVar2 & 1) != 0) {
          lVar4 = *in_stack_00000008;
          if (lVar4 == 0) {
            lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
            FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0677fc48);
          }
          *in_stack_00000008 = lVar4;
          thunk_FUN_02dd37b4(in_stack_00000008,lVar4);
          lVar4 = *in_stack_00000008;
          uVar6 = FUN_050f85e4(unaff_x27);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar3 = *(long *)(lVar4 + 0x10);
          lVar5 = *(long *)PTR_DAT_0677fd28;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          in_stack_00000018 = unaff_x27;
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar4,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar6 = *(undefined8 *)PTR_DAT_0677fd48;
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05015c2c(uVar6,0);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar6,unaff_x24,&stack0x00000058);
      if ((uVar2 & 1) != 0) {
        lVar4 = *in_stack_00000028;
        if (lVar4 == 0) {
          lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fd40);
          FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0677fd38);
        }
        *in_stack_00000028 = lVar4;
        thunk_FUN_02dd37b4(in_stack_00000028,lVar4);
        lVar4 = *in_stack_00000028;
        uVar6 = FUN_050f869c(unaff_x27);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar3 = *(long *)(lVar4 + 0x10);
        lVar5 = *(long *)PTR_DAT_0677fd20;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        unaff_x24 = unaff_x27;
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      do {
        uVar1 = *(uint *)(unaff_x26 + 0x18);
        unaff_w22 = unaff_w22 + 1;
        if ((int)uVar1 <= (int)unaff_w22) {
          do {
            uVar2 = FUN_04a7a4a0(&stack0x00000060,*(undefined8 *)PTR_DAT_0677fd10);
            plVar7 = in_stack_00000070;
            if ((uVar2 & 1) == 0) {
              FUN_04a7a49c(&stack0x00000060,*(undefined8 *)PTR_DAT_0677fd08);
              return;
            }
            if (*(int *)(*unaff_x19 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uStack0000000000000024 = FUN_050f7df8(plVar7);
            uStack0000000000000020 = FUN_050f7ecc(plVar7);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            unaff_x26 = (**(code **)(*plVar7 + 0x7b8))(plVar7,0x36,*(undefined8 *)(*plVar7 + 0x7c0))
            ;
            if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar1 = *(uint *)(unaff_x26 + 0x18);
          } while ((int)uVar1 < 1);
          unaff_w22 = 0;
          unaff_x24 = (long *)0x0;
          plVar7 = (long *)0x0;
          unaff_x20 = (long *)0x0;
          unaff_x23 = (long *)0x0;
          in_stack_00000018 = (long *)0x0;
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
        uVar2 = (**(code **)(*unaff_x27 + 0x338))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x340));
      } while ((uVar2 & 1) != 0);
      in_stack_00000058 = 0;
      unaff_x25 = (**(code **)(*unaff_x27 + 0x238))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x240));
      if ((uStack0000000000000024 & 1) == 0) {
        uVar6 = *(undefined8 *)PTR_DAT_06773968;
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_05015c2c(uVar6,0);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar2 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar6,unaff_x23,&stack0x00000058);
        if ((uVar2 & 1) != 0) {
          lVar4 = *in_stack_00000010;
          if (lVar4 == 0) {
            lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
            FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0677fc48);
          }
          *in_stack_00000010 = lVar4;
          thunk_FUN_02dd37b4(in_stack_00000010,lVar4);
          lVar4 = *in_stack_00000010;
          uVar6 = FUN_050f85e4(unaff_x27);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar3 = *(long *)(lVar4 + 0x10);
          lVar5 = *(long *)PTR_DAT_0677fd28;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          unaff_x23 = unaff_x27;
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar4,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar6 = *(undefined8 *)PTR_DAT_06773980;
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05015c2c(uVar6,0);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar6,unaff_x20,&stack0x00000058);
      if ((uVar2 & 1) != 0) {
        lVar4 = *in_stack_00000038;
        if (lVar4 == 0) {
          lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
          FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0677fc48);
        }
        *in_stack_00000038 = lVar4;
        thunk_FUN_02dd37b4(in_stack_00000038,lVar4);
        lVar4 = *in_stack_00000038;
        uVar6 = FUN_050f85e4(unaff_x27);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar3 = *(long *)(lVar4 + 0x10);
        lVar5 = *(long *)PTR_DAT_0677fd28;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        unaff_x20 = unaff_x27;
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      uVar6 = *(undefined8 *)PTR_DAT_06773978;
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05015c2c(uVar6,0);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_050f7fa0(unaff_x27,unaff_x25,uVar6,plVar7,&stack0x00000058);
    } while ((uVar2 & 1) == 0);
    lVar4 = *in_stack_00000030;
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fc50);
      FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0677fc48);
    }
    *in_stack_00000030 = lVar4;
    thunk_FUN_02dd37b4(in_stack_00000030,lVar4);
    unaff_x29 = *in_stack_00000030;
    param_3 = FUN_050f85e4(unaff_x27);
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_w10 = *(int *)(unaff_x29 + 0x1c);
    param_1 = *(long *)(unaff_x29 + 0x10);
    in_x9 = (long *)PTR_DAT_0677fd28;
  } while( true );
}


