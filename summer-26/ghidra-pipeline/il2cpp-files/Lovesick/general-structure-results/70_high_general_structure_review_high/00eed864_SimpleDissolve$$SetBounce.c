/*
FUNCTION_NAME: SimpleDissolve$$SetBounce
ENTRY_POINT: 00eed864
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void SimpleDissolve__SetBounce(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar8;
  
                    /* try { // try from 00eed864 to 00fed883 has its CatchHandler @ 00eed92c */
  puVar8 = *(undefined8 **)(unaff_x24 + 0x238);
  FUN_013df7e0();
  if (*(long *)(unaff_x19 + 0x140) != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x140) + 0x20);
    lVar3 = thunk_FUN_00d62348(*unaff_x23);
    if ((lVar3 != 0) && (FUN_013df2bc(), lVar6 != 0)) {
      FUN_013df7e0(lVar6,lVar3,*puVar8);
      uVar7 = *(undefined8 *)(unaff_x19 + 0xe8);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0268b5e4(uVar7,0);
      puVar2 = 
      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
      ;
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(unaff_x19 + 0xe8);
        if (lVar3 == 0) goto LAB_00eeda40;
        uVar7 = *(undefined8 *)(lVar3 + 0x90);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                                  );
        if (lVar6 == 0) goto LAB_00eeda40;
        FUN_00eed53c();
        plVar5 = (long *)FUN_017b78c8(uVar7,lVar6,0);
        if (plVar5 == (long *)0x0) {
          *(undefined8 *)(lVar3 + 0x90) = 0;
        }
        else {
          lVar6 = *(long *)puVar2;
          if (*plVar5 != lVar6) {
LAB_00eed950:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          *(long **)(lVar3 + 0x90) = plVar5;
          if (*plVar5 != lVar6) goto LAB_00eed950;
        }
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 200);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0268b5e4(uVar7,0);
      puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__;
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 200) != 0) {
        lVar6 = *(long *)(*(long *)(unaff_x19 + 200) + 0x150);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__
                                  );
        if ((lVar3 != 0) &&
           (FUN_013df3d0(),
           puVar1 = System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo,
           lVar6 != 0)) {
          FUN_013dfe38(lVar6,lVar3,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
          if (*(long *)(unaff_x19 + 200) != 0) {
            lVar6 = *(long *)(*(long *)(unaff_x19 + 200) + 0x148);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if ((lVar3 != 0) && (FUN_013df3d0(), lVar6 != 0)) {
              FUN_013dfe38(lVar6,lVar3,*(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
LAB_00eeda40:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


