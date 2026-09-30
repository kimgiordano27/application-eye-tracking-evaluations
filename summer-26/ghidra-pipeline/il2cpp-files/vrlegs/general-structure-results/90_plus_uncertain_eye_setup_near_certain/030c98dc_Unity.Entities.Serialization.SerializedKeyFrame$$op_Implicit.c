/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializedKeyFrame$$op_Implicit
ENTRY_POINT: 030c98dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030c9b28) */
/* WARNING: Removing unreachable block (ram,0x030c9aa8) */
/* WARNING: Removing unreachable block (ram,0x030c9ae4) */
/* WARNING: Removing unreachable block (ram,0x030c9b30) */

bool Unity_Entities_Serialization_SerializedKeyFrame__op_Implicit(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  long *plVar7;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char cStack000000000000004c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cbfd60);
  *(undefined1 *)(unaff_x20 + 0x70e) = 1;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  iVar2 = thunk_FUN_01aa519c(unaff_x21 + 0x40,unaff_w19,0,0);
  if (iVar2 == 0) {
    plVar6 = (long *)(unaff_x21 + 0x20);
    if (*plVar6 == 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbfd60);
      FUN_027b3d9c(uVar3,0);
      FUN_027e6fe4(plVar6,uVar3,0,0);
    }
    uVar3 = thunk_FUN_01a4b274(plVar6,0);
    cStack000000000000004c = '\0';
    FUN_027e0bd8(uVar3,&stack0x0000004c,0);
    plVar6 = (long *)(unaff_x21 + 0x28);
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(unaff_x21 + 0x30),
                 *(undefined8 *)(lVar5 + 0x28));
    }
    plVar7 = (long *)(unaff_x21 + 0x38);
    if (*plVar7 != 0) {
      Animancer_FadeGroup__get_TargetWeight();
      puVar1 = System_Collections_Generic_Dictionary<BlendShapeBinding,_Action<float>>_TypeInfo;
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      while (uVar4 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        FUN_01b7a454(&stack0x00000020);
        if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(in_stack_00000000 + 0x18))
                  (*(undefined8 *)(in_stack_00000000 + 0x40),in_stack_00000008,
                   *(undefined8 *)(in_stack_00000000 + 0x28));
      }
      FUN_021b51c4(&stack0x00000020,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<BehaviourType,_IPrimitiveData>_TypeInfo);
    }
    *plVar6 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,0);
    *(undefined8 *)(unaff_x21 + 0x30) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x21 + 0x30),0);
    *plVar7 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,0);
    if (cStack000000000000004c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
  }
  return iVar2 == 0;
}


