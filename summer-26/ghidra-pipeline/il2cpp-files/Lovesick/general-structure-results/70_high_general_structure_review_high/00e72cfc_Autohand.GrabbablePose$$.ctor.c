/*
FUNCTION_NAME: Autohand.GrabbablePose$$.ctor
ENTRY_POINT: 00e72cfc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Autohand_GrabbablePose___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x25;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar4 = Method_System_Collections_Generic_List<IMarker>_Clear__;
  puVar3 = OVR_OpenVR_IVROverlay__GetOverlayImageData_TypeInfo;
  puVar2 = DG_Tweening_DOTweenModuleUnityVersion_<>c__DisplayClass8_0_TypeInfo;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      lVar5 = *unaff_x25;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *unaff_x25;
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *unaff_x25;
        }
        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar6 == 0) goto LAB_00e72fb8;
        FUN_0128180c(lVar6,uVar7,*(undefined8 *)Method_Oculus_Platform_Request<UserList>__ctor__,0);
        lVar5 = *unaff_x25;
        *(long *)(*(long *)(lVar5 + 0xb8) + 0x68) = lVar6;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *unaff_x25;
      }
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *unaff_x25;
        }
        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar8 == 0) goto LAB_00e72fb8;
        FUN_012819a8(lVar8,uVar7,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<PathFilter>_Dispose__,0);
        *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x70) = lVar8;
      }
      if (lVar9 == 0) goto LAB_00e72fb8;
      uVar10 = *(undefined4 *)(lVar9 + 0x58);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_01068bac(0x3f800000,0x3f800000,0x3f800000,0x3f800000,uVar10,lVar6,lVar8,0);
      uVar10 = 2;
      goto FUN_00e72f74;
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *unaff_x25;
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar6 == 0) goto LAB_00e72fb8;
    FUN_0128180c(lVar6,uVar7,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<Type>_Contains__,0);
    lVar5 = *unaff_x25;
    *(long *)(*(long *)(lVar5 + 0xb8) + 0x58) = lVar6;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *unaff_x25;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar8 == 0) goto LAB_00e72fb8;
    FUN_012819a8(lVar8,uVar7,*(undefined8 *)StringLiteral_8222,0);
    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x60) = lVar8;
  }
  if (lVar9 != 0) {
    uVar14 = *(undefined4 *)(lVar9 + 0x48);
    uVar13 = *(undefined4 *)(lVar9 + 0x4c);
    uVar12 = *(undefined4 *)(lVar9 + 0x50);
    uVar10 = *(undefined4 *)(lVar9 + 0x54);
    uVar11 = *(undefined4 *)(lVar9 + 0x58);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01068bac(uVar14,uVar13,uVar12,uVar10,uVar11,lVar6,lVar8,0);
    uVar10 = 1;
FUN_00e72f74:
    *(undefined8 *)(lVar9 + 0x98) = uVar7;
    uVar7 = FUN_0106e4c8(uVar7,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar10;
    return 1;
  }
LAB_00e72fb8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


