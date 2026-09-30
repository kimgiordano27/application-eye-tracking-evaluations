/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRSpace,-OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.ICollection<TKey>.get_IsReadOnly
ENTRY_POINT: 02b548a0
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


void System_Collections_Generic_Dictionary_KeyCollection<OVRSpace,_OVRPlugin_SpaceQueryResult>__System_Collections_Generic_ICollection<TKey>_get_IsReadOnly
               (undefined8 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int in_w3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined2 *puVar5;
  uint unaff_w23;
  int unaff_w24;
  uint uVar6;
  uint uVar7;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  
  do {
    uVar6 = unaff_w23 * 2;
    uVar3 = (uint)param_1;
    if ((int)uVar6 < unaff_w24) {
      uVar7 = uVar6 + in_w3;
      if ((uVar3 <= uVar7 - 1) || (uVar3 <= uVar7)) goto LAB_02b549d0;
      if (unaff_x21 == 0) {
LAB_02b549d4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = *(undefined2 *)(unaff_x19 + (long)(int)(uVar7 - 1) * 2 + 0x20);
      uVar2 = *(undefined2 *)(unaff_x19 + (long)(int)uVar7 * 2 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      uVar3 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),uVar1,uVar2,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar6 = uVar6 | uVar3 >> 0x1f;
      uVar7 = unaff_w28 + uVar6;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_02b549d0;
    }
    else {
      uVar7 = unaff_w28 + uVar6;
      if (uVar3 <= uVar7) goto LAB_02b549d0;
      if (unaff_x21 == 0) goto LAB_02b549d4;
    }
    puVar5 = (undefined2 *)(unaff_x19 + (long)(int)uVar7 * 2 + 0x20);
    uVar1 = *puVar5;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c72394();
    }
    iVar4 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),in_stack_00000008._4_4_,uVar1,
                       *(undefined8 *)(unaff_x21 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar3 = (uint)param_1;
    if (-1 < iVar4) {
      uVar7 = unaff_w28 + unaff_w23;
      goto LAB_02b5499c;
    }
    if ((uVar3 <= uVar7) || (uVar3 <= unaff_w28 + unaff_w23)) goto LAB_02b549d0;
    *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 2 + 0x20) = *puVar5;
    unaff_w23 = uVar6;
    if (unaff_w29 < (int)uVar6) {
LAB_02b5499c:
      if (uVar7 < uVar3) {
        *(short *)(unaff_x19 + (long)(int)uVar7 * 2 + 0x20) =
             (short)((ulong)in_stack_00000008 >> 0x20);
        return;
      }
LAB_02b549d0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  } while( true );
}


