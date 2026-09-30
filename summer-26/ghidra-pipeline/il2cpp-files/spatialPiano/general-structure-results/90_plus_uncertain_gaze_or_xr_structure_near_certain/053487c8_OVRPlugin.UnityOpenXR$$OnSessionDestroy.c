/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 053487c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionDestroy(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
                    /* try { // try from 053487d0 to 054487d7 has its CatchHandler @ 05348978 */
  if ((DAT_06bbb515 & 1) == 0) {
                    /* try { // try from 053487e4 to 0544885f has its CatchHandler @ 053489c4 */
    FUN_02f08768(UnityEngine_UIElements_PopupField<string>_TypeInfo);
    DAT_06bbb515 = 1;
  }
  puVar2 = UnityEngine_UIElements_PopupField<string>_TypeInfo;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  uVar6 = 1L << (param_2 & 0x3f);
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  _fStack0000000000000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  if ((*(ulong *)(param_1 + 0x40) & uVar6) == 0) {
    return;
  }
  lVar3 = *(long *)UnityEngine_UIElements_PopupField<string>_TypeInfo;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
LAB_05348960:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = (uint)param_2;
  if (uVar5 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 05348860 to 0544889f has its CatchHandler @ 053486c4 */
    iVar1 = *(int *)(lVar3 + (long)(int)uVar5 * 4 + 0x20);
    if (iVar1 == -1) {
      uStack0000000000000000 = *(undefined8 *)(param_1 + 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & (uVar6 ^ 0xffffffffffffffff);
      uStack0000000000000014 = (undefined4)*(undefined8 *)(param_1 + 0x34);
      uStack0000000000000018 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
      uStack000000000000000c = (undefined4)*(undefined8 *)(param_1 + 0x2c);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
    }
    else {
      FUN_053487b8(param_1,iVar1);
      *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & (uVar6 ^ 0xffffffffffffffff);
      FUN_05348760(param_1,iVar1);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = uStack0000000000000000;
    uStack0000000000000054 = uStack0000000000000014;
    in_stack_00000058 = uStack0000000000000018;
    uStack000000000000004c = uStack000000000000000c;
    in_stack_00000050 = uStack0000000000000010;
    if (lVar3 == 0) goto LAB_05348960;
    if (uVar5 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar5 * 0x1c;
      in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
      in_stack_00000038 = *(undefined4 *)(lVar3 + 0x38);
      fVar7 = *(float *)(param_1 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar3 + 0x28);
      lVar4 = *(long *)(param_1 + 0x18);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) * fVar7,
                    (float)*(undefined8 *)(lVar3 + 0x20) * fVar7);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar7);
      if (lVar4 == 0) goto LAB_05348960;
      if (uVar5 < *(uint *)(lVar4 + 0x18)) {
        FUN_052c23ec(&stack0x00000040,&stack0x00000020,lVar4 + (long)(int)uVar5 * 0x1c + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


