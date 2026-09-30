/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRSpace,-OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.ICollection<TKey>.Contains
ENTRY_POINT: 02b548c0
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


void System_Collections_Generic_Dictionary_KeyCollection<OVRSpace,_OVRPlugin_SpaceQueryResult>__System_Collections_Generic_ICollection<TKey>_Contains
               (undefined8 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 in_CY;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined2 *puVar6;
  uint unaff_w23;
  uint uVar7;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w28;
  int unaff_w29;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x02b548c0:
  if ((!(bool)in_CY) && (in_w9 < (uint)param_1)) {
    if (unaff_x21 == 0) {
LAB_02b549d4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar1 = *(undefined2 *)(unaff_x19 + (long)(int)in_w10 * 2 + 0x20);
    uVar2 = *(undefined2 *)(unaff_x19 + (long)(int)in_w9 * 2 + 0x20);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c72394();
    }
    uVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),uVar1,uVar2,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w25 = unaff_w25 | uVar3 >> 0x1f;
    uVar3 = unaff_w28 + unaff_w25;
    uVar7 = unaff_w23;
    if (uVar3 < *(uint *)(unaff_x19 + 0x18)) {
      do {
        unaff_w23 = unaff_w25;
        puVar6 = (undefined2 *)(unaff_x19 + (long)(int)uVar3 * 2 + 0x20);
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
          uVar3 = unaff_w28 + uVar7;
LAB_02b5499c:
          if (uVar3 < uVar5) {
            *(short *)(unaff_x19 + (long)(int)uVar3 * 2 + 0x20) =
                 (short)((ulong)_iStack0000000000000008 >> 0x20);
            return;
          }
          break;
        }
        if ((uVar5 <= uVar3) || (uVar5 <= unaff_w28 + uVar7)) break;
        *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w28 + uVar7) * 2 + 0x20) = *puVar6;
        if (unaff_w29 < (int)unaff_w23) goto LAB_02b5499c;
        unaff_w25 = unaff_w23 * 2;
        if ((int)unaff_w25 < unaff_w24) goto code_r0x02b548b0;
        uVar3 = unaff_w28 + unaff_w25;
        if (uVar5 <= uVar3) break;
        uVar7 = unaff_w23;
        if (unaff_x21 == 0) goto LAB_02b549d4;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
code_r0x02b548b0:
  in_w9 = unaff_w25 + iStack0000000000000008;
  in_w10 = in_w9 - 1;
  in_CY = uVar5 <= in_w10;
  goto code_r0x02b548c0;
}


