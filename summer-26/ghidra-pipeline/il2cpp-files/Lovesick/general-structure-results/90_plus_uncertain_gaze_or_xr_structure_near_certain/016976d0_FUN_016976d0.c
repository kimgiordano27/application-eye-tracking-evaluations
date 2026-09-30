/*
FUNCTION_NAME: FUN_016976d0
ENTRY_POINT: 016976d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_016976d0(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar11 = Method_System_Collections_Generic_List<DFNode>_Clear__;
  if ((DAT_0377853c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DFNode>_Clear__);
                    /* try { // try from 01697710 to 01797717 has its CatchHandler @ 01697848 */
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__
                      );
                    /* try { // try from 01697720 to 01797727 has its CatchHandler @ 0169783c */
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__
                      );
                    /* try { // try from 01697730 to 01797737 has its CatchHandler @ 01697844 */
    thunk_FUN_00d48444(PTR_DAT_033ea820);
    DAT_0377853c = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
  if (lVar4 == 0) goto LAB_01697ad0;
  FUN_017b46ec(lVar4,0);
  *(undefined4 *)(lVar4 + 0x3c) = param_2;
  FUN_016894cc(lVar4,param_1);
  if (*(int *)(lVar4 + 0x28) == 4) {
    if (0 < *(int *)(lVar4 + 0x38)) {
      lVar5 = FUN_016967a8(param_1);
      if (lVar5 == 0) goto LAB_01697ad0;
      plVar6 = (long *)FUN_01699c4c(lVar5,*(undefined4 *)(lVar4 + 0x38),0);
      if ((plVar6 != (long *)0x0) &&
         (*plVar6 != *(long *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
      goto LAB_016977cc;
    }
    uVar9 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar10 = FUN_00da4fb8(uVar9,1);
    FUN_00ac2be8(lVar4);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    FUN_00ac2be8(uVar10);
    FUN_00acb0b4(uVar10,uVar9);
    FUN_00adb25c(uVar10,0,uVar9);
    puVar11 = System_Security_Cryptography_X509Certificates_X509ChainElementCollection_TypeInfo;
  }
  else {
    plVar6 = (long *)FUN_01696694(param_1);
LAB_016977cc:
    lVar5 = FUN_01698a6c(param_1);
    if (lVar5 == 0) goto LAB_01697ad0;
    *(undefined4 *)(lVar5 + 0x30) = 2;
    *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar4 + 0x30);
    lVar15 = *(long *)(lVar5 + 0x80);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01697ad0;
    plVar7 = (long *)FUN_01699a00(*(long *)(param_1 + 0x40),0);
    if (plVar7 == (long *)0x0) {
LAB_01697830:
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_033ea820;
      if (lVar15 == 0) goto LAB_01697ad0;
      *(undefined4 *)(lVar15 + 0x10) = 2;
      *(undefined4 *)(lVar5 + 0x38) = 0;
    }
    else {
      if (*plVar7 !=
          *(long *)
           Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      if (0 < *(int *)(lVar4 + 0x10)) goto LAB_01697830;
      if (lVar15 == 0) goto LAB_01697ad0;
      *(undefined4 *)(lVar15 + 0x10) = 3;
      *(undefined4 *)(lVar15 + 0x20) = 2;
      *(undefined4 *)(lVar5 + 0x38) = 2;
      if ((int)plVar7[6] == 2) {
        *(undefined4 *)(lVar15 + 0x1c) = 3;
        *(undefined4 *)(lVar5 + 0x34) = 3;
      }
      else {
        if ((int)plVar7[6] != 1) {
          uVar9 = thunk_FUN_00d48444(StringLiteral_3033);
          uVar10 = FUN_00da4fb8(uVar9,1);
          FUN_00ac2be8(plVar7);
          local_34 = (undefined4)plVar7[6];
          uVar9 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<Color32>_SetDefault__);
          uVar9 = thunk_FUN_00d61fa0(uVar9,&local_34);
          uVar9 = FUN_017a7f78(uVar9,0);
          FUN_00ac2be8(uVar10);
          FUN_00acb0b4(uVar10,uVar9);
          FUN_00adb25c(uVar10,0,uVar9);
          uVar9 = thunk_FUN_00d48444(PTR_DAT_033ee728);
          goto LAB_01697bac;
        }
        lVar8 = plVar7[5];
        *(undefined4 *)(lVar15 + 0x1c) = 2;
        *(long *)(lVar15 + 0x28) = lVar8;
        *(undefined4 *)(lVar5 + 0x34) = 2;
        *(long *)(lVar15 + 0x40) = lVar8;
        *(long *)(lVar15 + 0x48) = plVar7[8];
      }
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_01697ad0;
    lVar8 = FUN_01693db8(*(long *)(param_1 + 0x10),(long)*(int *)(lVar4 + 0x10));
    *(long *)(lVar15 + 0x58) = lVar8;
    if (lVar8 == *(long *)(param_1 + 0x20)) {
      uVar12 = 1;
    }
    else if ((*(long *)(param_1 + 0x28) < 1) || (lVar8 != *(long *)(param_1 + 0x28))) {
      uVar12 = 2;
    }
    else {
      uVar12 = 3;
    }
    *(undefined4 *)(lVar15 + 0x24) = uVar12;
    *(undefined4 *)(lVar15 + 0x14) = 2;
    FUN_0168699c(*(undefined4 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                 *(undefined8 *)(param_1 + 0x10),plVar6,lVar15 + 0x7c,lVar15 + 0x68,lVar15 + 0x70,
                 lVar15 + 0x78);
    *(undefined4 *)(lVar15 + 0x50) = 0;
    uVar1 = *(uint *)(lVar4 + 0x14);
    *(uint *)(lVar15 + 0x80) = uVar1;
    lVar8 = *(long *)(lVar4 + 0x18);
    *(long *)(lVar15 + 0x88) = lVar8;
    *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar4 + 0x20);
    puVar11 = 
    Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__;
    if (*(uint *)(lVar4 + 0x40) < 6) {
      uVar2 = 1 << (ulong)(*(uint *)(lVar4 + 0x40) & 0x1f);
      if ((uVar2 & 9) == 0) {
        if ((uVar2 & 0x12) == 0) {
          if ((int)uVar1 < 1) {
            iVar13 = 1;
          }
          else {
            if (lVar8 == 0) goto LAB_01697ad0;
            uVar14 = 0;
            iVar13 = 1;
            do {
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_01697ad4;
              lVar4 = uVar14 * 4;
              uVar14 = uVar14 + 1;
              iVar13 = *(int *)(lVar8 + 0x20 + lVar4) * iVar13;
            } while (uVar1 != uVar14);
          }
          *(int *)(lVar5 + 0x48) = iVar13;
          *(undefined4 *)(lVar15 + 0x18) = 3;
        }
        else {
          if (lVar8 == 0) goto LAB_01697ad0;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01697ad4;
          *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(lVar8 + 0x20);
          *(undefined4 *)(lVar15 + 0x18) = 2;
        }
LAB_01697a5c:
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_01697ad0;
        FUN_0169983c(*(long *)(param_1 + 0x40),lVar5,0);
        bVar3 = false;
      }
      else {
        if (lVar8 == 0) goto LAB_01697ad0;
        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_01697ad4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(lVar8 + 0x20);
        *(undefined4 *)(lVar15 + 0x18) = 1;
        uVar1 = *(uint *)(lVar15 + 0x7c);
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((0x10 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x1cfceU) == 0)) goto LAB_01697a5c;
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 == 0) goto LAB_01697ad0;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_01697ad4;
        if (*(int *)(lVar4 + 0x20) != 0) goto LAB_01697a5c;
        FUN_01699364(param_1,lVar15);
        FUN_0169868c(param_1,lVar5);
        bVar3 = true;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_01691df0(*(long *)(param_1 + 0x10),lVar15);
        if (!bVar3) {
          return;
        }
        *(undefined4 *)(lVar15 + 0x10) = 4;
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_01691df0(*(long *)(param_1 + 0x10),lVar15);
          return;
        }
      }
LAB_01697ad0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar10 = FUN_00da4fb8(uVar9,1);
    FUN_00ac2be8(lVar4);
    local_38 = *(undefined4 *)(lVar4 + 0x40);
    uVar9 = thunk_FUN_00d48444(System_Converter<IBounded,_Triangle>_TypeInfo);
    uVar9 = thunk_FUN_00d61fa0(uVar9,&local_38);
    uVar9 = FUN_017a7f78(uVar9,0);
    FUN_00ac2be8(uVar10);
    FUN_00acb0b4(uVar10,uVar9);
    FUN_00adb25c(uVar10,0,uVar9);
    puVar11 = OVRPlugin_OVRP_1_38_0_TypeInfo;
  }
  uVar9 = thunk_FUN_00d48444(puVar11);
LAB_01697bac:
  uVar9 = FUN_017b63dc(uVar9,uVar10,0);
  thunk_FUN_00d48444(
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                    );
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_01679968(uVar10,uVar9,0);
  uVar9 = thunk_FUN_00d48444(StringLiteral_10139);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar9);
}


