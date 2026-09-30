/*
FUNCTION_NAME: Oculus.Interaction.ActiveStateGate$$get_CloseSelector
ENTRY_POINT: 0185cb5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_ActiveStateGate__get_CloseSelector(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x26;
  long *unaff_x27;
  undefined1 auVar14 [16];
  
  do {
    uVar7 = FUN_015fa29c(param_1,param_2,0);
    lVar10 = *(long *)(unaff_x19 + 0x14);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = *(uint *)(lVar10 + 0x18);
    uVar6 = (uint)uVar7;
    uVar2 = uVar6 & 0xffff;
    if ((int)uVar2 < (int)uVar4) {
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(char *)(lVar10 + (uVar7 & 0xffff) + 0x20) != '\0') goto LAB_0185cb90;
    }
    else {
LAB_0185cb90:
      if (0x5c < uVar2) {
        uVar3 = uVar6 & 0xffff;
        puVar9 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_EaseAttachBurst__;
        if (((uVar3 != 0x85) &&
            (puVar9 = (undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_get_length__
            , uVar3 != 0x2028)) && (puVar9 = (undefined8 *)PTR_DAT_033f6888, uVar3 != 0x2029))
        goto switchD_0185cbbc_caseD_b;
        goto FUN_0185cdec;
      }
      switch(uVar6 & 0xffff) {
      case 8:
        puVar9 = (undefined8 *)
                 Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Create__;
        break;
      case 9:
        puVar9 = (undefined8 *)StringLiteral_9269;
        break;
      case 10:
        puVar9 = (undefined8 *)PTR_DAT_033eb9c8;
        break;
      case 0xb:
switchD_0185cbbc_caseD_b:
        if (((int)uVar4 <= (int)uVar2) && (unaff_x19[0x16] != 1)) goto LAB_0185cf9c;
        if ((uVar6 & 0xffff) == 0x22) {
          puVar9 = (undefined8 *)StringLiteral_8337;
          if (unaff_x19[0x16] == 2) goto LAB_0185cca4;
          break;
        }
        if (((uVar6 & 0xffff) == 0x27) &&
           (puVar9 = (undefined8 *)StringLiteral_3139, unaff_x19[0x16] != 2)) break;
LAB_0185cca4:
        lVar10 = *(long *)(unaff_x19 + 8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar10 + 0x18) < 6) {
          if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = FUN_0182c0c8(*(long *)(unaff_x19 + 0xc),6,0,0);
          *(long *)(unaff_x19 + 8) = lVar10;
        }
        FUN_01865830(uVar7 & 0xffffffff,lVar10,0);
        *(undefined1 *)(unaff_x19 + 0x17) = 1;
        goto LAB_0185cdf4;
      case 0xc:
        puVar9 = (undefined8 *)Method_UnityEngine_Object_FindObjectsOfType<WavelengthMover>__;
        break;
      case 0xd:
        puVar9 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__;
        break;
      default:
        puVar9 = (undefined8 *)StringLiteral_9240;
        if ((uVar6 & 0xffff) != 0x5c) goto switchD_0185cbbc_caseD_b;
      }
FUN_0185cdec:
      *(undefined8 *)(unaff_x19 + 0x18) = *puVar9;
LAB_0185cdf4:
      iVar8 = unaff_x19[0x1e];
      iVar5 = iVar8 - unaff_x19[10];
      if (iVar5 != 0 && (int)unaff_x19[10] <= iVar8) {
        lVar10 = *(long *)(unaff_x19 + 8);
        iVar8 = 0;
        if (*(char *)(unaff_x19 + 0x17) != '\0') {
          iVar8 = 6;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar1 = iVar8 + iVar5;
        auVar14._8_4_ = iVar1;
        auVar14._0_8_ = lVar10;
        auVar14._12_4_ = 0;
        if (*(int *)(lVar10 + 0x18) < iVar1) {
          if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          auVar14 = FUN_0182c0c8(*(long *)(unaff_x19 + 0xc),iVar1,6,0);
          *(long *)(unaff_x19 + 8) = auVar14._0_8_;
        }
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(0,auVar14._8_8_,auVar14._0_8_);
        }
        FUN_015ff62c(*(long *)(unaff_x19 + 0xe),unaff_x19[10],auVar14._0_8_,iVar8,iVar5,0);
        uVar13 = *(undefined8 *)(unaff_x19 + 8);
        uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
        uVar12 = *(undefined8 *)(unaff_x19 + 0x12);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_0184a8a8(uVar11,uVar13,iVar8,iVar5,uVar12);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar14 = FUN_017e7d94(lVar10,0,0);
        uVar7 = FUN_016a1974();
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar14;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_010bbddc(unaff_x19 + 2);
          return;
        }
        FUN_016a1990();
        iVar8 = unaff_x19[0x1e];
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
      unaff_x19[10] = iVar8 + 1;
      if (*(char *)(unaff_x19 + 0x17) == '\0') {
        uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x12);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_0184a7e4(uVar11,uVar12,uVar13);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar14 = FUN_017e7d94(lVar10,0,0);
        uVar7 = FUN_016a1974();
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar14;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_010bbddc(unaff_x19 + 2);
          return;
        }
        FUN_016a1990();
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x19 + 8);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x12);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_0184a8a8(uVar11,uVar12,0,6,uVar13);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar14 = FUN_017e7d94(lVar10,0,0);
        uVar7 = FUN_016a1974();
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 3;
          *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar14;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_010bbddc(unaff_x19 + 2);
          return;
        }
        FUN_016a1990();
        *(undefined1 *)(unaff_x19 + 0x17) = 0;
      }
    }
LAB_0185cf9c:
    uVar2 = unaff_x19[0x1e] + 1;
    param_2 = (ulong)uVar2;
    param_1 = *(long *)(unaff_x19 + 0xe);
    unaff_x19[0x1e] = uVar2;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(param_1 + 0x10) <= (int)uVar2) {
      iVar8 = *(int *)(param_1 + 0x10) - unaff_x19[10];
      if (iVar8 != 0) {
        lVar10 = *(long *)(unaff_x19 + 8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar10 + 0x18) < iVar8) {
          if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          auVar14 = FUN_0182c0c8(*(long *)(unaff_x19 + 0xc),iVar8,0,0);
          lVar10 = auVar14._0_8_;
          param_1 = *(long *)(unaff_x19 + 0xe);
          *(long *)(unaff_x19 + 8) = lVar10;
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(lVar10,auVar14._8_8_,lVar10);
          }
        }
        FUN_015ff62c(param_1,unaff_x19[10],lVar10,0,iVar8,0);
        uVar13 = *(undefined8 *)(unaff_x19 + 8);
        uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
        uVar12 = *(undefined8 *)(unaff_x19 + 0x12);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_0184a8a8(uVar11,uVar13,0,iVar8,uVar12);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar14 = FUN_017e7d94(lVar10,0,0);
        uVar7 = FUN_016a1974();
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 4;
          *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar14;
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
  } while( true );
}


