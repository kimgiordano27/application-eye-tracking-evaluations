/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.SeverityEntry$$.ctor
ENTRY_POINT: 014433b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_SeverityEntry___ctor(void)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  uint in_w8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  puVar1 = TMPro_TMP_SubMesh_var;
  if (in_CY && !in_ZR) {
    unaff_x21[7] = unaff_x22;
    lVar2 = *(long *)puVar1;
    if (lVar2 != 0) {
      lVar2 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar2 == 0) goto LAB_01443840;
      in_w8 = *(uint *)(unaff_x21 + 3);
    }
    if (4 < in_w8) {
      unaff_x21[8] = *(long *)puVar1;
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (lVar2 != 0) {
        if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar2 = FUN_016f5f58(lVar2 + 0x27,0);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
LAB_01443840:
          uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar4,0);
        }
        puVar1 = StringLiteral_302;
        if (*(uint *)(unaff_x21 + 3) < 6) goto LAB_0144383c;
        unaff_x21[9] = lVar2;
        uVar4 = FUN_01600844();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        FUN_02660dac(uVar4,0);
        puVar1 = Method_System_Collections_Generic_List<Material>_Add__;
        lVar2 = *(long *)(unaff_x19 + 0x30);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))
                    (DAT_028aa028,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)StringLiteral_9252,
                     *(undefined8 *)(lVar2 + 0x28));
        }
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__;
        if (lVar2 != 0) {
          FUN_0145a258(lVar2,0);
          *(long *)(unaff_x19 + 0x50) = lVar2;
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_1982);
            plVar5 = *(long **)(unaff_x19 + 0x50);
            if (plVar5 != (long *)0x0) {
              uVar4 = (**(code **)(*plVar5 + 0x178))
                                (plVar5,*(undefined8 *)(unaff_x19 + 0x30),
                                 *(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x28)
                                );
              *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
              *(undefined4 *)(unaff_x19 + 0x10) = 1;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_0144383c:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


