/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046e3d10
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000048;
  
  FUN_04f3fb68(param_1,0);
  if (unaff_x23 != 0) {
    lVar1 = FUN_04e3dc38();
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_02cea798(lVar1,lVar7);
      if (lVar2 == 0) goto LAB_046e3f48;
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if ((lVar1 != 0) && (lVar2 = thunk_FUN_02cea798(lVar1,lVar7), lVar2 == 0)) {
LAB_046e3f48:
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar1,lVar7);
    }
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_046e3688();
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar5 = FUN_04f3fb68(uVar5,0);
      if (in_stack_00000048 == 0) goto LAB_046e3f44;
      lVar1 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e1ad0,uVar5,0);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
      }
      if (lVar1 == 0) {
        FUN_04f52020(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar3 = (long *)thunk_FUN_02cea798(lVar1,lVar7);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar1,lVar7);
      }
      if (0 < (int)plVar3[3]) {
        uVar6 = 0;
        plVar8 = plVar3;
        do {
          plVar8 = plVar8 + 4;
          uVar4 = (ulong)*(uint *)(plVar3 + 3);
          if (uVar4 <= uVar6) {
LAB_046e3f40:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          if (*plVar8 == 0) {
            FUN_04f52020(0x11,0);
            uVar4 = (ulong)*(uint *)(plVar3 + 3);
          }
          if (uVar4 <= uVar6) goto LAB_046e3f40;
          FUN_046e3750();
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)plVar3[3]);
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar1 = FUN_04efe4a4(0);
    if (lVar1 != 0) {
      FUN_044a67d0();
      return;
    }
  }
LAB_046e3f44:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


