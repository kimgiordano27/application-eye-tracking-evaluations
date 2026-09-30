/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 056037ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Telemetry___cctor(long param_1)

{
  undefined8 *puVar1;
  uint in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *plVar5;
  int unaff_w24;
  
  while (unaff_w19 < in_w8) {
    plVar5 = (long *)*unaff_x23;
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_1) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05603804;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac(plVar5,param_1,0);
LAB_05603804:
    uVar3 = (*(code *)*puVar1)(plVar5);
    if ((uVar3 & 1) != 0) {
      return unaff_w19;
    }
    do {
      unaff_w19 = unaff_w19 - 1;
      if ((int)unaff_w19 < unaff_w24) {
        return 0xffffffff;
      }
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      if (in_w8 <= unaff_w19) goto LAB_05603870;
      unaff_x23 = (long *)(unaff_x20 + (long)(int)unaff_w19 * 8 + 0x20);
    } while (*unaff_x23 == 0);
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_032934b8(param_1);
      in_w8 = *(uint *)(unaff_x20 + 0x18);
    }
  }
LAB_05603870:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


