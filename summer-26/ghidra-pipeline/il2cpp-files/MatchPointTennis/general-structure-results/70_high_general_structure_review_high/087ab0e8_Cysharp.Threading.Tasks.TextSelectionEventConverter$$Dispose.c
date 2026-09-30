/*
FUNCTION_NAME: Cysharp.Threading.Tasks.TextSelectionEventConverter$$Dispose
ENTRY_POINT: 087ab0e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


byte Cysharp_Threading_Tasks_TextSelectionEventConverter__Dispose(void)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  ushort *puVar8;
  short *psVar9;
  uint *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  byte unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  
  do {
                    /* try { // try from 087ab0ec to 088ab1ff has its CatchHandler @ 087aab60 */
    if ((int)*unaff_x19 <= (int)unaff_w22) {
      if (unaff_w29 == 0) {
        if ((unaff_w26 & 1) != 0) {
          return 0;
        }
      }
      else {
        if ((4 < unaff_w29) || ((unaff_w26 & 1) != 0)) {
          return 0;
        }
        unaff_w23 = unaff_w23 + 1;
      }
      bVar5 = unaff_w23 < 8;
      if ((unaff_x24 & 1) == 0) {
        bVar5 = unaff_w23 == 8;
      }
      return bVar5 & (unaff_w28 ^ 1);
    }
    uVar3 = *(undefined2 *)(unaff_x20 + (long)(int)unaff_w22 * 2);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar6 = FUN_08763e68(uVar3,0);
    if ((uVar6 & 1) == 0) {
      if (4 < unaff_w29) {
        return 0;
      }
      uVar6 = (ulong)(int)in_stack_00000008._4_4_;
      if (unaff_w29 != 0) {
        unaff_w23 = unaff_w23 + 1;
      }
      uVar4 = *(ushort *)(unaff_x20 + uVar6 * 2);
      if (uVar4 < 0x2f) {
        if (uVar4 == 0x25) {
          psVar9 = (short *)(unaff_x20 + (long)(int)(in_stack_00000008._4_4_ + 1) * 2);
          do {
            in_stack_00000008._4_4_ = (uint)uVar6;
            uVar7 = in_stack_00000008._4_4_ + 1;
            if ((int)*unaff_x19 <= (int)uVar7) goto LAB_087ab20c;
            sVar2 = *psVar9;
            if (sVar2 == 0x2f) {
              return 0;
            }
            uVar6 = (ulong)uVar7;
            psVar9 = psVar9 + 1;
          } while (sVar2 != 0x5d);
LAB_087ab174:
          if ((unaff_w28 & 1) == 0) {
            return 0;
          }
          uVar1 = *unaff_x19;
          if (((int)(uVar7 + 1) < (int)uVar1) &&
             (*(short *)(unaff_x20 + (long)(int)(uVar7 + 1) * 2) != 0x3a)) {
            return 0;
          }
          in_stack_00000008._4_4_ = uVar7 + 2;
          if ((((int)(uVar7 + 3) < (int)uVar1) &&
              (*(short *)(unaff_x20 + (long)(int)in_stack_00000008._4_4_ * 2) == 0x30)) &&
             (*(short *)(unaff_x20 + (long)(int)(uVar7 + 3) * 2) == 0x78)) {
            in_stack_00000008._4_4_ = uVar7 + 4;
            if ((int)in_stack_00000008._4_4_ < (int)uVar1) {
              do {
                uVar3 = *(undefined2 *)(unaff_x20 + (long)(int)in_stack_00000008._4_4_ * 2);
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar6 = FUN_08763e68(uVar3,0);
                if ((uVar6 & 1) == 0) {
                  return 0;
                }
                in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
              } while ((int)in_stack_00000008._4_4_ < (int)*unaff_x19);
            }
            unaff_w28 = 0;
LAB_087ab20c:
            unaff_w29 = 0;
          }
          else if ((int)in_stack_00000008._4_4_ < (int)uVar1) {
            puVar8 = (ushort *)(unaff_x20 + (long)(int)in_stack_00000008._4_4_ * 2);
            do {
              if (9 < *puVar8 - 0x30) {
                return 0;
              }
              in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
              puVar8 = puVar8 + 1;
            } while (uVar1 != in_stack_00000008._4_4_);
            unaff_w28 = 0;
            unaff_w29 = 0;
            in_stack_00000008._4_4_ = uVar1;
          }
          else {
            unaff_w28 = 0;
            unaff_w29 = 0;
          }
        }
        else {
          if (uVar4 != 0x2e) {
            return 0;
          }
          if (((unaff_w27 ^ 1) & 1) == 0) {
            return 0;
          }
          in_stack_00000008._4_4_ = *unaff_x19;
          uVar6 = FUN_08409f9c();
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          unaff_w29 = 0;
          unaff_w23 = unaff_w23 + 1;
          unaff_w27 = 1;
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - 1;
        }
      }
      else {
        if (uVar4 != 0x3a) {
          uVar7 = in_stack_00000008._4_4_;
          if (uVar4 != 0x5d) {
            return 0;
          }
          goto LAB_087ab174;
        }
        if (((int)in_stack_00000008._4_4_ < 1) ||
           (*(short *)(unaff_x20 + (long)(int)(in_stack_00000008._4_4_ - 1) * 2) != 0x3a)) {
          unaff_w29 = 0;
          unaff_w26 = 1;
        }
        else {
          if ((unaff_x24 & 1) != 0) {
            return 0;
          }
          unaff_w26 = 0;
          unaff_w29 = 0;
          unaff_x24 = 1;
        }
      }
    }
    else {
      unaff_w26 = 0;
      unaff_w29 = unaff_w29 + 1;
    }
    unaff_w22 = in_stack_00000008._4_4_ + 1;
    in_stack_00000008._4_4_ = unaff_w22;
  } while( true );
}


