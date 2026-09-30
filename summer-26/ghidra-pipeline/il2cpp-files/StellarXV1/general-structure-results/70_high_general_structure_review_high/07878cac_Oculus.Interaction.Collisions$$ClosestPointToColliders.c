/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToColliders
ENTRY_POINT: 07878cac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


uint Oculus_Interaction_Collisions__ClosestPointToColliders
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  while (lVar1 = FUN_05c26ab8(param_1,unaff_w21,param_3), lVar1 != 0) {
    uVar2 = thunk_FUN_0408781c(lVar1,0);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x26 + 0xe0));
    }
    uVar3 = FUN_07692be0(unaff_x23,uVar2,0);
    if ((uVar3 & 1) != 0) {
      return unaff_w22;
    }
    lVar1 = *(long *)(unaff_x20 + 0x18);
    unaff_w21 = unaff_w21 + 1;
    if (lVar1 == 0) break;
    unaff_w22 = (uint)(*(int *)(lVar1 + 0x18) <= unaff_w21);
    if (*(int *)(lVar1 + 0x18) <= unaff_w21) {
      return unaff_w22;
    }
    lVar1 = FUN_05c26ab8(lVar1,unaff_w21,*unaff_x25);
    if (lVar1 == 0) break;
    unaff_x23 = thunk_FUN_0408781c(lVar1,0);
    param_1 = *(long *)(unaff_x19 + 0x18);
    if (param_1 == 0) break;
    param_3 = *unaff_x25;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


