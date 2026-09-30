/*
FUNCTION_NAME: VRM.VrmDeserializer$$Deserialize_vrm_secondaryAnimation_colliderGroups__colliders__offset
ENTRY_POINT: 0388a1a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


long * VRM_VrmDeserializer__Deserialize_vrm_secondaryAnimation_colliderGroups__colliders__offset
                 (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  int iVar4;
  long unaff_x23;
  long *in_stack_00000008;
  
  FUN_01ab69ac(Method_System_Collections_Generic_List_Enumerator<TypeContainer>_MoveNext__);
  *(undefined1 *)(unaff_x23 + 0x125) = 1;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<TypeContainer>_MoveNext__;
  lVar2 = *(long *)(unaff_x22 + 0x10);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return (long *)0x0;
      }
      FUN_02215a88(lVar2,iVar4,&stack0x00000008,*(undefined8 *)puVar1);
      if (in_stack_00000008 == (long *)0x0) break;
      uVar3 = (**(code **)(*in_stack_00000008 + 0x188))();
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x22 + 0x10) != 0) {
          FUN_02215a88(*(long *)(unaff_x22 + 0x10),iVar4,&stack0x00000008,*(undefined8 *)puVar1);
          return in_stack_00000008;
        }
        break;
      }
      lVar2 = *(long *)(unaff_x22 + 0x10);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


