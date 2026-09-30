/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces2
ENTRY_POINT: 051c7bac
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpaces2(undefined1 param_1 [16],long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 in_x9;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  
  *(undefined8 *)(param_2 + 0x28) = in_x9;
  *(long *)(param_2 + 0x20) = param_1._8_8_;
  *(long *)(param_2 + 0x18) = param_1._0_8_;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_3 + 0x38);
  *(undefined1 *)(param_2 + 0x39) = *(undefined1 *)(param_3 + 0x39);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x48);
  lVar5 = *(long *)(param_3 + 0x40);
  if (lVar5 != 0) {
    uVar3 = 0;
    lVar4 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_051c7c64:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      puVar1 = (undefined8 *)(lVar5 + lVar4);
      lVar5 = *(long *)(param_2 + 0x40);
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20);
      uStack000000000000002c = (undefined4)((ulong)uVar7 >> 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_051c7c64;
      puVar2 = (undefined8 *)(lVar5 + lVar4);
      lVar4 = lVar4 + 0x1c;
      *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
      *(ulong *)((long)puVar2 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      puVar2[1] = uVar7;
      *puVar2 = uVar6;
      lVar5 = *(long *)(param_3 + 0x40);
      uVar3 = uVar3 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


