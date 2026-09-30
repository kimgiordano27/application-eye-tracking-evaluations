/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRSpace,-OVRPlugin.SpaceQueryResult>$$get_Count
ENTRY_POINT: 02b5487c
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


void System_Collections_Generic_Dictionary_KeyCollection<OVRSpace,_OVRPlugin_SpaceQueryResult>__get_Count
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               long param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_w9;
  long unaff_x19;
  undefined2 *puVar7;
  uint unaff_w23;
  uint uVar8;
  uint unaff_w27;
  int unaff_w28;
  undefined4 uStack000000000000000c;
  
  uVar5 = (uint)param_1;
  iVar2 = param_4;
  if (param_4 < 0) {
    iVar2 = param_4 + 1;
  }
  uStack000000000000000c = in_w9;
  do {
    if (iVar2 >> 1 < (int)unaff_w23) {
LAB_02b5499c:
      if (unaff_w27 < uVar5) {
        *(short *)(unaff_x19 + (long)(int)unaff_w27 * 2 + 0x20) = (short)uStack000000000000000c;
        return;
      }
LAB_02b549d0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar8 = unaff_w23 * 2;
    uVar5 = (uint)param_1;
    if ((int)uVar8 < param_4) {
      uVar1 = uVar8 + param_5;
      if ((uVar5 <= uVar1 - 1) || (uVar5 <= uVar1)) goto LAB_02b549d0;
      if (param_6 == 0) {
LAB_02b549d4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar3 = *(undefined2 *)(unaff_x19 + (long)(int)(uVar1 - 1) * 2 + 0x20);
      uVar4 = *(undefined2 *)(unaff_x19 + (long)(int)uVar1 * 2 + 0x20);
      if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      uVar5 = (**(code **)(param_6 + 0x18))
                        (*(undefined8 *)(param_6 + 0x40),uVar3,uVar4,*(undefined8 *)(param_6 + 0x28)
                        );
      uVar8 = uVar8 | uVar5 >> 0x1f;
      unaff_w27 = unaff_w28 + uVar8;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) goto LAB_02b549d0;
    }
    else {
      unaff_w27 = unaff_w28 + uVar8;
      if (uVar5 <= unaff_w27) goto LAB_02b549d0;
      if (param_6 == 0) goto LAB_02b549d4;
    }
    puVar7 = (undefined2 *)(unaff_x19 + (long)(int)unaff_w27 * 2 + 0x20);
    uVar3 = *puVar7;
    if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c72394();
    }
    iVar6 = (**(code **)(param_6 + 0x18))
                      (*(undefined8 *)(param_6 + 0x40),uStack000000000000000c,uVar3,
                       *(undefined8 *)(param_6 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar5 = (uint)param_1;
    if (-1 < iVar6) {
      unaff_w27 = unaff_w28 + unaff_w23;
      goto LAB_02b5499c;
    }
    if ((uVar5 <= unaff_w27) || (uVar5 <= unaff_w28 + unaff_w23)) goto LAB_02b549d0;
    *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 2 + 0x20) = *puVar7;
    unaff_w23 = uVar8;
  } while( true );
}


