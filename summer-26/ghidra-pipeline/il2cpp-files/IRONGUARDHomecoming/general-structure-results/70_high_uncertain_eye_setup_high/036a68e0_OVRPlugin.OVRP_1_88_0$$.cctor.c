/*
FUNCTION_NAME: OVRPlugin.OVRP_1_88_0$$.cctor
ENTRY_POINT: 036a68e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_88_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint *puVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *piVar11;
  
  thunk_FUN_01f51358();
  uVar4 = FUN_01f08890(*unaff_x22,0);
  if (0x14 < *(uint *)(unaff_x20 + -0xa0)) {
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xc0),uVar4);
    uVar4 = FUN_01f08890(*unaff_x22,0);
    if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 200) = uVar4;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 200),uVar4);
      uVar4 = FUN_01f08890(*unaff_x22,0);
      if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xd0),uVar4);
        uVar4 = FUN_01f08890(*unaff_x22,0);
        puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__;
        puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__;
        if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
          thunk_FUN_01f51358();
          *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = unaff_x19;
          thunk_FUN_01f51358();
          lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_030bc828(lVar5,*(undefined8 *)puVar3);
          puVar2 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__;
          if (lVar5 != 0) {
            lVar8 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__;
            piVar11 = (int *)(lVar5 + 0x1c);
            *piVar11 = *piVar11 + 1;
            lVar9 = *(long *)(lVar5 + 0x10);
            puVar10 = (uint *)(lVar5 + 0x18);
            uVar1 = *puVar10;
            if (lVar9 != 0) {
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,6,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,7,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,8,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,9,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 10;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,10,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0xb,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0xc,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0xd,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0xe,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0xf,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0x10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0x11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,0x12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,2,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,3,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                *piVar11 = *piVar11 + 1;
              }
              else {
                FUN_030bd07c(lVar5,4,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_036a70d4;
              }
              puVar2 = 
              Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt64_Run__;
              uVar1 = *puVar10;
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *puVar10 = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 5;
              }
              else {
                FUN_030bd07c(lVar5,5,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
              *plVar6 = lVar5;
              thunk_FUN_01f51358(plVar6,lVar5);
              uVar4 = FUN_01f08890(*unaff_x22,5);
              FUN_034a9d80(uVar4,*(undefined8 *)puVar2,0);
              puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
              *puVar7 = uVar4;
              thunk_FUN_01f51358(puVar7,uVar4);
              return;
            }
          }
LAB_036a70d4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


