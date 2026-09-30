/*
FUNCTION_NAME: OVRPlugin.Vector3f$$ToString
ENTRY_POINT: 033e4c98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_Vector3f__ToString(void)

{
  undefined *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 (*pauVar5) [12];
  undefined1 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  undefined1 auVar6 [16];
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
LAB_033e4d1c:
      plVar4 = (long *)FUN_033e43f0();
      if (plVar4 != (long *)0x0) {
LAB_033e4d2c:
        puVar1 = StringLiteral_8568;
        *unaff_x19 = unaff_w22;
        if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c();
        }
        pauVar5 = (undefined1 (*) [12])thunk_FUN_01de290c();
        auVar6._12_4_ = 0;
        auVar6._0_12_ = *pauVar5;
        return auVar6;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar2 = thunk_FUN_01dc865c(0x96);
      if (iVar2 < 1) {
        if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_033e4d78;
        uVar3 = FUN_03321618(*(long *)(unaff_x20 + 0x60),0);
        if ((uVar3 & 1) == 0) {
          plVar4 = (long *)FUN_033e43f0();
          if (plVar4 != (long *)0x0) {
            unaff_w22 = 1;
            goto LAB_033e4d2c;
          }
          plVar4 = *(long **)(unaff_x20 + 0x60);
          if (plVar4 == (long *)0x0) goto LAB_033e4d78;
          (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          FUN_033e41c4();
        }
        else {
          do {
            plVar4 = *(long **)(unaff_x20 + 0x60);
            if (plVar4 == (long *)0x0) goto LAB_033e4d78;
            (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
            FUN_033e41c4();
            if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_033e4d78;
            uVar3 = FUN_03321618(*(long *)(unaff_x20 + 0x60),0);
          } while ((uVar3 & 1) != 0);
        }
        goto LAB_033e4d1c;
      }
    }
    plVar4 = *(long **)(unaff_x20 + 0x60);
    if (plVar4 == (long *)0x0) {
LAB_033e4d78:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    FUN_033e41c4();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    iVar2 = thunk_FUN_01dc865c(0);
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
    in_OV = '\0';
  } while( true );
}


