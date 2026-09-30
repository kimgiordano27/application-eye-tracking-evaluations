/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextSelection.get_lineHeightAtCursorPosition
ENTRY_POINT: 0414cfdc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_get_lineHeightAtCursorPosition
          (void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000068;
  
  iVar1 = *(int *)(unaff_x19 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    goto LAB_0414d2c8;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    goto LAB_0414d2d8;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x20);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458b788);
      FUN_02ee7c10(uVar5,*(undefined8 *)PTR_DAT_0458b780);
      *(undefined8 *)(in_stack_00000068 + 0x30) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x30),uVar5);
      if (*(long *)(in_stack_00000068 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(in_stack_00000068 + 0x28) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03281b04(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_0458b790);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      *(undefined8 *)(in_stack_00000068 + 0x58) = in_stack_00000028;
      *(undefined8 *)(in_stack_00000068 + 0x50) = in_stack_00000020;
      *(undefined8 *)(in_stack_00000068 + 0x48) = in_stack_00000018;
      *(undefined8 *)(in_stack_00000068 + 0x40) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000068 + 0x38) = in_stack_00000008;
      thunk_FUN_01f51358(in_stack_00000068 + 0x38,0);
      *(undefined4 *)(in_stack_00000068 + 0x10) = 0xfffffffd;
      while (uVar7 = FUN_02cc26e8(in_stack_00000068 + 0x38,*(undefined8 *)PTR_DAT_0458b760),
            (uVar7 & 1) != 0) {
        *(undefined8 *)(in_stack_00000068 + 0x68) = *(undefined8 *)(in_stack_00000068 + 0x50);
        *(undefined8 *)(in_stack_00000068 + 0x60) = *(undefined8 *)(in_stack_00000068 + 0x48);
        *(undefined8 *)(in_stack_00000068 + 0x70) = *(undefined8 *)(in_stack_00000068 + 0x58);
        thunk_FUN_01f51358(in_stack_00000068 + 0x60,0);
        puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
        uVar5 = *(undefined8 *)(in_stack_00000068 + 0x70);
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_04073094(uVar5,0,0);
        puVar4 = PTR_DAT_0458b778;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = FUN_02ee8304(*(long *)(in_stack_00000068 + 0x30),
                               *(undefined8 *)(in_stack_00000068 + 0x70),
                               *(undefined8 *)PTR_DAT_0458b778);
          if ((uVar7 & 1) == 0) {
            if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02ee8df4(*(long *)(in_stack_00000068 + 0x30),
                         *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)PTR_DAT_0458b770);
            *(undefined8 *)(in_stack_00000068 + 0x18) = *(undefined8 *)(in_stack_00000068 + 0x70);
            thunk_FUN_01f51358();
            *(undefined4 *)(in_stack_00000068 + 0x10) = 1;
            return 1;
          }
        }
        uVar7 = FUN_0340eec4(*(undefined8 *)(in_stack_00000068 + 0x68),0);
        if ((uVar7 & 1) == 0) {
          uVar5 = *(undefined8 *)(in_stack_00000068 + 0x68);
          uVar10 = *(undefined8 *)PTR_DAT_0458b7a0;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_03579868(uVar10,0);
          uVar11 = FUN_040a7dc4(0);
          if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_041f5514(uVar11,uVar5,uVar10,0);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
            *(undefined8 *)(in_stack_00000068 + 0x78) = 0;
          }
          else {
            lVar8 = *(long *)PTR_DAT_0458b7a8;
            bVar2 = *(byte *)(lVar8 + 0x130);
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar9 = (long *)0x0;
            }
            else {
              plVar9 = plVar6;
              if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
                plVar9 = (long *)0x0;
              }
            }
            *(long **)(in_stack_00000068 + 0x78) = plVar9;
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar6 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
              plVar6 = (long *)0x0;
            }
          }
          thunk_FUN_01f51358(in_stack_00000068 + 0x78,plVar6);
          uVar5 = *(undefined8 *)(in_stack_00000068 + 0x78);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_04073094(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = FUN_02ee8304(*(long *)(in_stack_00000068 + 0x30),
                                 *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)puVar4);
            if ((uVar7 & 1) == 0) {
              if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_02ee8df4(*(long *)(in_stack_00000068 + 0x30),
                           *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)PTR_DAT_0458b770
                          );
              *(undefined8 *)(in_stack_00000068 + 0x18) = *(undefined8 *)(in_stack_00000068 + 0x78);
              thunk_FUN_01f51358();
              *(undefined4 *)(in_stack_00000068 + 0x10) = 2;
              return 1;
            }
          }
LAB_0414d2c8:
          *(undefined8 *)(in_stack_00000068 + 0x78) = 0;
          thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x78),0);
        }
LAB_0414d2d8:
        *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
        *(undefined8 *)(in_stack_00000068 + 0x68) = 0;
        *(undefined8 *)(in_stack_00000068 + 0x70) = 0;
      }
      FUN_0414d490();
      *(undefined8 *)(in_stack_00000068 + 0x58) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x50) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x48) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x40) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x38) = 0;
    }
  }
  return 0;
}


