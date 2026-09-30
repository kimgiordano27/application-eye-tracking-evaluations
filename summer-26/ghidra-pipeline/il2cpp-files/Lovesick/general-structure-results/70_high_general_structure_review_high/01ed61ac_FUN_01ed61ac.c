/*
FUNCTION_NAME: FUN_01ed61ac
ENTRY_POINT: 01ed61ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_01ed61ac(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  bool bVar18;
  
  if ((DAT_0377fff3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f1778);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_ToString__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<Camera>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_GetAddReferenceImageJobStatus__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(StringLiteral_12712);
    DAT_0377fff3 = 1;
  }
  puVar4 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_1 == (long *)0x0) goto LAB_01ed6608;
  plVar9 = (long *)(**(code **)(*param_1 + 0x2e8))(param_1,0,*(undefined8 *)(*param_1 + 0x2f0));
  puVar6 = StringLiteral_12712;
  puVar5 = StringLiteral_3033;
  puVar3 = 
  Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_GetAddReferenceImageJobStatus__
  ;
  puVar17 = (undefined8 *)
            Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_ToString__;
  if (plVar9 == (long *)0x0) {
LAB_01ed628c:
    plVar9 = (long *)0x0;
  }
  else {
    lVar16 = *(long *)puVar4;
    bVar1 = *(byte *)(lVar16 + 300);
    if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_01ed628c;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
      plVar9 = (long *)0x0;
    }
  }
  iVar7 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
  if (iVar7 == 1) {
    if (plVar9 == (long *)0x0) goto LAB_01ed6608;
    uVar10 = thunk_FUN_015fe514(plVar9[2],*(undefined8 *)puVar6,0);
    lVar16 = plVar9[3];
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_033f1778 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01ed6798(param_2,lVar16);
      return;
    }
    if (lVar16 == 0) goto LAB_01ed6608;
    uVar12 = *(undefined8 *)puVar5;
    if (*(int *)(lVar16 + 0x10) != 0) {
      plVar13 = (long *)FUN_00da4fb8(uVar12,2);
      if (plVar13 == (long *)0x0) goto LAB_01ed6608;
      lVar16 = plVar9[2];
      goto joined_r0x01ed64e0;
    }
    plVar13 = (long *)FUN_00da4fb8(uVar12,1);
    if (plVar13 == (long *)0x0) goto LAB_01ed6608;
    lVar16 = plVar9[2];
    if ((lVar16 != 0) &&
       (lVar14 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
    goto LAB_01ed6610;
    if ((int)plVar13[3] == 0) goto LAB_01ed660c;
    plVar13[4] = lVar16;
    uVar12 = *(undefined8 *)puVar3;
  }
  else {
    plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                        );
    if (plVar11 == (long *)0x0) goto LAB_01ed6608;
    FUN_0160aa4c(plVar11,0);
    iVar7 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
    puVar3 = PTR_DAT_033f38b8;
    if (iVar7 < 1) {
      if (plVar9 == (long *)0x0) goto LAB_01ed6608;
    }
    else {
      bVar2 = false;
      iVar7 = 0;
      bVar18 = true;
      do {
        plVar9 = (long *)(**(code **)(*param_1 + 0x2e8))
                                   (param_1,iVar7,*(undefined8 *)(*param_1 + 0x2f0));
        if (plVar9 == (long *)0x0) goto LAB_01ed6608;
        lVar16 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar16 + 300);
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
        goto LAB_01ed6608;
        uVar10 = thunk_FUN_015fe514(plVar9[2],*(undefined8 *)puVar6,0);
        if ((uVar10 & 1) == 0) {
          if (!bVar18) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar3,0);
          }
          FUN_0160c430(plVar11,plVar9[2],0);
          bVar18 = false;
        }
        else {
          bVar2 = true;
        }
        iVar7 = iVar7 + 1;
        iVar8 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
      } while (iVar7 < iVar8);
      puVar17 = (undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_ToString__;
      if (bVar2) {
        FUN_0160c430(plVar11,*(undefined8 *)puVar3,0);
        uVar12 = FUN_01f75600(*(undefined8 *)System_Collections_Generic_List<Camera>_TypeInfo,0);
        param_2 = plVar11;
        goto LAB_01ed65e8;
      }
    }
    if (plVar9[3] == 0) goto LAB_01ed6608;
    uVar12 = *(undefined8 *)puVar5;
    if (*(int *)(plVar9[3] + 0x10) == 0) {
      plVar13 = (long *)FUN_00da4fb8(uVar12,1);
      lVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      puVar4 = 
      Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_GetAddReferenceImageJobStatus__
      ;
      if (plVar13 == (long *)0x0) goto LAB_01ed6608;
      if ((lVar16 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
      goto LAB_01ed6610;
      if ((int)plVar13[3] == 0) goto LAB_01ed660c;
      plVar13[4] = lVar16;
      uVar12 = *(undefined8 *)puVar4;
    }
    else {
      plVar13 = (long *)FUN_00da4fb8(uVar12,2);
      lVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      if (plVar13 == (long *)0x0) goto LAB_01ed6608;
joined_r0x01ed64e0:
      if ((lVar16 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_01ed6610:
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      uVar15 = *(uint *)(plVar13 + 3);
      if (uVar15 == 0) {
LAB_01ed660c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar13[4] = lVar16;
      lVar16 = plVar9[3];
      if (lVar16 != 0) {
        lVar14 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar14 == 0) goto LAB_01ed6610;
        uVar15 = *(uint *)(plVar13 + 3);
      }
      if (uVar15 < 2) goto LAB_01ed660c;
      plVar13[5] = lVar16;
      uVar12 = *puVar17;
    }
  }
  uVar12 = FUN_01f71d98(uVar12,plVar13,0);
  if (param_2 != (long *)0x0) {
LAB_01ed65e8:
    FUN_0160c430(param_2,uVar12,0);
    return;
  }
LAB_01ed6608:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


