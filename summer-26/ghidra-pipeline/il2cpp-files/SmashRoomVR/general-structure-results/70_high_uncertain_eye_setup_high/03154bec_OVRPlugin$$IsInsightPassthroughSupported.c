/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 03154bec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsInsightPassthroughSupported(long param_1,char param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  char in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_03154c4c;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78();
  param_2 = in_stack_00000018;
LAB_03154c4c:
  bVar2 = (*(code *)*puVar3)();
  if (param_2 == '\0') {
    uVar4 = *(undefined8 *)StringLiteral_3479;
  }
  else {
    uStack0000000000000014 = FUN_02d0a180(&stack0x00000018,*(undefined8 *)StringLiteral_3591);
    uVar4 = FUN_03052740((long)&stack0x00000010 + 4,
                         *(undefined8 *)
                          Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,0);
  }
  plVar14 = *(long **)(unaff_x19 + 0x48);
  lVar5 = FUN_01b47fd0(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,5)
  ;
  uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
  uVar6 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80370,&stack0x00000010);
  uVar7 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80368,&stack0x0000000c);
  uVar6 = FUN_02ee7120(*(undefined8 *)StringLiteral_9334,uVar6,uVar7,0);
  if (lVar5 == 0) goto LAB_03154e84;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x20),uVar6);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x28) = in_stack_00000028;
      thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x28));
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)StringLiteral_3874;
        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x30));
        if (3 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x38) = uVar4;
          thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x38),uVar4);
          if (4 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)StringLiteral_2457;
            thunk_FUN_01b4f09c();
            uVar4 = FUN_02ee6e18(lVar5,0);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x558))(plVar14,uVar4,*(undefined8 *)(*plVar14 + 0x560));
              if (*(byte *)(unaff_x19 + 0x60) != (bVar2 & 1)) {
                bVar1 = (bVar2 & 1) == 0;
                if (bVar1) {
                  puVar8 = (undefined4 *)(unaff_x19 + 0x28);
                  puVar10 = (undefined4 *)(unaff_x19 + 0x2c);
                  puVar12 = (undefined4 *)(unaff_x19 + 0x30);
                  puVar13 = (undefined4 *)(unaff_x19 + 0x34);
                }
                else {
                  puVar8 = (undefined4 *)(unaff_x19 + 0x38);
                  puVar10 = (undefined4 *)(unaff_x19 + 0x3c);
                  puVar12 = (undefined4 *)(unaff_x19 + 0x40);
                  puVar13 = (undefined4 *)(unaff_x19 + 0x44);
                }
                if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_03154e84;
                FUN_038ff380(*puVar8,*puVar10,*puVar12,*puVar13,*(long *)(unaff_x19 + 0x58),0);
                *(byte *)(unaff_x19 + 0x60) = !bVar1;
              }
              return;
            }
LAB_03154e84:
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


