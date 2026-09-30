/*
FUNCTION_NAME: thunk_FUN_019c6b88
ENTRY_POINT: 019c6b84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void thunk_FUN_019c6b88(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uStack_80;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((DAT_0377a6bb & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GrabbablePose>_get_Count__);
    DAT_0377a6bb = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<GrabbablePose>_get_Count__;
  fStack_38 = 0.0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 == (long *)0x0)
  goto OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke;
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Collections_Generic_List<GrabbablePose>_get_Count__) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_019c6c24;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_00d59724(plVar8,*(long *)
                                Method_System_Collections_Generic_List<GrabbablePose>_get_Count__,2)
  ;
LAB_019c6c24:
  (*(code *)*puVar3)(plVar8,&uStack_40,puVar3[1]);
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 == (long *)0x0)
  goto OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke;
  lVar5 = *plVar8;
  lVar4 = *(long *)puVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_019c6c88;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724(plVar8,lVar4,0);
LAB_019c6c88:
  uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  if ((uVar6 & 1) == 0) {
LAB_019c6d2c:
    bVar2 = false;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 == (long *)0x0)
    goto OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke;
    lVar5 = *plVar8;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_019c6cf0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar8,lVar4,1);
LAB_019c6cf0:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) goto LAB_019c6d2c;
    bVar2 = (float)uStack_40 * (float)uStack_40 + uStack_40._4_4_ * uStack_40._4_4_ +
            fStack_38 * fStack_38 != *(float *)(param_1 + 0x30);
  }
  uStack_4c = CONCAT44(uStack_28,uStack_2c);
  lVar5 = *(long *)(param_1 + 0x38);
  fStack_58 = fStack_38;
  uStack_60 = uStack_40;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  lVar4 = *(long *)(param_1 + 0x28);
  if ((lVar4 != 0) &&
     ((**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),&uStack_24,*(undefined8 *)(lVar4 + 0x28)), lVar5 != 0
     )) {
    fStack_78 = fStack_58;
    uStack_80 = uStack_60;
    uStack_6c = uStack_4c;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    FUN_019c604c(uStack_24,lVar5,&uStack_80,bVar2);
    *(float *)(param_1 + 0x30) =
         (float)uStack_40 * (float)uStack_40 + uStack_40._4_4_ * uStack_40._4_4_ +
         fStack_38 * fStack_38;
    return;
  }
OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


