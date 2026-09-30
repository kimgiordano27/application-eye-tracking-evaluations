/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ToggleFollowTranslationButton
ENTRY_POINT: 04d0b9f8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ToggleFollowTranslationButton
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long in_x9;
  long lVar12;
  ulong uVar13;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long lVar14;
  undefined4 unaff_s8;
  
  uVar13 = (ulong)*(ushort *)(in_x9 + 0x12e);
  if (uVar13 != 0) {
    piVar10 = (int *)(*(long *)(in_x9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_2) {
        puVar5 = (undefined8 *)(in_x9 + (long)(*piVar10 + 0x3f) * 0x10 + 0x138);
        goto LAB_04d0ba48;
      }
      uVar13 = uVar13 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar13 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_04d0ba48:
  (*(code *)*puVar5)();
  lVar6 = FUN_045aa620();
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x14) = unaff_s8;
    iVar3 = (**(code **)(*unaff_x20 + 0x178))();
    if (unaff_w21 == iVar3) {
      return;
    }
    (**(code **)(*unaff_x20 + 0x188))();
    if (unaff_x20[5] != 0) {
      if (*(int *)(unaff_x20[5] + 0x18) < 1) {
        return;
      }
      iVar3 = (**(code **)(*unaff_x20 + 0x178))();
      if ((unaff_x20[5] != 0) &&
         (lVar6 = FUN_03aac1c4(unaff_x20[5],0,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)
                              ), lVar6 != 0)) {
        if (iVar3 < *(int *)(lVar6 + 0x20)) {
          if ((unaff_x20[5] == 0) ||
             (lVar6 = FUN_03aac1c4(unaff_x20[5],0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
             lVar6 == 0)) goto LAB_04d0beac;
          iVar3 = *(int *)(lVar6 + 0x20);
          iVar4 = (**(code **)(*unaff_x20 + 0x178))();
          lVar6 = unaff_x20[5];
          iVar3 = iVar3 - iVar4;
          lVar14 = unaff_x20[0xd];
          bVar2 = lVar6 == 0;
          if (0 < iVar3) {
            iVar4 = 0;
            do {
              if (bVar2) goto LAB_04d0beac;
              if (*(int *)(lVar6 + 0x18) < 1) goto LAB_04d0bc44;
              plVar7 = (long *)FUN_03aac1c4(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88))
              ;
              if (lVar14 == 0) goto LAB_04d0beac;
              lVar6 = *(long *)(lVar14 + 0x10);
              lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_04d0beac;
              uVar1 = *(uint *)(lVar14 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = (long)plVar7;
                thunk_FUN_02dd37b4(plVar8,plVar7);
              }
              else {
                FUN_03aac494(lVar14,plVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = unaff_x20[5];
              if (((lVar6 == 0) ||
                  (FUN_03aadb8c(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
                  plVar7 == (long *)0x0)) ||
                 (lVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
                 lVar6 == 0)) goto LAB_04d0beac;
              FUN_061d1254(lVar6,0);
              lVar6 = unaff_x20[5];
              iVar4 = iVar4 + 1;
              bVar2 = lVar6 == 0;
            } while (iVar4 < iVar3);
          }
          if (bVar2) goto LAB_04d0beac;
LAB_04d0bc44:
          FUN_03aad39c(lVar6,0,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
          lVar6 = unaff_x20[0xd];
          if (lVar6 == 0) goto LAB_04d0beac;
          iVar3 = *(int *)(lVar6 + 0x18);
          *(undefined4 *)(lVar6 + 0x18) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (0 < iVar3) {
            uVar9 = *(undefined8 *)(lVar6 + 0x10);
LAB_04d0be2c:
            FUN_05029664(uVar9,0,iVar3,0);
          }
        }
        else {
          iVar3 = (**(code **)(*unaff_x20 + 0x178))();
          lVar6 = unaff_x20[5];
          if ((lVar6 == 0) ||
             (lVar6 = FUN_03aac1c4(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
             lVar6 == 0)) goto LAB_04d0beac;
          if (iVar3 < *(int *)(lVar6 + 0x20)) {
            lVar14 = unaff_x20[0xd];
            iVar3 = (**(code **)(*unaff_x20 + 0x178))();
            lVar6 = unaff_x20[5];
            if (lVar6 != 0) {
              iVar4 = 0;
              while( true ) {
                lVar6 = FUN_03aac1c4(lVar6,iVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                if ((lVar6 == 0) || (lVar12 = unaff_x20[5], lVar12 == 0)) goto LAB_04d0beac;
                lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                if (iVar3 <= *(int *)(lVar6 + 0x20)) break;
                plVar7 = (long *)FUN_03aac1c4(lVar12,iVar4,*(undefined8 *)(lVar11 + 0x88));
                if (lVar14 == 0) goto LAB_04d0beac;
                lVar6 = *(long *)(lVar14 + 0x10);
                lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar6 == 0) goto LAB_04d0beac;
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                  plVar8 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar8 = (long)plVar7;
                  thunk_FUN_02dd37b4(plVar8,plVar7);
                }
                else {
                  FUN_03aac494(lVar14,plVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                if ((plVar7 == (long *)0x0) ||
                   (lVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
                   lVar6 == 0)) goto LAB_04d0beac;
                iVar4 = iVar4 + 1;
                FUN_061d11ec(lVar6,0);
                iVar3 = (**(code **)(*unaff_x20 + 0x178))();
                lVar6 = unaff_x20[5];
                if (lVar6 == 0) goto LAB_04d0beac;
              }
              FUN_03aadc24(lVar12,0,iVar4,*(undefined8 *)(lVar11 + 0xb8));
              if ((unaff_x20[5] != 0) &&
                 (FUN_03aac6a0(unaff_x20[5],lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)
                              ), lVar14 != 0)) {
                iVar3 = *(int *)(lVar14 + 0x18);
                *(undefined4 *)(lVar14 + 0x18) = 0;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (iVar3 < 1) goto LAB_04d0be38;
                uVar9 = *(undefined8 *)(lVar14 + 0x10);
                goto LAB_04d0be2c;
              }
            }
            goto LAB_04d0beac;
          }
        }
LAB_04d0be38:
        lVar6 = unaff_x20[5];
        if (lVar6 != 0) {
          iVar3 = 0;
          do {
            if (*(int *)(lVar6 + 0x18) <= iVar3) {
              return;
            }
            (**(code **)(*unaff_x20 + 0x178))();
            if (unaff_x20[5] == 0) break;
            FUN_03aac1c4(unaff_x20[5],iVar3,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
            FUN_045ab1a4();
            lVar6 = unaff_x20[5];
            iVar3 = iVar3 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
LAB_04d0beac:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


