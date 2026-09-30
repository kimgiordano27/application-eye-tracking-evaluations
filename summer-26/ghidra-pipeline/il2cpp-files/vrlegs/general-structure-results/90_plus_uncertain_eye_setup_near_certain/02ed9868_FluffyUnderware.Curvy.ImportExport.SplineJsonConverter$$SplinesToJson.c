/*
FUNCTION_NAME: FluffyUnderware.Curvy.ImportExport.SplineJsonConverter$$SplinesToJson
ENTRY_POINT: 02ed9868
PROGRAM: vrlegs-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ed9a30) */
/* WARNING: Removing unreachable block (ram,0x02ed9a20) */

void FluffyUnderware_Curvy_ImportExport_SplineJsonConverter__SplinesToJson(void)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  int iVar4;
  undefined8 uVar5;
  undefined8 unaff_x23;
  long *unaff_x25;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 *in_stack_00000048;
  
code_r0x02ed9868:
  lVar2 = FUN_02ed5e18();
  *(long *)(unaff_x19 + 0xa8) = lVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((long *)(unaff_x19 + 0xa8),lVar2);
  iVar4 = 0xc;
  do {
    if ((in_stack_00000040._4_4_ < 0) && (in_stack_00000028._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x23,0);
    }
    if ((iVar4 != 0) && (iVar4 != 0xc)) {
      if (iVar4 != 0xb) goto LAB_02ed9964;
LAB_02ed9938:
      iVar4 = 0xe;
LAB_02ed9964:
      FUN_019a12e8(&stack0x00000010);
      if ((iVar4 == 0xe) || (iVar4 == 0)) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
        in_stack_00000028._4_1_ = '\0';
        FUN_027e0bd8(uVar5,(long)&stack0x00000028 + 4,0);
        FUN_02ed2854();
        if (*(int *)(unaff_x19 + 0x58) < 5) {
          *(undefined4 *)(unaff_x19 + 0x58) = 5;
        }
        if ((in_stack_00000040._4_4_ < 0) && (in_stack_00000028._4_1_ != '\0')) {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
        }
        *in_stack_00000048 = 0xfffffffe;
        *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (in_stack_00000048 + 0x10,0);
        puVar1 = in_stack_00000048 + 2;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02679adc(puVar1,0);
      }
      return;
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar6 = FUN_027e9a10(lVar2,0,0);
    _in_stack_00000030 = auVar6;
    uVar3 = FUN_026792ec(&stack0x00000030,0);
    if ((uVar3 & 1) == 0) {
      in_stack_00000040._4_4_ = 1;
      *in_stack_00000048 = 1;
      *(undefined1 (*) [16])(in_stack_00000048 + 0x12) = _in_stack_00000030;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000048 + 0x12,0);
      puVar1 = in_stack_00000048;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_03d20980);
      iVar4 = 6;
      goto LAB_02ed9964;
    }
    FUN_02679308(&stack0x00000030,0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(char *)(unaff_x19 + 0x5e) != '\0') goto LAB_02ed9938;
    unaff_x23 = *(undefined8 *)(unaff_x19 + 0x48);
    in_stack_00000028._4_1_ = '\0';
    FUN_027e0bd8(unaff_x23,(long)&stack0x00000028 + 4,0);
    if (*(char *)(unaff_x19 + 0x5e) == '\0') goto code_r0x02ed9868;
    iVar4 = 0xb;
  } while( true );
}


