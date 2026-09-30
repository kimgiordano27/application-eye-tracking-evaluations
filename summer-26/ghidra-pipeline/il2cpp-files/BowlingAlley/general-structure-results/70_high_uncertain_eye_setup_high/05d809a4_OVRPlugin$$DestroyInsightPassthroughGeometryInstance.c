/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 05d809a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyInsightPassthroughGeometryInstance
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  ulong uVar14;
  long *plVar15;
  long *unaff_x26;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  FUN_041e24b4(param_2,param_3,*param_1);
  plVar15 = (long *)(unaff_x19 + 0x68);
  *plVar15 = param_2;
  thunk_FUN_0333a630(plVar15,param_2);
  if (*plVar15 != 0) {
    uVar6 = FUN_041e2ea0(*plVar15,*(undefined8 *)PTR_DAT_072b1568);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar6;
    thunk_FUN_0333a630();
    puVar5 = PTR_DAT_072b1560;
    puVar4 = PTR_DAT_072b1558;
    puVar3 = PTR_DAT_072ad8c8;
    uVar14 = 2;
    do {
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_05d80d40;
      if (*(uint *)(lVar7 + 0x18) <= uVar14) {
LAB_05d80d44:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar1 = *(uint *)(lVar7 + uVar14 * 4 + 0x20);
      if ((uVar1 != 0xffffffff) &&
         ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar14 & 0x1f) & 1) != 0)) {
        plVar15 = *(long **)(unaff_x19 + 0x38);
        if (plVar15 == (long *)0x0) goto LAB_05d80d40;
        lVar7 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_05d80aac;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar15,*unaff_x26,9);
LAB_05d80aac:
        (*(code *)*puVar8)(plVar15,uVar1,&stack0x00000050,puVar8[1]);
        uVar11 = FUN_05d80d54();
        if ((uVar11 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          in_stack_00000018 = in_stack_00000058;
          uStack0000000000000024 = uStack0000000000000064;
          uStack0000000000000020 = uStack0000000000000060;
          lVar7 = FUN_05d80e1c();
          plVar15 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000078 = lVar7;
          if (plVar15 == (long *)0x0) goto LAB_05d80d40;
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0)) {
            uVar6 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar6,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar1) goto LAB_05d80d44;
          plVar15[(long)(int)uVar1 + 4] = lVar7;
          thunk_FUN_0333a630(plVar15 + (long)(int)uVar1 + 4,lVar7);
        }
        uStack000000000000000c = uVar1;
        uVar6 = thunk_FUN_032a52d0(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = (uint)uVar14;
        uVar10 = thunk_FUN_032a52d0(*(undefined8 *)puVar4,&stack0x00000008);
        FUN_057ab61c(*(undefined8 *)PTR_DAT_072b1590,uVar6,uVar10,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05d80d40;
        uVar6 = FUN_05d80fdc(*(long *)(unaff_x19 + 0x40),uVar1);
        plVar15 = *(long **)(unaff_x19 + 0x38);
        uVar2 = (int)uVar6;
        if (uVar1 != 0) {
          uVar2 = 0;
        }
        if (plVar15 == (long *)0x0) goto LAB_05d80d40;
        lVar7 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_05d80c00;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar15,*unaff_x26,9);
LAB_05d80c00:
        (*(code *)*puVar8)(plVar15,uVar14 & 0xffffffff,&stack0x00000030,puVar8[1]);
        if (in_stack_00000078 == 0) goto LAB_05d80d40;
        FUN_06be6b04(in_stack_00000078,0);
        uVar6 = FUN_05d81058(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar6,
                             uVar2);
        lVar7 = in_stack_00000078;
        uVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1550);
        FUN_05d812c0(uVar10,uVar1,uVar14 & 0xffffffff,lVar7,uVar6);
        lVar7 = *(long *)(unaff_x19 + 0x68);
        if (lVar7 == 0) goto LAB_05d80d40;
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_05d80d40;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar10;
          thunk_FUN_0333a630(puVar8,uVar10);
        }
        else {
          FUN_041e2c78(lVar7,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x1a);
    FUN_05d81318();
    lVar7 = *(long *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      return;
    }
  }
LAB_05d80d40:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


