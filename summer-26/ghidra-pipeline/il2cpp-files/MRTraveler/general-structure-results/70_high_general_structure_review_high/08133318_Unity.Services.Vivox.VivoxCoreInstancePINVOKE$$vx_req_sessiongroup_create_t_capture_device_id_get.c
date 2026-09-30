/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_capture_device_id_get
ENTRY_POINT: 08133318
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_capture_device_id_get
          (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *plVar4;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long *plVar5;
  long unaff_x22;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08f03328);
  FUN_03c8f898(PTR_DAT_08f03318);
  *(undefined1 *)(unaff_x19 + 0xdaf) = 1;
  lVar1 = thunk_FUN_03cf5234(*unaff_x20);
  FUN_07145224(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_03d233cc();
    plVar4 = (long *)(lVar1 + 0x18);
    *plVar4 = unaff_x22;
    thunk_FUN_03d233cc(plVar4);
    lVar2 = FUN_081334bc();
    plVar5 = (long *)(lVar1 + 0x20);
    *plVar5 = lVar2;
    thunk_FUN_03d233cc(plVar5);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = FUN_08824994(*plVar5,0);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (uVar3,lVar1,*(undefined8 *)PTR_DAT_08f03328,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085da19c(lVar2,uVar3,0);
    if (*plVar4 != 0) {
      return *(undefined8 *)(*plVar4 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


