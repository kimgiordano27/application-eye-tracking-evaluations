/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 01a09b2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LateUpdate(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar1 = Method_System_Net_Configuration_ConnectionManagementElementCollection__ctor__;
  if ((DAT_0377a91a & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp1_s16__);
    thunk_FUN_00d48444(Method_System_Net_Configuration_ConnectionManagementElementCollection__ctor__
                      );
    DAT_0377a91a = 1;
  }
  FUN_0136a398(param_1,param_2,*(undefined8 *)puVar1);
  plVar7 = *(long **)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp1_s16__;
  if (plVar7 != (long *)0x0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar2 = FUN_0268fd10(param_2,0);
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01a09c00;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,0);
LAB_01a09c00:
    (*(code *)*puVar3)(&local_58,plVar7,uVar2,puVar3[1]);
    FUN_01a081e4(local_58,uStack_54,local_50,uStack_4c,local_48,uStack_44,param_2);
  }
  return;
}


