/*
FUNCTION_NAME: Unity.Mathematics.PostNormalizeAttribute$$.ctor
ENTRY_POINT: 05b23e50
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


void Unity_Mathematics_PostNormalizeAttribute___ctor(code *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long *unaff_x20;
  long *unaff_x23;
  int unaff_w24;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  (*param_1)();
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar5);
    lVar5 = *unaff_x23;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar5 != 0) {
    if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
      *(long **)(lVar5 + (long)unaff_w24 * 0xb8 + 0x50) = unaff_x20;
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05b2efa8();
      auVar8 = FUN_05b210f0();
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      FUN_03e1339c(&stack0x00000038,auVar8._0_8_,auVar8._8_8_,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<IXRInputButtonReader,_Object>_Set__
                  );
      uVar2 = in_stack_00000048;
      uVar1 = in_stack_00000040;
      uVar4 = in_stack_00000038;
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__
             ) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_05b23f48;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();
LAB_05b23f48:
      in_stack_00000058 = uVar1;
      in_stack_00000050 = uVar4;
      in_stack_00000060 = uVar2;
      (*(code *)*puVar3)();
      lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
      if (lVar5 == 0) goto LAB_05b2401c;
      if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
        if (*(char *)(lVar5 + (long)unaff_w24 * 0xb8 + 0x58) != '\0') {
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
            if (lVar5 == 0) goto LAB_05b2401c;
          }
          if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_05b24018;
          uVar4 = FUN_03e1a160(&stack0x00000050,lVar5 + (long)unaff_w24 * 0xb8 + 0x58,
                               *(undefined8 *)
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate>__
                              );
          FUN_05b2f0f8(uVar4,unaff_w19);
        }
        return;
      }
    }
LAB_05b24018:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_05b2401c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


