/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetStringTrackedDeviceProperty$$EndInvoke
ENTRY_POINT: 043180c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetStringTrackedDeviceProperty__EndInvoke
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  puVar3 = (undefined8 *)FUN_0406ae20(param_1,param_2,1);
  (*(code *)*puVar3)();
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 04318140 to 04418143 has its CatchHandler @ 04318360 */
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_04318170;
        }
        uVar8 = uVar8 - 1;
                    /* try { // try from 04318148 to 04418153 has its CatchHandler @ 04318358 */
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 04318154 to 0441815f has its CatchHandler @ 04318354 */
    puVar3 = (undefined8 *)FUN_0406ae20();
LAB_04318170:
    lVar6 = (*(code *)*puVar3)();
    if (lVar6 == 0) {
      return;
    }
    uVar10 = *(undefined8 *)(lVar6 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f65f48);
    }
    FUN_074c25d4(&stack0x00000018,uVar10,0);
    lVar6 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04318200;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20();
LAB_04318200:
    iVar2 = (*(code *)*puVar3)();
    in_stack_00000008 = FUN_074c3fa4((double)iVar2,&stack0x00000018,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x28);
      plVar4 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x23);
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_04318290;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar4,*unaff_x24,1);
LAB_04318290:
        uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        uVar5 = FUN_074c32b4(&stack0x00000008,0);
        puVar1 = PTR_DAT_08f66370;
        if (lVar6 != 0) {
          lVar7 = *(long *)(unaff_x19 + 0x28);
          *(undefined8 *)(lVar6 + 0x30) = uVar10;
          *(undefined8 *)(lVar6 + 0x38) = uVar5;
          uVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
          FUN_07449f28();
          if (lVar7 != 0) {
            FUN_04308a60(lVar7,uVar10);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


