/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextSelection.set_cursorColor
ENTRY_POINT: 0414d120
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


undefined4
UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_set_cursorColor
          (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 uVar9;
  long in_stack_00000068;
  
  do {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_04073094(uVar7,0,0);
    puVar2 = PTR_DAT_0458b778;
    if ((uVar3 & 1) != 0) {
      if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_02ee8304(*(long *)(in_stack_00000068 + 0x30),
                           *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)PTR_DAT_0458b778
                          );
      if ((uVar3 & 1) == 0) {
        if (*(long *)(in_stack_00000068 + 0x30) != 0) {
          FUN_02ee8df4(*(long *)(in_stack_00000068 + 0x30),*(undefined8 *)(in_stack_00000068 + 0x70)
                       ,*(undefined8 *)PTR_DAT_0458b770);
          *(undefined8 *)(in_stack_00000068 + 0x18) = *(undefined8 *)(in_stack_00000068 + 0x70);
          thunk_FUN_01f51358();
          *(undefined4 *)(in_stack_00000068 + 0x10) = 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    uVar3 = FUN_0340eec4(*(undefined8 *)(in_stack_00000068 + 0x68),0);
    if ((uVar3 & 1) == 0) {
      uVar7 = *(undefined8 *)(in_stack_00000068 + 0x68);
      uVar8 = *(undefined8 *)PTR_DAT_0458b7a0;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_03579868(uVar8,0);
      uVar9 = FUN_040a7dc4(0);
      if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar4 = (long *)FUN_041f5514(uVar9,uVar7,uVar8,0);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        *(undefined8 *)(in_stack_00000068 + 0x78) = 0;
      }
      else {
        lVar5 = *(long *)PTR_DAT_0458b7a8;
        bVar1 = *(byte *)(lVar5 + 0x130);
        if (*(byte *)(*plVar4 + 0x130) < bVar1) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar4;
          if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
            plVar6 = (long *)0x0;
          }
        }
        *(long **)(in_stack_00000068 + 0x78) = plVar6;
        if (*(byte *)(*plVar4 + 0x130) < bVar1) {
          plVar4 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
          plVar4 = (long *)0x0;
        }
      }
      thunk_FUN_01f51358(in_stack_00000068 + 0x78,plVar4);
      uVar7 = *(undefined8 *)(in_stack_00000068 + 0x78);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_04073094(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = FUN_02ee8304(*(long *)(in_stack_00000068 + 0x30),
                             *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)puVar2);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(in_stack_00000068 + 0x30) != 0) {
            FUN_02ee8df4(*(long *)(in_stack_00000068 + 0x30),
                         *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)PTR_DAT_0458b770);
            *(undefined8 *)(in_stack_00000068 + 0x18) = *(undefined8 *)(in_stack_00000068 + 0x78);
            thunk_FUN_01f51358();
            *(undefined4 *)(in_stack_00000068 + 0x10) = 2;
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      *(undefined8 *)(in_stack_00000068 + 0x78) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x78),0);
    }
    *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
    *(undefined8 *)(in_stack_00000068 + 0x68) = 0;
    *(undefined8 *)(in_stack_00000068 + 0x70) = 0;
    uVar3 = FUN_02cc26e8(in_stack_00000068 + 0x38,*(undefined8 *)PTR_DAT_0458b760);
    if ((uVar3 & 1) == 0) {
      FUN_0414d490();
      *(undefined8 *)(in_stack_00000068 + 0x58) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x50) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x48) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x40) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x38) = 0;
      return 0;
    }
    *(undefined8 *)(in_stack_00000068 + 0x68) = *(undefined8 *)(in_stack_00000068 + 0x50);
    *(undefined8 *)(in_stack_00000068 + 0x60) = *(undefined8 *)(in_stack_00000068 + 0x48);
    *(undefined8 *)(in_stack_00000068 + 0x70) = *(undefined8 *)(in_stack_00000068 + 0x58);
    thunk_FUN_01f51358(in_stack_00000068 + 0x60,0);
    param_1 = in_stack_00000068;
    unaff_x22 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  } while( true );
}


