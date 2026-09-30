/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$EndInvoke
ENTRY_POINT: 049a34fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x049a3608) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__EndInvoke
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  void *__src;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long in_x9;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  size_t unaff_x24;
  long unaff_x25;
  long unaff_x29;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  if (unaff_x19 == (long *)0x0) {
LAB_049a3934:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar3 = FUN_06daa888();
  if (lVar3 != 0) {
    FUN_06dabc00();
    uVar4 = FUN_06412110(0);
    if ((uVar4 & 1) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8))();
      __src = (void *)thunk_FUN_032cddd4();
      memcpy(unaff_x21,__src,unaff_x24);
      puVar8 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x138);
      uVar5 = *puVar8;
      *(long *)(unaff_x29 + -0x40) = unaff_x22;
      (*(code *)puVar8[2])(uVar5);
      puVar8 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      uVar5 = *puVar8;
      *(long *)(unaff_x29 + -0x40) = unaff_x22 - in_x9;
      (*(code *)puVar8[2])(uVar5);
      lVar3 = *unaff_x19;
      *(void **)(unaff_x29 + -0x40) = unaff_x21;
      *(long *)(unaff_x29 + -0x38) = unaff_x22;
      *(long *)(unaff_x29 + -0x30) = unaff_x22 - in_x9;
      (**(code **)(*(long *)(lVar3 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0xa30) + 8));
      fVar10 = *(float *)(unaff_x29 + -0x24);
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      (**(code **)(*unaff_x19 + 0x978))();
      fVar11 = (float)(*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
      plVar6 = (long *)thunk_FUN_032cddd4();
      if (*plVar6 != 0) {
        plVar6 = (long *)FUN_06da6244(*plVar6,0);
        fVar12 = (float)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
        auVar14 = FUN_06dbea40(param_3 * ABS(fVar10 - fVar12),0);
        puVar2 = PTR_DAT_072814d8;
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_072814d8) {
                puVar8 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x3c) * 0x10 + 0x138);
                goto LAB_049a36fc;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar8 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_072814d8,0x3c);
LAB_049a36fc:
          (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
          plVar6 = (long *)thunk_FUN_032cddd4();
          if (*plVar6 != 0) {
            plVar6 = (long *)FUN_06da6244(*plVar6,0);
            piVar7 = (int *)thunk_FUN_032cddd4();
            iVar1 = *piVar7;
            fVar12 = (float)(*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
            if (fVar10 <= fVar12) {
              fVar12 = fVar10;
            }
            fVar13 = param_3 * fVar12;
            if (iVar1 != 0) {
              fVar13 = (param_3 - param_3 * ABS(fVar10 - fVar11)) - param_3 * fVar12;
            }
            auVar14 = FUN_06dbea40(fVar13,0);
            if (plVar6 != (long *)0x0) {
              lVar9 = *plVar6;
              lVar3 = *(long *)puVar2;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 != 0) {
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == lVar3) {
                    puVar8 = (undefined8 *)(lVar9 + (long)(*piVar7 + 0x1d) * 0x10 + 0x138);
                    goto LAB_049a3804;
                  }
                  uVar4 = uVar4 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar4 != 0);
              }
              puVar8 = (undefined8 *)FUN_032937ac(plVar6,lVar3,0x1d);
LAB_049a3804:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              plVar6 = (long *)thunk_FUN_032cddd4();
              if (*plVar6 != 0) {
                plVar6 = (long *)FUN_06da6244(*plVar6,0);
                piVar7 = (int *)thunk_FUN_032cddd4();
                fVar11 = fVar10 * param_3;
                if (*piVar7 != 0) {
                  fVar11 = param_3 - fVar10 * param_3;
                }
                auVar14 = FUN_06dbea40(fVar11,0);
                if (plVar6 != (long *)0x0) {
                  lVar9 = *plVar6;
                  lVar3 = *(long *)puVar2;
                  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar4 != 0) {
                    piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == lVar3) {
                        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar7 + 0x1d) * 0x10 + 0x138);
                        goto LAB_049a38e0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_032937ac(plVar6,lVar3,0x1d);
LAB_049a38e0:
                  (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
                  FUN_06db0a88();
                  goto LAB_049a3900;
                }
              }
            }
          }
        }
      }
      goto LAB_049a3934;
    }
  }
LAB_049a3900:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -0x20)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


