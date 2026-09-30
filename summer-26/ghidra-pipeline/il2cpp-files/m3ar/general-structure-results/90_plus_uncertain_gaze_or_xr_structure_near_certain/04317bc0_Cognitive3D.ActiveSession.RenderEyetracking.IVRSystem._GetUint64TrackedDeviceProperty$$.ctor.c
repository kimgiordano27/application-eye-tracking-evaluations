/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetUint64TrackedDeviceProperty$$.ctor
ENTRY_POINT: 04317bc0
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


bool Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetUint64TrackedDeviceProperty___ctor
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  long *plVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_0403162c(PTR_DAT_08f73278);
                    /* try { // try from 04317bcc to 04417c53 has its CatchHandler @ 04317f30 */
  FUN_0403162c(PTR_DAT_08f69220);
  FUN_0403162c(PTR_DAT_08f73868);
  *(undefined1 *)(unaff_x21 + 0xe08) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if ((*(long *)(unaff_x20 + 0x50) != 0) &&
     (lVar3 = FUN_0434ae38(), puVar1 = PTR_DAT_08f65f48, lVar3 != 0)) {
    lVar8 = *(long *)(lVar3 + 0x18);
    if (lVar8 == 0) {
      return true;
    }
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f69220) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04317c84;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f69220,0);
LAB_04317c84:
      in_stack_00000018 = (*(code *)*puVar4)(plVar9,0,puVar4[1]);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364(lVar5);
      }
      FUN_074c25d4(&stack0x00000010,lVar8,0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (plVar9 = (long *)FUN_054b8ffc(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08f73868)
         , plVar9 != (long *)0x0)) {
        lVar8 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f73278) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04317d30;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f73278,0);
LAB_04317d30:
        plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
        uVar2 = in_stack_00000010;
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f73260) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_04317da0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f73260,1);
LAB_04317da0:
          in_stack_00000008 = (*(code *)*puVar4)(plVar9,uVar2,puVar4[1]);
          lVar8 = FUN_074c32b4(&stack0x00000008,0);
          if (*(long *)(lVar3 + 0x18) < lVar8) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            lVar8 = FUN_074c32b4(&stack0x00000018,0);
            lVar5 = FUN_074c32b4(&stack0x00000008,0);
            if (lVar5 < lVar8) {
              return *(long *)(lVar3 + 0x18) != 0;
            }
          }
          return false;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


