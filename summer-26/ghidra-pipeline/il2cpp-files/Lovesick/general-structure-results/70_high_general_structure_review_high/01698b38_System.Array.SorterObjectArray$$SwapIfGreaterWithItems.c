/*
FUNCTION_NAME: System.Array.SorterObjectArray$$SwapIfGreaterWithItems
ENTRY_POINT: 01698b38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;negative_framework_namespace_without_eye_use_flow
*/


void System_Array_SorterObjectArray__SwapIfGreaterWithItems(ulong param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__
                      );
    *(undefined1 *)(unaff_x21 + 0x537) = 1;
  }
  lVar1 = FUN_01698a6c();
  if ((lVar1 == 0) || (*(long *)(unaff_x20 + 0x40) == 0)) goto LAB_01698d9c;
  lVar10 = *(long *)(lVar1 + 0x80);
  FUN_0169983c(*(long *)(unaff_x20 + 0x40),lVar1,0);
  if (unaff_x19 == 0) goto LAB_01698d9c;
  if (*(int *)(unaff_x19 + 0x10) == 2) {
    plVar3 = (long *)FUN_01696694();
  }
  else {
    if (*(int *)(unaff_x19 + 0x10) == 3) {
      piVar11 = (int *)(unaff_x19 + 0x30);
      if (*piVar11 < 1) {
        uVar4 = thunk_FUN_00d48444(StringLiteral_3033);
        uVar7 = FUN_00da4fb8(uVar4,1);
        FUN_00ac2be8();
        uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
      }
      else {
        lVar2 = FUN_016967a8();
        if (lVar2 == 0) goto LAB_01698d9c;
        plVar3 = (long *)FUN_01699c4c(lVar2,*piVar11,0);
        if (plVar3 != (long *)0x0) {
          if (*plVar3 != *(long *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar3);
          }
          goto LAB_01698c00;
        }
        uVar4 = thunk_FUN_00d48444(StringLiteral_3033);
        uVar7 = FUN_00da4fb8(uVar4,1);
        FUN_00ac2be8();
        uVar4 = FUN_0176eb1c(piVar11,0);
        FUN_00ac2be8();
        uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar6 = thunk_FUN_00d48444(StringLiteral_3287);
        uVar4 = FUN_01600424(uVar4,uVar6,uVar9,0);
      }
      FUN_00ac2be8(uVar7);
      FUN_00acb0b4(uVar7,uVar4);
      FUN_00adb25c(uVar7,0,uVar4);
      puVar8 = PTR_DAT_033ef708;
      goto LAB_01698ed8;
    }
    plVar3 = (long *)0x0;
  }
LAB_01698c00:
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01698d9c;
  uVar4 = FUN_01686ee0(*(long *)(unaff_x20 + 0x10),plVar3,*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = FUN_0168a5c0(*(undefined8 *)(unaff_x19 + 0x18),uVar4,*(undefined8 *)(unaff_x19 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x19 + 0x14),plVar3);
  lVar5 = FUN_0169673c();
  if (lVar5 == 0) goto LAB_01698d9c;
  FUN_01699cc0(lVar5,*(undefined4 *)(unaff_x19 + 0x14),lVar2,0);
  *(undefined4 *)(lVar1 + 0x30) = 1;
  if (lVar2 == 0) goto LAB_01698d9c;
  lVar5 = *(long *)(lVar2 + 0x20);
  *(long *)(lVar1 + 0x60) = lVar5;
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar2 + 0x28);
  if (lVar5 == 0) goto LAB_01698d9c;
  *(int *)(lVar1 + 0x5c) = (int)*(undefined8 *)(lVar5 + 0x18);
  auVar12 = NEON_ext(*(undefined1 (*) [16])(lVar2 + 0x30),*(undefined1 (*) [16])(lVar2 + 0x30),8,1);
  *(long *)(lVar1 + 0x78) = auVar12._8_8_;
  *(long *)(lVar1 + 0x70) = auVar12._0_8_;
  if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_01698d9c;
  plVar3 = (long *)FUN_01699a00(*(long *)(unaff_x20 + 0x40),0);
  if (plVar3 == (long *)0x0) {
LAB_01698cbc:
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_01698d9c;
    *(undefined4 *)(lVar10 + 0x10) = 2;
    *(undefined4 *)(lVar1 + 0x38) = 0;
  }
  else {
    if (*plVar3 !=
        *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__)
    {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    if ((char)plVar3[2] != '\0') goto LAB_01698cbc;
    if (lVar10 == 0) goto LAB_01698d9c;
    *(undefined4 *)(lVar10 + 0x10) = 3;
    *(undefined4 *)(lVar10 + 0x20) = 2;
    *(undefined4 *)(lVar1 + 0x38) = 2;
    if ((int)plVar3[6] == 2) {
      *(undefined4 *)(lVar10 + 0x1c) = 3;
    }
    else {
      if ((int)plVar3[6] != 1) {
        uVar4 = thunk_FUN_00d48444(StringLiteral_3033);
        uVar7 = FUN_00da4fb8(uVar4,1);
        FUN_00ac2be8(plVar3);
        in_stack_00000008._4_4_ = (undefined4)plVar3[6];
        uVar4 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<Color32>_SetDefault__);
        uVar4 = thunk_FUN_00d61fa0(uVar4,(long)&stack0x00000008 + 4);
        uVar4 = FUN_017a7f78(uVar4,0);
        FUN_00ac2be8(uVar7);
        FUN_00acb0b4(uVar7,uVar4);
        FUN_00adb25c(uVar7,0,uVar4);
        puVar8 = PTR_DAT_033ee728;
LAB_01698ed8:
        uVar4 = thunk_FUN_00d48444(puVar8);
        uVar4 = FUN_017b63dc(uVar4,uVar7,0);
        thunk_FUN_00d48444(
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                          );
        uVar7 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_01679968(uVar7,uVar4,0);
        uVar4 = thunk_FUN_00d48444(StringLiteral_12129);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,uVar4);
      }
      lVar5 = plVar3[5];
      *(undefined4 *)(lVar10 + 0x1c) = 2;
      *(long *)(lVar10 + 0x28) = lVar5;
    }
    *(undefined4 *)(lVar1 + 0x34) = 2;
  }
  *(undefined4 *)(lVar10 + 0x14) = 1;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar4 = FUN_01693db8(*(long *)(unaff_x20 + 0x10),(long)*(int *)(unaff_x19 + 0x14));
    *(undefined8 *)(lVar10 + 0x58) = uVar4;
    uVar4 = FUN_0168a4a8(lVar2,lVar10 + 0x110,lVar10 + 0x108);
    *(undefined8 *)(lVar10 + 0xd8) = uVar4;
    if (*(long *)(lVar10 + 0x58) == *(long *)(unaff_x20 + 0x20)) {
      *(undefined4 *)(lVar10 + 0x24) = 1;
    }
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(unaff_x19 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined4 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x48) = uVar4;
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      FUN_01691df0(*(long *)(unaff_x20 + 0x10),lVar10);
      return;
    }
  }
LAB_01698d9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


