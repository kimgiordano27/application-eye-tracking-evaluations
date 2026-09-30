/*
FUNCTION_NAME: OVRGazePointer$$Update
ENTRY_POINT: 033bf894
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_gaze_interaction_hits_2
*/


void OVRGazePointer__Update(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  long lVar14;
  code *pcVar15;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x29;
  undefined8 extraout_d0;
  undefined1 auVar16 [16];
  
  uVar7 = 0;
  if (param_1 != 0) {
    thunk_FUN_01c5d21c(param_1,0);
    auVar16 = FUN_0335fe14();
    param_2 = auVar16._8_8_;
    plVar9 = auVar16._0_8_;
    uVar7 = 0;
    if (plVar9 != (long *)0x0) {
      auVar16 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      param_2 = auVar16._8_8_;
      uVar7 = auVar16._0_8_;
      if ((uVar7 & 1) != 0) {
        FUN_0335e7b0(0);
        (**(code **)(*plVar9 + 0x178))(plVar9);
        return;
      }
    }
  }
  puVar6 = PTR_DAT_04230358;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = uVar7;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar7;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar7;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = uVar7;
  switch(*(undefined4 *)(unaff_x20 + 0x30)) {
  case 5:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    auVar16._8_8_ = uVar11;
    auVar16._0_8_ = uVar11;
    if (unaff_x19 != (long *)0x0) {
      pcVar15 = *(code **)(*unaff_x19 + 0x528);
      goto LAB_033bfe2c;
    }
    break;
  case 6:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
LAB_033bf994:
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      auVar16 = FUN_03252aa8(plVar9,uVar11,0);
      if (unaff_x19 == (long *)0x0) break;
      lVar14 = *unaff_x19;
    }
    else {
      lVar14 = *plVar9;
      if (lVar14 == *(long *)PTR_DAT_0422fd80) {
        auVar16 = thunk_FUN_01c49834(plVar9);
        if (unaff_x19 != (long *)0x0) {
          pcVar15 = *(code **)(*unaff_x19 + 0x2d8);
          goto LAB_033bfb1c;
        }
        break;
      }
      if (lVar14 != *(long *)PTR_DAT_04230478) {
        if (lVar14 == *(long *)PTR_DAT_04230670) {
          auVar16 = thunk_FUN_01c49834(plVar9);
          if (unaff_x19 == (long *)0x0) break;
          pcVar15 = *(code **)(*unaff_x19 + 0x308);
          goto LAB_033bfe2c;
        }
        if (lVar14 == *(long *)PTR_DAT_04230358) {
          puVar10 = (undefined8 *)thunk_FUN_01c49834(plVar9);
          uVar12 = *puVar10;
          uVar11 = *(undefined8 *)puVar6;
          *(undefined8 *)(unaff_x29 + -0x18) = puVar10[1];
          *(undefined8 *)(unaff_x29 + -0x20) = uVar12;
          auVar16 = thunk_FUN_01c49334(uVar11,unaff_x29 + -0x20);
          if (unaff_x19 == (long *)0x0) break;
          pcVar15 = *(code **)(*unaff_x19 + 0x518);
          goto LAB_033bfe2c;
        }
        goto LAB_033bf994;
      }
      auVar16 = thunk_FUN_01c49834(plVar9);
      if (unaff_x19 == (long *)0x0) break;
      lVar14 = *unaff_x19;
    }
    pcVar15 = *(code **)(lVar14 + 0x2f8);
LAB_033bfe2c:
    (*pcVar15)();
    return;
  case 7:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      if (lVar14 == *(long *)PTR_DAT_04230108) {
        auVar16 = thunk_FUN_01c49834(plVar9);
        if (unaff_x19 != (long *)0x0) {
          pcVar15 = *(code **)(*unaff_x19 + 0x398);
          goto LAB_033bfd90;
        }
        break;
      }
      if (lVar14 == *(long *)PTR_DAT_042304a8) {
        auVar16 = thunk_FUN_01c49834(plVar9);
        if (unaff_x19 == (long *)0x0) break;
        lVar14 = *unaff_x19;
        uVar11 = *auVar16._0_8_;
        goto OVRGazePointer__SetCursorRay;
      }
      if (lVar14 == *(long *)PTR_DAT_042304e0) {
        auVar16 = thunk_FUN_01c49834(plVar9);
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x318))(*auVar16._0_8_);
          return;
        }
        break;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    uVar11 = FUN_03253790(plVar9,uVar11,0);
    auVar16._8_8_ = extraout_x1;
    auVar16._0_8_ = uVar11;
    if (unaff_x19 != (long *)0x0) {
      lVar14 = *unaff_x19;
      uVar11 = extraout_d0;
OVRGazePointer__SetCursorRay:
      (**(code **)(lVar14 + 0x328))(uVar11);
      return;
    }
    break;
  case 8:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    auVar16._8_8_ = uVar11;
    auVar16._0_8_ = uVar11;
    if (unaff_x19 != (long *)0x0) {
      pcVar15 = *(code **)(*unaff_x19 + 0x2c8);
      goto LAB_033bfe2c;
    }
    break;
  case 9:
    uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    auVar16 = FUN_0325057c(uVar11,uVar12,0);
    if (unaff_x19 != (long *)0x0) {
      pcVar15 = *(code **)(*unaff_x19 + 0x338);
LAB_033bfb1c:
      (*pcVar15)();
      return;
    }
    break;
  case 10:
    if (unaff_x19 != (long *)0x0) {
      pcVar15 = *(code **)(*unaff_x19 + 0x288);
LAB_033bfb4c:
      (*pcVar15)();
      return;
    }
    break;
  case 0xb:
    auVar16 = auVar3;
    if (unaff_x19 != (long *)0x0) {
      pcVar15 = *(code **)(*unaff_x19 + 0x298);
      goto LAB_033bfb4c;
    }
    break;
  case 0xc:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)UnityEngine_ISubsystemDescriptor_TypeInfo))
    {
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      auVar16 = FUN_03253e3c(plVar9,uVar11,0);
      if (unaff_x19 != (long *)0x0) {
        pcVar15 = *(code **)(*unaff_x19 + 0x3a8);
        goto LAB_033bfe2c;
      }
    }
    else {
      auVar16 = thunk_FUN_01c49834(plVar9);
      if (unaff_x19 != (long *)0x0) {
        pcVar15 = *(code **)(*unaff_x19 + 0x3b8);
        goto LAB_033bfd90;
      }
    }
    break;
  case 0xd:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    auVar16._8_8_ = uVar11;
    auVar16._0_8_ = uVar11;
    if (unaff_x19 != (long *)0x0) {
      pcVar15 = *(code **)(*unaff_x19 + 0x2b8);
      goto LAB_033bfe2c;
    }
    break;
  case 0xe:
    auVar16 = auVar2;
    if (unaff_x19 != (long *)0x0) {
      lVar14 = *(long *)(unaff_x20 + 0x38);
      if (lVar14 != 0) {
        uVar11 = *(undefined8 *)PTR_DAT_0422f930;
        lVar8 = thunk_FUN_01c495e4(lVar14,uVar11);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar14,uVar11);
        }
      }
      pcVar15 = *(code **)(*unaff_x19 + 0x4f8);
      goto LAB_033bfe2c;
    }
    break;
  case 0xf:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      *(undefined4 *)(unaff_x29 + -0x30) = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2;
      auVar16 = auVar4 << 0x40;
    }
    else {
      lVar14 = *(long *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                        + 0x40);
      if (*plVar9 != lVar14) {
LAB_033bfef4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar9,lVar14);
      }
      auVar16 = thunk_FUN_01c4983c(plVar9,*(long *)
                                           Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                                   ,unaff_x29 + -0x40);
    }
    if (unaff_x19 != (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x30);
      pcVar15 = *(code **)(*unaff_x19 + 0x4d8);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x30);
      (*pcVar15)();
      return;
    }
    break;
  case 0x10:
    auVar16 = auVar1;
    if (unaff_x19 != (long *)0x0) {
      plVar9 = *(long **)(unaff_x20 + 0x38);
      if (plVar9 != (long *)0x0) {
        lVar14 = *(long *)PTR_DAT_04230e70;
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
            lVar14)) goto LAB_033bfef4;
      }
      pcVar15 = *(code **)(*unaff_x19 + 0x508);
      goto LAB_033bfe2c;
    }
    break;
  case 0x11:
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x28) = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2;
      auVar16 = auVar5 << 0x40;
    }
    else {
      lVar14 = *(long *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<string,_ReportSection>_get_Value__
                        + 0x40);
      if (*plVar9 != lVar14) goto LAB_033bfef4;
      auVar16 = thunk_FUN_01c4983c();
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar15 = *(code **)(*unaff_x19 + 0x4e8);
LAB_033bfd90:
      (*pcVar15)();
      return;
    }
    break;
  default:
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x20 + 0x30);
    uVar11 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_KeyValuePair<int,_SimpleTuple<Vector3,_Vector3,_List<int>>>_get_Value__
                               );
    uVar11 = thunk_FUN_01c49334(uVar11,unaff_x29 + -0x20);
    uVar12 = thunk_FUN_01c273e8(UnityEngine_Rendering_Volume___TypeInfo);
    uVar13 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_List_Enumerator<PhotonPlayerHealth_PlayerKillStats>_get_Current__
                               );
    uVar11 = FUN_03373998(uVar12,uVar11,uVar13,0);
    uVar12 = thunk_FUN_01c273e8(
                               Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_actionKey__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar11,uVar12);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4(auVar16._0_8_,auVar16._8_8_);
}


