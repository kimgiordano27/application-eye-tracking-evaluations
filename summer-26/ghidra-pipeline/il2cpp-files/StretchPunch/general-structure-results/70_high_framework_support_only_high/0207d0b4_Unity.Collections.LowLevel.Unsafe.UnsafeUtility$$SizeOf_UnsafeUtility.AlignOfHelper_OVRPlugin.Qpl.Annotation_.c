/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.Qpl.Annotation>>
ENTRY_POINT: 0207d0b4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Qpl_Annotation>>
               (long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == (long *)0x0) {
    FUN_01d7d918(StringLiteral_1254);
    FUN_01d7d918(StringLiteral_1255);
    FUN_01d7d918(StringLiteral_1256);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    param_1 = *(long **)(unaff_x19 + 0x38);
    if (param_1 == (long *)0x0) {
      FUN_01dde854();
      param_1 = *(long **)(unaff_x19 + 0x38);
    }
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if ((*(byte *)(*param_1 + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar4 = thunk_FUN_01de27b8();
  FUN_022a29b0(lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_3;
    thunk_FUN_01e10808((undefined8 *)(lVar4 + 0x10),param_3);
    puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033a87c8(uVar9,0);
    uVar5 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    FUN_03a63324(&stack0x00000010,uVar9,uVar5,0);
    puVar3 = StringLiteral_1255;
    if (*(long *)(param_2 + 0x30) != 0) {
      uVar6 = FUN_02b8b44c(*(long *)(param_2 + 0x30),in_stack_00000010,in_stack_00000018,
                           *(undefined8 *)StringLiteral_1255);
      uVar5 = in_stack_00000018;
      uVar9 = in_stack_00000010;
      if ((uVar6 & 1) != 0) {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        thunk_FUN_01dd295c(
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
        FUN_01a94a5c();
        uVar9 = FUN_033a87c8(uVar9,0);
        FUN_01a94b18(param_2);
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        uVar5 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_1257);
        uVar9 = FUN_0326ac48(uVar7,uVar9,uVar8,uVar5,0);
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar5 = thunk_FUN_01de27b8();
        FUN_0328dba4(uVar5,uVar9,0);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar5);
      }
      lVar10 = *(long *)(param_2 + 0x30);
      uVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
      FUN_02e2ffc0(uVar7,lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),0);
      puVar2 = StringLiteral_1254;
      if (lVar10 != 0) {
        FUN_02b8b240(lVar10,uVar9,uVar5,uVar7,*(undefined8 *)StringLiteral_1254);
        if ((param_4 & 1) != 0) {
          uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033a87c8(uVar9,0);
          uVar5 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
          uVar6 = FUN_033ab18c(uVar9,uVar5,0);
          if ((uVar6 & 1) != 0) {
            uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            FUN_033a87c8(uVar9,0);
            FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
            FUN_03a63324();
            if (*(long *)(param_2 + 0x30) == 0)
            goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRPointCloud>;
            uVar6 = FUN_02b8b44c(*(long *)(param_2 + 0x30),0,0,*(undefined8 *)puVar3);
            if ((uVar6 & 1) == 0) {
              lVar10 = *(long *)(param_2 + 0x30);
              uVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
              FUN_02e2ffc0(uVar9,lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30),0);
              if (lVar10 == 0)
              goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRPointCloud>;
              FUN_02b8b240(lVar10,0,0,uVar9,*(undefined8 *)puVar2);
            }
          }
        }
        return;
      }
    }
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRPointCloud>:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


