/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 071c3c64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


long Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w26;
  ulong unaff_x28;
  long lVar15;
  
  plVar4 = (long *)FUN_07192b6c();
  if ((plVar4 == (long *)0x0) ||
     (uVar5 = (**(code **)(*plVar4 + 0x408))(plVar4,*(undefined8 *)(*plVar4 + 0x410)),
     unaff_x19 == (long *)0x0)) goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
  uVar6 = (**(code **)(*unaff_x19 + 0x408))();
  uVar7 = FUN_071c393c(uVar5,uVar6);
  if ((uVar7 & 1) == 0) {
    if ((unaff_x28 & 1) != 0) {
      thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
      uVar5 = thunk_FUN_03d2ef40();
      puVar11 = PTR_DAT_092144e8;
LAB_071c4340:
      uVar6 = thunk_FUN_03d1e194(puVar11);
      FUN_070cb7ec(uVar5,uVar6,0);
LAB_071c4354:
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_09214500);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar5,uVar6);
    }
LAB_071c4190:
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
    lVar9 = (**(code **)(*unaff_x19 + 0x3a8))();
    uVar7 = FUN_0709de88();
    if ((lVar9 == 0) || (lVar8 == 0))
    goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
    iVar12 = *(int *)(lVar9 + 0x18);
    if (unaff_x21 == 0) {
      if ((uVar7 & 1) == 0) {
        iVar13 = *(int *)(lVar8 + 0x18);
        if (iVar12 + 1 != iVar13) goto joined_r0x071c3d5c;
      }
      else {
        iVar13 = *(int *)(lVar8 + 0x18);
        if (iVar12 != iVar13) goto LAB_071c3d38;
      }
    }
    else {
      iVar13 = *(int *)(lVar8 + 0x18);
      if ((uVar7 & 1) != 0) {
LAB_071c3d38:
        iVar13 = iVar13 + 1;
      }
joined_r0x071c3d5c:
      if (iVar12 != iVar13) {
        if ((unaff_x28 & 1) != 0) {
          thunk_FUN_03d1e194(PTR_DAT_091fc7c8);
          uVar5 = thunk_FUN_03d2ef40();
          uVar6 = thunk_FUN_03d1e194(PTR_DAT_092144f0);
          FUN_070a2864(uVar5,uVar6,0);
          goto LAB_071c4354;
        }
        goto LAB_071c4190;
      }
    }
    lVar10 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092144d8);
    uVar7 = FUN_0709de88();
    if (unaff_x21 == 0) {
      if ((uVar7 & 1) == 0) {
        iVar12 = *(int *)(lVar9 + 0x18);
        iVar13 = (int)*(undefined8 *)(lVar8 + 0x18);
        if (iVar12 + 1 == iVar13) {
          if (iVar12 == -1) goto LAB_071c417c;
          plVar4 = *(long **)(lVar8 + 0x20);
          if (plVar4 == (long *)0x0) goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
          uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
          uVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
          unaff_w26 = FUN_071c37e0(uVar5,uVar6,0);
          if (0 < *(int *)(lVar9 + 0x18)) {
            uVar7 = 0;
            do {
              uVar1 = uVar7 + 1;
              if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_071c417c;
              plVar4 = *(long **)(lVar8 + 0x28 + uVar7 * 8);
              if (plVar4 == (long *)0x0)
              goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
              uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
              if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_071c417c;
              plVar4 = *(long **)(lVar9 + 0x20 + uVar7 * 8);
              if (plVar4 == (long *)0x0)
              goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
              uVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
              uVar2 = FUN_071c3648(uVar5,uVar6);
              unaff_w26 = unaff_w26 & uVar2;
              uVar7 = uVar1;
            } while ((long)uVar1 < (long)*(int *)(lVar9 + 0x18));
          }
        }
        else if (0 < iVar12) {
          if (iVar13 != 0) {
            lVar15 = 0;
            do {
              plVar4 = *(long **)(lVar8 + 0x20 + lVar15 * 8);
              if (plVar4 == (long *)0x0)
              goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
              uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
              if (*(uint *)(lVar9 + 0x18) <= (uint)lVar15) break;
              plVar4 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
              if (plVar4 == (long *)0x0)
              goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
              uVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
              uVar2 = FUN_071c3648(uVar5,uVar6);
              unaff_w26 = unaff_w26 & uVar2;
              if (*(int *)(lVar9 + 0x18) <= (int)((uint)lVar15 + 1)) goto joined_r0x071c4188;
              lVar15 = lVar15 + 1;
            } while ((uint)lVar15 < *(uint *)(lVar8 + 0x18));
          }
          goto LAB_071c417c;
        }
        goto joined_r0x071c4188;
      }
      iVar12 = (int)*(undefined8 *)(lVar8 + 0x18);
      if (iVar12 + 1 == *(int *)(lVar9 + 0x18)) {
        if (iVar12 == -1) goto LAB_071c417c;
        plVar4 = *(long **)(lVar9 + 0x20);
        if ((plVar4 == (long *)0x0) ||
           (lVar15 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
           lVar15 == 0)) goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
        uVar7 = FUN_07192630(lVar15,0);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_071c417c;
          plVar4 = *(long **)(lVar9 + 0x20);
          if ((plVar4 == (long *)0x0) ||
             (lVar15 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
             lVar15 == 0)) goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
          uVar2 = FUN_07192108(lVar15,0);
          uVar2 = ~uVar2 & 1;
        }
        else {
          uVar2 = 0;
        }
        uVar14 = *(uint *)(lVar8 + 0x18);
        uVar2 = unaff_w26 & uVar2;
        if (0 < (int)uVar14) {
          lVar15 = 0;
          do {
            if (uVar14 <= (uint)lVar15) goto LAB_071c417c;
            plVar4 = *(long **)(lVar8 + 0x20 + lVar15 * 8);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            uVar14 = (uint)lVar15 + 1;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_071c417c;
            plVar4 = *(long **)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            uVar3 = FUN_071c3648(uVar5,uVar6);
            uVar14 = *(uint *)(lVar8 + 0x18);
            uVar2 = uVar3 & uVar2;
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < (int)uVar14);
        }
        if (lVar10 == 0) goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
        *(undefined1 *)(lVar10 + 0x20) = 1;
        goto joined_r0x071c4280;
      }
      if (0 < *(int *)(lVar9 + 0x18)) {
        if (iVar12 != 0) {
          lVar15 = 0;
          unaff_w26 = 1;
          do {
            plVar4 = *(long **)(lVar8 + 0x20 + lVar15 * 8);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            if (*(uint *)(lVar9 + 0x18) <= (uint)lVar15) break;
            plVar4 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            uVar2 = FUN_071c3648(uVar5,uVar6);
            unaff_w26 = unaff_w26 & uVar2;
            if (*(int *)(lVar9 + 0x18) <= (int)((uint)lVar15 + 1)) goto joined_r0x071c4188;
            lVar15 = lVar15 + 1;
          } while ((uint)lVar15 < *(uint *)(lVar8 + 0x18));
        }
LAB_071c417c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
    }
    else {
      uVar5 = FUN_03d9f2a8();
      if ((uVar7 & 1) == 0) {
        uVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
        unaff_w26 = FUN_071c37e0(uVar5,uVar6,1);
        if (0 < *(int *)(lVar9 + 0x18)) {
          lVar15 = 0;
          do {
            if (*(uint *)(lVar8 + 0x18) <= (uint)lVar15) goto LAB_071c417c;
            plVar4 = *(long **)(lVar8 + 0x20 + lVar15 * 8);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            if (*(uint *)(lVar9 + 0x18) <= (uint)lVar15) goto LAB_071c417c;
            plVar4 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            uVar2 = FUN_071c3648(uVar5,uVar6);
            lVar15 = lVar15 + 1;
            unaff_w26 = unaff_w26 & uVar2;
          } while ((int)lVar15 < *(int *)(lVar9 + 0x18));
        }
      }
      else {
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_071c417c;
        plVar4 = *(long **)(lVar9 + 0x20);
        if (plVar4 == (long *)0x0) goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
        uVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
        unaff_w26 = FUN_071c3648(uVar5,uVar6);
        if (1 < *(int *)(lVar9 + 0x18)) {
          lVar15 = 0;
          do {
            uVar2 = (uint)lVar15;
            if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_071c417c;
            plVar4 = *(long **)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            if (*(uint *)(lVar9 + 0x18) <= uVar2 + 1) goto LAB_071c417c;
            plVar4 = *(long **)(lVar9 + 0x28 + lVar15 * 8);
            if (plVar4 == (long *)0x0)
            goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
            uVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            uVar2 = FUN_071c3648(uVar5,uVar6);
            lVar15 = lVar15 + 1;
            unaff_w26 = unaff_w26 & uVar2;
          } while ((int)lVar15 + 1 < *(int *)(lVar9 + 0x18));
        }
        if (lVar10 == 0) goto Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start;
        *(undefined1 *)(lVar10 + 0x20) = 1;
      }
joined_r0x071c4188:
      uVar2 = unaff_w26 & 1;
joined_r0x071c4280:
      if (uVar2 == 0) {
        if ((unaff_x28 & 1) != 0) {
          thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
          uVar5 = thunk_FUN_03d2ef40();
          puVar11 = PTR_DAT_09214508;
          goto LAB_071c4340;
        }
        goto LAB_071c4190;
      }
    }
    lVar8 = FUN_03d7a710();
    if (lVar8 == 0) {
      if (lVar10 != 0) {
Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__set_Start:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
    }
    else {
      *(long **)(lVar8 + 0x60) = unaff_x19;
      thunk_FUN_03d1023c();
      if (lVar10 != 0) {
        *(long *)(lVar8 + 0x68) = lVar10;
        thunk_FUN_03d1023c((long *)(lVar8 + 0x68),lVar10);
      }
    }
  }
  return lVar8;
}


