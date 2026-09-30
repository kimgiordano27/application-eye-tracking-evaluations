/*
FUNCTION_NAME: OVRDebugInfo$$ComponentComposition
ENTRY_POINT: 033bef10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void OVRDebugInfo__ComponentComposition(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x25;
  long *unaff_x26;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if ((unaff_x21 == (long *)0x0) || (*unaff_x21 != param_1)) {
    if ((((unaff_x22 == (long *)0x0) || (*unaff_x22 != *(long *)PTR_DAT_04230670)) &&
        (((unaff_x21 == (long *)0x0 || (*unaff_x21 != *(long *)PTR_DAT_04230670)) &&
         ((unaff_x22 == (long *)0x0 || (*unaff_x22 != *(long *)PTR_DAT_04230108)))))) &&
       ((unaff_x21 == (long *)0x0 || (*unaff_x21 != *(long *)PTR_DAT_04230108)))) {
      if (((((unaff_x22 != (long *)0x0) && (*unaff_x22 == *(long *)PTR_DAT_042304e0)) ||
           ((unaff_x21 != (long *)0x0 && (*unaff_x21 == *(long *)PTR_DAT_042304e0)))) ||
          ((unaff_x22 != (long *)0x0 && (*unaff_x22 == *(long *)PTR_DAT_042304a8)))) ||
         ((unaff_x21 != (long *)0x0 && (*unaff_x21 == *(long *)PTR_DAT_042304a8)))) {
        if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_033bf580;
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
        }
        dVar13 = (double)FUN_03253790();
        FUN_03295500(0);
        dVar14 = (double)FUN_03253790();
        if (unaff_w20 < 0x2b) {
          if (unaff_w20 < 0xd) {
            if (unaff_w20 == 0) goto LAB_033bf620;
            if (unaff_w20 == 0xc) goto LAB_033bf5d8;
          }
          else {
            if (unaff_w20 == 0x1a) goto LAB_033bf610;
            if (unaff_w20 == 0x2a) goto LAB_033bf3d0;
          }
          goto LAB_033bf64c;
        }
        if (unaff_w20 < 0x42) {
          if (unaff_w20 != 0x3f) {
            if (unaff_w20 == 0x41) {
LAB_033bf5d8:
              dVar13 = dVar13 / dVar14;
              goto OVRGazePointer__get_SelectionProgress;
            }
            goto LAB_033bf64c;
          }
LAB_033bf620:
          dVar13 = dVar13 + dVar14;
        }
        else if (unaff_w20 == 0x45) {
LAB_033bf610:
          dVar13 = dVar13 * dVar14;
        }
        else {
          if (unaff_w20 != 0x49) goto LAB_033bf64c;
LAB_033bf3d0:
          dVar13 = dVar13 - dVar14;
        }
OVRGazePointer__get_SelectionProgress:
        in_stack_00000008 = dVar13;
        lVar6 = *(long *)PTR_DAT_042304a8;
        goto LAB_033bf454;
      }
      if (unaff_x22 == (long *)0x0) {
        lVar6 = *(long *)PTR_DAT_042305a8;
        lVar7 = *(long *)PTR_DAT_04230478;
        lVar8 = *(long *)PTR_DAT_042305d0;
        lVar9 = *(long *)PTR_DAT_042306a0;
        lVar10 = *(long *)PTR_DAT_04230588;
        lVar11 = *(long *)PTR_DAT_042303a0;
LAB_033bf4a8:
        if ((unaff_x21 == (long *)0x0) ||
           ((((lVar12 = *unaff_x21, lVar12 != *(long *)PTR_DAT_0422fd80 && (lVar12 != lVar6)) &&
             ((lVar12 != lVar7 && (((lVar12 != lVar8 && (lVar12 != lVar9)) && (lVar12 != lVar10)))))
             ) && (lVar12 != lVar11)))) goto LAB_033bf64c;
      }
      else {
        lVar12 = *unaff_x22;
        if (((((lVar12 != *(long *)PTR_DAT_0422fd80) &&
              (lVar6 = *(long *)PTR_DAT_042305a8, lVar12 != lVar6)) &&
             (lVar7 = *(long *)PTR_DAT_04230478, lVar12 != lVar7)) &&
            ((lVar8 = *(long *)PTR_DAT_042305d0, lVar12 != lVar8 &&
             (lVar9 = *(long *)PTR_DAT_042306a0, lVar12 != lVar9)))) &&
           ((lVar10 = *(long *)PTR_DAT_04230588, lVar12 != lVar10 &&
            (lVar11 = *(long *)PTR_DAT_042303a0, lVar12 != lVar11)))) goto LAB_033bf4a8;
      }
      if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_033bf580;
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      lVar6 = FUN_03252aa8();
      FUN_03295500(0);
      lVar7 = FUN_03252aa8();
      if (0x2a < unaff_w20) {
        if (unaff_w20 < 0x42) {
          if (unaff_w20 != 0x3f) {
            if (unaff_w20 == 0x41) {
LAB_033bf664:
              lVar8 = 0;
              if (lVar7 != 0) {
                lVar8 = lVar6 / lVar7;
              }
              goto LAB_033bf690;
            }
            goto LAB_033bf64c;
          }
LAB_033bf684:
          lVar8 = lVar7 + lVar6;
        }
        else if (unaff_w20 == 0x45) {
LAB_033bf674:
          lVar8 = lVar7 * lVar6;
        }
        else {
          if (unaff_w20 != 0x49) goto LAB_033bf64c;
LAB_033bf600:
          lVar8 = lVar6 - lVar7;
        }
LAB_033bf690:
        in_stack_00000008 = lVar8;
        lVar6 = *(long *)PTR_DAT_04230478;
        goto LAB_033bf454;
      }
      if (unaff_w20 < 0xd) {
        if (unaff_w20 == 0) goto LAB_033bf684;
        if (unaff_w20 == 0xc) goto LAB_033bf664;
      }
      else {
        if (unaff_w20 == 0x1a) goto LAB_033bf674;
        if (unaff_w20 == 0x2a) goto LAB_033bf600;
      }
    }
    else {
      if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_033bf580;
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      auVar15 = FUN_03253964();
      uVar4 = auVar15._8_8_;
      uVar3 = auVar15._0_8_;
      FUN_03295500(0);
      auVar15 = FUN_03253964();
      puVar1 = PTR_DAT_04230108;
      uVar5 = auVar15._8_8_;
      uVar2 = auVar15._0_8_;
      if (0x2a < unaff_w20) {
        if (unaff_w20 < 0x42) {
          if (unaff_w20 != 0x3f) {
            if (unaff_w20 == 0x41) {
LAB_033bf328:
              if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              _in_stack_00000008 = FUN_03330670(uVar3,uVar4,uVar2,uVar5,0);
              goto FUN_033bf444;
            }
            goto LAB_033bf64c;
          }
LAB_033bf414:
          if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          _in_stack_00000008 = FUN_03330458(uVar3,uVar4,uVar2,uVar5,0);
        }
        else if (unaff_w20 == 0x45) {
LAB_033bf3e0:
          if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          _in_stack_00000008 = FUN_033305c0(uVar3,uVar4,uVar2,uVar5,0);
        }
        else {
          if (unaff_w20 != 0x49) goto LAB_033bf64c;
LAB_033bf288:
          if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          _in_stack_00000008 = FUN_0333050c(uVar3,uVar4,uVar2,uVar5,0);
        }
FUN_033bf444:
        lVar6 = *(long *)puVar1;
        goto LAB_033bf454;
      }
      if (unaff_w20 < 0xd) {
        if (unaff_w20 == 0) goto LAB_033bf414;
        if (unaff_w20 == 0xc) goto LAB_033bf328;
      }
      else {
        if (unaff_w20 == 0x1a) goto LAB_033bf3e0;
        if (unaff_w20 == 0x2a) goto LAB_033bf288;
      }
    }
LAB_033bf64c:
    uVar3 = 0;
    *unaff_x19 = 0;
  }
  else {
    if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) {
LAB_033bf580:
      *unaff_x19 = 0;
    }
    else {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar15 = FUN_0336ef48();
      uVar4 = auVar15._8_8_;
      uVar3 = auVar15._0_8_;
      auVar15 = FUN_0336ef48();
      uVar5 = auVar15._8_8_;
      uVar2 = auVar15._0_8_;
      if (unaff_w20 < 0x2b) {
        if (unaff_w20 < 0xd) {
          if (unaff_w20 == 0) goto LAB_033bf388;
          if (unaff_w20 == 0xc) goto LAB_033bf2dc;
        }
        else {
          if (unaff_w20 == 0x1a) goto LAB_033bf35c;
          if (unaff_w20 == 0x2a) goto LAB_033bf244;
        }
        goto LAB_033bf64c;
      }
      if (unaff_w20 < 0x42) {
        if (unaff_w20 == 0x3f) {
LAB_033bf388:
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          _in_stack_00000008 = FUN_03765e4c(uVar3,uVar4,uVar2,uVar5,0);
        }
        else {
          if (unaff_w20 != 0x41) goto LAB_033bf64c;
LAB_033bf2dc:
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          _in_stack_00000008 = FUN_0376630c(uVar3,uVar4,uVar2,uVar5,0);
        }
      }
      else if (unaff_w20 == 0x45) {
LAB_033bf35c:
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        _in_stack_00000008 = FUN_03765f04(uVar3,uVar4,uVar2,uVar5,0);
      }
      else {
        if (unaff_w20 != 0x49) goto LAB_033bf64c;
LAB_033bf244:
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        _in_stack_00000008 = FUN_03764294(uVar3,uVar4,uVar2,uVar5,0);
      }
      lVar6 = *unaff_x26;
LAB_033bf454:
      uVar3 = thunk_FUN_01c49334(lVar6,&stack0x00000008);
      *unaff_x19 = uVar3;
    }
    uVar3 = 1;
  }
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


