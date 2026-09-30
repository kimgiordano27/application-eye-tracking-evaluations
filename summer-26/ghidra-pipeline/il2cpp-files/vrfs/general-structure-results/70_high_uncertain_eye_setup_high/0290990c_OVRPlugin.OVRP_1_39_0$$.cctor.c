/*
FUNCTION_NAME: OVRPlugin.OVRP_1_39_0$$.cctor
ENTRY_POINT: 0290990c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_39_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long *unaff_x21;
  
  if ((param_1 != 0) &&
     (lVar5 = thunk_FUN_015d0480(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0)) {
LAB_02909a58:
    uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar7,0);
  }
  puVar1 = PTR_DAT_06db4eb8;
  if (0x11 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0x15] = param_1;
    thunk_FUN_01656ef8(unaff_x19 + 0x15,param_1);
    lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
    goto LAB_02909a58;
    puVar4 = PTR_DAT_06e434f0;
    puVar3 = PTR_DAT_06ddfa10;
    puVar2 = PTR_DAT_06daad00;
    puVar1 = PTR_DAT_06d8b368;
    if (0x12 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x16] = lVar5;
      thunk_FUN_01656ef8(unaff_x19 + 0x16,lVar5);
      *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
      thunk_FUN_01656ef8();
      uVar7 = FUN_031c8668(*(undefined8 *)puVar1,0);
      puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
      *puVar8 = uVar7;
      thunk_FUN_01656ef8(puVar8,uVar7);
      uVar7 = FUN_0160edfc(*(undefined8 *)puVar4,0x41);
      FUN_02df8d44(uVar7,*(undefined8 *)puVar2,0);
      puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
      *puVar8 = uVar7;
      thunk_FUN_01656ef8(puVar8,uVar7);
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar5 = *(long *)puVar3;
      }
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) = **(undefined8 **)(lVar5 + 0xb8);
      thunk_FUN_01656ef8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


