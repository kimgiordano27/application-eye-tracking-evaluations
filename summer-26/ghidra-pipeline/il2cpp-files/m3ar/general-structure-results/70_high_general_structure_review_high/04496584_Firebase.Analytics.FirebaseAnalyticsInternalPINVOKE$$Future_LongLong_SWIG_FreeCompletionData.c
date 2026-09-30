/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$Future_LongLong_SWIG_FreeCompletionData
ENTRY_POINT: 04496584
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__Future_LongLong_SWIG_FreeCompletionData
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar5;
  long in_stack_00000008;
  
  if (param_1 != 0) {
    uVar2 = FUN_06efc01c(param_1,unaff_w20,&stack0x00000008,*(undefined8 *)PTR_DAT_08f7eb00);
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(unaff_x21 + 0x108);
      lVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7be78);
      FUN_057d4bb0(lVar3,*(undefined8 *)PTR_DAT_08f7be80);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x19;
          }
          else {
            FUN_057d53ac(lVar3);
          }
          if (lVar5 != 0) {
            FUN_06efa5dc(lVar5,unaff_w20,lVar3,*(undefined8 *)PTR_DAT_08f7eb20);
            return;
          }
        }
      }
    }
    else if (in_stack_00000008 != 0) {
      lVar3 = *(long *)(in_stack_00000008 + 0x10);
      *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x19;
        }
        else {
          FUN_057d53ac();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


