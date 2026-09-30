/*
FUNCTION_NAME: FUN_01e2f0f4
ENTRY_POINT: 01e2f0f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01e2f0f4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  if ((DAT_0377fb8c & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
                    /* try { // try from 01e2f138 to 01f2f69f has its CatchHandler @ 01e2f138
                       catch() { ... } // from try @ 01e2f138 with catch @ 01e2f138
                       catch() { ... } // from try @ 01e2f6b8 with catch @ 01e2f138
                       catch() { ... } // from try @ 01e2f75c with catch @ 01e2f138
                       catch() { ... } // from try @ 01e2f79c with catch @ 01e2f138 */
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__);
    thunk_FUN_00d48444(StringLiteral_7552);
    thunk_FUN_00d48444(StringLiteral_10543);
    thunk_FUN_00d48444(StringLiteral_1962);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo);
    DAT_0377fb8c = 1;
  }
  puVar5 = StringLiteral_1962;
  puVar4 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  lVar15 = 0;
  iVar13 = -1;
  iVar14 = -1;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  do {
    bVar3 = false;
    while( true ) {
      lVar17 = lVar15;
      iVar6 = FUN_01e2e880(param_1);
      if (iVar6 == 0xf6) break;
      if (iVar6 == 0xf5) {
        if (iVar14 != -1) {
          uVar8 = FUN_01e2b02c(param_1,iVar14);
          uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)StringLiteral_7552,0);
          if ((uVar9 & 1) == 0) {
            uVar7 = thunk_FUN_015fe514(uVar8,*(undefined8 *)
                                              Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__
                                       ,0);
            uVar7 = uVar7 & 1;
          }
          else {
            uVar7 = 2;
          }
          lVar15 = *(long *)(param_1 + 0xd8);
          if (lVar15 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_01e2f520;
          *(uint *)(lVar15 + (long)(int)*(uint *)(param_1 + 0xe0) * 0x30 + 0x40) = uVar7;
          *(bool *)(param_1 + 0x100) = uVar7 == 2;
        }
        if (iVar13 != -1) {
          lVar15 = *(long *)(param_1 + 0xd8);
          if (lVar15 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
          uVar7 = *(uint *)(param_1 + 0xe0);
          uVar8 = FUN_01e2b02c(param_1,iVar13);
          if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01e2f520;
          *(undefined8 *)(lVar15 + (long)(int)uVar7 * 0x30 + 0x38) = uVar8;
        }
        if (199 < *(int *)(param_1 + 0xf8)) {
          FUN_01e2f940();
          return;
        }
        FUN_01e2f800(param_1);
        return;
      }
      FUN_01e2f6d8(param_1,iVar6,1,1);
      if (bVar3) {
        uVar8 = thunk_FUN_00d48444(
                                  Method_System_Xml_Schema_XdrBuilder_XDR_BuildElementType_DtMinLength__
                                  );
        uVar8 = FUN_01e2cc28(param_1,uVar8);
        goto LAB_01e2f504;
      }
      if (*(long *)(param_1 + 0x118) != 0) {
        lVar15 = *(long *)(param_1 + 0xe8);
        if (lVar15 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
        uVar7 = *(int *)(param_1 + 0xf8) - 1;
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01e2f520;
        *(long *)(lVar15 + (long)(int)uVar7 * 0x30 + 0x38) = *(long *)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0x118) = 0;
      }
      bVar3 = true;
      lVar15 = 0;
      if (lVar17 != 0) {
        plVar16 = *(long **)(param_1 + 0x60);
        uVar8 = FUN_01e2a954(param_1,iVar6);
        if (plVar16 == (long *)0x0) goto System_Xml_XmlTextWriter__AddNamespace;
        uVar8 = (**(code **)(*plVar16 + 0x198))(plVar16,uVar8,*(undefined8 *)(*plVar16 + 0x1a0));
        FUN_01e2ebac(param_1,lVar17,uVar8,0);
        bVar3 = true;
        lVar15 = 0;
      }
    }
    if (lVar17 != 0) {
      FUN_01e2ebac(param_1,lVar17,**(undefined8 **)(*(long *)puVar4 + 0xb8),0);
    }
    if (*(long *)(param_1 + 0xe8) == 0) {
System_Xml_XmlTextWriter__AddNamespace:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(param_1 + 0xf8) == *(int *)(*(long *)(param_1 + 0xe8) + 0x18)) {
      FUN_01e2eb18(param_1);
    }
    lVar17 = *(long *)(param_1 + 0x50);
    uVar7 = FUN_01e2e068(param_1);
    if (lVar17 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) {
LAB_01e2f520:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar11 = *(long *)(param_1 + 0xe8);
    if (lVar11 == 0) goto System_Xml_XmlTextWriter__AddNamespace;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0xf8)) goto LAB_01e2f520;
    lVar17 = lVar17 + (long)(int)uVar7 * 0x18;
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    lVar1 = *(long *)(lVar17 + 0x20);
    lVar15 = *(long *)(lVar17 + 0x28);
    lVar17 = *(long *)(lVar17 + 0x30);
    lVar11 = lVar11 + (long)(int)*(uint *)(param_1 + 0xf8) * 0x30;
    *(undefined4 *)(lVar11 + 0x44) = 0;
    *(undefined4 *)(lVar11 + 0x48) = 0;
    *(long *)(lVar11 + 0x20) = lVar1;
    *(long *)(lVar11 + 0x28) = lVar15;
    *(long *)(lVar11 + 0x30) = lVar17;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = uVar2;
    uVar9 = thunk_FUN_015fe514(lVar1,*(undefined8 *)puVar5,0);
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN_01f5dcc0(lVar17,*(undefined8 *)(param_1 + 0x80),0);
      if ((uVar9 & 1) == 0) {
        if ((lVar1 == 0) || (lVar17 == 0)) goto System_Xml_XmlTextWriter__AddNamespace;
        if (*(int *)(lVar1 + 0x10) == 0) {
          if (*(int *)(lVar17 + 0x10) != 0) {
            uVar8 = thunk_FUN_00d48444(System_Net_IWebProxy_TypeInfo);
            uVar8 = FUN_01e2f5c8(param_1,uVar8,lVar15,lVar17);
LAB_01e2f504:
            uVar10 = thunk_FUN_00d48444(PTR_DAT_033ecdf0);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar8,uVar10);
          }
        }
        else {
          if (*(int *)(lVar17 + 0x10) == 0) {
            lVar15 = thunk_FUN_00d48444(
                                       System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                       );
            uVar12 = **(undefined8 **)(lVar15 + 0xb8);
            thunk_FUN_00d48444(
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                              );
            uVar8 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            uVar10 = thunk_FUN_00d48444(StringLiteral_6511);
            FUN_01f730c0(uVar8,uVar10,uVar12,0);
            uVar10 = thunk_FUN_00d48444(PTR_DAT_033ecdf0);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar8,uVar10);
          }
          FUN_01e2ebac(param_1,lVar1,lVar17,1);
        }
        goto LAB_01e2f3d0;
      }
      uVar9 = thunk_FUN_015fe514(lVar15,*(undefined8 *)StringLiteral_10543,0);
      if ((uVar9 & 1) != 0) {
        lVar15 = **(long **)(*(long *)puVar4 + 0xb8);
      }
    }
    else {
      uVar9 = thunk_FUN_015fe514(lVar15,*(undefined8 *)
                                         Method_Unity_Collections_NativeArray<byte>_get_IsCreated__,
                                 0);
      if ((uVar9 & 1) == 0) {
        uVar9 = thunk_FUN_015fe514(lVar15,*(undefined8 *)
                                           System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo
                                   ,0);
        if ((uVar9 & 1) != 0) {
          iVar14 = *(int *)(param_1 + 0xf8);
        }
      }
      else {
        iVar13 = *(int *)(param_1 + 0xf8);
      }
LAB_01e2f3d0:
      lVar15 = 0;
    }
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  } while( true );
}


