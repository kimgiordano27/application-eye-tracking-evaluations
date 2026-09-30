/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 01b6fc64
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01b6ff0c) */
/* WARNING: Removing unreachable block (ram,0x01b7006c) */

void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation>
               (long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long *unaff_x28;
  long unaff_x29;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  if (param_2 != (long *)0x0) {
    if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar6 + 0x130)) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
             lVar6) {
      param_2 = (long *)0x0;
    }
  }
  lVar6 = *unaff_x28;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar6 = *unaff_x28;
  }
  if ((**(long **)(lVar6 + 0xb8) != 0) &&
     (FUN_0296aad4(**(long **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_037f91f8),
     **(long **)(*unaff_x28 + 0xb8) != 0)) {
    FUN_0296ae14();
    while( true ) {
      lVar6 = *unaff_x28;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar6 = *unaff_x28;
      }
      lVar7 = **(long **)(lVar6 + 0xb8);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x20) < 1) {
        if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar7 = **(long **)(*unaff_x28 + 0xb8);
        if (lVar7 == 0) break;
      }
      lVar6 = FUN_0296afa4(lVar7,*(undefined8 *)PTR_DAT_037f9200);
      if (param_2 == (long *)0x0) break;
      lVar7 = param_2[3];
      *(undefined4 *)(param_2 + 3) = 0;
      *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
      if (0 < (int)lVar7) {
        FUN_02bf1354(param_2[2],0,(int)lVar7,0);
      }
      if (lVar6 == 0) break;
      FUN_01afbf48(lVar6,param_2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
      FUN_0270ae40(unaff_x29 + -0x38,param_2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
      while (uVar3 = FUN_022e1404(unaff_x29 + -0x20,
                                  *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x70)),
            (uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x29 + -0x10);
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0185daa4(lVar7);
        }
        lVar7 = thunk_FUN_01861ac0(uVar8,lVar7);
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0185daa4(lVar10);
        }
        if (lVar7 != 0) {
          lVar4 = thunk_FUN_01861ac0(lVar7,lVar10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(lVar7,lVar10);
          }
          lVar7 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
            thunk_FUN_0188fd20();
          }
          else {
            FUN_0270a444();
          }
        }
      }
      FUN_022e1400(unaff_x29 + -0x20,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x78));
      iVar2 = FUN_033f46c8(lVar6,0);
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          lVar7 = FUN_033f4af0(lVar6,iVar9,0);
          if ((unaff_x21 & 1) == 0) {
            if ((lVar7 == 0) || (lVar10 = FUN_033e6c58(lVar7,0), lVar10 == 0)) goto LAB_01b70068;
            uVar3 = FUN_033e99f0(lVar10,0);
            if ((uVar3 & 1) != 0) goto LAB_01b6ff6c;
          }
          else {
            if (lVar7 == 0) goto LAB_01b70068;
LAB_01b6ff6c:
            puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x80);
            uVar8 = *puVar5;
            *(undefined8 *)(unaff_x29 + -0x38) = unaff_x22;
            (*(code *)puVar5[2])(uVar8,puVar5,lVar7,unaff_x29 + -0x38);
            uVar3 = FUN_017fc55c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x88));
            if ((uVar3 & 1) == 0) {
              lVar10 = *unaff_x28;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
                lVar10 = *unaff_x28;
              }
              if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_01b70068;
              FUN_0296ae14(**(long **)(lVar10 + 0xb8),lVar7,*(undefined8 *)PTR_DAT_037f9208);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
      }
    }
  }
LAB_01b70068:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


