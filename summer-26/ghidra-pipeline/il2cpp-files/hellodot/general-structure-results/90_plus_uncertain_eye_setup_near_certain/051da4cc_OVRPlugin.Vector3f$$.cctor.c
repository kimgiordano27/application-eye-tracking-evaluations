/*
FUNCTION_NAME: OVRPlugin.Vector3f$$.cctor
ENTRY_POINT: 051da4cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_Vector3f___cctor(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar13;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 unaff_d8;
  ulong unaff_d9;
  float unaff_s10;
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
  
  do {
    lVar8 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_051da51c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(unaff_x24,*unaff_x26,9);
LAB_051da51c:
    (*(code *)*puVar5)(unaff_x24,unaff_x21 & 0xffffffff,&stack0x00000030,puVar5[1]);
    lVar8 = in_stack_00000078;
    if (in_stack_00000078 == 0) {
LAB_051da64c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_05ef2cb4(in_stack_00000078,0);
    uVar6 = FUN_051da9b0(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,unaff_d8,
                         unaff_d9);
    lVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609088);
    FUN_04f7383c(lVar7,0);
    *(uint *)(lVar7 + 0x10) = unaff_w22;
    *(int *)(lVar7 + 0x14) = (int)unaff_x21;
    *(long *)(lVar7 + 0x18) = lVar8;
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    lVar8 = *(long *)(unaff_x19 + 0x68);
    if (lVar8 == 0) goto LAB_051da64c;
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *unaff_x29;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_051da64c;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
    }
    else {
      FUN_039683cc(lVar8,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_051dac58();
        lVar8 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar8 != 0) {
          (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
          return;
        }
        goto LAB_051da64c;
      }
      lVar8 = *unaff_x27;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *unaff_x27;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar8 == 0) goto LAB_051da64c;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x21) goto LAB_051da650;
      unaff_w22 = *(uint *)(lVar8 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar13 = *(long **)(unaff_x19 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_051da64c;
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto OVRPlugin_LogCallback2DelegateType__EndInvoke;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar13,*unaff_x26,9);
OVRPlugin_LogCallback2DelegateType__EndInvoke:
    (*(code *)*puVar5)(plVar13,unaff_w22,&stack0x00000050,puVar5[1]);
    uVar10 = FUN_051da660();
    if ((uVar10 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar8 = FUN_051da710();
      plVar13 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar8;
      if (plVar13 == (long *)0x0) goto LAB_051da64c;
      if ((lVar8 != 0) &&
         (lVar7 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0)) {
        uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar6,0);
      }
      if (*(uint *)(plVar13 + 3) <= unaff_w22) {
LAB_051da650:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[(long)(int)unaff_w22 + 4] = lVar8;
    }
    uStack000000000000000c = unaff_w22;
    uVar6 = thunk_FUN_02cea4e8(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar4 = thunk_FUN_02cea4e8(*unaff_x28,&stack0x00000008);
    FUN_04db9ab4(*(undefined8 *)PTR_DAT_066090c8,uVar6,uVar4,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_051da64c;
    unaff_d8 = FUN_051da8d0(*(long *)(unaff_x19 + 0x40),unaff_w22);
    unaff_x24 = *(long **)(unaff_x19 + 0x38);
    fVar3 = (float)unaff_d8;
    if (unaff_w22 != 0) {
      fVar3 = unaff_s10;
    }
    fVar2 = -(float)unaff_d8;
    if (unaff_x21 < 0x13) {
      fVar2 = fVar3;
    }
    unaff_d9 = (ulong)(uint)fVar2;
    if (unaff_x24 == (long *)0x0) goto LAB_051da64c;
  } while( true );
}


