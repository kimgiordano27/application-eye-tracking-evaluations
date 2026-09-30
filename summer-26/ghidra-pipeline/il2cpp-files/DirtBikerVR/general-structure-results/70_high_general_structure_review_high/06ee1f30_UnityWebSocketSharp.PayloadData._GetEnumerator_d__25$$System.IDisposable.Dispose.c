/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData.<GetEnumerator>d__25$$System.IDisposable.Dispose
ENTRY_POINT: 06ee1f30
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25__System_IDisposable_Dispose(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long in_stack_00000020;
  char *in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06ee1f80;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_06ee1f80:
    (*(code *)*puVar1)();
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  if (*in_stack_00000028 != '\0') {
    thunk_FUN_03a98474(*in_stack_00000030,0);
  }
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}


