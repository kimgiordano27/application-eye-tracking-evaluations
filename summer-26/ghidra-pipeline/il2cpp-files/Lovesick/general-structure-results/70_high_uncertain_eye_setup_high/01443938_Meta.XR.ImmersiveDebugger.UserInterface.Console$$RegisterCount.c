/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$RegisterCount
ENTRY_POINT: 01443938
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterCount(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Material>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033ea8a0);
  thunk_FUN_00d48444(StringLiteral_3005);
  thunk_FUN_00d48444(TMPro_TMP_SubMesh_var);
  thunk_FUN_00d48444(StringLiteral_968);
  *(undefined1 *)(unaff_x20 + 0xa2e) = 1;
  puVar2 = Method_System_Collections_Generic_List<Material>_Add__;
  uStack000000000000000c = 0;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      if (*(char *)(*(long *)(unaff_x19 + 0x30) + 0x10) == '\0') {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        plVar5 = *(long **)(unaff_x19 + 0x58);
        uVar3 = FUN_0145b018(*(long *)(unaff_x19 + 0x28),0);
        if ((((*(long *)(unaff_x19 + 0x28) != 0) && (plVar5 != (long *)0x0)) &&
            (uVar7 = (**(code **)(*plVar5 + 0x1a8))
                               (plVar5,uVar3 & 1,*(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x30)
                                ,*(undefined8 *)(*plVar5 + 0x1b0)), lVar9 != 0)) &&
           ((plVar5 = *(long **)(unaff_x19 + 0x58), plVar5 != (long *)0x0 &&
            (lVar9 = (**(code **)(*plVar5 + 0x198))
                               (plVar5,*(undefined8 *)(unaff_x19 + 0x28),
                                *(char *)(unaff_x19 + 0x40) != '\0',
                                *(undefined8 *)(unaff_x19 + 0x48),uVar7,
                                *(undefined4 *)(lVar9 + 0x10),*(undefined8 *)(*plVar5 + 0x1a0)),
            puVar2 = PTR_DAT_033f3448, lVar9 != 0)))) {
          if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
            return 0;
          }
          uVar10 = 0;
          uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          while (uVar10 < uVar8) {
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01443dac;
            FUN_00bbfcc8(*(long *)(unaff_x19 + 0x50),*(undefined8 *)(lVar9 + 0x20 + uVar10 * 8),
                         *(undefined8 *)puVar2);
            uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar10 = uVar10 + 1;
            if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar10) {
              return 0;
            }
          }
          goto LAB_01443db0;
        }
      }
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      if (*(char *)(*(long *)(unaff_x19 + 0x30) + 0x10) == '\0') {
        return 0;
      }
      lVar4 = *(long *)(unaff_x19 + 0x28);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x70) != 0)) {
        uVar7 = FUN_00da4fb8(*(undefined8 *)StringLiteral_7064,
                             *(undefined4 *)(*(long *)(lVar4 + 0x70) + 0x18));
        *(undefined8 *)(lVar4 + 0x80) = uVar7;
        if ((lVar9 != 0) && (plVar5 = *(long **)(unaff_x19 + 0x58), plVar5 != (long *)0x0)) {
          uVar7 = (**(code **)(*plVar5 + 0x188))
                            (plVar5,0,*(undefined8 *)(unaff_x19 + 0x30),
                             *(undefined8 *)(unaff_x19 + 0x28),lVar9,
                             *(undefined8 *)(unaff_x19 + 0x38),*(undefined4 *)(lVar9 + 0x10),
                             *(undefined8 *)(*plVar5 + 400));
          *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
          *(undefined4 *)(unaff_x19 + 0x10) = 2;
          return 1;
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      FUN_0145a258(lVar4,0);
      *(long *)(unaff_x19 + 0x58) = lVar4;
      if (lVar9 != 0) {
        if (3 < *(int *)(lVar9 + 0x10)) {
          plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
          puVar2 = StringLiteral_3005;
          if (plVar5 == (long *)0x0) goto LAB_01443dac;
          if ((*(long *)StringLiteral_3005 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(*(long *)StringLiteral_3005,*(undefined8 *)(*plVar5 + 0x40)
                                        ), lVar4 == 0)) {
LAB_01443db4:
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          if ((int)plVar5[3] == 0) goto LAB_01443db0;
          plVar5[4] = *(long *)puVar2;
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x70), lVar4 == 0)) goto LAB_01443dac;
          uStack000000000000000c = *(undefined4 *)(lVar4 + 0x18);
          lVar4 = FUN_0176eb1c(&stack0x0000000c,0);
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_01443db4;
          puVar2 = StringLiteral_968;
          uVar3 = *(uint *)(plVar5 + 3);
          if (uVar3 < 2) {
LAB_01443db0:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar5[5] = lVar4;
          lVar4 = *(long *)puVar2;
          if (lVar4 != 0) {
            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar4 == 0) goto LAB_01443db4;
            uVar3 = *(uint *)(plVar5 + 3);
          }
          if (uVar3 < 3) goto LAB_01443db0;
          plVar5[6] = *(long *)puVar2;
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x60), lVar4 == 0)) goto LAB_01443dac;
          uStack000000000000000c = *(undefined4 *)(lVar4 + 0x18);
          lVar4 = FUN_0176eb1c(&stack0x0000000c,0);
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_01443db4;
          puVar2 = TMPro_TMP_SubMesh_var;
          uVar3 = *(uint *)(plVar5 + 3);
          if (uVar3 < 4) goto LAB_01443db0;
          plVar5[7] = lVar4;
          lVar4 = *(long *)puVar2;
          if (lVar4 != 0) {
            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar4 == 0) goto LAB_01443db4;
            uVar3 = *(uint *)(plVar5 + 3);
          }
          if (uVar3 < 5) goto LAB_01443db0;
          plVar5[8] = *(long *)puVar2;
          lVar4 = *(long *)(unaff_x19 + 0x28);
          if (lVar4 == 0) goto LAB_01443dac;
          if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar4 = FUN_016f5f58(lVar4 + 0x27,0);
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_01443db4;
          puVar2 = StringLiteral_302;
          if (*(uint *)(plVar5 + 3) < 6) goto LAB_01443db0;
          plVar5[9] = lVar4;
          uVar7 = FUN_01600844(plVar5,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          FUN_02660dac(uVar7,0);
        }
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__
                                  );
        if (lVar4 != 0) {
          FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_1982);
          plVar5 = *(long **)(unaff_x19 + 0x58);
          if (plVar5 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar5 + 0x178))
                              (plVar5,0,*(undefined8 *)(unaff_x19 + 0x30),
                               *(undefined8 *)(unaff_x19 + 0x28),lVar9,
                               *(undefined8 *)(unaff_x19 + 0x38),lVar4,*(undefined4 *)(lVar9 + 0x10)
                              );
            *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
            *(undefined4 *)(unaff_x19 + 0x10) = 1;
            return 1;
          }
        }
      }
    }
  }
LAB_01443dac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


