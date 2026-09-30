/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 03154b1c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsMultimodalHandsControllersSupported(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  puVar5 = (undefined8 *)FUN_01ae9f78();
  uVar6 = (*(code *)*puVar5)();
  lVar11 = *(long *)(unaff_x19 + 0x68);
  in_stack_00000018 = uVar6;
  if ((lVar11 != 0) && (plVar17 = *(long **)(unaff_x19 + 0x50), plVar17 != (long *)0x0)) {
    lVar9 = *plVar17;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar11 + 0x10);
    uVar18 = *(undefined8 *)(lVar11 + 0x18);
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_03154c4c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar17,*unaff_x26,1);
    uVar6 = in_stack_00000018 & 0xff;
LAB_03154c4c:
    bVar4 = (*(code *)*puVar5)(plVar17,uVar2,unaff_w20,uVar3,uVar18,puVar5[1]);
    if ((uVar6 & 0xff) == 0) {
      uVar18 = *(undefined8 *)StringLiteral_3479;
    }
    else {
      uStack0000000000000014 = FUN_02d0a180(&stack0x00000018,*(undefined8 *)StringLiteral_3591);
      uVar18 = FUN_03052740((long)&stack0x00000010 + 4,
                            *(undefined8 *)
                             Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,0);
    }
    plVar17 = *(long **)(unaff_x19 + 0x48);
    lVar11 = FUN_01b47fd0(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__
                          ,5);
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar7 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80370,&stack0x00000010);
    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d80368,&stack0x0000000c);
    uVar7 = FUN_02ee7120(*(undefined8 *)StringLiteral_9334,uVar7,uVar8,0);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined8 *)(lVar11 + 0x20) = uVar7;
        thunk_FUN_01b4f09c((undefined8 *)(lVar11 + 0x20),uVar7);
        if (1 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x28) = in_stack_00000028;
          thunk_FUN_01b4f09c((undefined8 *)(lVar11 + 0x28));
          if (2 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)StringLiteral_3874;
            thunk_FUN_01b4f09c((undefined8 *)(lVar11 + 0x30));
            if (3 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x38) = uVar18;
              thunk_FUN_01b4f09c((undefined8 *)(lVar11 + 0x38),uVar18);
              if (4 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)StringLiteral_2457;
                thunk_FUN_01b4f09c();
                uVar18 = FUN_02ee6e18(lVar11,0);
                if (plVar17 != (long *)0x0) {
                  (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
                  if (*(byte *)(unaff_x19 + 0x60) != (bVar4 & 1)) {
                    bVar1 = (bVar4 & 1) == 0;
                    if (bVar1) {
                      puVar10 = (undefined4 *)(unaff_x19 + 0x28);
                      puVar13 = (undefined4 *)(unaff_x19 + 0x2c);
                      puVar15 = (undefined4 *)(unaff_x19 + 0x30);
                      puVar16 = (undefined4 *)(unaff_x19 + 0x34);
                    }
                    else {
                      puVar10 = (undefined4 *)(unaff_x19 + 0x38);
                      puVar13 = (undefined4 *)(unaff_x19 + 0x3c);
                      puVar15 = (undefined4 *)(unaff_x19 + 0x40);
                      puVar16 = (undefined4 *)(unaff_x19 + 0x44);
                    }
                    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_03154e84;
                    FUN_038ff380(*puVar10,*puVar13,*puVar15,*puVar16,*(long *)(unaff_x19 + 0x58),0);
                    *(byte *)(unaff_x19 + 0x60) = !bVar1;
                  }
                  return;
                }
                goto LAB_03154e84;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
LAB_03154e84:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


