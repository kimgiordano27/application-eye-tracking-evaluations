/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$BeginInvoke
ENTRY_POINT: 049a35cc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x049a3608) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__BeginInvoke
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x25;
  long unaff_x29;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  lVar6 = *unaff_x19;
  *(undefined8 *)(unaff_x29 + -0x40) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x22;
  *(undefined8 *)(unaff_x29 + -0x30) = unaff_x23;
  (**(code **)(*(long *)(lVar6 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0xa30) + 8));
  fVar9 = *(float *)(unaff_x29 + -0x24);
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  (**(code **)(*unaff_x19 + 0x978))();
  fVar10 = (float)(*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158)
                  )();
  plVar3 = (long *)thunk_FUN_032cddd4();
  if (*plVar3 != 0) {
    plVar3 = (long *)FUN_06da6244(*plVar3,0);
    fVar11 = (float)(*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
    auVar13 = FUN_06dbea40(param_3 * ABS(fVar9 - fVar11),0);
    puVar2 = PTR_DAT_072814d8;
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072814d8) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x3c) * 0x10 + 0x138);
            goto LAB_049a36fc;
          }
          uVar8 = uVar8 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar3,*(long *)PTR_DAT_072814d8,0x3c);
LAB_049a36fc:
      (*(code *)*puVar4)(plVar3,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar4[1]);
      plVar3 = (long *)thunk_FUN_032cddd4();
      if (*plVar3 != 0) {
        plVar3 = (long *)FUN_06da6244(*plVar3,0);
        piVar5 = (int *)thunk_FUN_032cddd4();
        iVar1 = *piVar5;
        fVar11 = (float)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
        if (fVar9 <= fVar11) {
          fVar11 = fVar9;
        }
        fVar12 = param_3 * fVar11;
        if (iVar1 != 0) {
          fVar12 = (param_3 - param_3 * ABS(fVar9 - fVar10)) - param_3 * fVar11;
        }
        auVar13 = FUN_06dbea40(fVar12,0);
        if (plVar3 != (long *)0x0) {
          lVar7 = *plVar3;
          lVar6 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
                goto LAB_049a3804;
              }
              uVar8 = uVar8 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_032937ac(plVar3,lVar6,0x1d);
LAB_049a3804:
          (*(code *)*puVar4)(plVar3,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar4[1]);
          plVar3 = (long *)thunk_FUN_032cddd4();
          if (*plVar3 != 0) {
            plVar3 = (long *)FUN_06da6244(*plVar3,0);
            piVar5 = (int *)thunk_FUN_032cddd4();
            fVar10 = fVar9 * param_3;
            if (*piVar5 != 0) {
              fVar10 = param_3 - fVar9 * param_3;
            }
            auVar13 = FUN_06dbea40(fVar10,0);
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              lVar6 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == lVar6) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
                    goto LAB_049a38e0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_032937ac(plVar3,lVar6,0x1d);
LAB_049a38e0:
              (*(code *)*puVar4)(plVar3,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar4[1]);
              FUN_06db0a88();
              if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -0x20)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


