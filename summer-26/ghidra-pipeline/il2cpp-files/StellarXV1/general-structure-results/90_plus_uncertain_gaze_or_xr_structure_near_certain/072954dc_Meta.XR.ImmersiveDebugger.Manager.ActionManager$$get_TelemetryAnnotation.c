/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 072954dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x1c0));
  *(undefined1 *)(unaff_x23 + 0x83a) = 1;
  puVar5 = PTR_DAT_092c21c0;
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar6 = thunk_FUN_040b4efc();
    puVar5 = PTR_DAT_092c21c8;
  }
  else {
    if (unaff_x20 != 0) {
      lVar9 = *unaff_x21;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c21c0) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_0729554c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729554c:
      iVar2 = (*(code *)*puVar4)();
      lVar9 = *unaff_x21;
      iVar1 = *(int *)(unaff_x20 + 0x18);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_072955b4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072955b4:
      iVar3 = (*(code *)*puVar4)();
      if (iVar3 << (iVar2 != 3) <= iVar1 - unaff_w19) {
        FUN_07297244();
        return;
      }
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar6 = thunk_FUN_040b4efc();
      uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c21d8);
      uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c21d0);
      FUN_075ce148(uVar6,uVar7,uVar8,0);
      goto LAB_07295690;
    }
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar6 = thunk_FUN_040b4efc();
    puVar5 = PTR_DAT_092c21d0;
  }
  uVar7 = thunk_FUN_040dedf8(puVar5);
  FUN_075ce0d0(uVar6,uVar7,0);
LAB_07295690:
  uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c21e0);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar6,uVar7);
}


