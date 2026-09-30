/*
FUNCTION_NAME: Sirenix.Serialization.UnitySerializationUtility.<>c$$<SerializePrefabModifications>b__33_0
ENTRY_POINT: 01b5ee3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01b5effc) */
/* WARNING: Removing unreachable block (ram,0x01b5f008) */

void Sirenix_Serialization_UnitySerializationUtility_<>c__<SerializePrefabModifications>b__33_0
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int iVar5;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 uStack0000000000000058;
  long in_stack_00000068;
  
  uStack0000000000000058 = in_stack_00000018;
  in_stack_00000018 = 0;
  FUN_01320c9c(&stack0x00000018,&stack0x00000050,*unaff_x21);
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<InitConfigOptions,_bool>_get_Current__;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<ObiSolver,_ObiSolver_ObiCollisionEventArgs>_set_Item__
  ;
  puVar1 = PTR_DAT_033f5610;
  in_stack_00000048 = in_stack_00000018;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    iVar5 = 0;
    do {
      FUN_0132138c();
      FUN_01b5ebac();
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01322050(in_stack_00000050,in_stack_00000068,*(undefined8 *)puVar3);
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012ddc8c(in_stack_00000068,*(undefined8 *)puVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_x19 + 0x18));
  }
  in_stack_00000018 = 0;
  FUN_01320c9c(&stack0x00000018,(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)
                Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__);
  puVar2 = 
  Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ushort>__ctor__;
  in_stack_00000040 = in_stack_00000018;
  _in_stack_00000030 = FUN_01b5d6d0(in_stack_00000050,*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11687);
  if (lVar4 != 0) {
    FUN_011c181c(lVar4);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_<>c_<_cctor>b__16_2__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01353df8(&stack0x00000030,lVar4,
                 *(undefined8 *)System_Collections_Generic_List<MB2_TexturePacker_Image>_TypeInfo);
    FUN_01320dd0(&stack0x00000040,*(undefined8 *)puVar2);
    FUN_01320dd0(&stack0x00000048,*(undefined8 *)puVar1);
    FUN_012dd30c(&stack0x00000058,*unaff_x22);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


