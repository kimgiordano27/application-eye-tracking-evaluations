/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 05d80a6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong in_x9;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long *plVar11;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 unaff_s10;
  undefined4 uStack0000000000000008;
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
  
  do {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_05d80aac;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_032937ac(unaff_x23,param_3,9);
LAB_05d80aac:
      (*(code *)*puVar3)(unaff_x23,unaff_w22,&stack0x00000050,puVar3[1]);
      uVar4 = FUN_05d80d54();
      if ((uVar4 & 1) == 0) {
        in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        in_stack_00000018 = in_stack_00000058;
        uStack0000000000000024 = uStack0000000000000064;
        uStack0000000000000020 = uStack0000000000000060;
        lVar5 = FUN_05d80e1c();
        plVar11 = *(long **)(unaff_x19 + 0x78);
        in_stack_00000078 = lVar5;
        if (plVar11 == (long *)0x0) goto LAB_05d80d40;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar7,0);
        }
        if (*(uint *)(plVar11 + 3) <= unaff_w22) {
LAB_05d80d44:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        plVar11[(long)(int)unaff_w22 + 4] = lVar5;
        thunk_FUN_0333a630(plVar11 + (long)(int)unaff_w22 + 4,lVar5);
      }
      uStack000000000000000c = unaff_w22;
      uVar7 = thunk_FUN_032a52d0(*unaff_x28,(long)&stack0x00000008 + 4);
      uStack0000000000000008 = (undefined4)unaff_x21;
      uVar8 = thunk_FUN_032a52d0(*unaff_x28,&stack0x00000008);
      FUN_057ab61c(*(undefined8 *)PTR_DAT_072b1590,uVar7,uVar8,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
LAB_05d80d40:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar7 = FUN_05d80fdc(*(long *)(unaff_x19 + 0x40),unaff_w22);
      plVar11 = *(long **)(unaff_x19 + 0x38);
      uVar2 = (int)uVar7;
      if (unaff_w22 != 0) {
        uVar2 = unaff_s10;
      }
      if (plVar11 == (long *)0x0) goto LAB_05d80d40;
      lVar5 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_05d80c00;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar11,*unaff_x26,9);
LAB_05d80c00:
      (*(code *)*puVar3)(plVar11,unaff_x21 & 0xffffffff,&stack0x00000030,puVar3[1]);
      if (in_stack_00000078 == 0) goto LAB_05d80d40;
      FUN_06be6b04(in_stack_00000078,0);
      uVar7 = FUN_05d81058(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar7,
                           uVar2);
      lVar5 = in_stack_00000078;
      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1550);
      FUN_05d812c0(uVar8,unaff_w22,unaff_x21 & 0xffffffff,lVar5,uVar7);
      lVar5 = *(long *)(unaff_x19 + 0x68);
      if (lVar5 == 0) goto LAB_05d80d40;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar9 = *unaff_x29;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05d80d40;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar3 = uVar8;
        thunk_FUN_0333a630(puVar3,uVar8);
      }
      else {
        FUN_041e2c78(lVar5,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      do {
        unaff_x21 = unaff_x21 + 1;
        if (unaff_x21 == 0x1a) {
          FUN_05d81318();
          lVar5 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
            return;
          }
          goto LAB_05d80d40;
        }
        lVar5 = *unaff_x27;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar5 = *unaff_x27;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_05d80d40;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05d80d44;
        unaff_w22 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
      } while ((unaff_w22 == 0xffffffff) ||
              ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
      unaff_x23 = *(long **)(unaff_x19 + 0x38);
      if (unaff_x23 == (long *)0x0) goto LAB_05d80d40;
      param_1 = *unaff_x23;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


