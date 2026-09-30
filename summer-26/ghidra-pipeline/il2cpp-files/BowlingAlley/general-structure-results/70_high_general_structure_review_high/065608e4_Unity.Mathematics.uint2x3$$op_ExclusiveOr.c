/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$op_ExclusiveOr
ENTRY_POINT: 065608e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 Unity_Mathematics_uint2x3__op_ExclusiveOr(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x20;
  int iVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (unaff_x22 != 0) {
    if (*(uint *)(unaff_x22 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    plVar8 = *(long **)(unaff_x22 + (long)(int)param_1 * 0xb8 + 0x50);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)
               Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_0656095c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_032937ac(plVar8,*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__
                            ,4);
LAB_0656095c:
      _in_stack_00000040 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      puVar1 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass46_0_TypeInfo;
      if (0 < in_stack_00000040._12_4_) {
        iVar7 = 0;
        do {
          FUN_0480ee74(&stack0x00000020,&stack0x00000040,iVar7,*(undefined8 *)puVar1);
          iVar2 = FUN_057a933c(in_stack_00000020);
          if (iVar2 == 0) {
            FUN_0480ee74(&stack0x00000008,&stack0x00000040,iVar7,*(undefined8 *)puVar1);
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            unaff_x20[2] = in_stack_00000018;
            unaff_x20[1] = in_stack_00000010;
            *unaff_x20 = in_stack_00000008;
            thunk_FUN_0333a630();
            return 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < in_stack_00000048._4_4_);
      }
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


