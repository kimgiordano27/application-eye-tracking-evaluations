/*
FUNCTION_NAME: System.Xml.XmlTextWriter$$PopNamespaces
ENTRY_POINT: 01e2f1f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_10;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Xml_XmlTextWriter__PopNamespaces(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  long lVar10;
  int in_w10;
  uint in_w11;
  long unaff_x19;
  undefined8 uVar11;
  int unaff_w20;
  int unaff_w21;
  long *plVar12;
  long unaff_x23;
  int unaff_w25;
  undefined8 *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  
code_r0x01e2f1f8:
  if (in_w11 <= in_w10 - 1U) {
LAB_01e2f520:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  *(long *)(in_x9 + (long)(int)(in_w10 - 1U) * (long)(int)unaff_x28 + 0x38) = param_1;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  lVar10 = unaff_x23;
LAB_01e2f210:
  unaff_x23 = 0;
  bVar3 = true;
  if (lVar10 != 0) {
    plVar12 = *(long **)(unaff_x19 + 0x60);
    uVar6 = FUN_01e2a954();
    if (plVar12 == (long *)0x0) goto System_Xml_XmlTextWriter__AddNamespace;
    (**(code **)(*plVar12 + 0x198))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x1a0));
    FUN_01e2ebac();
    unaff_x23 = 0;
    bVar3 = true;
  }
LAB_01e2f1a8:
  iVar4 = FUN_01e2e880();
  if (iVar4 != 0xf6) goto code_r0x01e2f1bc;
  if (unaff_x23 != 0) {
    FUN_01e2ebac();
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) goto System_Xml_XmlTextWriter__AddNamespace;
  if (*(int *)(unaff_x19 + 0xf8) == *(int *)(*(long *)(unaff_x19 + 0xe8) + 0x18)) {
    FUN_01e2eb18();
  }
  lVar10 = *(long *)(unaff_x19 + 0x50);
  uVar5 = FUN_01e2e068();
  if (lVar10 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
  if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_01e2f520;
  lVar9 = *(long *)(unaff_x19 + 0xe8);
  if (lVar9 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xf8)) goto LAB_01e2f520;
  lVar10 = lVar10 + (long)(int)uVar5 * (long)unaff_w25;
  uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
  lVar1 = *(long *)(lVar10 + 0x20);
  unaff_x23 = *(long *)(lVar10 + 0x28);
  lVar10 = *(long *)(lVar10 + 0x30);
  lVar9 = lVar9 + (int)*(uint *)(unaff_x19 + 0xf8) * unaff_x28;
  *(undefined4 *)(lVar9 + 0x44) = 0;
  *(undefined4 *)(lVar9 + 0x48) = 0;
  *(long *)(lVar9 + 0x20) = lVar1;
  *(long *)(lVar9 + 0x28) = unaff_x23;
  *(long *)(lVar9 + 0x30) = lVar10;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined4 *)(lVar9 + 0x40) = uVar2;
  uVar7 = thunk_FUN_015fe514(lVar1,*unaff_x27,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_01f5dcc0(lVar10,*(undefined8 *)(unaff_x19 + 0x80),0);
    if ((uVar7 & 1) != 0) {
      uVar7 = thunk_FUN_015fe514(unaff_x23,*(undefined8 *)StringLiteral_10543,0);
      if ((uVar7 & 1) != 0) {
        unaff_x23 = **(long **)(*unaff_x29 + 0xb8);
      }
      goto LAB_01e2f1a4;
    }
    if ((lVar1 == 0) || (lVar10 == 0)) goto System_Xml_XmlTextWriter__AddNamespace;
    if (*(int *)(lVar1 + 0x10) != 0) {
      if (*(int *)(lVar10 + 0x10) == 0) {
        lVar10 = thunk_FUN_00d48444(
                                   System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                   );
        uVar11 = **(undefined8 **)(lVar10 + 0xb8);
        thunk_FUN_00d48444(
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                          );
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar8 = thunk_FUN_00d48444(StringLiteral_6511);
        FUN_01f730c0(uVar6,uVar8,uVar11,0);
        uVar8 = thunk_FUN_00d48444(PTR_DAT_033ecdf0);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,uVar8);
      }
      FUN_01e2ebac();
      goto LAB_01e2f3d0;
    }
    if (*(int *)(lVar10 + 0x10) != 0) {
      thunk_FUN_00d48444(System_Net_IWebProxy_TypeInfo);
      uVar6 = FUN_01e2f5c8();
      goto LAB_01e2f504;
    }
  }
  else {
    uVar7 = thunk_FUN_015fe514(unaff_x23,
                               *(undefined8 *)
                                Method_Unity_Collections_NativeArray<byte>_get_IsCreated__,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = thunk_FUN_015fe514(unaff_x23,
                                 *(undefined8 *)
                                  System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo
                                 ,0);
      if ((uVar7 & 1) != 0) {
        unaff_w21 = *(int *)(unaff_x19 + 0xf8);
      }
    }
    else {
      unaff_w20 = *(int *)(unaff_x19 + 0xf8);
    }
  }
LAB_01e2f3d0:
  unaff_x23 = 0;
LAB_01e2f1a4:
  *(int *)(unaff_x19 + 0xf8) = *(int *)(unaff_x19 + 0xf8) + 1;
  bVar3 = false;
  goto LAB_01e2f1a8;
code_r0x01e2f1bc:
  if (iVar4 == 0xf5) {
    if (unaff_w21 != -1) {
      uVar6 = FUN_01e2b02c();
      uVar7 = thunk_FUN_015fe514(uVar6,*(undefined8 *)StringLiteral_7552,0);
      if ((uVar7 & 1) == 0) {
        uVar5 = thunk_FUN_015fe514(uVar6,*(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__
                                   ,0);
        uVar5 = uVar5 & 1;
      }
      else {
        uVar5 = 2;
      }
      lVar10 = *(long *)(unaff_x19 + 0xd8);
      if (lVar10 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
      if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_01e2f520;
      *(uint *)(lVar10 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 0x30 + 0x40) = uVar5;
      *(bool *)(unaff_x19 + 0x100) = uVar5 == 2;
    }
    if (unaff_w20 != -1) {
      lVar10 = *(long *)(unaff_x19 + 0xd8);
      if (lVar10 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
      uVar5 = *(uint *)(unaff_x19 + 0xe0);
      uVar6 = FUN_01e2b02c();
      if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_01e2f520;
      *(undefined8 *)(lVar10 + (long)(int)uVar5 * 0x30 + 0x38) = uVar6;
    }
    if (199 < *(int *)(unaff_x19 + 0xf8)) {
      FUN_01e2f940();
      return;
    }
    FUN_01e2f800();
    return;
  }
  FUN_01e2f6d8();
  if (bVar3) {
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_XDR_BuildElementType_DtMinLength__);
    uVar6 = FUN_01e2cc28();
LAB_01e2f504:
    uVar8 = thunk_FUN_00d48444(PTR_DAT_033ecdf0);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar8);
  }
  param_1 = *(long *)(unaff_x19 + 0x118);
  lVar10 = unaff_x23;
  if (param_1 != 0) goto code_r0x01e2f1e8;
  goto LAB_01e2f210;
code_r0x01e2f1e8:
  in_x9 = *(long *)(unaff_x19 + 0xe8);
  if (in_x9 == 0) {
System_Xml_XmlTextWriter__AddNamespace:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_w10 = *(int *)(unaff_x19 + 0xf8);
  in_w11 = *(uint *)(in_x9 + 0x18);
  goto code_r0x01e2f1f8;
}


