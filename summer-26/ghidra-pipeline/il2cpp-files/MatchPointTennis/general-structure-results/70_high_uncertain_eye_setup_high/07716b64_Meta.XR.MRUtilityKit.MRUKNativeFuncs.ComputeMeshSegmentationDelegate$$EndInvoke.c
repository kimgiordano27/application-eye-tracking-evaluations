/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$EndInvoke
ENTRY_POINT: 07716b64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 in_stack_00000008;
  
code_r0x07716b64:
  uVar4 = FUN_09531730(unaff_x25,unaff_x22,0);
  if ((uVar4 & 1) != 0) {
    unaff_w28 = 0;
    goto LAB_07716b90;
  }
  unaff_x19 = unaff_x19 + 1;
  if (unaff_w29 < *(uint *)(unaff_x24 + 0x18)) {
    do {
      lVar6 = *unaff_x26;
      if (lVar6 == 0) {
LAB_07716be0:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((long)unaff_x19 < (long)(int)*(uint *)(lVar6 + 0x18)) goto code_r0x07716b44;
LAB_07716b90:
      puVar2 = PTR_DAT_09f30bb0;
      puVar1 = PTR_DAT_09f1e8c0;
      uVar5 = *(uint *)(unaff_x24 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((int)uVar5 <= (int)unaff_w29) {
        if ((unaff_w28 & 1) == 0) goto LAB_07716bc8;
        do {
          FUN_094eeee0(unaff_x23,in_stack_00000008._4_4_ & 1,0);
LAB_07716bc8:
          do {
            do {
              unaff_w21 = unaff_w21 + 1;
              lVar6 = (**(code **)(*unaff_x20 + 0x198))();
              if (lVar6 == 0) goto LAB_07716be0;
              if (*(int *)(lVar6 + 0x18) <= unaff_w21) {
                return;
              }
              lVar6 = (**(code **)(*unaff_x20 + 0x198))();
              if (lVar6 == 0) goto LAB_07716be0;
              uVar3 = FUN_05badb74(lVar6,unaff_w21,*(undefined8 *)puVar1);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*unaff_x27);
              }
              uVar4 = FUN_09531730(uVar3,0,0);
            } while ((uVar4 & 1) == 0);
            unaff_x22 = FUN_0775efcc(uVar3,0);
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*unaff_x27);
            }
            uVar4 = FUN_09531730(unaff_x22,0,0);
            if ((uVar4 & 1) == 0) {
              if (unaff_x22 == 0) goto LAB_07716be0;
            }
            else {
              if (unaff_x22 == 0) goto LAB_07716be0;
              FUN_094da31c(unaff_x22,in_stack_00000008._4_4_ & 1,0);
            }
            unaff_x23 = FUN_04c6c620(unaff_x22,*(undefined8 *)puVar2);
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*unaff_x27);
            }
            uVar4 = FUN_09531730(unaff_x23,0,0);
          } while ((uVar4 & 1) == 0);
          if ((unaff_x23 == 0) || (unaff_x24 = FUN_094ef058(unaff_x23,0), unaff_x24 == 0))
          goto LAB_07716be0;
          uVar5 = *(uint *)(unaff_x24 + 0x18);
        } while ((int)uVar5 < 1);
        unaff_w29 = 0;
        unaff_w28 = 1;
      }
      if (uVar5 <= unaff_w29) break;
      unaff_x19 = 0;
      unaff_x26 = (long *)(unaff_x24 + (long)(int)unaff_w29 * 0x10 + 0x28);
    } while( true );
  }
  goto LAB_07716c04;
code_r0x07716b44:
  if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
LAB_07716c04:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  unaff_x25 = *(undefined8 *)(lVar6 + unaff_x19 * 8 + 0x20);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  goto code_r0x07716b64;
}


