/*
FUNCTION_NAME: UnityEngine.Cubemap$$.ctor
ENTRY_POINT: 038087ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03808a08) */
/* WARNING: Removing unreachable block (ram,0x03808b78) */

void UnityEngine_Cubemap___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x7e8));
  thunk_FUN_01ad9084(PTR_DAT_03d7f3c0);
  thunk_FUN_01ad9084(
                    Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                    );
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03da56f0);
  thunk_FUN_01ad9084(PTR_DAT_03da56f8);
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElementListPool_<>c_<_cctor>b__4_0__);
  thunk_FUN_01ad9084(PTR_DAT_03da5700);
  *(undefined1 *)(unaff_x21 + 0x34c) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if ((unaff_x19 & 1) == 0) {
    fVar15 = 1.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar12 = *(float *)(unaff_x20 + 0x20);
    fVar13 = *(float *)(unaff_x20 + 0x24);
    fVar14 = *(float *)(unaff_x20 + 0x28);
    fVar15 = *(float *)(unaff_x20 + 0x2c);
    fVar11 = (float)FUN_03915624(0x3f800000,0);
    fVar12 = fVar12 * fVar11;
    fVar13 = fVar13 * fVar11;
    fVar14 = fVar14 * fVar11;
    fVar15 = fVar15 * fVar11;
  }
  if ((*(char *)(unaff_x20 + 0x60) == '\0') && (*(char *)(unaff_x20 + 0x61) == '\0')) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f3474(*(undefined8 *)PTR_DAT_03da5700);
    *(undefined1 *)(unaff_x20 + 0x61) = 1;
  }
  puVar7 = PTR_DAT_03da56f8;
  puVar6 = PTR_DAT_03da56f0;
  puVar5 = PTR_DAT_03d7f370;
  puVar4 = Method_UnityEngine_UIElements_VisualElementListPool_<>c_<_cctor>b__4_0__;
  puVar3 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_02b5a400(&stack0x00000008,*(long *)(unaff_x20 + 0x38),*(undefined8 *)PTR_DAT_03d7f3c0);
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000018;
  do {
    do {
      uVar9 = FUN_02739b98(&stack0x00000040,*(undefined8 *)puVar5);
      lVar8 = in_stack_00000050;
      if ((uVar9 & 1) == 0) {
        FUN_02739b94(&stack0x00000040,*(undefined8 *)PTR_DAT_03d7f350);
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_03922f24(lVar8,0,0);
    } while ((uVar9 & 1) != 0);
    if (*(char *)(unaff_x20 + 0x60) == '\0') {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_038fe940(lVar8,**(undefined8 **)(*(long *)puVar7 + 0xb8),0);
      if (**(long **)(*(long *)puVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_02b5a400(&stack0x00000008,**(long **)(*(long *)puVar7 + 0xb8),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                  );
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar9 = FUN_02739b98(&stack0x00000020,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        if ((unaff_x19 & 1) == 0) {
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_038ffb40(in_stack_00000030,*(undefined8 *)puVar4,0);
        }
        else {
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_038ffafc(in_stack_00000030,*(undefined8 *)puVar4,0);
        }
      }
      FUN_02739b94(&stack0x00000020,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
      lVar10 = *(long *)puVar7;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)puVar7;
      }
      lVar10 = **(long **)(lVar10 + 0xb8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_03062488(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_038fe328(lVar8,*(undefined8 *)(unaff_x20 + 0x58),0);
    lVar10 = *(long *)(unaff_x20 + 0x58);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    thunk_FUN_038fd510(fVar12,fVar13,fVar14,fVar15,lVar10,**(undefined4 **)(*(long *)puVar6 + 0xb8),
                       0);
    FUN_038fe290(lVar8,*(undefined8 *)(unaff_x20 + 0x58),0);
  } while( true );
}


