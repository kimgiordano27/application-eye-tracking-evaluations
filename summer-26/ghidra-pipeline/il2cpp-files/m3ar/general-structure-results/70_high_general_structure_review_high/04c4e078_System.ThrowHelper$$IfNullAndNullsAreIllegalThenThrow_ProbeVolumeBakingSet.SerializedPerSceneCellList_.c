/*
FUNCTION_NAME: System.ThrowHelper$$IfNullAndNullsAreIllegalThenThrow<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 04c4e078
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long *in_stack_00000178;
  
  if (param_1 != (long *)0x0) {
    FUN_086299f4(&stack0x00000150,0);
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<TrackedDeviceRaycaster_RaycastHitData>
          ;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(param_1,lVar3,0);
System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<TrackedDeviceRaycaster_RaycastHitData>:
    uVar5 = (*(code *)*puVar2)(param_1);
    plVar1 = in_stack_00000178;
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0406aaec(lVar3);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto System_ThrowHelper__ThrowArgumentValidationException<char>;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar3,0);
System_ThrowHelper__ThrowArgumentValidationException<char>:
      (*(code *)*puVar2)(plVar1);
      return;
    }
  }
  *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  return;
}


