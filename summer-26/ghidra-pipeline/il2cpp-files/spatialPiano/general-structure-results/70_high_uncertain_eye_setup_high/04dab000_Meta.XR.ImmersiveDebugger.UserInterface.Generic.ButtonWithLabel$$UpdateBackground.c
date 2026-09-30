/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$UpdateBackground
ENTRY_POINT: 04dab000
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__UpdateBackground
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x25;
  float unaff_s8;
  undefined1 auVar11 [16];
  
  puVar4 = (undefined8 *)FUN_02f421d0(param_1,param_2,0x61);
  (*(code *)*puVar4)();
  plVar5 = (long *)unaff_x20[2];
  if ((plVar5 != (long *)0x0) &&
     (lVar6 = (**(code **)(*plVar5 + 0x9a8))(plVar5,*(undefined8 *)(*plVar5 + 0x9b0)), lVar6 != 0))
  {
    plVar5 = (long *)FUN_0623cb0c(lVar6,0);
    iVar2 = FUN_04655224();
    auVar11 = FUN_0625c4e0(unaff_s8 * (float)iVar2,0);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x3f) * 0x10 + 0x138);
            goto LAB_04dab0d8;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar5,*unaff_x25,0x3f);
LAB_04dab0d8:
      (*(code *)*puVar4)(plVar5,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar4[1]);
      iVar2 = (**(code **)(*unaff_x20 + 0x178))();
      if (unaff_w21 == iVar2) {
LAB_04dab500:
        *(undefined1 *)(unaff_x20 + 0x12) = 0;
        return;
      }
      (**(code **)(*unaff_x20 + 0x188))();
      if (unaff_x20[5] == 0) goto LAB_04dab4fc;
      if (*(int *)(unaff_x20[5] + 0x18) < 1) goto LAB_04dab500;
      iVar2 = (**(code **)(*unaff_x20 + 0x178))();
      if ((unaff_x20[5] == 0) ||
         (lVar6 = FUN_03abf644(unaff_x20[5],0,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)
                              ), lVar6 == 0)) goto LAB_04dab4fc;
      if (iVar2 < *(int *)(lVar6 + 0x20)) {
        if ((unaff_x20[5] == 0) ||
           (lVar6 = FUN_03abf644(unaff_x20[5],0,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
           lVar6 == 0)) goto LAB_04dab4fc;
        iVar2 = *(int *)(lVar6 + 0x20);
        iVar3 = (**(code **)(*unaff_x20 + 0x178))();
        lVar6 = unaff_x20[0xf];
        iVar2 = iVar2 - iVar3;
        if (0 < iVar2) {
          do {
            lVar7 = unaff_x20[5];
            if (lVar7 == 0) goto LAB_04dab4fc;
            if (*(int *)(lVar7 + 0x18) < 1) break;
            plVar5 = (long *)FUN_03abf644(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
            if (lVar6 == 0) goto LAB_04dab4fc;
            lVar7 = *(long *)(lVar6 + 0x10);
            lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_04dab4fc;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(long **)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = plVar5;
            }
            else {
              FUN_03abf904(lVar6,plVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar7 = unaff_x20[5];
            if (((lVar7 == 0) ||
                (FUN_03ac0f78(lVar7,*(int *)(lVar7 + 0x18) + -1,
                              *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))
                , plVar5 == (long *)0x0)) ||
               (lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
               lVar7 == 0)) goto LAB_04dab4fc;
            FUN_06247d8c(lVar7,0);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (unaff_x20[5] == 0) goto LAB_04dab4fc;
        FUN_03ac07bc(unaff_x20[5],0,lVar6,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        lVar6 = unaff_x20[0xf];
        if (lVar6 == 0) goto LAB_04dab4fc;
        iVar2 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar2) {
LAB_04dab478:
          Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar6 + 0x10),0,iVar2,0);
        }
      }
      else {
        iVar2 = (**(code **)(*unaff_x20 + 0x178))();
        lVar6 = unaff_x20[5];
        if ((lVar6 == 0) ||
           (lVar6 = FUN_03abf644(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
           lVar6 == 0)) goto LAB_04dab4fc;
        if (iVar2 < *(int *)(lVar6 + 0x20)) {
          lVar6 = unaff_x20[0xf];
          iVar2 = (**(code **)(*unaff_x20 + 0x178))();
          lVar7 = unaff_x20[5];
          if (lVar7 != 0) {
            iVar3 = 0;
            while (lVar7 = FUN_03abf644(lVar7,iVar3,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
                  lVar7 != 0) {
              lVar9 = unaff_x20[5];
              if (iVar2 <= *(int *)(lVar7 + 0x20)) {
                if (lVar9 != 0) {
                  FUN_03ac1008(lVar9,0,iVar3,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)
                              );
                  if ((unaff_x20[5] != 0) &&
                     (FUN_03abfb0c(unaff_x20[5],lVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200)),
                     lVar6 != 0)) {
                    iVar2 = *(int *)(lVar6 + 0x18);
                    *(undefined4 *)(lVar6 + 0x18) = 0;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (iVar2 < 1) goto LAB_04dab488;
                    goto LAB_04dab478;
                  }
                }
                break;
              }
              if ((lVar9 == 0) ||
                 (plVar5 = (long *)FUN_03abf644(lVar9,iVar3,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                 0x90)), lVar6 == 0)) break;
              lVar7 = *(long *)(lVar6 + 0x10);
              lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 == 0) break;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(long **)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = plVar5;
              }
              else {
                FUN_03abf904(lVar6,plVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              if ((plVar5 == (long *)0x0) ||
                 (lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
                 lVar7 == 0)) break;
              FUN_06247d28(lVar7,0);
              iVar2 = (**(code **)(*unaff_x20 + 0x178))();
              lVar7 = unaff_x20[5];
              iVar3 = iVar3 + 1;
              if (lVar7 == 0) break;
            }
          }
          goto LAB_04dab4fc;
        }
      }
LAB_04dab488:
      lVar6 = unaff_x20[5];
      if (lVar6 != 0) {
        iVar2 = 0;
        do {
          if (*(int *)(lVar6 + 0x18) <= iVar2) goto LAB_04dab500;
          (**(code **)(*unaff_x20 + 0x178))();
          if (unaff_x20[5] == 0) break;
          FUN_03abf644(unaff_x20[5],iVar2,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
          FUN_04656298();
          lVar6 = unaff_x20[5];
          iVar2 = iVar2 + 1;
        } while (lVar6 != 0);
      }
    }
  }
LAB_04dab4fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


