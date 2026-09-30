/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 04c21e84
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_x9;
  int *piVar7;
  undefined4 *unaff_x19;
  undefined4 uVar8;
  long *plVar9;
  long *unaff_x20;
  long lVar10;
  long *unaff_x23;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000018;
  
  uVar5 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
  puVar1 = PTR_DAT_065c98d0;
  lVar10 = unaff_x20[3];
  if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_04f485d4(uVar5,lVar10,0);
  if ((uVar6 & 1) == 0) {
    lVar10 = *(long *)puVar1;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar10 = *(long *)puVar1;
    }
    uVar6 = FUN_04f485bc(uVar5,**(undefined8 **)(lVar10 + 0xb8),0);
    if ((uVar6 & 1) == 0) {
      lVar10 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar11 = FUN_04fa5130(lVar10,0,0);
      uVar6 = FUN_04e5bb90();
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = auVar11;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030a0b2c(unaff_x19 + 2);
        return;
      }
      FUN_04e5bbac();
      puVar1 = PTR_DAT_065e50d0;
      lVar10 = *(long *)PTR_DAT_065e50d0;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar1;
      }
      plVar9 = (long *)**(undefined8 **)(lVar10 + 0xb8);
      plVar2 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,1);
      if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000018 = FUN_04f47938(unaff_x19 + 0x10,0);
      lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ca3e0,&stack0x00000018);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if ((lVar10 != 0) &&
         (lVar3 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar2[4] = lVar10;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar10 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5b58;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_04c21df4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e39d8,3);
LAB_04c21df4:
      (*(code *)*puVar4)(plVar9,uVar5,plVar2,puVar4[1]);
      uVar8 = 1;
      goto LAB_04c21f08;
    }
  }
  uVar8 = 0;
LAB_04c21f08:
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_065ce848;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bcac(unaff_x19 + 2,uVar8,*(undefined8 *)puVar1);
  return;
}


