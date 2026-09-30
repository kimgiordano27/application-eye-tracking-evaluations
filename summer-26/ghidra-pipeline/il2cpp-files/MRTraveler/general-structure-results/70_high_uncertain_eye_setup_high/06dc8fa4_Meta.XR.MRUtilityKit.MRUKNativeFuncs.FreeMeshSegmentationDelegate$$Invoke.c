/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.FreeMeshSegmentationDelegate$$Invoke
ENTRY_POINT: 06dc8fa4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshSegmentationDelegate__Invoke(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x20;
  long *plVar6;
  long unaff_x21;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  FUN_05d60b38();
  if (unaff_x21 != 0) {
    FUN_05d68e60();
    plVar6 = (long *)*unaff_x20;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
            goto LAB_06dc9024;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x26,5);
LAB_06dc9024:
      lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      uVar2 = thunk_FUN_03cf5234(*unaff_x25);
      FUN_05d60ea4();
      if (lVar3 != 0) {
        FUN_05d69d44(lVar3,uVar2,*(undefined8 *)PTR_DAT_08e6b290);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


