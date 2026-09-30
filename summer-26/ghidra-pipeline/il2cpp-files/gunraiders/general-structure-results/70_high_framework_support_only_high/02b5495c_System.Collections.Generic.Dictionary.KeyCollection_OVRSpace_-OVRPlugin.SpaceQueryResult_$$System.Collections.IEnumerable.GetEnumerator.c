/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRSpace,-OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02b5495c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_Dictionary_KeyCollection<OVRSpace,_OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (code *param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ushort *unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  uint uVar6;
  uint unaff_w27;
  int unaff_w28;
  int unaff_w29;
  int iStack0000000000000008;
  
  while( true ) {
    uVar6 = unaff_w25;
    iVar5 = (*param_1)(param_2,param_3,param_4,param_5);
    uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if (-1 < iVar5) break;
    if ((uVar4 <= unaff_w27) || (uVar4 <= unaff_w28 + unaff_w23)) goto LAB_02b549d0;
    *(ushort *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 2 + 0x20) = *unaff_x22;
    if (unaff_w29 < (int)uVar6) goto LAB_02b5499c;
    unaff_w25 = uVar6 * 2;
    if ((int)unaff_w25 < unaff_w24) {
      uVar1 = unaff_w25 + iStack0000000000000008;
      if ((uVar4 <= uVar1 - 1) || (uVar4 <= uVar1)) goto LAB_02b549d0;
      if (unaff_x21 == 0) {
LAB_02b549d4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar2 = *(undefined2 *)(unaff_x19 + (long)(int)(uVar1 - 1) * 2 + 0x20);
      uVar3 = *(undefined2 *)(unaff_x19 + (long)(int)uVar1 * 2 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      uVar4 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),uVar2,uVar3,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w25 = unaff_w25 | uVar4 >> 0x1f;
      unaff_w27 = unaff_w28 + unaff_w25;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) goto LAB_02b549d0;
    }
    else {
      unaff_w27 = unaff_w28 + unaff_w25;
      if (uVar4 <= unaff_w27) goto LAB_02b549d0;
      if (unaff_x21 == 0) goto LAB_02b549d4;
    }
    unaff_x22 = (ushort *)(unaff_x19 + (long)(int)unaff_w27 * 2 + 0x20);
    param_4 = (ulong)*unaff_x22;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c72394();
    }
    param_1 = *(code **)(unaff_x21 + 0x18);
    param_2 = *(undefined8 *)(unaff_x21 + 0x40);
    param_5 = *(undefined8 *)(unaff_x21 + 0x28);
    param_3 = _iStack0000000000000008 >> 0x20;
    unaff_w23 = uVar6;
  }
  unaff_w27 = unaff_w28 + unaff_w23;
LAB_02b5499c:
  if (unaff_w27 < uVar4) {
    *(short *)(unaff_x19 + (long)(int)unaff_w27 * 2 + 0x20) =
         (short)(_iStack0000000000000008 >> 0x20);
    return;
  }
LAB_02b549d0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


