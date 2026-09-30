/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$.cctor
ENTRY_POINT: 07cadc10
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0___cctor
               (float param_1,undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  int iVar6;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  float unaff_w26;
  float unaff_w27;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  while( true ) {
    iVar6 = unaff_w28;
    if (param_1 != param_3) {
      iVar6 = (int)param_1;
    }
    if (0 < iVar6) {
      do {
        param_4 = FUN_078a7764(param_4,*unaff_x29,0);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar3 = FUN_078a7764(param_4,*unaff_x21,0);
    puVar1 = PTR_DAT_09f1e7e8;
    unaff_x22 = unaff_x22 + 1;
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar5 == 0)) break;
    if ((long)*(int *)(lVar5 + 0x18) <= (long)unaff_x22) {
      FUN_07cab054();
      uVar4 = FUN_078b33f8(uVar3,*(undefined8 *)puVar1,0);
      if ((uVar4 & 1) != 0) {
        FUN_07cab50c(uVar3);
      }
      return;
    }
    in_stack_00000008 = *unaff_x23;
    uVar2 = FUN_07a742b0(&stack0x00000008,0);
    uVar3 = FUN_078a7764(uVar3,uVar2,0);
    param_4 = FUN_078a7764(uVar3,*unaff_x25,0);
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    param_1 = *(float *)(lVar5 + unaff_x22 * 4 + 0x20) * unaff_w26;
    param_3 = unaff_w27;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


