/*
FUNCTION_NAME: Unity.Mathematics.bool4x2$$GetHashCode
ENTRY_POINT: 02158bf4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Mathematics_bool4x2__GetHashCode(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_68__);
  thunk_FUN_00d48444(StringLiteral_2708);
  *(undefined1 *)(unaff_x19 + 0x2af) = 1;
  lVar2 = thunk_FUN_00d62348(*unaff_x22);
  if (lVar2 != 0) {
    thunk_FUN_021f6d1c(lVar2,0);
    lVar3 = FUN_02147788(lVar2);
    if ((unaff_x24 != 0) && (plVar6 = *(long **)(unaff_x24 + 0x150), plVar6 != (long *)0x0)) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,0);
      }
      if (*(uint *)(plVar6 + 3) < 0x23) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar6[0x26] = lVar3;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x78) = unaff_x24;
        *(undefined8 *)(lVar3 + 0x80) = unaff_x23;
        puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
        FUN_021f605c();
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        FUN_021f605c();
        uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(0,0,0);
        *(undefined8 *)(lVar3 + 0x40) = uVar5;
        *(undefined8 *)(lVar3 + 0x58) = unaff_x21;
        *(undefined8 *)(lVar3 + 0x60) = unaff_x20;
        *(uint *)(lVar3 + 0xa0) = *(uint *)(lVar3 + 0xa0) | 8;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar5 = _DAT_02953d80;
        *(undefined8 *)(lVar3 + 0x18) = _UNK_02953d88;
        *(undefined8 *)(lVar3 + 0x10) = uVar5;
        auVar7 = FUN_02204a80(0,0);
        auVar8 = FUN_02204a80(1,0);
        *(undefined1 (*) [16])(lVar3 + 0xb8) = auVar7;
        *(undefined1 (*) [16])(lVar3 + 200) = auVar8;
        *(uint *)(lVar3 + 0xa0) = *(uint *)(lVar3 + 0xa0) | 0x20;
        *(undefined4 *)(lVar2 + 0x130) = 0x1d;
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


