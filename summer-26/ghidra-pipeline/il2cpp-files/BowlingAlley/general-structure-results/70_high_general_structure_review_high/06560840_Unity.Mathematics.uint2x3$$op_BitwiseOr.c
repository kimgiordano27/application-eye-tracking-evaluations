/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$op_BitwiseOr
ENTRY_POINT: 06560840
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


undefined8 Unity_Mathematics_uint2x3__op_BitwiseOr(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *unaff_x20;
  int iVar10;
  long *plVar11;
  long unaff_x22;
  long lVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                      );
    thunk_FUN_032e1da0(Unity_Collections_LowLevel_Unsafe_WordStorage_<>c_TypeInfo);
    thunk_FUN_032e1da0(Meta_WitAi_Requests_VRequest_<>c__DisplayClass46_0_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xbe0) = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uVar5 = FUN_057ab1f0();
  puVar1 = Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__;
  if ((uVar5 & 1) != 0) {
LAB_065609c0:
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    return 0;
  }
  lVar12 = *(long *)(*(long *)(*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                              + 0xb8) + 0x20);
  uVar2 = FUN_0655f9a4(param_2);
  if (lVar12 != 0) {
    if (*(uint *)(lVar12 + 0x18) <= uVar2) {
LAB_06560a24:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    if (*(long *)(lVar12 + (long)(int)uVar2 * 0xb8 + 0x50) == 0) {
      uVar4 = FUN_0655f9a4(param_2);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar4);
      uVar7 = thunk_FUN_032e1da0(PTR_DAT_07279558);
      thunk_FUN_032a52d0(uVar7,&stack0x00000020);
      thunk_FUN_032e1da0(Method_System_Collections_ObjectModel_Collection<JsonConverter>_Insert__);
      uVar7 = FUN_057ab61c();
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar8 = thunk_FUN_032a56a0();
      FUN_0592371c(uVar8,uVar7,0);
      uVar7 = thunk_FUN_032e1da0(
                                Method_System_Collections_ObjectModel_Collection<JsonProperty>_Add__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar8,uVar7);
    }
    lVar12 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    uVar2 = FUN_0655f9a4(param_2);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_06560a24;
      plVar11 = *(long **)(lVar12 + (long)(int)uVar2 * 0xb8 + 0x50);
      if (plVar11 != (long *)0x0) {
        lVar12 = *plVar11;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_0656095c;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_032937ac(plVar11,*(long *)
                                       Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__
                              ,4);
LAB_0656095c:
        _in_stack_00000040 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        puVar1 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass46_0_TypeInfo;
        if (0 < in_stack_00000040._12_4_) {
          iVar10 = 0;
          do {
            FUN_0480ee74(&stack0x00000020,&stack0x00000040,iVar10,*(undefined8 *)puVar1);
            iVar3 = FUN_057a933c(in_stack_00000020);
            if (iVar3 == 0) {
              FUN_0480ee74(&stack0x00000008,&stack0x00000040,iVar10,*(undefined8 *)puVar1);
              in_stack_00000030 = in_stack_00000018;
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              unaff_x20[2] = in_stack_00000018;
              unaff_x20[1] = in_stack_00000010;
              *unaff_x20 = in_stack_00000008;
              thunk_FUN_0333a630();
              return 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < in_stack_00000048._4_4_);
        }
        goto LAB_065609c0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


