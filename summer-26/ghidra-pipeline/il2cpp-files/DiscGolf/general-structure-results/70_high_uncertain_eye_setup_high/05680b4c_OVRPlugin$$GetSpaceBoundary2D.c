/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 05680b4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_24 = *(undefined4 *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_34 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  if (lVar6 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    uVar3 = (uint)*(ulong *)(lVar6 + 0x18);
    if (0 < (int)uVar3) {
      uVar2 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
      uVar4 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      puVar5 = &local_60;
      puVar7 = (undefined4 *)(lVar6 + 0x20);
      do {
        if (uVar4 == 0) {
          if (*(long *)(lVar1 + 0x28) == local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          goto LAB_05680c08;
        }
        uVar2 = uVar2 - 1;
        uVar4 = uVar4 - 1;
        *(undefined4 *)puVar5 = *puVar7;
        puVar5 = (undefined8 *)((long)puVar5 + 4);
        puVar7 = puVar7 + 1;
      } while (uVar2 != 0);
    }
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = local_50;
    param_1[5] = CONCAT44(local_34,uStack_38);
    param_1[4] = uStack_40;
    param_1[7] = CONCAT44(local_24,uStack_28);
    param_1[6] = CONCAT44(uStack_2c,uStack_30);
    if (*(long *)(lVar1 + 0x28) == local_18) {
      return;
    }
  }
LAB_05680c08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


