/*
FUNCTION_NAME: FluffyUnderware.Curvy.ImportExport.SplineSvgConverter$$SvgToSerializedSplines
ENTRY_POINT: 02eda0b4
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


/* WARNING: Removing unreachable block (ram,0x02eda284) */
/* WARNING: Removing unreachable block (ram,0x02eda404) */

void FluffyUnderware_Curvy_ImportExport_SplineSvgConverter__SvgToSerializedSplines
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x22;
  undefined8 uVar11;
  long *unaff_x23;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char cStack000000000000004c;
  long *in_stack_00000050;
  undefined2 uStack0000000000000058;
  undefined6 uStack000000000000005a;
  undefined8 in_stack_00000068;
  undefined4 *in_stack_00000098;
  
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02eda0f0;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar7 = (undefined8 *)FUN_01a472ec();
LAB_02eda0f0:
  iVar6 = (*(code *)*puVar7)();
  if (iVar6 == 0) {
    in_stack_00000068._4_4_ = 0;
    *in_stack_00000098 = 0;
    *(ulong *)(in_stack_00000098 + 0x14) = CONCAT62(uStack000000000000005a,uStack0000000000000058);
    *(long **)(in_stack_00000098 + 0x12) = in_stack_00000050;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000098 + 0x12,0);
    puVar1 = in_stack_00000098;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01f2e2b8(puVar1 + 2,&stack0x00000050,in_stack_00000098,*(undefined8 *)PTR_DAT_03d20990);
    iVar6 = 8;
  }
  else {
    if (DAT_0412432a == '\0') {
      FUN_01ab69ac(PTR_DAT_03cda8c8);
      DAT_0412432a = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (DAT_04123ead == '\0') {
      FUN_01ab69ac(PTR_DAT_03cf0d80);
      FUN_01ab69ac(PTR_DAT_03cc0330);
      DAT_04123ead = '\x01';
    }
    uVar5 = uStack0000000000000058;
    plVar4 = in_stack_00000050;
    if (in_stack_00000050 != (long *)0x0) {
      lVar8 = *in_stack_00000050;
      bVar2 = *(byte *)(*(long *)PTR_DAT_03cc0330 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cc0330)) {
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cf0d80) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_02eda1f4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*(long *)PTR_DAT_03cf0d80,2);
LAB_02eda1f4:
        (*(code *)*puVar7)(plVar4,uVar5,puVar7[1]);
      }
      else {
        FUN_02678d04(in_stack_00000050,0);
      }
    }
    iVar6 = 9;
  }
  FUN_019c1f7c(&stack0x00000018);
  if ((iVar6 == 9) || (iVar6 == 0)) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
    cStack000000000000004c = '\0';
    FUN_027e0bd8(uVar11,&stack0x0000004c,0);
    *(undefined1 *)(unaff_x19 + 0x5d) = 1;
    if (*(int *)(unaff_x19 + 0x58) < 5) {
      *(undefined4 *)(unaff_x19 + 0x58) = 3;
    }
    if ((in_stack_00000068._4_4_ < 0) && (cStack000000000000004c != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
    }
    auVar3._8_8_ = in_stack_00000038;
    auVar3._0_8_ = in_stack_00000030;
    if ((*(char *)(unaff_x19 + 0x18) == '\0') &&
       (_in_stack_00000030 = auVar3, *(char *)(unaff_x19 + 0x5e) != '\0')) {
      lVar8 = FUN_02ed5134();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _in_stack_00000030 = FUN_027e9a10(lVar8,0,0);
      uVar9 = FUN_026792ec(&stack0x00000030,0);
      if ((uVar9 & 1) == 0) {
        in_stack_00000068._4_4_ = 1;
        *in_stack_00000098 = 1;
        *(undefined1 (*) [16])(in_stack_00000098 + 0x16) = _in_stack_00000030;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (in_stack_00000098 + 0x16,0);
        puVar1 = in_stack_00000098;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f2e2b8(puVar1 + 2,&stack0x00000030,in_stack_00000098,*(undefined8 *)PTR_DAT_03d20988);
        return;
      }
      FUN_02679308(&stack0x00000030,0);
    }
    *in_stack_00000098 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000098 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000098 + 0x10,0);
    puVar1 = in_stack_00000098 + 2;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02679adc(puVar1,0);
  }
  return;
}


