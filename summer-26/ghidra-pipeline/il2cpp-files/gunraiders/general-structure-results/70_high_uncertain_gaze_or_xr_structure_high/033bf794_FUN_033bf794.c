/*
FUNCTION_NAME: FUN_033bf794
ENTRY_POINT: 033bf794
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;keyword_support
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_033bf794(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 extraout_d0;
  undefined1 auVar14 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  if ((DAT_04533818 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04230358);
    FUN_01c5d288(PTR_DAT_0422f930);
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(UnityEngine_ISubsystemDescriptor_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230108);
    FUN_01c5d288(PTR_DAT_042304a8);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_04230478);
    FUN_01c5d288(
                Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                );
    FUN_01c5d288(Method_System_Collections_Generic_KeyValuePair<string,_ReportSection>_get_Value__);
    FUN_01c5d288(PTR_DAT_042304e0);
    FUN_01c5d288(PTR_DAT_04230670);
    auVar14 = FUN_01c5d288(PTR_DAT_04230e70);
    DAT_04533818 = 1;
  }
  puVar9 = &local_a0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar14._8_8_;
    auVar14 = auVar2 << 0x40;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar7 = thunk_FUN_01c5d21c(*(long *)(param_1 + 0x38),0);
      auVar14 = FUN_0335fe14(param_3,uVar7,0);
      plVar8 = auVar14._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar14._8_8_;
      auVar14 = auVar3 << 0x40;
      if ((plVar8 != (long *)0x0) &&
         (auVar14 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)),
         (auVar14._0_8_ & 1) != 0)) {
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        uVar7 = FUN_0335e7b0(0);
        (**(code **)(*plVar8 + 0x178))(plVar8,param_2,uVar13,uVar7,*(undefined8 *)(*plVar8 + 0x180))
        ;
        return;
      }
    }
  }
  puVar6 = PTR_DAT_04230358;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 5:
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = plVar8;
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x528);
      uVar7 = *(undefined8 *)(*param_2 + 0x530);
      goto LAB_033bfe2c;
    }
    break;
  case 6:
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
LAB_033bf994:
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      auVar14 = FUN_03252aa8(plVar8,uVar7,0);
      plVar8 = auVar14._0_8_;
      if (param_2 == (long *)0x0) break;
      lVar11 = *param_2;
    }
    else {
      lVar11 = *plVar8;
      if (lVar11 == *(long *)PTR_DAT_0422fd80) {
        auVar14 = thunk_FUN_01c49834(plVar8);
        if (param_2 != (long *)0x0) {
          uVar1 = *auVar14._0_8_;
          pcVar12 = *(code **)(*param_2 + 0x2d8);
          uVar7 = *(undefined8 *)(*param_2 + 0x2e0);
          goto LAB_033bfb1c;
        }
        break;
      }
      if (lVar11 != *(long *)PTR_DAT_04230478) {
        if (lVar11 == *(long *)PTR_DAT_04230670) {
          auVar14 = thunk_FUN_01c49834(plVar8);
          if (param_2 == (long *)0x0) break;
          plVar8 = (long *)*auVar14._0_8_;
          pcVar12 = *(code **)(*param_2 + 0x308);
          uVar7 = *(undefined8 *)(*param_2 + 0x310);
          goto LAB_033bfe2c;
        }
        if (lVar11 == *(long *)PTR_DAT_04230358) {
          puVar9 = (undefined8 *)thunk_FUN_01c49834(plVar8);
          uStack_48 = puVar9[1];
          local_50 = *puVar9;
          auVar14 = thunk_FUN_01c49334(*(undefined8 *)puVar6,&local_50);
          plVar8 = auVar14._0_8_;
          if (param_2 == (long *)0x0) break;
          pcVar12 = *(code **)(*param_2 + 0x518);
          uVar7 = *(undefined8 *)(*param_2 + 0x520);
          goto LAB_033bfe2c;
        }
        goto LAB_033bf994;
      }
      auVar14 = thunk_FUN_01c49834(plVar8);
      if (param_2 == (long *)0x0) break;
      lVar11 = *param_2;
      plVar8 = (long *)*auVar14._0_8_;
    }
    pcVar12 = *(code **)(lVar11 + 0x2f8);
    uVar7 = *(undefined8 *)(lVar11 + 0x300);
LAB_033bfe2c:
    (*pcVar12)(param_2,plVar8,uVar7);
    return;
  case 7:
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      if (lVar11 == *(long *)PTR_DAT_04230108) {
        auVar14 = thunk_FUN_01c49834(plVar8);
        if (param_2 != (long *)0x0) {
          uVar7 = *auVar14._0_8_;
          local_98 = auVar14._0_8_[1];
          pcVar12 = *(code **)(*param_2 + 0x398);
          uVar13 = *(undefined8 *)(*param_2 + 0x3a0);
          goto LAB_033bfd90;
        }
        break;
      }
      if (lVar11 == *(long *)PTR_DAT_042304a8) {
        auVar14 = thunk_FUN_01c49834(plVar8);
        if (param_2 == (long *)0x0) break;
        lVar11 = *param_2;
        uVar7 = *auVar14._0_8_;
        goto OVRGazePointer__SetCursorRay;
      }
      if (lVar11 == *(long *)PTR_DAT_042304e0) {
        auVar14 = thunk_FUN_01c49834(plVar8);
        if (param_2 != (long *)0x0) {
          (**(code **)(*param_2 + 0x318))(*auVar14._0_8_,param_2,*(undefined8 *)(*param_2 + 800));
          return;
        }
        break;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    uVar7 = FUN_03253790(plVar8,uVar7,0);
    auVar14._8_8_ = extraout_x1;
    auVar14._0_8_ = uVar7;
    if (param_2 != (long *)0x0) {
      lVar11 = *param_2;
      uVar7 = extraout_d0;
OVRGazePointer__SetCursorRay:
      (**(code **)(lVar11 + 0x328))(uVar7,param_2,*(undefined8 *)(lVar11 + 0x330));
      return;
    }
    break;
  case 8:
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = plVar8;
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x2c8);
      uVar7 = *(undefined8 *)(*param_2 + 0x2d0);
      goto LAB_033bfe2c;
    }
    break;
  case 9:
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar13 = FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    auVar14 = FUN_0325057c(uVar7,uVar13,0);
    if (param_2 != (long *)0x0) {
      uVar1 = auVar14._0_4_ & 1;
      pcVar12 = *(code **)(*param_2 + 0x338);
      uVar7 = *(undefined8 *)(*param_2 + 0x340);
LAB_033bfb1c:
      (*pcVar12)(param_2,uVar1,uVar7);
      return;
    }
    break;
  case 10:
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x288);
      uVar7 = *(undefined8 *)(*param_2 + 0x290);
LAB_033bfb4c:
      (*pcVar12)(param_2,uVar7);
      return;
    }
    break;
  case 0xb:
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x298);
      uVar7 = *(undefined8 *)(*param_2 + 0x2a0);
      goto LAB_033bfb4c;
    }
    break;
  case 0xc:
    plVar8 = *(long **)(param_1 + 0x38);
    if ((plVar8 == (long *)0x0) || (*plVar8 != *(long *)UnityEngine_ISubsystemDescriptor_TypeInfo))
    {
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      auVar14 = FUN_03253e3c(plVar8,uVar7,0);
      plVar8 = auVar14._0_8_;
      if (param_2 != (long *)0x0) {
        pcVar12 = *(code **)(*param_2 + 0x3a8);
        uVar7 = *(undefined8 *)(*param_2 + 0x3b0);
        goto LAB_033bfe2c;
      }
    }
    else {
      auVar14 = thunk_FUN_01c49834(plVar8);
      if (param_2 != (long *)0x0) {
        uVar7 = *auVar14._0_8_;
        local_98 = auVar14._0_8_[1];
        pcVar12 = *(code **)(*param_2 + 0x3b8);
        uVar13 = *(undefined8 *)(*param_2 + 0x3c0);
        goto LAB_033bfd90;
      }
    }
    break;
  case 0xd:
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = plVar8;
    if (param_2 != (long *)0x0) {
      pcVar12 = *(code **)(*param_2 + 0x2b8);
      uVar7 = *(undefined8 *)(*param_2 + 0x2c0);
      goto LAB_033bfe2c;
    }
    break;
  case 0xe:
    if (param_2 != (long *)0x0) {
      lVar11 = *(long *)(param_1 + 0x38);
      if (lVar11 == 0) {
        plVar8 = (long *)0x0;
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_0422f930;
        plVar8 = (long *)thunk_FUN_01c495e4(lVar11,uVar7);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar11,uVar7);
        }
      }
      pcVar12 = *(code **)(*param_2 + 0x4f8);
      uVar7 = *(undefined8 *)(*param_2 + 0x500);
      goto LAB_033bfe2c;
    }
    break;
  case 0xf:
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar14._8_8_;
      auVar14 = auVar4 << 0x40;
    }
    else {
      lVar11 = *(long *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                        + 0x40);
      if (*plVar8 != lVar11) {
LAB_033bfef4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar8,lVar11);
      }
      auVar14 = thunk_FUN_01c4983c(plVar8,*(long *)
                                           Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                                   ,&local_70);
    }
    if (param_2 != (long *)0x0) {
      uStack_88 = uStack_68;
      local_90 = local_70;
      local_80 = local_60;
      uStack_48 = uStack_68;
      local_50 = local_70;
      local_40 = local_60;
      (**(code **)(*param_2 + 0x4d8))(param_2,&local_50,*(undefined8 *)(*param_2 + 0x4e0));
      return;
    }
    break;
  case 0x10:
    if (param_2 != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x38);
      if (plVar8 != (long *)0x0) {
        lVar11 = *(long *)PTR_DAT_04230e70;
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) goto LAB_033bfef4;
      }
      pcVar12 = *(code **)(*param_2 + 0x508);
      uVar7 = *(undefined8 *)(*param_2 + 0x510);
      goto LAB_033bfe2c;
    }
    break;
  case 0x11:
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      puVar9 = &local_58;
      local_58 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar14._8_8_;
      auVar14 = auVar5 << 0x40;
    }
    else {
      lVar11 = *(long *)(*(long *)
                          Method_System_Collections_Generic_KeyValuePair<string,_ReportSection>_get_Value__
                        + 0x40);
      if (*plVar8 != lVar11) goto LAB_033bfef4;
      auVar14 = thunk_FUN_01c4983c(plVar8,*(long *)
                                           Method_System_Collections_Generic_KeyValuePair<string,_ReportSection>_get_Value__
                                   ,puVar9);
    }
    if (param_2 != (long *)0x0) {
      uVar7 = *puVar9;
      pcVar12 = *(code **)(*param_2 + 0x4e8);
      uVar13 = *(undefined8 *)(*param_2 + 0x4f0);
LAB_033bfd90:
      (*pcVar12)(param_2,uVar7,local_98,uVar13);
      return;
    }
    break;
  default:
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x30));
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_KeyValuePair<int,_SimpleTuple<Vector3,_Vector3,_List<int>>>_get_Value__
                              );
    uVar7 = thunk_FUN_01c49334(uVar7,&local_50);
    uVar13 = thunk_FUN_01c273e8(UnityEngine_Rendering_Volume___TypeInfo);
    uVar10 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_List_Enumerator<PhotonPlayerHealth_PlayerKillStats>_get_Current__
                               );
    uVar7 = FUN_03373998(uVar13,uVar7,uVar10,0);
    uVar13 = thunk_FUN_01c273e8(
                               Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_actionKey__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,uVar13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4(auVar14._0_8_,auVar14._8_8_);
}


