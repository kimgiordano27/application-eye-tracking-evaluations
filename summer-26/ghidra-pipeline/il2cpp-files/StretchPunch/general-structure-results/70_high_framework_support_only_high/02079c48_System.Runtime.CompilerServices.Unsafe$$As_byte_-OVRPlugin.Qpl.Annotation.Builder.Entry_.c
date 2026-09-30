/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<byte,-OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 02079c48
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


void System_Runtime_CompilerServices_Unsafe__As<byte,_OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x5d0));
  FUN_01d7d918(StringLiteral_1255);
  FUN_01d7d918(StringLiteral_1256);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  plVar8 = *(long **)(unaff_x19 + 0x38);
  if (plVar8 == (long *)0x0) {
    FUN_01dde854();
    plVar8 = *(long **)(unaff_x19 + 0x38);
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar4 = thunk_FUN_01de27b8();
  FUN_022a0e30(lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x23;
    thunk_FUN_01e10808();
    puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar10 = FUN_033a87c8(uVar10,0);
    uVar5 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    FUN_03a63324(&stack0x00000010,uVar10,uVar5,0);
    puVar3 = StringLiteral_1255;
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar6 = FUN_02b8b44c(*(long *)(unaff_x20 + 0x30),in_stack_00000010,in_stack_00000018,
                           *(undefined8 *)StringLiteral_1255);
      uVar5 = in_stack_00000018;
      uVar10 = in_stack_00000010;
      if ((uVar6 & 1) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        thunk_FUN_01dd295c(
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
        FUN_01a94a5c();
        uVar10 = FUN_033a87c8(uVar10,0);
        FUN_01a94b18();
        uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
        uVar5 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_1257);
        uVar10 = FUN_0326ac48(uVar7,uVar10,uVar9,uVar5,0);
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar5 = thunk_FUN_01de27b8();
        FUN_0328dba4(uVar5,uVar10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar5);
      }
      lVar11 = *(long *)(unaff_x20 + 0x30);
      uVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
      FUN_02e2ffc0(uVar7,lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),0);
      puVar2 = StringLiteral_1254;
      if (lVar11 != 0) {
        FUN_02b8b240(lVar11,uVar10,uVar5,uVar7,*(undefined8 *)StringLiteral_1254);
        if ((unaff_x22 & 1) != 0) {
          uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = FUN_033a87c8(uVar10,0);
          uVar5 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
          uVar6 = FUN_033ab18c(uVar10,uVar5,0);
          if ((uVar6 & 1) != 0) {
            uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            FUN_033a87c8(uVar10,0);
            FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
            FUN_03a63324();
            if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_02079ebc;
            uVar6 = FUN_02b8b44c(*(long *)(unaff_x20 + 0x30),0,0,*(undefined8 *)puVar3);
            if ((uVar6 & 1) == 0) {
              lVar11 = *(long *)(unaff_x20 + 0x30);
              uVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
              FUN_02e2ffc0(uVar10,lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30),0);
              if (lVar11 == 0) goto LAB_02079ebc;
              FUN_02b8b240(lVar11,0,0,uVar10,*(undefined8 *)puVar2);
            }
          }
        }
        return;
      }
    }
  }
LAB_02079ebc:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


