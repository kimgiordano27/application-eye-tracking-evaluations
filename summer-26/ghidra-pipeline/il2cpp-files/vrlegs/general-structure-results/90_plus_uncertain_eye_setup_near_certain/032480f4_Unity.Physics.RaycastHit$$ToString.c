/*
FUNCTION_NAME: Unity.Physics.RaycastHit$$ToString
ENTRY_POINT: 032480f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Physics_RaycastHit__ToString(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar8;
  uint uVar9;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Bone___TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x771) = 1;
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) {
    return;
  }
  if (unaff_x20 != 0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack0000000000000004 = unaff_w21;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008);
    uVar3 = in_stack_00000008;
    puVar2 = OVRPlugin_Bone___TypeInfo;
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 != 0) {
      uVar9 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar5 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar5 == 0) || (plVar8 = *(long **)(lVar5 + 0x18), plVar8 == (long *)0x0)) break;
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_032481bc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_032481bc:
        (*(code *)*puVar4)(plVar8,CONCAT44(uStack0000000000000004,uVar1),uVar3,puVar4[1]);
        lVar5 = *(long *)(unaff_x19 + 0x20);
        uVar9 = uVar9 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


