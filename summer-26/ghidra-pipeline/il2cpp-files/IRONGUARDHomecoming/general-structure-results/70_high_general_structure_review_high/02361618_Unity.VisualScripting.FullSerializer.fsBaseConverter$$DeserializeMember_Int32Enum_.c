/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Int32Enum>
ENTRY_POINT: 02361618
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02361644) */
/* WARNING: Removing unreachable block (ram,0x023616b4) */

void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Int32Enum>(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  long unaff_x23;
  ulong uVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  FUN_03bfef14();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar1 = (long *)FUN_02617b44();
  lVar4 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)) {
      lVar4 = FUN_03c003e4();
      uVar6 = plVar1[2];
      if (*(int *)(*(long *)Method_System_Globalization_CompareInfo_GetHashCodeOfString__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_02f2aca8(&stack0x00000010,plVar1,lVar4 - (uVar6 >> 0x20),
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
      unaff_x20[6] = in_stack_00000040;
      unaff_x20[3] = in_stack_00000028;
      unaff_x20[2] = in_stack_00000020;
      unaff_x20[5] = in_stack_00000038;
      unaff_x20[4] = in_stack_00000030;
      unaff_x20[1] = in_stack_00000018;
      *unaff_x20 = in_stack_00000010;
      if (*(long *)(unaff_x23 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  FUN_01bc4c70();
  uVar5 = FUN_03579868(uVar5,0);
  uVar5 = FUN_03b53780(uVar5,0);
  FUN_01bc50c0(plVar1);
  uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
  uVar2 = FUN_03b53780(uVar2,0);
  uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<ILayoutController>__);
  uVar5 = FUN_0340f334(uVar3,uVar5,plVar1,uVar2,0);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  FUN_0356adc8(uVar2,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2);
}


