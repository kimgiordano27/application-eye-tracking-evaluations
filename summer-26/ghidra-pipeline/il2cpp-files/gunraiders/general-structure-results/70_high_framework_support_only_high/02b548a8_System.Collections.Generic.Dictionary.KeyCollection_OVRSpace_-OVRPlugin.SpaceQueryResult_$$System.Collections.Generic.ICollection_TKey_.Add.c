/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRSpace,-OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.ICollection<TKey>.Add
ENTRY_POINT: 02b548a8
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


void System_Collections_Generic_Dictionary_KeyCollection<OVRSpace,_OVRPlugin_SpaceQueryResult>__System_Collections_Generic_ICollection<TKey>_Add
               (undefined8 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined2 *puVar6;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  uint uVar7;
  int unaff_w28;
  int unaff_w29;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    uVar3 = (uint)param_1;
    if ((int)unaff_w25 < unaff_w24) {
      uVar7 = unaff_w25 + iStack0000000000000008;
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
      uVar3 = unaff_w25 | uVar3 >> 0x1f;
      uVar7 = unaff_w28 + uVar3;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_02b549d0;
    }
    else {
      uVar7 = unaff_w28 + unaff_w25;
      if (uVar3 <= uVar7) goto LAB_02b549d0;
      uVar3 = unaff_w25;
      if (unaff_x21 == 0) goto LAB_02b549d4;
    }
    puVar6 = (undefined2 *)(unaff_x19 + (long)(int)uVar7 * 2 + 0x20);
    uVar1 = *puVar6;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c72394();
    }
    iVar4 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),uStack000000000000000c,uVar1,
                       *(undefined8 *)(unaff_x21 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar5 = (uint)param_1;
    if (-1 < iVar4) {
      uVar7 = unaff_w28 + unaff_w23;
LAB_02b5499c:
      if (uVar7 < uVar5) {
        *(short *)(unaff_x19 + (long)(int)uVar7 * 2 + 0x20) =
             (short)((ulong)_iStack0000000000000008 >> 0x20);
        return;
      }
LAB_02b549d0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if ((uVar5 <= uVar7) || (uVar5 <= unaff_w28 + unaff_w23)) goto LAB_02b549d0;
    *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 2 + 0x20) = *puVar6;
    if (unaff_w29 < (int)uVar3) goto LAB_02b5499c;
    unaff_w25 = uVar3 << 1;
    unaff_w23 = uVar3;
  } while( true );
}


