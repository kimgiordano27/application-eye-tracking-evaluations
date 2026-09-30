/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 033bcb68
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetLayerAndroidSurfaceObject(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int in_w10;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 in_stack_00000008;
  
  while (*(int *)(unaff_x23 + 0x1c) = in_w10 + 1, param_1 != 0) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      puVar3 = (undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
      *puVar3 = unaff_x26;
      thunk_FUN_01e10808(puVar3,unaff_x26);
    }
    else {
      FUN_03198f70();
    }
    if (unaff_x22 == 0) break;
    lVar7 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      plVar4 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
      *plVar4 = unaff_x25;
      thunk_FUN_01e10808(plVar4,unaff_x25);
    }
    else {
      FUN_03198f70();
    }
    do {
      uVar2 = *(uint *)(unaff_x24 + 0x18);
      unaff_w20 = unaff_w20 + 1;
      plVar4 = unaff_x21;
      if ((int)uVar2 <= (int)unaff_w20) {
        do {
          bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_5177)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar4);
          }
          unaff_x21 = (long *)FUN_03315340(plVar4,0);
          uVar5 = FUN_03308b18(unaff_x21,plVar4,0);
          if ((uVar5 & 1) != 0) {
            if (unaff_x22 != 0) {
              lVar7 = FUN_033b8088(in_stack_00000008,*(undefined4 *)(unaff_x22 + 0x18),0);
              if (lVar7 == 0) {
                lVar6 = 0;
              }
              else {
                uVar8 = *(undefined8 *)StringLiteral_8776;
                lVar6 = thunk_FUN_01de26bc(lVar7,uVar8);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7df0c(lVar7,uVar8);
                }
              }
              FUN_03199520();
              return lVar6;
            }
            goto LAB_033bcd08;
          }
          if (unaff_x21 == (long *)0x0) goto LAB_033bcd08;
          lVar7 = (**(code **)(*unaff_x21 + 0x378))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x380));
          uVar2 = (**(code **)(*unaff_x19 + 0x1e8))();
          if (lVar7 == 0) goto LAB_033bcd08;
          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_033bcd0c;
          plVar4 = *(long **)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_033bcd08;
          lVar7 = (**(code **)(*plVar4 + 0x228))
                            (plVar4,in_stack_00000008,0,*(undefined8 *)(*plVar4 + 0x230));
          if (lVar7 == 0) goto LAB_033bcd08;
          uVar8 = *(undefined8 *)StringLiteral_8776;
          unaff_x24 = thunk_FUN_01de26bc(lVar7,uVar8);
          if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(lVar7,uVar8);
          }
          uVar2 = *(uint *)(unaff_x24 + 0x18);
          plVar4 = unaff_x21;
        } while ((int)uVar2 < 1);
        unaff_w20 = 0;
      }
      if (uVar2 <= unaff_w20) {
LAB_033bcd0c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      unaff_x25 = *(long *)(unaff_x24 + (long)(int)unaff_w20 * 8 + 0x20);
      if ((unaff_x25 == 0) || (unaff_x26 = thunk_FUN_01dfff04(unaff_x25,0), unaff_x23 == 0))
      goto LAB_033bcd08;
      uVar5 = FUN_03199300();
    } while ((uVar5 & 1) != 0);
    in_w10 = *(int *)(unaff_x23 + 0x1c);
    param_1 = *(long *)(unaff_x23 + 0x10);
  }
LAB_033bcd08:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


