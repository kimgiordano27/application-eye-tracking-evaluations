/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$.ctor
ENTRY_POINT: 04dab158
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel___ctor
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long in_x9;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  
  lVar4 = FUN_03abf644(param_1,param_2,*(undefined8 *)(in_x9 + 0x90));
  if (lVar4 == 0) goto LAB_04dab4fc;
  if (unaff_w21 < *(int *)(lVar4 + 0x20)) {
    if ((unaff_x20[5] == 0) ||
       (lVar4 = FUN_03abf644(unaff_x20[5],0,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
       lVar4 == 0)) goto LAB_04dab4fc;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar2 = (**(code **)(*unaff_x20 + 0x178))();
    lVar4 = unaff_x20[0xf];
    iVar3 = iVar3 - iVar2;
    if (0 < iVar3) {
      do {
        lVar5 = unaff_x20[5];
        if (lVar5 == 0) goto LAB_04dab4fc;
        if (*(int *)(lVar5 + 0x18) < 1) break;
        plVar6 = (long *)FUN_03abf644(lVar5,*(int *)(lVar5 + 0x18) + -1,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
        if (lVar4 == 0) goto LAB_04dab4fc;
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_04dab4fc;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(long **)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = plVar6;
        }
        else {
          FUN_03abf904(lVar4,plVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        lVar5 = unaff_x20[5];
        if (((lVar5 == 0) ||
            (FUN_03ac0f78(lVar5,*(int *)(lVar5 + 0x18) + -1,
                          *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)),
            plVar6 == (long *)0x0)) ||
           (lVar5 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
           lVar5 == 0)) goto LAB_04dab4fc;
        FUN_06247d8c(lVar5,0);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (unaff_x20[5] == 0) goto LAB_04dab4fc;
    FUN_03ac07bc(unaff_x20[5],0,lVar4,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
    lVar4 = unaff_x20[0xf];
    if (lVar4 == 0) goto LAB_04dab4fc;
    iVar3 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar3) {
LAB_04dab478:
      Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar4 + 0x10),0,iVar3,0);
    }
  }
  else {
    iVar3 = (**(code **)(*unaff_x20 + 0x178))();
    lVar4 = unaff_x20[5];
    if ((lVar4 == 0) ||
       (lVar4 = FUN_03abf644(lVar4,*(int *)(lVar4 + 0x18) + -1,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
       lVar4 == 0)) goto LAB_04dab4fc;
    if (iVar3 < *(int *)(lVar4 + 0x20)) {
      lVar4 = unaff_x20[0xf];
      iVar3 = (**(code **)(*unaff_x20 + 0x178))();
      lVar5 = unaff_x20[5];
      if (lVar5 != 0) {
        iVar2 = 0;
        while (lVar5 = FUN_03abf644(lVar5,iVar2,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
              lVar5 != 0) {
          lVar7 = unaff_x20[5];
          if (iVar3 <= *(int *)(lVar5 + 0x20)) {
            if (lVar7 != 0) {
              FUN_03ac1008(lVar7,0,iVar2,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
              if ((unaff_x20[5] != 0) &&
                 (FUN_03abfb0c(unaff_x20[5],lVar4,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200))
                 , lVar4 != 0)) {
                iVar3 = *(int *)(lVar4 + 0x18);
                *(undefined4 *)(lVar4 + 0x18) = 0;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (iVar3 < 1) goto LAB_04dab488;
                goto LAB_04dab478;
              }
            }
            break;
          }
          if ((lVar7 == 0) ||
             (plVar6 = (long *)FUN_03abf644(lVar7,iVar2,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90))
             , lVar4 == 0)) break;
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) break;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(long **)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = plVar6;
          }
          else {
            FUN_03abf904(lVar4,plVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          if ((plVar6 == (long *)0x0) ||
             (lVar5 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
             lVar5 == 0)) break;
          FUN_06247d28(lVar5,0);
          iVar3 = (**(code **)(*unaff_x20 + 0x178))();
          lVar5 = unaff_x20[5];
          iVar2 = iVar2 + 1;
          if (lVar5 == 0) break;
        }
      }
      goto LAB_04dab4fc;
    }
  }
LAB_04dab488:
  lVar4 = unaff_x20[5];
  if (lVar4 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar3) {
        *(undefined1 *)(unaff_x20 + 0x12) = 0;
        return;
      }
      (**(code **)(*unaff_x20 + 0x178))();
      if (unaff_x20[5] == 0) break;
      FUN_03abf644(unaff_x20[5],iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
      FUN_04656298();
      lVar4 = unaff_x20[5];
      iVar3 = iVar3 + 1;
    } while (lVar4 != 0);
  }
LAB_04dab4fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


