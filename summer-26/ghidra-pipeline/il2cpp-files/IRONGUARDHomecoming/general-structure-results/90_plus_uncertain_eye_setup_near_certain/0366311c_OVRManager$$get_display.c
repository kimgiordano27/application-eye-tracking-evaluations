/*
FUNCTION_NAME: OVRManager$$get_display
ENTRY_POINT: 0366311c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__get_display(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 in_w8;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined4 uVar9;
  
  *(undefined1 *)(unaff_x22 + 0xd09) = in_w8;
  switch(unaff_x19[1]) {
  case 0:
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_LightCompiler_<>c_<CompileNoLabelPush>b__101_0__
                              );
    FUN_035ac8e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x20) = unaff_x21;
    thunk_FUN_01f51358();
    *(undefined2 *)(lVar2 + 0x41) = 0;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_Light2DCullResult_<>c_<SetupCulling>b__8_0__
                              );
    FUN_04289f74(uVar3,uVar8,0);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x10),uVar3);
    uVar9 = unaff_x19[4];
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x19 + 2);
    *(undefined4 *)(lVar2 + 0x30) = uVar9;
    if (*(long *)(unaff_x20 + 0x78) != 0) {
      FUN_02b07154(*(long *)(unaff_x20 + 0x78),*unaff_x19,lVar2,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_99__);
      return;
    }
    break;
  case 1:
    if (*(long *)(unaff_x20 + 0x78) == 0) break;
    lVar2 = FUN_02b070b4(*(long *)(unaff_x20 + 0x78),*unaff_x19,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__);
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (FUN_02b085dc(*(long *)(unaff_x20 + 0x78),*unaff_x19,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_91__),
       lVar2 == 0)) break;
    goto OVRManager__get_runtimeSettings;
  case 2:
    if ((*(long *)(unaff_x20 + 0x78) != 0) &&
       (lVar2 = FUN_02b070b4(*(long *)(unaff_x20 + 0x78),*unaff_x19,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__
                            ), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(unaff_x19 + 2);
      *(undefined4 *)(lVar2 + 0x30) = unaff_x19[4];
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      if (*(char *)(lVar2 + 0x40) != '\0') {
        return;
      }
      *(undefined2 *)(lVar2 + 0x40) = 0x101;
      return;
    }
    break;
  case 3:
    if ((*(long *)(unaff_x20 + 0x78) != 0) &&
       (lVar2 = FUN_02b070b4(*(long *)(unaff_x20 + 0x78),*unaff_x19,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__
                            ), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(unaff_x19 + 2);
      *(undefined4 *)(lVar2 + 0x30) = unaff_x19[4];
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      if (*(char *)(lVar2 + 0x40) == '\0') {
        return;
      }
      *(undefined1 *)(lVar2 + 0x40) = 0;
      *(undefined1 *)(lVar2 + 0x42) = 1;
      return;
    }
    break;
  case 4:
    if ((*(long *)(unaff_x20 + 0x78) != 0) &&
       (lVar2 = FUN_02b070b4(*(long *)(unaff_x20 + 0x78),*unaff_x19,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__
                            ), lVar2 != 0)) {
      uVar9 = unaff_x19[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x19 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      return;
    }
    break;
  case 5:
    if (*(long *)(unaff_x20 + 0x78) == 0) break;
    lVar2 = FUN_02b070b4(*(long *)(unaff_x20 + 0x78),*unaff_x19,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__);
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (uVar3 = FUN_02b085dc(*(long *)(unaff_x20 + 0x78),*unaff_x19,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_91__
                            ), lVar2 == 0)) break;
    FUN_03662fac(uVar3,*(undefined8 *)(lVar2 + 0x10));
OVRManager__get_runtimeSettings:
    *(undefined1 *)(lVar2 + 0x18) = 1;
    if (*(char *)(lVar2 + 0x40) != '\0') {
      *(undefined1 *)(lVar2 + 0x40) = 0;
      *(undefined1 *)(lVar2 + 0x42) = 1;
    }
    lVar4 = *(long *)(unaff_x20 + 0x88);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_97__;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar2;
          thunk_FUN_01f51358(plVar6,lVar2);
          return;
        }
        FUN_030f2bb4(lVar4,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
    break;
  default:
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


