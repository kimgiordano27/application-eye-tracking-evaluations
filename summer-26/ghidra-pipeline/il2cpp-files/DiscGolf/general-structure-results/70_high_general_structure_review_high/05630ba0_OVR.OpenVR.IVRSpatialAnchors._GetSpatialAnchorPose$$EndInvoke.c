/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 05630ba0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_0563c9e8(0);
  if ((uVar2 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = DAT_010fbbd8;
    return 1;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    OVRAnchor__OnSaveSpacesResult();
    uVar4 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_063550b4(uVar4,0);
    puVar1 = System_Collections_Generic_HashSet<Name>_TypeInfo;
    if ((unaff_x20 != 0) && (lVar3 = *(long *)(unaff_x20 + 0x28), lVar3 != 0)) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x98);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(unaff_x19 + 0xa0);
      *(undefined8 *)(lVar3 + 0x18) = uVar7;
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      lVar3 = *(long *)(unaff_x20 + 0x28);
      uVar4 = FUN_0423e770(unaff_x20 + 0x90,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 0x28);
        *puVar5 = uVar4;
        LeanTween__value(puVar5,uVar4);
        lVar3 = *(long *)System_Collections_Generic_HashSet<Guid>_TypeInfo;
        if (*(long *)(lVar3 + 0x38) == 0) {
          FUN_02dcfd74(lVar3);
        }
        if (*(long *)(unaff_x20 + 0x90) != 0) {
          FUN_0423e488(unaff_x20 + 0x90,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
          *(undefined8 *)(unaff_x20 + 0x90) = 0;
          *(undefined8 *)(unaff_x20 + 0x98) = 0;
        }
        lVar3 = *(long *)(unaff_x20 + 0x28);
        uVar6 = FUN_0564288c(unaff_x20 + 0x6c,0);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x58) = uVar6;
          *(undefined4 *)(lVar3 + 0x5c) = param_2;
          *(undefined4 *)(lVar3 + 0x60) = param_3;
          lVar3 = *(long *)(unaff_x20 + 0x28);
          uVar6 = FUN_0564288c(unaff_x20 + 0x78,0);
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 100) = uVar6;
            *(undefined4 *)(lVar3 + 0x68) = param_2;
            *(undefined4 *)(lVar3 + 0x6c) = param_3;
            lVar3 = *(long *)(unaff_x20 + 0x28);
            uVar6 = FUN_0564288c(unaff_x20 + 0x84,0);
            if (lVar3 != 0) {
              *(undefined4 *)(lVar3 + 0x70) = uVar6;
              *(undefined4 *)(lVar3 + 0x74) = param_2;
              *(undefined4 *)(lVar3 + 0x78) = param_3;
              *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x80);
              LeanTween__value((undefined8 *)(unaff_x20 + 0x18));
              return 0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


