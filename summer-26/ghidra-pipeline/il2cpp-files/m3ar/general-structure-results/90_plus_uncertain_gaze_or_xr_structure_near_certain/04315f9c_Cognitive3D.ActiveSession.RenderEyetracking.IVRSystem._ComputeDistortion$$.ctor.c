/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._ComputeDistortion$$.ctor
ENTRY_POINT: 04315f9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__ComputeDistortion___ctor(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x8d8);
  puVar8 = *(undefined8 **)(unaff_x21 + 0x7e8);
  if ((*(byte *)(unaff_x20 + 0xdf6) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f688d8);
    FUN_0403162c(PTR_DAT_08f68738);
    FUN_0403162c(PTR_DAT_08f737e8);
    *(undefined1 *)(unaff_x20 + 0xdf6) = 1;
  }
  plVar7 = *(long **)(param_1 + 0x28);
  uVar3 = thunk_FUN_0406deb8(*puVar9);
  FUN_05329970(uVar3,param_1,*puVar8,0);
  puVar1 = PTR_DAT_08f68738;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f68738) {
          puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_04316058;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f68738,7);
LAB_04316058:
    (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
    plVar7 = *(long **)(param_1 + 0x28);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_043160bc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,0);
LAB_043160bc:
      uVar2 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      FUN_043160e4(param_1,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


