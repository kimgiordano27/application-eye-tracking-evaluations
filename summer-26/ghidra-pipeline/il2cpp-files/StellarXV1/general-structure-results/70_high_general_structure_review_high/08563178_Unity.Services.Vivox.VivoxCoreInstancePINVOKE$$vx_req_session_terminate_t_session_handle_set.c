/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_terminate_t_session_handle_set
ENTRY_POINT: 08563178
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


float Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_terminate_t_session_handle_set
                (float param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  long in_stack_00000008;
  
  fVar4 = (float)FUN_08a0902c();
  fVar5 = (float)FUN_05d12050();
  fVar4 = -(fVar5 * ((param_1 * fVar4) / unaff_s8));
  FUN_05d12050();
  FUN_08a08ffc();
  if ((unaff_x20 & 1) != 0) {
    lVar2 = FUN_08a08f70();
    if (lVar2 == 0) {
LAB_085632b8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar1 = FUN_0899adf8(lVar2,0);
    if (iVar1 == 2) {
      lVar2 = FUN_08a08f70();
      if (lVar2 == 0) goto LAB_085632b8;
      uVar3 = FUN_04f38fe8(lVar2,&stack0x00000008,*(undefined8 *)PTR_DAT_0932d5a0);
      fVar5 = 2.5;
      if ((uVar3 & 1) != 0) {
        if (in_stack_00000008 == 0) goto LAB_085632b8;
        fVar6 = 3.5;
        if (*(int *)(in_stack_00000008 + 0x58) != 3) {
          fVar6 = 2.5;
        }
        fVar5 = 1.5;
        if (*(int *)(in_stack_00000008 + 0x58) != 1) {
          fVar5 = fVar6;
        }
      }
      fVar4 = fVar4 * fVar5;
    }
  }
  FUN_08a08ffc();
  return fVar4;
}


