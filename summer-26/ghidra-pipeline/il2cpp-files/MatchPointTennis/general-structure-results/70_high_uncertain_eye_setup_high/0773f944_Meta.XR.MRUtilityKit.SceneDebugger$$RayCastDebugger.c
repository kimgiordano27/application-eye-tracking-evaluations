/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$RayCastDebugger
ENTRY_POINT: 0773f944
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SceneDebugger__RayCastDebugger(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 unaff_x19;
  uint unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  uint uStack000000000000005c;
  long *in_stack_00000078;
  
  puVar2 = (undefined8 *)FUN_044822ac();
  (*(code *)*puVar2)();
  if (in_stack_00000078 != (long *)0x0) {
    lVar3 = *in_stack_00000078;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uStack000000000000005c = unaff_w28;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x14) * 0x10 + 0x138);
          goto LAB_0773f9e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0x14);
LAB_0773f9e8:
    (*(code *)*puVar2)(in_stack_00000078,puVar2[1]);
    if (in_stack_00000078 != (long *)0x0) {
      lVar3 = *in_stack_00000078;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0773fa68;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,2);
LAB_0773fa68:
      (*(code *)*puVar2)(in_stack_00000078,puVar2[1]);
      if (in_stack_00000078 != (long *)0x0) {
        lVar3 = *in_stack_00000078;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0773facc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0);
LAB_0773facc:
        (*(code *)*puVar2)(in_stack_00000078,puVar2[1]);
        uVar1 = FUN_0773fb7c(unaff_x19,1,1,unaff_w26 & 1,unaff_w27 & 1,unaff_w24 & 1,unaff_w29 & 1,
                             uStack000000000000005c & 1);
        return uVar1 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


