/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcActivationMode
ENTRY_POINT: 07a5d938
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__GetMrcActivationMode(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xad8));
  FUN_04077588(PTR_DAT_092ed800);
  FUN_04077588(PTR_DAT_092b7110);
  *(undefined1 *)(unaff_x21 + 0x4f7) = 1;
  lVar2 = FUN_06cbda9c();
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x2c);
    if (cVar1 == '\0') {
      if (*(int *)(*(long *)PTR_DAT_092b7110 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_089d9e40(&stack0x00000040,0);
      uVar8 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar9 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      in_stack_00000000._4_8_ = in_stack_00000040;
      in_stack_00000018 = uStack0000000000000054;
LAB_07a5da64:
      unaff_x19[1] = uVar8;
      *unaff_x19 = in_stack_00000000._4_8_;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
      *(undefined8 *)((long)unaff_x19 + 0xc) = uVar9;
      return cVar1 != '\0';
    }
    lVar3 = FUN_06cbda9c();
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
      in_stack_00000020 = *(undefined8 *)(lVar2 + 0x10);
      plVar7 = *(long **)(*(long *)(lVar3 + 0x38) + 0x10);
      uStack0000000000000034 = *(undefined8 *)(lVar2 + 0x24);
      uStack0000000000000028 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
      uStack000000000000002c = (undefined4)*(undefined8 *)(lVar2 + 0x1c);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x1c) >> 0x20);
      if (plVar7 != (long *)0x0) {
        lVar2 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092ed800) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_07a5da34;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092ed800,1);
LAB_07a5da34:
        uStack0000000000000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack0000000000000054 = uStack0000000000000034;
        uStack000000000000004c = uStack000000000000002c;
        uStack0000000000000050 = uStack0000000000000030;
        (*(code *)*puVar4)(&stack0x00000000 + 4,plVar7,&stack0x00000040,puVar4[1]);
        uVar8 = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        uVar9 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        goto LAB_07a5da64;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


