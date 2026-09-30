/*
FUNCTION_NAME: FUN_01979cbc
ENTRY_POINT: 01979cbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_01979cbc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_0377a379 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_GuessIfUnityWillSerialize__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndxq_f64__);
    DAT_0377a379 = 1;
  }
  if ((char)param_1[7] == '\0') {
    return;
  }
  plVar6 = (long *)param_1[6];
  lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
  if ((lVar1 != 0) &&
     (FUN_016f27fc(lVar1,param_1,*(undefined8 *)(*param_1 + 0x1a0),0), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             Method_Sirenix_Serialization_UnitySerializationUtility_GuessIfUnityWillSerialize__) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_01979da0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  Method_Sirenix_Serialization_UnitySerializationUtility_GuessIfUnityWillSerialize__
                          ,3);
LAB_01979da0:
    (*(code *)*puVar2)(plVar6,lVar1,puVar2[1]);
    plVar6 = (long *)param_1[4];
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrndxq_f64__
             ) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto Oculus_Platform_RosterOptions___ctor;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_00d59724(plVar6,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrndxq_f64__,1);
Oculus_Platform_RosterOptions___ctor:
                    /* WARNING: Could not recover jumptable at 0x01979e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,1,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


