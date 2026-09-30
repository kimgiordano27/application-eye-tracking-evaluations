/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 036630b4
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


void OVRManager__set_instance(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if ((DAT_04833d09 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_99__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_91__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_97__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Light2DCullResult_<>c_<SetupCulling>b__8_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_LightCompiler_<>c_<CompileNoLabelPush>b__101_0__
                      );
    DAT_04833d09 = 1;
  }
  switch(param_3[1]) {
  case 0:
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_LightCompiler_<>c_<CompileNoLabelPush>b__101_0__
                              );
    FUN_035ac8e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x20),param_2);
    *(undefined2 *)(lVar2 + 0x41) = 0;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_Light2DCullResult_<>c_<SetupCulling>b__8_0__
                              );
    FUN_04289f74(uVar3,uVar8,0);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x10),uVar3);
    uVar9 = param_3[4];
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_3 + 2);
    *(undefined4 *)(lVar2 + 0x30) = uVar9;
    if (*(long *)(param_1 + 0x78) != 0) {
      FUN_02b07154(*(long *)(param_1 + 0x78),*param_3,lVar2,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_99__);
      return;
    }
    break;
  case 1:
    if (*(long *)(param_1 + 0x78) == 0) break;
    lVar2 = FUN_02b070b4(*(long *)(param_1 + 0x78),*param_3,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__);
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (FUN_02b085dc(*(long *)(param_1 + 0x78),*param_3,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_91__),
       lVar2 == 0)) break;
    goto OVRManager__get_runtimeSettings;
  case 2:
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar2 = FUN_02b070b4(*(long *)(param_1 + 0x78),*param_3,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__
                            ), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)(lVar2 + 0x30) = param_3[4];
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      if (*(char *)(lVar2 + 0x40) != '\0') {
        return;
      }
      *(undefined2 *)(lVar2 + 0x40) = 0x101;
      return;
    }
    break;
  case 3:
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar2 = FUN_02b070b4(*(long *)(param_1 + 0x78),*param_3,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__
                            ), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)(lVar2 + 0x30) = param_3[4];
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
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar2 = FUN_02b070b4(*(long *)(param_1 + 0x78),*param_3,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__
                            ), lVar2 != 0)) {
      uVar9 = param_3[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      return;
    }
    break;
  case 5:
    if (*(long *)(param_1 + 0x78) == 0) break;
    lVar2 = FUN_02b070b4(*(long *)(param_1 + 0x78),*param_3,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_93__);
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (uVar3 = FUN_02b085dc(*(long *)(param_1 + 0x78),*param_3,
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
    lVar4 = *(long *)(param_1 + 0x88);
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


