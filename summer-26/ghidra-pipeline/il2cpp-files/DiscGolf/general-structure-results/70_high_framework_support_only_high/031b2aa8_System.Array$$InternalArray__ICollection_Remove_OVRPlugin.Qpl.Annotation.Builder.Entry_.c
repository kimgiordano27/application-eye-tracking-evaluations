/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 031b2aa8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar11;
  ulong in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  uVar11 = FUN_0635f58c(param_4,0);
  lVar10 = *(long *)(unaff_x24 + 0x10);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar10 + 0x20) = uVar11;
    *(undefined4 *)(lVar10 + 0x24) = param_2;
    *(undefined4 *)(lVar10 + 0x28) = param_3;
  }
  else {
    FUN_0409f624();
  }
  lVar10 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    FUN_0409ce84(0,0);
  }
  puVar3 = PTR_DAT_069fb990;
  *in_stack_00000018 = unaff_x24;
  LeanTween__value();
  lVar10 = *in_stack_00000010;
  if ((in_stack_00000008 & 0x100000000) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0634eb94(lVar10,0,0);
    if ((uVar6 & 1) != 0) {
LAB_031b2cd8:
      lVar10 = *in_stack_00000010;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06355200(lVar10,0);
      return;
    }
    if (unaff_x28 != 0) {
      uVar8 = FUN_0635fd00();
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar3);
      }
      uVar6 = FUN_063542dc(uVar8,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      lVar10 = FUN_0635fd00();
      if (lVar10 != 0) {
        lVar10 = FUN_0634bbcc(lVar10,0);
        *in_stack_00000010 = lVar10;
        LeanTween__value(in_stack_00000010,lVar10);
        lVar10 = *in_stack_00000010;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_0634eb94(lVar10,0,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        goto LAB_031b2cd8;
      }
    }
    goto LAB_031b31b0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(lVar10,0,0);
  if ((uVar6 & 1) != 0) {
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fb980);
    FUN_0634fa84(lVar10,*(undefined8 *)PTR_DAT_06a0bb28,0);
    *in_stack_00000010 = lVar10;
    LeanTween__value(in_stack_00000010,lVar10);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_063555a4(*in_stack_00000010,1,0);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b528);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b530);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc320);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0bb18);
    puVar4 = PTR_DAT_069fc748;
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc748);
    plVar7 = (long *)FUN_06347178(*(undefined8 *)PTR_DAT_06a0bb20,0);
    if (lVar10 == 0) goto LAB_031b31b0;
    if (plVar7 == (long *)0x0) {
LAB_031b2cb4:
      plVar7 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_069fc410 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_031b2cb4;
      if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_069fc410)
      {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_0631c1e0(lVar10,plVar7,0);
    if ((*in_stack_00000010 == 0) || (lVar10 = FUN_0634ee08(*in_stack_00000010,0), lVar10 == 0))
    goto LAB_031b31b0;
    FUN_0635e26c();
    if ((*in_stack_00000010 == 0) ||
       ((lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), unaff_x29 == 0 ||
        (lVar10 == 0)))) goto LAB_031b31b0;
    FUN_0631cb1c(lVar10,*(char *)(unaff_x29 + 0x359) == '\0',0);
    if ((*in_stack_00000010 == 0) ||
       (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b538), lVar10 == 0))
    goto LAB_031b31b0;
    FUN_063c35d0(lVar10,*(char *)(unaff_x29 + 0x359) == '\0',0);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0634ef7c(*in_stack_00000010,*(undefined4 *)(unaff_x29 + 0x2b0),0);
  }
  if (*in_stack_00000010 != 0) {
    uVar8 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc748);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar3);
    }
    uVar6 = FUN_063542dc(uVar8,0);
    if ((uVar6 & 1) == 0) {
      if (*in_stack_00000010 == 0) goto LAB_031b31b0;
      FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b530);
    }
    puVar4 = PTR_DAT_06a09130;
    if (*in_stack_00000010 != 0) {
      uVar8 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a09130);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar3);
      }
      uVar6 = FUN_063542dc(uVar8,0);
      if ((uVar6 & 1) == 0) {
        if (*in_stack_00000010 == 0) goto LAB_031b31b0;
        FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b528);
      }
      puVar5 = PTR_DAT_06a0b538;
      if (*in_stack_00000010 != 0) {
        uVar8 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b538);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        uVar6 = FUN_063542dc(uVar8,0);
        if ((uVar6 & 1) == 0) {
          if (*in_stack_00000010 == 0) goto LAB_031b31b0;
          FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc320);
        }
        if ((*in_stack_00000010 != 0) &&
           (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), lVar10 != 0)) {
          uVar8 = FUN_06324494(lVar10,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          uVar6 = FUN_0634eb94(uVar8,0,0);
          if ((uVar6 & 1) == 0) {
            lVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ffce8);
            FUN_063250bc(lVar10,0);
            if ((*in_stack_00000010 == 0) ||
               (lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), lVar9 == 0))
            goto LAB_031b31b0;
            FUN_06324564(lVar9,lVar10,0);
            if ((*in_stack_00000010 == 0) ||
               (lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar9 == 0))
            goto LAB_031b31b0;
            FUN_063c8034(lVar9,lVar10,0);
          }
          else {
            if ((*in_stack_00000010 == 0) ||
               (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), lVar10 == 0))
            goto LAB_031b31b0;
            lVar10 = FUN_06324494(lVar10,0);
          }
          if ((((*in_stack_00000010 != 0) &&
               (lVar9 = FUN_0634ee08(*in_stack_00000010,0), unaff_x28 != 0)) &&
              (FUN_0635d920(), lVar9 != 0)) &&
             ((FUN_0635d9f4(lVar9,0), lVar10 != 0 && (FUN_0632a63c(lVar10,0), unaff_x24 != 0)))) {
            uVar8 = FUN_040a10b0();
            FUN_063281f8(lVar10,uVar8,0);
            if (unaff_x23 != 0) {
              uVar8 = FUN_0409e848();
              FUN_063283fc(lVar10,uVar8,0);
              if (unaff_x22 != 0) {
                uVar8 = FUN_03fb5794();
                FUN_06329900(lVar10,uVar8,0);
                FUN_0632a704(lVar10,0);
                FUN_0632a644(lVar10,0);
                if ((*in_stack_00000010 != 0) &&
                   (lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar9 != 0)) {
                  FUN_063c8034(lVar9,0,0);
                  if ((*in_stack_00000010 != 0) &&
                     ((lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar9 != 0 &&
                      (FUN_063c8034(lVar9,lVar10,0), unaff_x29 != 0)))) {
                    if (*(char *)(unaff_x29 + 0x359) == '\0') {
                      return;
                    }
                    if ((*in_stack_00000010 != 0) &&
                       (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar10 != 0
                       )) {
                      FUN_063c35d0(lVar10,0,0);
                      if (*in_stack_00000010 != 0) {
                        FUN_0634f038(*in_stack_00000010,0,0);
                        if (*in_stack_00000010 != 0) {
                          FUN_0634f038(*in_stack_00000010,1,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031b31b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


