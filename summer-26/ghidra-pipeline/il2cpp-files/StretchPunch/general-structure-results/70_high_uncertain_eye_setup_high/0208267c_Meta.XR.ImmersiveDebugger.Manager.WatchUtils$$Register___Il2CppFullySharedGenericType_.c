/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0208267c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<__Il2CppFullySharedGenericType>
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_022a5510(param_2,*(undefined8 *)(param_1 + 8));
  if (unaff_x21 != 0) {
    *(undefined8 *)(unaff_x21 + 0x10) = unaff_x23;
    thunk_FUN_01e10808();
    puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar8 = FUN_033a87c8(uVar8,0);
    uVar4 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    FUN_03a63324(&stack0x00000010,uVar8,uVar4,0);
    puVar3 = StringLiteral_1255;
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar5 = FUN_02b8b44c(*(long *)(unaff_x20 + 0x30),in_stack_00000010,in_stack_00000018,
                           *(undefined8 *)StringLiteral_1255);
      uVar4 = in_stack_00000018;
      uVar8 = in_stack_00000010;
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        thunk_FUN_01dd295c(
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
        FUN_01a94a5c();
        uVar8 = FUN_033a87c8(uVar8,0);
        FUN_01a94b18();
        uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
        uVar4 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
        uVar6 = thunk_FUN_01dd295c(StringLiteral_1257);
        uVar8 = FUN_0326ac48(uVar6,uVar8,uVar7,uVar4,0);
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar4 = thunk_FUN_01de27b8();
        FUN_0328dba4(uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar4);
      }
      lVar9 = *(long *)(unaff_x20 + 0x30);
      uVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
      FUN_02e2ffc0();
      puVar2 = StringLiteral_1254;
      if (lVar9 != 0) {
        FUN_02b8b240(lVar9,uVar8,uVar4,uVar6,*(undefined8 *)StringLiteral_1254);
        if ((unaff_x22 & 1) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar8 = FUN_033a87c8(uVar8,0);
          uVar4 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
          uVar5 = FUN_033ab18c(uVar8,uVar4,0);
          if ((uVar5 & 1) != 0) {
            uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            FUN_033a87c8(uVar8,0);
            FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
            FUN_03a63324();
            if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_0208288c;
            uVar5 = FUN_02b8b44c(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,
                                 *(undefined8 *)puVar3);
            if ((uVar5 & 1) == 0) {
              lVar9 = *(long *)(unaff_x20 + 0x30);
              uVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
              FUN_02e2ffc0();
              if (lVar9 == 0) goto LAB_0208288c;
              FUN_02b8b240(lVar9,in_stack_00000000,in_stack_00000008,uVar8,*(undefined8 *)puVar2);
            }
          }
        }
        return;
      }
    }
  }
LAB_0208288c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


