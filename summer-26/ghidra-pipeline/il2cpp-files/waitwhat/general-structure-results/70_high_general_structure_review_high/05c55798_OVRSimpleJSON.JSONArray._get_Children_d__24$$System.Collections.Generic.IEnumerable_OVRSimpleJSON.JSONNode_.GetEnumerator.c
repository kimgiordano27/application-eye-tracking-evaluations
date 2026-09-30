/*
FUNCTION_NAME: OVRSimpleJSON.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator
ENTRY_POINT: 05c55798
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c55a68) */
/* WARNING: Removing unreachable block (ram,0x05c55cb8) */
/* WARNING: Removing unreachable block (ram,0x05c55bc0) */
/* WARNING: Removing unreachable block (ram,0x05c55bd0) */

void OVRSimpleJSON_JSONArray_<get_Children>d__24__System_Collections_Generic_IEnumerable<OVRSimpleJSON_JSONNode>_GetEnumerator
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined8 param_5,long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  int iVar13;
  long unaff_x23;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  undefined8 uStack000000000000004c;
  undefined8 uStack0000000000000054;
  undefined8 uStack000000000000005c;
  undefined8 uStack0000000000000064;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000d8;
  int *in_stack_000000e0;
  long *in_stack_000000e8;
  int in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 *in_stack_00000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  long in_stack_000001d8;
  
  uStack0000000000000198 = param_3._8_8_;
  uStack0000000000000190 = param_3._0_8_;
  uStack00000000000001a8 = param_2._8_8_;
  uStack00000000000001a0 = param_2._0_8_;
  iVar13 = *(int *)(param_6 + 0xe4);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(unaff_x20 + 0x34) = param_4._8_8_;
  *(long *)(unaff_x20 + 0x2c) = param_4._0_8_;
  uStack00000000000001b0 = param_5;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
  }
  in_stack_00000040 = 1;
  in_stack_00000038 = in_stack_00000178;
  in_stack_00000030 = in_stack_00000170;
  uStack000000000000004c = uStack0000000000000198;
  uStack0000000000000044 = uStack0000000000000190;
  in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x34);
  uStack000000000000005c = uStack00000000000001a8;
  uStack0000000000000054 = uStack00000000000001a0;
  uStack0000000000000064 = uStack00000000000001b0;
  in_stack_00000070 = (undefined4)*(undefined8 *)(unaff_x20 + 0x2c);
  uStack0000000000000074 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
  _in_stack_00000150 = FUN_05c501bc(uVar10,&stack0x00000030);
  if (*(int *)(*(long *)PTR_DAT_07118d90 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)PTR_DAT_07118d90);
  }
  _in_stack_00000160 = FUN_046b9320(&stack0x00000150,*(undefined8 *)PTR_DAT_071192b0);
  uVar6 = FUN_046df0e8(&stack0x00000160,*(undefined8 *)PTR_DAT_07119298);
  if ((uVar6 & 1) == 0) {
    in_stack_00000180._4_4_ = 0;
    *in_stack_00000188 = 0;
    uVar10 = *(undefined8 *)PTR_DAT_071192a8;
    *(undefined1 (*) [16])(in_stack_00000188 + 0x16) = _in_stack_00000160;
    FUN_036dc738(in_stack_00000188 + 2,&stack0x00000160,in_stack_00000188,uVar10);
    uVar5 = 0;
    iVar13 = 5;
  }
  else {
    uVar5 = FUN_046df1e8(&stack0x00000160,*(undefined8 *)PTR_DAT_07119290);
    if (*(int *)(*(long *)PTR_DAT_070f25e0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_05cbae20(uVar5,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(in_stack_00000188 + 0xc) == 0) {
        if (*(long *)(unaff_x23 + 0x28) == in_stack_000001d8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_05c55d70;
      }
      if (*(long *)(in_stack_00000188 + 0x12) == 0) {
        if (*(long *)(unaff_x23 + 0x28) == in_stack_000001d8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_05c55d70;
      }
      iVar13 = *(int *)(*(long *)(in_stack_00000188 + 0xc) + 0x18);
      FUN_042ddb30(&stack0x00000080,*(long *)(in_stack_00000188 + 0x12),
                   *(undefined8 *)PTR_DAT_070f7240);
      puVar4 = PTR_DAT_07118a68;
      puVar3 = PTR_DAT_070f7228;
      puVar2 = PTR_DAT_070f1390;
      in_stack_00000128 = in_stack_00000088;
      in_stack_00000120 = in_stack_00000080;
      in_stack_00000138 = in_stack_00000098;
      in_stack_00000130 = in_stack_00000090;
      in_stack_00000140 = in_stack_000000a0;
LAB_05c55948:
      uVar6 = FUN_0544c510(&stack0x00000120,*(undefined8 *)puVar3);
      if ((uVar6 & 1) != 0) {
        in_stack_00000110 = in_stack_00000140;
        uVar10 = *(undefined8 *)(in_stack_00000188 + 0xe);
        in_stack_00000108 = in_stack_00000138;
        in_stack_00000100 = in_stack_00000130;
        in_stack_00000088 = in_stack_00000138;
        in_stack_00000080 = in_stack_00000130;
        in_stack_00000090 = in_stack_00000140;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar6 = FUN_05c524d4(uVar10);
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)(in_stack_00000188 + 0xc);
          if (lVar7 != 0) {
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar9 = *(long *)puVar4;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + 0x28) = in_stack_00000108;
                *(undefined8 *)(lVar8 + 0x20) = in_stack_00000100;
                *(undefined8 *)(lVar8 + 0x30) = in_stack_00000110;
              }
              else {
                in_stack_00000088 = in_stack_00000108;
                in_stack_00000080 = in_stack_00000100;
                in_stack_00000090 = in_stack_00000110;
                FUN_042dcea4(lVar7,&stack0x00000080,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_05c55948;
            }
          }
          if (*(long *)(unaff_x23 + 0x28) == in_stack_000001d8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_05c55d70;
        }
        goto LAB_05c55948;
      }
      if (in_stack_00000180._4_4_ < 0) {
        FUN_0544c50c(&stack0x00000120,*(undefined8 *)PTR_DAT_070f7280);
      }
      lVar7 = *(long *)(in_stack_00000188 + 0xc);
      if (lVar7 == 0) {
        if (*(long *)(unaff_x23 + 0x28) == in_stack_000001d8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_05c55d70;
      }
      if ((iVar13 != *(int *)(lVar7 + 0x18)) &&
         (lVar8 = *(long *)(in_stack_00000188 + 0x10), lVar8 != 0)) {
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),lVar7,iVar13,*(undefined8 *)(lVar8 + 0x28));
      }
    }
    iVar13 = 7;
  }
  if (*in_stack_000000e0 < 0) {
    FUN_041515d0(*in_stack_000000e8 + 0x50,*(undefined8 *)PTR_DAT_070f7288);
  }
  puVar2 = PTR_DAT_07119278;
  if (in_stack_000000d8 == 0) {
    if (iVar13 == 7) {
      *in_stack_00000188 = 0xfffffffe;
      FUN_0469e598(in_stack_00000188 + 2,uVar5,*(undefined8 *)puVar2);
    }
    else if (iVar13 == 0) {
      iVar13 = in_stack_000000f8 + -1;
      uVar12 = *(undefined8 *)(&stack0x000000f0 + (long)iVar13 * 8);
      puVar11 = in_stack_00000188 + 2;
      *in_stack_00000188 = 0xfffffffe;
      uVar10 = thunk_FUN_031edd38(PTR_DAT_07119280);
      FUN_0469e4d0(puVar11,uVar12,uVar10);
      in_stack_000000f8 = iVar13;
    }
    if (*(long *)(unaff_x23 + 0x28) == in_stack_000001d8) {
      return;
    }
  }
  else if (*(long *)(unaff_x23 + 0x28) == in_stack_000001d8) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0();
  }
LAB_05c55d70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


