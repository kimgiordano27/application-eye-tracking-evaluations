/*
FUNCTION_NAME: FUN_01698f2c
ENTRY_POINT: 01698f2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01698f2c(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *local_70;
  undefined4 local_64;
  
  if ((DAT_03778539 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__
                      );
    DAT_03778539 = 1;
  }
  lVar2 = FUN_01698a6c(param_1);
  if ((lVar2 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_016991d4;
  lVar12 = *(long *)(lVar2 + 0x80);
  FUN_0169983c(*(long *)(param_1 + 0x40),lVar2,0);
  if (param_2 == 0) goto LAB_016991d4;
  if (*(int *)(param_2 + 0x10) == 4) {
    local_70 = (long *)FUN_01696694(param_1);
  }
  else {
    if (*(int *)(param_2 + 0x10) == 5) {
      piVar14 = (int *)(param_2 + 0x48);
      if (*piVar14 < 1) {
        uVar7 = thunk_FUN_00d48444(StringLiteral_3033);
        uVar9 = FUN_00da4fb8(uVar7,1);
        FUN_00ac2be8(param_2);
        uVar7 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        lVar3 = FUN_016967a8(param_1);
        if (lVar3 == 0) goto LAB_016991d4;
        local_70 = (long *)FUN_01699c4c(lVar3,*piVar14,0);
        if (local_70 != (long *)0x0) {
          if (*local_70 != *(long *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__)
          goto LAB_016991d8;
          goto LAB_0169901c;
        }
        uVar7 = thunk_FUN_00d48444(StringLiteral_3033);
        uVar9 = FUN_00da4fb8(uVar7,1);
        FUN_00ac2be8(param_2);
        uVar7 = FUN_0176eb1c(piVar14,0);
        FUN_00ac2be8(param_2);
        uVar11 = *(undefined8 *)(param_2 + 0x18);
        uVar8 = thunk_FUN_00d48444(StringLiteral_3287);
        uVar7 = FUN_01600424(uVar7,uVar8,uVar11,0);
      }
      FUN_00ac2be8(uVar9);
      FUN_00acb0b4(uVar9,uVar7);
      FUN_00adb25c(uVar9,0,uVar7);
      puVar10 = System_Security_Cryptography_X509Certificates_X509ChainElementCollection_TypeInfo;
      goto LAB_01699310;
    }
    local_70 = (long *)0x0;
  }
LAB_0169901c:
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = FUN_016967a8(param_1);
  lVar3 = FUN_0168a660(uVar15,uVar7,uVar8,uVar9,uVar11,uVar13,uVar1,local_70,uVar4);
  lVar5 = FUN_0169673c(param_1);
  if (lVar5 == 0) goto LAB_016991d4;
  FUN_01699cc0(lVar5,*(undefined4 *)(param_2 + 0x14),lVar3,0);
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if (lVar3 == 0) goto LAB_016991d4;
  lVar5 = *(long *)(lVar3 + 0x20);
  *(long *)(lVar2 + 0x60) = lVar5;
  *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar3 + 0x28);
  if (lVar5 == 0) goto LAB_016991d4;
  *(int *)(lVar2 + 0x5c) = (int)*(undefined8 *)(lVar5 + 0x18);
  auVar16 = NEON_ext(*(undefined1 (*) [16])(lVar3 + 0x30),*(undefined1 (*) [16])(lVar3 + 0x30),8,1);
  *(long *)(lVar2 + 0x78) = auVar16._8_8_;
  *(long *)(lVar2 + 0x70) = auVar16._0_8_;
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_016991d4;
  plVar6 = (long *)FUN_01699a00(*(long *)(param_1 + 0x40),0);
  if (plVar6 == (long *)0x0) {
LAB_016990e8:
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x18);
    if (lVar12 == 0) goto LAB_016991d4;
    *(undefined4 *)(lVar12 + 0x10) = 2;
    *(undefined4 *)(lVar2 + 0x38) = 0;
  }
  else {
    if (*plVar6 !=
        *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__)
    {
LAB_016991d8:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    if ((char)plVar6[2] != '\0') goto LAB_016990e8;
    if (lVar12 == 0) goto LAB_016991d4;
    *(undefined4 *)(lVar12 + 0x10) = 3;
    *(undefined4 *)(lVar12 + 0x20) = 2;
    *(undefined4 *)(lVar2 + 0x38) = 2;
    if ((int)plVar6[6] == 2) {
      *(undefined4 *)(lVar12 + 0x1c) = 3;
      *(undefined4 *)(lVar2 + 0x34) = 3;
    }
    else {
      if ((int)plVar6[6] != 1) {
        uVar7 = thunk_FUN_00d48444(StringLiteral_3033);
        uVar9 = FUN_00da4fb8(uVar7,1);
        FUN_00ac2be8(plVar6);
        local_64 = (undefined4)plVar6[6];
        uVar7 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<Color32>_SetDefault__);
        uVar7 = thunk_FUN_00d61fa0(uVar7,&local_64);
        uVar7 = FUN_017a7f78(uVar7,0);
        FUN_00ac2be8(uVar9);
        FUN_00acb0b4(uVar9,uVar7);
        FUN_00adb25c(uVar9,0,uVar7);
        puVar10 = PTR_DAT_033ee728;
LAB_01699310:
        uVar7 = thunk_FUN_00d48444(puVar10);
        uVar7 = FUN_017b63dc(uVar7,uVar9,0);
        thunk_FUN_00d48444(
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                          );
        uVar9 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_01679968(uVar9,uVar7,0);
        uVar7 = thunk_FUN_00d48444(StringLiteral_11264);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,uVar7);
      }
      lVar5 = plVar6[5];
      *(undefined4 *)(lVar12 + 0x1c) = 2;
      *(long *)(lVar12 + 0x28) = lVar5;
      *(undefined4 *)(lVar2 + 0x34) = 2;
    }
  }
  *(undefined4 *)(lVar12 + 0x14) = 1;
  uVar7 = FUN_0168a4a8(lVar3,lVar12 + 0x110,lVar12 + 0x108);
  *(undefined8 *)(lVar12 + 0xd8) = uVar7;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_01693db8(*(long *)(param_1 + 0x10),(long)*(int *)(param_2 + 0x14));
    *(long *)(lVar12 + 0x58) = lVar2;
    if (lVar2 == *(long *)(param_1 + 0x20)) {
      *(undefined4 *)(lVar12 + 0x24) = 1;
    }
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    *(undefined4 *)(lVar12 + 0x50) = 0;
    *(undefined8 *)(lVar12 + 0x48) = uVar7;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_01691df0(*(long *)(param_1 + 0x10),lVar12);
      return;
    }
  }
LAB_016991d4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


