/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03f0a690
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOfImpl<OVRPlugin_Qpl_Annotation>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__s;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x21;
  long lVar12;
  size_t unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  __s = (void *)thunk_FUN_036a1ed0();
  memset(__s,0,unaff_x24);
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  thunk_FUN_0367fe20();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28))();
  FUN_03159758();
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fed68);
  FUN_069591f0(uVar3,0);
  FUN_03159758();
  puVar4 = (undefined8 *)thunk_FUN_036a1ed0();
  puVar2 = PTR_DAT_079fd0e8;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = thunk_FUN_036a1ed0();
  uVar5 = FUN_05e7b18c(uVar3,0);
  puVar1 = PTR_DAT_079f5050;
  if ((uVar5 & 1) != 0) {
    uVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5050);
    FUN_05d84434();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = thunk_FUN_036a1ed0();
    FUN_05e7b240(&stack0x00000018,uVar6,uVar3,0);
    FUN_0315f69c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x40) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar3 = thunk_FUN_0367fe20();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x48))();
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fea10);
  FUN_0554a400();
  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05d84434();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x60))(uVar3,uVar6,uVar7);
  plVar8 = (long *)thunk_FUN_036a1ed0();
  lVar12 = *plVar8;
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc(lVar9);
  }
  lVar10 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar9) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03f0a93c;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30();
LAB_03f0a93c:
  uVar3 = (*(code *)*puVar4)();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18(uVar3,uVar3);
  }
  FUN_06958e64(lVar12,uVar3,0);
  plVar8 = (long *)thunk_FUN_036a1ed0();
  if (*plVar8 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x80))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


