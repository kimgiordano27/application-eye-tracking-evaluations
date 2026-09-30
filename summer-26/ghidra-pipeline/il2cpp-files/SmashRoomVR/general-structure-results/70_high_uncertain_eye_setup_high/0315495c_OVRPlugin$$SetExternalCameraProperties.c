/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 0315495c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetExternalCameraProperties(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((DAT_03ff2001 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d800f8);
    thunk_FUN_01ad9084(PTR_DAT_03d80108);
    thunk_FUN_01ad9084(PTR_DAT_03d80110);
    thunk_FUN_01ad9084(PTR_DAT_03d80368);
    thunk_FUN_01ad9084(PTR_DAT_03d80370);
    thunk_FUN_01ad9084(PTR_DAT_03d7f528);
    thunk_FUN_01ad9084(StringLiteral_3590);
    thunk_FUN_01ad9084(StringLiteral_3591);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__);
    thunk_FUN_01ad9084(PTR_DAT_03d80378);
    thunk_FUN_01ad9084(StringLiteral_3479);
    thunk_FUN_01ad9084(StringLiteral_9334);
    thunk_FUN_01ad9084(StringLiteral_2457);
    thunk_FUN_01ad9084(StringLiteral_3874);
    DAT_03ff2001 = 1;
  }
  puVar4 = PTR_DAT_03d7f528;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  uStack0000000000000014 = 0;
  if (*(char *)(param_1 + 0x70) == '\0') {
    return;
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (plVar19 = *(long **)(param_1 + 0x50), plVar19 == (long *)0x0)) goto LAB_03154e84;
  lVar9 = *plVar19;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d7f528) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_03154abc;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ae9f78(plVar19,*(long *)PTR_DAT_03d7f528,0);
LAB_03154abc:
  uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,&stack0x00000028,puVar6[1]);
  if ((uVar12 & 1) == 0) {
    plVar19 = *(long **)(param_1 + 0x48);
    in_stack_00000010 = *(undefined4 *)(param_1 + 100);
    uVar20 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80370,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar7 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80368,(long)&stack0x00000008 + 4);
    uVar20 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80378,uVar20,uVar7,0);
    if (plVar19 == (long *)0x0) goto LAB_03154e84;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(char *)(param_1 + 0x60) == '\0') {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x58);
LAB_03154e34:
    uVar18 = 0;
    puVar11 = (undefined4 *)(param_1 + 0x28);
    puVar14 = (undefined4 *)(param_1 + 0x2c);
    puVar16 = (undefined4 *)(param_1 + 0x30);
    puVar17 = (undefined4 *)(param_1 + 0x34);
  }
  else {
    plVar19 = *(long **)(param_1 + 0x50);
    if (plVar19 == (long *)0x0) goto LAB_03154e84;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(param_1 + 100);
    lVar9 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_03154bc0;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar19,lVar9,2);
LAB_03154bc0:
    uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,puVar6[1]);
    lVar9 = *(long *)(param_1 + 0x68);
    in_stack_00000018 = uVar12;
    if ((lVar9 == 0) || (plVar19 = *(long **)(param_1 + 0x50), plVar19 == (long *)0x0))
    goto LAB_03154e84;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(param_1 + 100);
    uVar3 = *(undefined4 *)(lVar9 + 0x10);
    uVar20 = *(undefined8 *)(lVar9 + 0x18);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar9 = *(long *)puVar4;
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_03154c4c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar19,lVar9,1);
    uVar12 = in_stack_00000018 & 0xff;
LAB_03154c4c:
    bVar5 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,uVar3,uVar20,puVar6[1]);
    if ((uVar12 & 0xff) == 0) {
      uVar20 = *(undefined8 *)StringLiteral_3479;
    }
    else {
      uStack0000000000000014 = FUN_02d0a180(&stack0x00000018,*(undefined8 *)StringLiteral_3591);
      uVar20 = FUN_03052740(&stack0x00000014,
                            *(undefined8 *)
                             Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,0);
    }
    plVar19 = *(long **)(param_1 + 0x48);
    lVar9 = FUN_01b47fd0(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,
                         5);
    in_stack_00000010 = *(undefined4 *)(param_1 + 100);
    uVar7 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80370,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80368,(long)&stack0x00000008 + 4);
    uVar7 = FUN_02ee7120(*(undefined8 *)StringLiteral_9334,uVar7,uVar8,0);
    if (lVar9 == 0) goto LAB_03154e84;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_03154e88:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar7;
    thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x20),uVar7);
    if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_03154e88;
    *(undefined8 *)(lVar9 + 0x28) = in_stack_00000028;
    thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x28));
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_03154e88;
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)StringLiteral_3874;
    thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x30));
    if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_03154e88;
    *(undefined8 *)(lVar9 + 0x38) = uVar20;
    thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x38),uVar20);
    if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_03154e88;
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)StringLiteral_2457;
    thunk_FUN_01b4f09c();
    uVar20 = FUN_02ee6e18(lVar9,0);
    if (plVar19 == (long *)0x0) goto LAB_03154e84;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(byte *)(param_1 + 0x60) == (bVar5 & 1)) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x58);
    if ((bVar5 & 1) == 0) goto LAB_03154e34;
    puVar11 = (undefined4 *)(param_1 + 0x38);
    puVar14 = (undefined4 *)(param_1 + 0x3c);
    puVar16 = (undefined4 *)(param_1 + 0x40);
    puVar17 = (undefined4 *)(param_1 + 0x44);
    uVar18 = 1;
  }
  if (lVar9 != 0) {
    FUN_038ff380(*puVar11,*puVar14,*puVar16,*puVar17,lVar9,0);
    *(undefined1 *)(param_1 + 0x60) = uVar18;
    return;
  }
LAB_03154e84:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


