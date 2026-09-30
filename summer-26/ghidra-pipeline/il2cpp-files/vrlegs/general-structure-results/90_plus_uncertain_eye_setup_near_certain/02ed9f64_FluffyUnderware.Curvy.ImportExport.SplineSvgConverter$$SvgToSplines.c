/*
FUNCTION_NAME: FluffyUnderware.Curvy.ImportExport.SplineSvgConverter$$SvgToSplines
ENTRY_POINT: 02ed9f64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02eda284) */
/* WARNING: Removing unreachable block (ram,0x02eda404) */

void FluffyUnderware_Curvy_ImportExport_SplineSvgConverter__SvgToSplines(void)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  ulong uVar10;
  long *unaff_x22;
  undefined8 uVar11;
  long *unaff_x23;
  unkbyte10 Var12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char cStack000000000000004c;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  uint3 uStack0000000000000078;
  undefined5 uStack000000000000007b;
  long *in_stack_00000080;
  ulong in_stack_00000088;
  undefined4 *in_stack_00000098;
  
  FUN_02224a9c();
  FUN_022239fc(in_stack_00000008,in_stack_00000010,*(undefined8 *)PTR_DAT_03cf5bf0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  Var12 = FluffyUnderware_Curvy_Shapes_CSPie__cpPosition();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  _uStack0000000000000078 = 0;
  in_stack_00000070 = (long *)Var12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000070,(long *)Var12);
  uStack0000000000000078 = (uint3)(ushort)((unkuint10)Var12 >> 0x40);
  in_stack_00000088 = _uStack0000000000000078;
  in_stack_00000080 = in_stack_00000070;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000080,0);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000080,0);
  in_stack_00000050 = in_stack_00000080;
  in_stack_00000058 = in_stack_00000088;
  if (DAT_04124329 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cda8c8);
    DAT_04124329 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (DAT_04123eab == '\0') {
    FUN_01ab69ac(PTR_DAT_03cf0d80);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04123eab = '\x01';
  }
  plVar4 = in_stack_00000050;
  if (in_stack_00000050 == (long *)0x0) {
LAB_02eda104:
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
    plVar4 = in_stack_00000050;
    if (in_stack_00000050 != (long *)0x0) {
      lVar7 = *in_stack_00000050;
      bVar2 = *(byte *)(*(long *)PTR_DAT_03cc0330 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cc0330)) {
        uVar10 = in_stack_00000058 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cf0d80) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_02eda1f4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*(long *)PTR_DAT_03cf0d80,2);
LAB_02eda1f4:
        (*(code *)*puVar6)(plVar4,uVar10,puVar6[1]);
      }
      else {
        FUN_02678d04(in_stack_00000050,0);
      }
    }
    iVar5 = 9;
  }
  else {
    lVar7 = *in_stack_00000050;
    bVar2 = *(byte *)(*(long *)PTR_DAT_03cc0330 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cc0330)) {
      uVar10 = in_stack_00000058 & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cf0d80) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02eda0f0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*(long *)PTR_DAT_03cf0d80,0);
LAB_02eda0f0:
      iVar5 = (*(code *)*puVar6)(plVar4,uVar10,puVar6[1]);
      if (iVar5 != 0) goto LAB_02eda104;
    }
    else {
      uVar8 = FUN_027e971c(in_stack_00000050,0);
      if ((uVar8 & 1) != 0) goto LAB_02eda104;
    }
    in_stack_00000068._4_4_ = 0;
    *in_stack_00000098 = 0;
    *(ulong *)(in_stack_00000098 + 0x14) = in_stack_00000058;
    *(long **)(in_stack_00000098 + 0x12) = in_stack_00000050;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000098 + 0x12,0);
    puVar1 = in_stack_00000098;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01f2e2b8(puVar1 + 2,&stack0x00000050,in_stack_00000098,*(undefined8 *)PTR_DAT_03d20990);
    iVar5 = 8;
  }
  FUN_019c1f7c(&stack0x00000018);
  if ((iVar5 == 9) || (iVar5 == 0)) {
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
      lVar7 = FUN_02ed5134();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _in_stack_00000030 = FUN_027e9a10(lVar7,0,0);
      uVar8 = FUN_026792ec(&stack0x00000030,0);
      if ((uVar8 & 1) == 0) {
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


