/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$Invoke
ENTRY_POINT: 049a35b8
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

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__Invoke
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x25;
  long unaff_x29;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  puVar6 = *(undefined8 **)(param_1 + 0x140);
  uVar3 = *puVar6;
  *(undefined8 *)(unaff_x29 + -0x40) = unaff_x23;
  (*(code *)puVar6[2])(uVar3);
  lVar7 = *unaff_x19;
  *(undefined8 *)(unaff_x29 + -0x40) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x22;
  *(undefined8 *)(unaff_x29 + -0x30) = unaff_x23;
  (**(code **)(*(long *)(lVar7 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar7 + 0xa30) + 8));
  fVar10 = *(float *)(unaff_x29 + -0x24);
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  (**(code **)(*unaff_x19 + 0x978))();
  fVar11 = (float)(*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158)
                  )();
  plVar4 = (long *)thunk_FUN_032cddd4();
  if (*plVar4 != 0) {
    plVar4 = (long *)FUN_06da6244(*plVar4,0);
    fVar12 = (float)(*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
    auVar14 = FUN_06dbea40(param_4 * ABS(fVar10 - fVar12),0);
    puVar2 = PTR_DAT_072814d8;
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072814d8) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar5 + 0x3c) * 0x10 + 0x138);
            goto LAB_049a36fc;
          }
          uVar9 = uVar9 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(plVar4,*(long *)PTR_DAT_072814d8,0x3c);
LAB_049a36fc:
      (*(code *)*puVar6)(plVar4,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar6[1]);
      plVar4 = (long *)thunk_FUN_032cddd4();
      if (*plVar4 != 0) {
        plVar4 = (long *)FUN_06da6244(*plVar4,0);
        piVar5 = (int *)thunk_FUN_032cddd4();
        iVar1 = *piVar5;
        fVar12 = (float)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
        if (fVar10 <= fVar12) {
          fVar12 = fVar10;
        }
        fVar13 = param_4 * fVar12;
        if (iVar1 != 0) {
          fVar13 = (param_4 - param_4 * ABS(fVar10 - fVar11)) - param_4 * fVar12;
        }
        auVar14 = FUN_06dbea40(fVar13,0);
        if (plVar4 != (long *)0x0) {
          lVar8 = *plVar4;
          lVar7 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
                goto LAB_049a3804;
              }
              uVar9 = uVar9 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_032937ac(plVar4,lVar7,0x1d);
LAB_049a3804:
          (*(code *)*puVar6)(plVar4,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar6[1]);
          plVar4 = (long *)thunk_FUN_032cddd4();
          if (*plVar4 != 0) {
            plVar4 = (long *)FUN_06da6244(*plVar4,0);
            piVar5 = (int *)thunk_FUN_032cddd4();
            fVar11 = fVar10 * param_4;
            if (*piVar5 != 0) {
              fVar11 = param_4 - fVar10 * param_4;
            }
            auVar14 = FUN_06dbea40(fVar11,0);
            if (plVar4 != (long *)0x0) {
              lVar8 = *plVar4;
              lVar7 = *(long *)puVar2;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
                    goto LAB_049a38e0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_032937ac(plVar4,lVar7,0x1d);
LAB_049a38e0:
              (*(code *)*puVar6)(plVar4,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar6[1]);
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


