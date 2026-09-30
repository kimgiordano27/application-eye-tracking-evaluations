/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$OnHoverChanged
ENTRY_POINT: 04daaf48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__OnHoverChanged
               (undefined1 param_1 [16],float param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  FUN_06333f38();
  fVar13 = 0.0;
  if (0.0 <= param_2) {
    fVar13 = param_2;
  }
  fVar12 = (float)FUN_04daa740();
  plVar5 = (long *)unaff_x20[2];
  iVar4 = -0x80000000;
  if (fVar13 / fVar12 != INFINITY) {
    iVar4 = (int)(fVar13 / fVar12);
  }
  if ((plVar5 != (long *)0x0) &&
     (lVar6 = (**(code **)(*plVar5 + 0x9a8))(plVar5,*(undefined8 *)(*plVar5 + 0x9b0)), lVar6 != 0))
  {
    plVar5 = (long *)FUN_0623cb0c(lVar6,0);
    auVar14 = FUN_0625c4e0(fVar12 * (float)iVar4,0);
    puVar2 = PTR_DAT_067ca970;
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067ca970) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0x61) * 0x10 + 0x138);
            goto LAB_04dab01c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)PTR_DAT_067ca970,0x61);
LAB_04dab01c:
      (*(code *)*puVar7)(plVar5,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar7[1]);
      plVar5 = (long *)unaff_x20[2];
      if ((plVar5 != (long *)0x0) &&
         (lVar6 = (**(code **)(*plVar5 + 0x9a8))(plVar5,*(undefined8 *)(*plVar5 + 0x9b0)),
         lVar6 != 0)) {
        plVar5 = (long *)FUN_0623cb0c(lVar6,0);
        iVar3 = FUN_04655224();
        auVar14 = FUN_0625c4e0(fVar12 * (float)iVar3,0);
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0x3f) * 0x10 + 0x138);
                goto LAB_04dab0d8;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar2,0x3f);
LAB_04dab0d8:
          (*(code *)*puVar7)(plVar5,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar7[1]);
          iVar3 = (**(code **)(*unaff_x20 + 0x178))();
          if (iVar4 == iVar3) {
LAB_04dab500:
            *(undefined1 *)(unaff_x20 + 0x12) = 0;
            return;
          }
          (**(code **)(*unaff_x20 + 0x188))();
          if (unaff_x20[5] == 0) goto LAB_04dab4fc;
          if (*(int *)(unaff_x20[5] + 0x18) < 1) goto LAB_04dab500;
          iVar4 = (**(code **)(*unaff_x20 + 0x178))();
          if ((unaff_x20[5] == 0) ||
             (lVar6 = FUN_03abf644(unaff_x20[5],0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
             lVar6 == 0)) goto LAB_04dab4fc;
          if (iVar4 < *(int *)(lVar6 + 0x20)) {
            if ((unaff_x20[5] == 0) ||
               (lVar6 = FUN_03abf644(unaff_x20[5],0,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
               lVar6 == 0)) goto LAB_04dab4fc;
            iVar4 = *(int *)(lVar6 + 0x20);
            iVar3 = (**(code **)(*unaff_x20 + 0x178))();
            lVar6 = unaff_x20[0xf];
            iVar4 = iVar4 - iVar3;
            if (0 < iVar4) {
              do {
                lVar8 = unaff_x20[5];
                if (lVar8 == 0) goto LAB_04dab4fc;
                if (*(int *)(lVar8 + 0x18) < 1) break;
                plVar5 = (long *)FUN_03abf644(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90
                                               ));
                if (lVar6 == 0) goto LAB_04dab4fc;
                lVar8 = *(long *)(lVar6 + 0x10);
                lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar8 == 0) goto LAB_04dab4fc;
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(long **)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = plVar5;
                }
                else {
                  FUN_03abf904(lVar6,plVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                lVar8 = unaff_x20[5];
                if (((lVar8 == 0) ||
                    (FUN_03ac0f78(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)),
                    plVar5 == (long *)0x0)) ||
                   (lVar8 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
                   lVar8 == 0)) goto LAB_04dab4fc;
                FUN_06247d8c(lVar8,0);
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (unaff_x20[5] == 0) goto LAB_04dab4fc;
            FUN_03ac07bc(unaff_x20[5],0,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
            lVar6 = unaff_x20[0xf];
            if (lVar6 == 0) goto LAB_04dab4fc;
            iVar4 = *(int *)(lVar6 + 0x18);
            *(undefined4 *)(lVar6 + 0x18) = 0;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
joined_r0x04dab474:
            if (0 < iVar4) {
              Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar6 + 0x10),0,iVar4,0);
            }
          }
          else {
            iVar4 = (**(code **)(*unaff_x20 + 0x178))();
            lVar6 = unaff_x20[5];
            if ((lVar6 == 0) ||
               (lVar6 = FUN_03abf644(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
               lVar6 == 0)) goto LAB_04dab4fc;
            if (iVar4 < *(int *)(lVar6 + 0x20)) {
              lVar6 = unaff_x20[0xf];
              iVar4 = (**(code **)(*unaff_x20 + 0x178))();
              lVar8 = unaff_x20[5];
              if (lVar8 != 0) {
                iVar3 = 0;
                while (lVar8 = FUN_03abf644(lVar8,iVar3,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90))
                      , lVar8 != 0) {
                  lVar10 = unaff_x20[5];
                  if (iVar4 <= *(int *)(lVar8 + 0x20)) {
                    if (lVar10 != 0) {
                      FUN_03ac1008(lVar10,0,iVar3,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
                      if ((unaff_x20[5] != 0) &&
                         (FUN_03abfb0c(unaff_x20[5],lVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200)),
                         lVar6 != 0)) {
                        iVar4 = *(int *)(lVar6 + 0x18);
                        *(undefined4 *)(lVar6 + 0x18) = 0;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        goto joined_r0x04dab474;
                      }
                    }
                    break;
                  }
                  if ((lVar10 == 0) ||
                     (plVar5 = (long *)FUN_03abf644(lVar10,iVar3,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                     + 0x90)), lVar6 == 0)) break;
                  lVar8 = *(long *)(lVar6 + 0x10);
                  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar8 == 0) break;
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(long **)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = plVar5;
                  }
                  else {
                    FUN_03abf904(lVar6,plVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if ((plVar5 == (long *)0x0) ||
                     (lVar8 = (**(code **)(*plVar5 + 0x178))
                                        (plVar5,*(undefined8 *)(*plVar5 + 0x180)), lVar8 == 0))
                  break;
                  FUN_06247d28(lVar8,0);
                  iVar4 = (**(code **)(*unaff_x20 + 0x178))();
                  lVar8 = unaff_x20[5];
                  iVar3 = iVar3 + 1;
                  if (lVar8 == 0) break;
                }
              }
              goto LAB_04dab4fc;
            }
          }
          lVar6 = unaff_x20[5];
          if (lVar6 != 0) {
            iVar4 = 0;
            do {
              if (*(int *)(lVar6 + 0x18) <= iVar4) goto LAB_04dab500;
              (**(code **)(*unaff_x20 + 0x178))();
              if (unaff_x20[5] == 0) break;
              FUN_03abf644(unaff_x20[5],iVar4,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
              FUN_04656298();
              lVar6 = unaff_x20[5];
              iVar4 = iVar4 + 1;
            } while (lVar6 != 0);
          }
        }
      }
    }
  }
LAB_04dab4fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


