/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceSemanticLabels
ENTRY_POINT: 0281a45c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceSemanticLabels(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  int *in_x10;
  int unaff_w21;
  long lVar7;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  
code_r0x0281a45c:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0281a450;
LAB_0281a468:
  puVar2 = (undefined8 *)FUN_01a472ec();
  do {
    (*(code *)*puVar2)();
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0281a424;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_0281a424:
    iVar1 = (*(code *)*puVar2)();
    if (unaff_w21 <= iVar1) {
      FUN_01f70920();
      uVar3 = FUN_02793500();
      lVar7 = *unaff_x23;
      lVar4 = *(long *)(lVar7 + 0x38);
      if (lVar4 == 0) {
        FUN_01a47054(lVar7);
        lVar4 = *(long *)(lVar7 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      FUN_02819f60();
      return uVar3;
    }
    param_1 = *unaff_x22;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0281a468;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0281a450:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0281a45c;
    puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
  } while( true );
}


