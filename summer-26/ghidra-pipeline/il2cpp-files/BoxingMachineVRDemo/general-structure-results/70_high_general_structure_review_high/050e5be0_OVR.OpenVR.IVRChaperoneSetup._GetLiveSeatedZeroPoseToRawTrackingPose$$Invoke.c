/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 050e5be0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__Invoke(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 uVar8;
  long *unaff_x27;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
                    /* try { // try from 050e5be8 to 051e5c77 has its CatchHandler @ 050e5be8
                       catch() { ... } // from try @ 050e5be8 with catch @ 050e5be8
                       catch() { ... } // from try @ 050e5cc8 with catch @ 050e5be8
                       catch() { ... } // from try @ 050e5d64 with catch @ 050e5be8
                       catch() { ... } // from try @ 050e5db0 with catch @ 050e5be8 */
    thunk_FUN_02dbd7b4(param_1);
    param_1 = *unaff_x27;
  }
  uVar8 = **(undefined8 **)(param_1 + 0xb8);
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677f5c0);
  FUN_04d61e54(uVar2,uVar8,*(undefined8 *)PTR_DAT_0677f5f0,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_02dd37b4(puVar3,uVar2);
  plVar4 = (long *)FUN_033a70fc();
  uVar5 = FUN_04f3cc90(plVar4,0,0);
  puVar1 = PTR_DAT_0675f8d8;
  if ((uVar5 & 1) == 0) {
    *unaff_x22 = 0;
    thunk_FUN_02dd37b4();
    *unaff_x19 = 0;
    thunk_FUN_02dd37b4();
    return 0;
  }
  lVar6 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,2);
  if (lVar6 == 0) goto LAB_050e5e38;
  if ((unaff_x21 != 0) && (lVar7 = thunk_FUN_02d9d438(), lVar7 == 0)) {
LAB_050e5e40:
    uVar2 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar2,0);
  }
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(long *)(lVar6 + 0x20) = unaff_x21;
    thunk_FUN_02dd37b4();
    if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_02d9d438(), lVar7 == 0)) goto LAB_050e5e40;
    if (1 < *(uint *)(lVar6 + 0x18)) {
      *(long *)(lVar6 + 0x28) = unaff_x20;
      thunk_FUN_02dd37b4();
      if (unaff_x23 != (long *)0x0) {
        uVar2 = (**(code **)(*unaff_x23 + 0x958))();
        *unaff_x22 = uVar2;
        thunk_FUN_02dd37b4();
        lVar6 = FUN_02d60934(*(undefined8 *)puVar1,2);
        if (lVar6 != 0) {
          if ((unaff_x21 != 0) && (lVar7 = thunk_FUN_02d9d438(), lVar7 == 0)) goto LAB_050e5e40;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(long *)(lVar6 + 0x20) = unaff_x21;
            thunk_FUN_02dd37b4();
            if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_02d9d438(), lVar7 == 0)) goto LAB_050e5e40;
            if (1 < *(uint *)(lVar6 + 0x18)) {
              *(long *)(lVar6 + 0x28) = unaff_x20;
              thunk_FUN_02dd37b4();
              if (plVar4 != (long *)0x0) {
                uVar2 = (**(code **)(*plVar4 + 0x408))
                                  (plVar4,lVar6,*(undefined8 *)(*plVar4 + 0x410));
                if (*(int *)(*(long *)PTR_DAT_067680e0 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067680e0);
                }
                plVar4 = (long *)FUN_05117140(0);
                if (plVar4 != (long *)0x0) {
                  uVar2 = (**(code **)(*plVar4 + 0x188))
                                    (plVar4,uVar2,*(undefined8 *)(*plVar4 + 400));
                  *unaff_x19 = uVar2;
                  thunk_FUN_02dd37b4();
                  return 1;
                }
              }
              goto LAB_050e5e38;
            }
          }
          goto LAB_050e5e3c;
        }
      }
LAB_050e5e38:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
LAB_050e5e3c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


