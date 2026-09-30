/*
FUNCTION_NAME: FUN_0183a640
ENTRY_POINT: 0183a640
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0183abe4) */

void FUN_0183a640(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  undefined8 local_68;
  undefined8 local_58;
  
                    /* try { // try from 0183a64c to 0193a657 has its CatchHandler @ 0183a220 */
                    /* try { // try from 0183a658 to 0193a65f has its CatchHandler @ 0183a670 */
                    /* try { // try from 0183a660 to 0193a67f has its CatchHandler @ 0183a220 */
  if ((DAT_03779542 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0183a624 with catch @ 0183a670
                       catch(type#2 @ 00000000) { ... } // from try @ 0183a658 with catch @ 0183a670
                        */
                    /* catch() { ... } // from try @ 0183a5b0 with catch @ 0183a674 */
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventDescriptor>__ctor__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_9631);
    thunk_FUN_00d48444(PTR_DAT_033f1958);
    thunk_FUN_00d48444(PTR_DAT_033f7588);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<quaternion>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed9d0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Count__);
    DAT_03779542 = 1;
  }
  local_58 = 0;
  if ((param_2 != 0) && (uVar9 = FUN_0183b434(param_1,param_2,1), (uVar9 & 1) != 0)) {
    FUN_01836504(param_1,param_2);
    plVar10 = *(long **)(param_1 + 0x78);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250))
       , puVar3 = PTR_DAT_033f1958, plVar10 == (long *)0x0)) {
LAB_0183abdc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    local_58 = *(undefined8 *)(param_2 + 0x20);
    lVar16 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c(lVar16);
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    puVar6 = StringLiteral_9631;
    puVar5 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    puVar4 = PTR_DAT_033f7588;
    pcVar12 = (char *)thunk_FUN_00d32ed4(&local_58,*(undefined8 *)(lVar16 + 0x80));
    if (*pcVar12 != '\0') {
      if (lVar11 == 0) goto LAB_0183abdc;
      local_58 = *(undefined8 *)(param_2 + 0x20);
      iVar1 = *(int *)(lVar11 + 0x10);
      iVar8 = FUN_00adbe98(&local_58,*(undefined8 *)puVar6);
      lVar16 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c(lVar16);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      pcVar12 = (char *)thunk_FUN_00d32ed4(&local_58,*(undefined8 *)(lVar16 + 0x80));
      puVar2 = PTR_DAT_033ed9d0;
      if ((iVar8 < iVar1) && (*pcVar12 != '\0')) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_01731954(0);
        local_68 = *(undefined8 *)(param_2 + 0x20);
        uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&local_68);
        uVar13 = FUN_018652e8(*(undefined8 *)puVar2,uVar13,lVar11,uVar14,0);
        FUN_01835f8c(param_1,uVar13);
      }
    }
    local_58 = *(undefined8 *)(param_2 + 0x18);
    lVar16 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    /* catch() { ... } // from try @ 0183a8d8 with catch @ 0183a8bc
                       catch() { ... } // from try @ 0183a908 with catch @ 0183a8bc
                       catch() { ... } // from try @ 0183a944 with catch @ 0183a8bc */
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    pcVar12 = (char *)thunk_FUN_00d32ed4(&local_58,*(undefined8 *)(lVar16 + 0x80));
                    /* try { // try from 0183a8d0 to 0193a8d7 has its CatchHandler @ 0183a8ec */
    if (*pcVar12 != '\0') {
                    /* try { // try from 0183a8d8 to 0193a903 has its CatchHandler @ 0183a8bc */
      if (lVar11 == 0) goto LAB_0183abdc;
      local_58 = *(undefined8 *)(param_2 + 0x18);
      iVar1 = *(int *)(lVar11 + 0x10);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0183a8d0 with catch @ 0183a8ec
                        */
      iVar8 = FUN_00adbe98(&local_58,*(undefined8 *)puVar6);
      lVar16 = *(long *)(*(long *)puVar3 + 0x20);
                    /* try { // try from 0183a904 to 0193a907 has its CatchHandler @ 0183a934 */
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                    /* try { // try from 0183a908 to 0193a937 has its CatchHandler @ 0183a8bc */
        lVar16 = FUN_00d5941c(lVar16);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      pcVar12 = (char *)thunk_FUN_00d32ed4(&local_58,*(undefined8 *)(lVar16 + 0x80));
      puVar3 = Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Count__;
                    /* catch() { ... } // from try @ 0183a904 with catch @ 0183a934 */
                    /* try { // try from 0183a938 to 0193a943 has its CatchHandler @ 0183a958 */
      if ((iVar1 < iVar8) && (*pcVar12 != '\0')) {
                    /* try { // try from 0183a944 to 0193a94f has its CatchHandler @ 0183a8bc */
                    /* try { // try from 0183a950 to 0193a957 has its CatchHandler @ 0183a958 */
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0183a938 with catch @ 0183a958
                       catch(type#2 @ 00000000) { ... } // from try @ 0183a950 with catch @ 0183a958
                        */
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_01731954(0);
        local_68 = *(undefined8 *)(param_2 + 0x18);
        uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&local_68);
        uVar13 = FUN_018652e8(*(undefined8 *)puVar3,uVar13,lVar11,uVar14,0);
        FUN_01835f8c(param_1,uVar13);
      }
    }
    plVar10 = *(long **)(param_2 + 0x70);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__) {
            puVar15 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0183aa00;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_00d59724(plVar10,*(long *)
                                      Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__
                             ,0);
LAB_0183aa00:
      puVar7 = StringLiteral_10310;
      plVar10 = (long *)(*(code *)*puVar15)(plVar10,puVar15[1]);
      puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar4 = Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<quaternion>__;
      puVar3 = Method_System_Collections_Generic_List<EventDescriptor>__ctor__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
LAB_0183aa3c:
      lVar16 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
            puVar15 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0183aa88;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
LAB_0183aa88:
      uVar9 = (*(code *)*puVar15)(plVar10,puVar15[1]);
      if ((uVar9 & 1) != 0) {
        lVar16 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar15 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0183aae4;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,0);
LAB_0183aae4:
        uVar13 = (*(code *)*puVar15)(plVar10,puVar15[1]);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0201fbe8(lVar11,uVar13,0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_01731954(0);
          uVar13 = FUN_018652e8(*(undefined8 *)puVar4,uVar14,lVar11,uVar13,0);
          FUN_01835f8c(param_1,uVar13);
        }
        goto LAB_0183aa3c;
      }
      if (plVar10 != (long *)0x0) {
        lVar11 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
              puVar15 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0183abac;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar7,0);
LAB_0183abac:
        (*(code *)*puVar15)(plVar10,puVar15[1]);
      }
    }
  }
  return;
}


