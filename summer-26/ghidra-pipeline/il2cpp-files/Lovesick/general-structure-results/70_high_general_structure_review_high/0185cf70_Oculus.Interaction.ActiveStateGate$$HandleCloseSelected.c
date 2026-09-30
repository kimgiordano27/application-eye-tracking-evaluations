/*
FUNCTION_NAME: Oculus.Interaction.ActiveStateGate$$HandleCloseSelected
ENTRY_POINT: 0185cf70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_ActiveStateGate__HandleCloseSelected(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *unaff_x19;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x26;
  long *unaff_x27;
  undefined1 auVar15 [16];
  
code_r0x0185cf70:
  auVar15 = FUN_017e7d94(param_1,0,0);
  uVar7 = FUN_016a1974();
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar15;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_010bbddc(unaff_x19 + 2);
    return;
  }
  FUN_016a1990();
LAB_0185cf9c:
  iVar9 = unaff_x19[0x1e] + 1;
  lVar11 = *(long *)(unaff_x19 + 0xe);
  unaff_x19[0x1e] = iVar9;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar11 + 0x10) <= iVar9) {
    iVar9 = *(int *)(lVar11 + 0x10) - unaff_x19[10];
    if (iVar9 != 0) {
      lVar8 = *(long *)(unaff_x19 + 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar8 + 0x18) < iVar9) {
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar15 = FUN_0182c0c8(*(long *)(unaff_x19 + 0xc),iVar9,0,0);
        lVar8 = auVar15._0_8_;
        lVar11 = *(long *)(unaff_x19 + 0xe);
        *(long *)(unaff_x19 + 8) = lVar8;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(lVar8,auVar15._8_8_,lVar8);
        }
      }
      FUN_015ff62c(lVar11,unaff_x19[10],lVar8,0,iVar9,0);
      uVar14 = *(undefined8 *)(unaff_x19 + 8);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x12);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar11 = FUN_0184a8a8(uVar12,uVar14,0,iVar9,uVar13);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar15 = FUN_017e7d94(lVar11,0,0);
      uVar7 = FUN_016a1974();
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar15;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_010bbddc(unaff_x19 + 2);
        return;
      }
      FUN_016a1990();
    }
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_016a2130(unaff_x19 + 2,0);
    return;
  }
  uVar7 = FUN_015fa29c(lVar11,iVar9,0);
  lVar11 = *(long *)(unaff_x19 + 0x14);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = *(uint *)(lVar11 + 0x18);
  uVar6 = (uint)uVar7;
  uVar2 = uVar6 & 0xffff;
  if ((int)uVar2 < (int)uVar4) goto Oculus_Interaction_ActiveStateGate__Awake;
  goto LAB_0185cb90;
Oculus_Interaction_ActiveStateGate__Awake:
  if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  if (*(char *)(lVar11 + (uVar7 & 0xffff) + 0x20) == '\0') goto LAB_0185cf9c;
LAB_0185cb90:
  if (uVar2 < 0x5d) {
    switch(uVar6 & 0xffff) {
    case 8:
      puVar10 = (undefined8 *)
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Create__;
      break;
    case 9:
      puVar10 = (undefined8 *)StringLiteral_9269;
      break;
    case 10:
      puVar10 = (undefined8 *)PTR_DAT_033eb9c8;
      break;
    case 0xb:
switchD_0185cbbc_caseD_b:
      if (((int)uVar4 <= (int)uVar2) && (unaff_x19[0x16] != 1)) goto LAB_0185cf9c;
      if ((uVar6 & 0xffff) == 0x22) {
        iVar9 = unaff_x19[0x16];
        puVar10 = (undefined8 *)StringLiteral_8337;
joined_r0x0185cca0:
        if (iVar9 != 2) break;
      }
      else if ((uVar6 & 0xffff) == 0x27) {
        iVar9 = unaff_x19[0x16];
        puVar10 = (undefined8 *)StringLiteral_3139;
        goto joined_r0x0185cca0;
      }
      lVar11 = *(long *)(unaff_x19 + 8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar11 + 0x18) < 6) {
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = FUN_0182c0c8(*(long *)(unaff_x19 + 0xc),6,0,0);
        *(long *)(unaff_x19 + 8) = lVar11;
      }
      FUN_01865830(uVar7 & 0xffffffff,lVar11,0);
      *(undefined1 *)(unaff_x19 + 0x17) = 1;
      goto LAB_0185cdf4;
    case 0xc:
      puVar10 = (undefined8 *)Method_UnityEngine_Object_FindObjectsOfType<WavelengthMover>__;
      break;
    case 0xd:
      puVar10 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__;
      break;
    default:
      puVar10 = (undefined8 *)StringLiteral_9240;
      if ((uVar6 & 0xffff) != 0x5c) goto switchD_0185cbbc_caseD_b;
    }
  }
  else {
    uVar3 = uVar6 & 0xffff;
    puVar10 = (undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_EaseAttachBurst__;
    if (((uVar3 != 0x85) &&
        (puVar10 = (undefined8 *)
                   Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_get_length__
        , uVar3 != 0x2028)) && (puVar10 = (undefined8 *)PTR_DAT_033f6888, uVar3 != 0x2029))
    goto switchD_0185cbbc_caseD_b;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *puVar10;
LAB_0185cdf4:
  iVar9 = unaff_x19[0x1e];
  iVar5 = iVar9 - unaff_x19[10];
  if (iVar5 != 0 && (int)unaff_x19[10] <= iVar9) {
    lVar11 = *(long *)(unaff_x19 + 8);
    iVar9 = 0;
    if (*(char *)(unaff_x19 + 0x17) != '\0') {
      iVar9 = 6;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = iVar9 + iVar5;
    auVar15._8_4_ = iVar1;
    auVar15._0_8_ = lVar11;
    auVar15._12_4_ = 0;
    if (*(int *)(lVar11 + 0x18) < iVar1) {
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar15 = FUN_0182c0c8(*(long *)(unaff_x19 + 0xc),iVar1,6,0);
      *(long *)(unaff_x19 + 8) = auVar15._0_8_;
    }
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(0,auVar15._8_8_,auVar15._0_8_);
    }
    FUN_015ff62c(*(long *)(unaff_x19 + 0xe),unaff_x19[10],auVar15._0_8_,iVar9,iVar5,0);
    uVar14 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x12);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar11 = FUN_0184a8a8(uVar12,uVar14,iVar9,iVar5,uVar13);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar15 = FUN_017e7d94(lVar11,0,0);
    uVar7 = FUN_016a1974();
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar15;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2);
      return;
    }
    FUN_016a1990();
    iVar9 = unaff_x19[0x1e];
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  unaff_x19[10] = iVar9 + 1;
  if (*(char *)(unaff_x19 + 0x17) != '\0') {
    uVar13 = *(undefined8 *)(unaff_x19 + 8);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x12);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar11 = FUN_0184a8a8(uVar12,uVar13,0,6,uVar14);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar15 = FUN_017e7d94(lVar11,0,0);
    uVar7 = FUN_016a1974();
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar15;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2);
      return;
    }
    FUN_016a1990();
    *(undefined1 *)(unaff_x19 + 0x17) = 0;
    goto LAB_0185cf9c;
  }
  uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x12);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  param_1 = FUN_0184a7e4(uVar12,uVar13,uVar14);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  goto code_r0x0185cf70;
}


