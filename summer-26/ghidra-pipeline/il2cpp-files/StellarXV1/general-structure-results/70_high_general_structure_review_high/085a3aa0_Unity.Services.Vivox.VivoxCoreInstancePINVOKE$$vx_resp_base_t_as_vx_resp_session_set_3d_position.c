/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_session_set_3d_position
ENTRY_POINT: 085a3aa0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_session_set_3d_position
               (void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x22;
  
  plVar2 = (long *)FUN_0858b7d0();
  lVar3 = *unaff_x22;
  lVar5 = *plVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *unaff_x22;
  }
  if ((*(long *)(unaff_x19 + 0xb8) != 0) && (lVar5 != 0)) {
    FUN_089fc178(lVar5,**(undefined4 **)(lVar3 + 0xb8));
    if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
       ((lVar3 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x20), lVar3 != 0 &&
        (lVar3 = *(long *)(lVar3 + 0x1a0), lVar3 != 0)))) {
      uVar4 = FUN_083e3844(lVar3,0);
      if ((uVar4 & 1) != 0) {
        if (((*(long *)(unaff_x19 + 0xe0) == 0) ||
            (lVar3 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x20), lVar3 == 0)) ||
           (lVar3 = *(long *)(lVar3 + 0x1a0), lVar3 == 0)) goto LAB_085a3be8;
        uVar4 = FUN_083e7714(lVar3,0);
        if ((uVar4 & 1) != 0) {
          FUN_089f5964(lVar5,0,0);
        }
      }
      puVar1 = PTR_DAT_093247c0;
      if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_0989d7e8 == '\0') {
        FUN_04077588(PTR_DAT_093247c0);
        DAT_0989d7e8 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        plVar2 = (long *)(**(long **)(lVar3 + 0xb8) + 0x10);
        *plVar2 = lVar5;
        thunk_FUN_040ec700(plVar2,lVar5);
        FUN_085a3bec(**(undefined8 **)(*(long *)puVar1 + 0xb8),*(undefined8 *)(unaff_x19 + 0xe0),
                     *(undefined8 *)(unaff_x19 + 0xb8));
        return;
      }
    }
  }
LAB_085a3be8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


