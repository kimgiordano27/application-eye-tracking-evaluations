/*
FUNCTION_NAME: FluffyUnderware.Curvy.ImportExport.SplineJsonConverter$$JsonToSpline
ENTRY_POINT: 02ed9e90
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02eda284) */
/* WARNING: Removing unreachable block (ram,0x02eda404) */

void FluffyUnderware_Curvy_ImportExport_SplineJsonConverter__JsonToSpline(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  ulong uVar12;
  long *unaff_x22;
  long *unaff_x23;
  unkbyte10 Var13;
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
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01a46ff8();
  }
  plVar6 = (long *)**(long **)(param_1 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,unaff_w20 + 2,*(undefined8 *)(*plVar6 + 0x180));
  *(undefined8 *)(in_stack_00000098 + 0x10) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar9 = *(long *)(in_stack_00000098 + 8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar6 = *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar6 + 0x268))
            (plVar6,lVar9,0,*(undefined4 *)(lVar9 + 0x10),*(undefined8 *)(in_stack_00000098 + 0x10),
             2,*(undefined8 *)(*plVar6 + 0x270));
  lVar9 = *(long *)(in_stack_00000098 + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = in_stack_00000098[10];
  *(char *)(lVar9 + 0x20) = (char)((uint)uVar2 >> 8);
  lVar9 = *(long *)(in_stack_00000098 + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar9 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(char *)(lVar9 + 0x21) = (char)uVar2;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_02224a9c(&stack0x00000008,*(undefined8 *)(in_stack_00000098 + 0x10),0,unaff_w20 + 2,
               *(undefined8 *)PTR_DAT_03cf0d30);
  FUN_022239fc(in_stack_00000008,in_stack_00000010,*(undefined8 *)PTR_DAT_03cf5bf0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  Var13 = FluffyUnderware_Curvy_Shapes_CSPie__cpPosition();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  _uStack0000000000000078 = 0;
  in_stack_00000070 = (long *)Var13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000070,(long *)Var13);
  uStack0000000000000078 = (uint3)(ushort)((unkuint10)Var13 >> 0x40);
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
  plVar6 = in_stack_00000050;
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
    plVar6 = in_stack_00000050;
    if (in_stack_00000050 != (long *)0x0) {
      lVar9 = *in_stack_00000050;
      bVar3 = *(byte *)(*(long *)PTR_DAT_03cc0330 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03cc0330)) {
        uVar12 = in_stack_00000058 & 0xffff;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cf0d80) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_02eda1f4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*(long *)PTR_DAT_03cf0d80,2);
LAB_02eda1f4:
        (*(code *)*puVar8)(plVar6,uVar12,puVar8[1]);
      }
      else {
        FUN_02678d04(in_stack_00000050,0);
      }
    }
    iVar5 = 9;
  }
  else {
    lVar9 = *in_stack_00000050;
    bVar3 = *(byte *)(*(long *)PTR_DAT_03cc0330 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03cc0330)) {
      uVar12 = in_stack_00000058 & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cf0d80) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02eda0f0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*(long *)PTR_DAT_03cf0d80,0);
LAB_02eda0f0:
      iVar5 = (*(code *)*puVar8)(plVar6,uVar12,puVar8[1]);
      if (iVar5 != 0) goto LAB_02eda104;
    }
    else {
      uVar10 = FUN_027e971c(in_stack_00000050,0);
      if ((uVar10 & 1) != 0) goto LAB_02eda104;
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
    uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
    cStack000000000000004c = '\0';
    FUN_027e0bd8(uVar7,&stack0x0000004c,0);
    *(undefined1 *)(unaff_x19 + 0x5d) = 1;
    if (*(int *)(unaff_x19 + 0x58) < 5) {
      *(undefined4 *)(unaff_x19 + 0x58) = 3;
    }
    if ((in_stack_00000068._4_4_ < 0) && (cStack000000000000004c != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    auVar4._8_8_ = in_stack_00000038;
    auVar4._0_8_ = in_stack_00000030;
    if ((*(char *)(unaff_x19 + 0x18) == '\0') &&
       (_in_stack_00000030 = auVar4, *(char *)(unaff_x19 + 0x5e) != '\0')) {
      lVar9 = FUN_02ed5134();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _in_stack_00000030 = FUN_027e9a10(lVar9,0,0);
      uVar10 = FUN_026792ec(&stack0x00000030,0);
      if ((uVar10 & 1) == 0) {
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


