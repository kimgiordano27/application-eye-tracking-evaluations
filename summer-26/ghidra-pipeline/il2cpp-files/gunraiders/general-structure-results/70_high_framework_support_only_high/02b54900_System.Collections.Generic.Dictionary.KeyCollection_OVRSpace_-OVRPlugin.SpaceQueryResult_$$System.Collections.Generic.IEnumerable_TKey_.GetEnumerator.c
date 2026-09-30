/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRSpace,-OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<TKey>.GetEnumerator
ENTRY_POINT: 02b54900
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_Dictionary_KeyCollection<OVRSpace,_OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<TKey>_GetEnumerator
               (code *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               )

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined2 *puVar5;
  uint unaff_w23;
  uint uVar6;
  int unaff_w24;
  uint unaff_w25;
  uint unaff_w27;
  int unaff_w28;
  int unaff_w29;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x02b54900:
  uVar2 = (*param_1)(param_2,param_3,unaff_w27,param_5);
  unaff_w25 = unaff_w25 | uVar2 >> 0x1f;
  uVar2 = unaff_w28 + unaff_w25;
  uVar6 = unaff_w23;
  if (uVar2 < *(uint *)(unaff_x19 + 0x18)) {
    do {
      unaff_w23 = unaff_w25;
      puVar5 = (undefined2 *)(unaff_x19 + (long)(int)uVar2 * 2 + 0x20);
      uVar1 = *puVar5;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      iVar3 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),uStack000000000000000c,uVar1,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if (-1 < iVar3) {
        uVar2 = unaff_w28 + uVar6;
LAB_02b5499c:
        if (uVar2 < uVar4) {
          *(short *)(unaff_x19 + (long)(int)uVar2 * 2 + 0x20) =
               (short)((ulong)_iStack0000000000000008 >> 0x20);
          return;
        }
        break;
      }
      if ((uVar4 <= uVar2) || (uVar4 <= unaff_w28 + uVar6)) break;
      *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w28 + uVar6) * 2 + 0x20) = *puVar5;
      if (unaff_w29 < (int)unaff_w23) goto LAB_02b5499c;
      unaff_w25 = unaff_w23 * 2;
      if ((int)unaff_w25 < unaff_w24) goto code_r0x02b548b0;
      uVar2 = unaff_w28 + unaff_w25;
      if (uVar4 <= uVar2) break;
      uVar6 = unaff_w23;
      if (unaff_x21 == 0) goto LAB_02b549d4;
    } while( true );
  }
LAB_02b549d0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
code_r0x02b548b0:
  uVar2 = unaff_w25 + iStack0000000000000008;
  if ((uVar4 <= uVar2 - 1) || (uVar4 <= uVar2)) goto LAB_02b549d0;
  if (unaff_x21 == 0) {
LAB_02b549d4:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  param_3 = (ulong)*(ushort *)(unaff_x19 + (long)(int)(uVar2 - 1) * 2 + 0x20);
  unaff_w27 = (uint)*(ushort *)(unaff_x19 + (long)(int)uVar2 * 2 + 0x20);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  param_1 = *(code **)(unaff_x21 + 0x18);
  param_2 = *(undefined8 *)(unaff_x21 + 0x40);
  param_5 = *(undefined8 *)(unaff_x21 + 0x28);
  goto code_r0x02b54900;
}


