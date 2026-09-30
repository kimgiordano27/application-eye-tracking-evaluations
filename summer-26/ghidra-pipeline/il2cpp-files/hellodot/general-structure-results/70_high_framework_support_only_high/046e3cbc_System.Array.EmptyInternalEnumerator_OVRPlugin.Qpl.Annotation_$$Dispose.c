/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 046e3cbc
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x25;
  long in_stack_00000048;
  
  puVar1 = PTR_DAT_065c89e8;
  if (param_1 != 0) {
    iVar2 = FUN_04e3ff80(param_1,*(undefined8 *)PTR_DAT_065e1ac8,0);
    lVar5 = *(long *)puVar1;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
    }
    uVar8 = FUN_04f3fb68(uVar8,0);
    if (in_stack_00000048 == 0) goto LAB_046e3f44;
    lVar5 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e0078,uVar8,0);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02ce0978(lVar9);
    }
    if (lVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_02cea798(lVar5,lVar9);
      if (lVar3 == 0) goto LAB_046e3f48;
    }
    *(long *)(unaff_x19 + 0x30) = lVar3;
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02ce0978(lVar9);
    }
    if ((lVar5 != 0) && (lVar3 = thunk_FUN_02cea798(lVar5,lVar9), lVar3 == 0)) {
LAB_046e3f48:
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar5,lVar9);
    }
    if (iVar2 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_046e3688();
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_04f3fb68(uVar8,0);
      if (in_stack_00000048 == 0) goto LAB_046e3f44;
      lVar5 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e1ad0,uVar8,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02ce0978(lVar9);
      }
      if (lVar5 == 0) {
        FUN_04f52020(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar4 = (long *)thunk_FUN_02cea798(lVar5,lVar9);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,lVar9);
      }
      if (0 < (int)plVar4[3]) {
        uVar7 = 0;
        plVar10 = plVar4;
        do {
          plVar10 = plVar10 + 4;
          uVar6 = (ulong)*(uint *)(plVar4 + 3);
          if (uVar6 <= uVar7) {
LAB_046e3f40:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          if (*plVar10 == 0) {
            FUN_04f52020(0x11,0);
            uVar6 = (ulong)*(uint *)(plVar4 + 3);
          }
          if (uVar6 <= uVar7) goto LAB_046e3f40;
          FUN_046e3750();
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)plVar4[3]);
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = param_2;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar5 = FUN_04efe4a4(0);
    if (lVar5 != 0) {
      FUN_044a67d0();
      return;
    }
  }
LAB_046e3f44:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


