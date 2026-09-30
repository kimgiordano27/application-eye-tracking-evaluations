/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextSelection.get_cursorIndex
ENTRY_POINT: 0414c92c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


undefined8
UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_get_cursorIndex
          (long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000058;
  
  while( true ) {
    FUN_030f35d0(&stack0x00000008,param_1,param_2);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    *(undefined8 *)(in_stack_00000058 + 0x88) = in_stack_00000018;
    *(undefined8 *)(in_stack_00000058 + 0x80) = in_stack_00000010;
    *(undefined8 *)(in_stack_00000058 + 0x78) = in_stack_00000008;
    thunk_FUN_01f51358(in_stack_00000058 + 0x78,0);
    *(undefined4 *)(in_stack_00000058 + 0x10) = 0xfffffffb;
    while (uVar4 = FUN_02c7ab6c(in_stack_00000058 + 0x78,
                                *(undefined8 *)
                                 Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                               ), (uVar4 & 1) != 0) {
      *(undefined8 *)(in_stack_00000058 + 0x90) = *(undefined8 *)(in_stack_00000058 + 0x88);
      thunk_FUN_01f51358();
      uVar6 = *(undefined8 *)(in_stack_00000058 + 0x90);
      uVar7 = *(undefined8 *)PTR_DAT_0458b730;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03579868(uVar7,0);
      uVar8 = FUN_040a7dc4(0);
      if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar3 = (long *)FUN_041f5514(uVar8,uVar6,uVar7,0);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        *(undefined8 *)(in_stack_00000058 + 0x98) = 0;
      }
      else {
        lVar2 = *(long *)PTR_DAT_0458b738;
        bVar1 = *(byte *)(lVar2 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = plVar3;
          if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
            plVar5 = (long *)0x0;
          }
        }
        *(long **)(in_stack_00000058 + 0x98) = plVar5;
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
          plVar3 = (long *)0x0;
        }
      }
      thunk_FUN_01f51358(in_stack_00000058 + 0x98,plVar3);
      uVar6 = *(undefined8 *)(in_stack_00000058 + 0x98);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_04073094(uVar6,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(in_stack_00000058 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = FUN_02ee8304(*(long *)(in_stack_00000058 + 0x30),
                             *(undefined8 *)(in_stack_00000058 + 0x98),*unaff_x21);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(in_stack_00000058 + 0x30) != 0) {
            FUN_02ee8df4(*(long *)(in_stack_00000058 + 0x30),
                         *(undefined8 *)(in_stack_00000058 + 0x98),*(undefined8 *)PTR_DAT_0458b700);
            *(undefined8 *)(in_stack_00000058 + 0x18) = *(undefined8 *)(in_stack_00000058 + 0x98);
            thunk_FUN_01f51358();
            *(undefined4 *)(in_stack_00000058 + 0x10) = 2;
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      *(undefined8 *)(in_stack_00000058 + 0x98) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000058 + 0x98),0);
      *(undefined8 *)(in_stack_00000058 + 0x90) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000058 + 0x90),0);
    }
    FUN_0414cd18();
    *(undefined8 *)(in_stack_00000058 + 0x78) = 0;
    *(undefined8 *)(in_stack_00000058 + 0x80) = 0;
    *(undefined8 *)(in_stack_00000058 + 0x88) = 0;
    do {
      *(undefined8 *)(in_stack_00000058 + 0x50) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000058 + 0x50),0);
      uVar4 = FUN_02c7ab6c(in_stack_00000058 + 0x38,*(undefined8 *)PTR_DAT_0458b6e0);
      if ((uVar4 & 1) == 0) {
        FUN_0414cd68();
        *(undefined8 *)(in_stack_00000058 + 0x38) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x40) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x48) = 0;
        return 0;
      }
      *(undefined8 *)(in_stack_00000058 + 0x50) = *(undefined8 *)(in_stack_00000058 + 0x48);
      thunk_FUN_01f51358();
      if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_04257f78(*(long *)(in_stack_00000058 + 0x50),0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar2 = FUN_04257ef4(*(long *)(in_stack_00000058 + 0x50),0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_030f35d0(&stack0x00000008,lVar2,*(undefined8 *)PTR_DAT_0458b728);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        *(undefined8 *)(in_stack_00000058 + 0x68) = in_stack_00000018;
        *(undefined8 *)(in_stack_00000058 + 0x60) = in_stack_00000010;
        *(undefined8 *)(in_stack_00000058 + 0x58) = in_stack_00000008;
        thunk_FUN_01f51358(in_stack_00000058 + 0x58,0);
        *(undefined4 *)(in_stack_00000058 + 0x10) = 0xfffffffc;
        while (uVar4 = FUN_02c7ab6c(in_stack_00000058 + 0x58,*(undefined8 *)PTR_DAT_0458b6e8),
              (uVar4 & 1) != 0) {
          *(undefined8 *)(in_stack_00000058 + 0x70) = *(undefined8 *)(in_stack_00000058 + 0x68);
          thunk_FUN_01f51358();
          if (*(long *)(in_stack_00000058 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_02ee8304(*(long *)(in_stack_00000058 + 0x30),
                               *(undefined8 *)(in_stack_00000058 + 0x70),*unaff_x21);
          if ((uVar4 & 1) == 0) {
            if (*(long *)(in_stack_00000058 + 0x30) != 0) {
              FUN_02ee8df4(*(long *)(in_stack_00000058 + 0x30),
                           *(undefined8 *)(in_stack_00000058 + 0x70),*(undefined8 *)PTR_DAT_0458b700
                          );
              *(undefined8 *)(in_stack_00000058 + 0x18) = *(undefined8 *)(in_stack_00000058 + 0x70);
              thunk_FUN_01f51358();
              *(undefined4 *)(in_stack_00000058 + 0x10) = 1;
              return 1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(undefined8 *)(in_stack_00000058 + 0x70) = 0;
          thunk_FUN_01f51358((undefined8 *)(in_stack_00000058 + 0x70),0);
        }
        FUN_0414ccc8();
        *(undefined8 *)(in_stack_00000058 + 0x58) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x60) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x68) = 0;
      }
      if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_04257ee4(*(long *)(in_stack_00000058 + 0x50),0);
    } while ((uVar4 & 1) == 0);
    if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = FUN_04257e60(*(long *)(in_stack_00000058 + 0x50),0);
    if (param_1 == 0) break;
    param_2 = *(undefined8 *)
               Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


