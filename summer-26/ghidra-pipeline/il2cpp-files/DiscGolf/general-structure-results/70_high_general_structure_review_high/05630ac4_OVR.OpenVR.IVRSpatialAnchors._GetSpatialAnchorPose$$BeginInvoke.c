/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 05630ac4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke
          (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  lVar5 = *(long *)(unaff_x21 + -0x48);
  auVar9 = FUN_0384564c(param_5,*param_1);
  puVar2 = PTR_DAT_069fc868;
  if (lVar5 != 0) {
    *(undefined1 (*) [16])(lVar5 + 0x58) = auVar9;
    cVar1 = *(char *)(unaff_x19 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    puVar6 = (undefined8 *)System_Collections_Generic_HashSet<OvrAvatarSkinnedRenderable>_TypeInfo;
    if (cVar1 != '\0') {
      puVar6 = (undefined8 *)System_Collections_Generic_HashSet<OvrAvatarRenderable>_TypeInfo;
    }
                    /* catch() { ... } // from try @ 05630b0c with catch @ 05630b1c */
                    /* catch() { ... } // from try @ 05630aa8 with catch @ 05630b20 */
                    /* try { // try from 05630b24 to 05730b27 has its CatchHandler @ 05630b30 */
    FUN_054521e8(uVar3,uVar7,*puVar6,0);
                    /* try { // try from 05630b28 to 05730b33 has its CatchHandler @ 05630940 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05630b24 with catch @ 05630b30
                        */
    if (*(int *)(*(long *)PTR_DAT_069fd9c8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar3 = FUN_05563ff0(uVar3,0);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
    LeanTween__value();
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      uVar4 = FUN_0555c064(*(long *)(unaff_x19 + 0xb0),0);
      if ((uVar4 & 1) == 0) {
        if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x40) != 0)) {
          uVar4 = FUN_0554ab74(*(long *)(unaff_x20 + 0x40),0);
          uVar3 = DAT_010fcb98;
          if ((uVar4 & 1) != 0) {
            uVar3 = 0x800000008;
          }
LAB_05630d1c:
          *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
          return 1;
        }
      }
      else if (*(long *)(unaff_x19 + 0xa8) != 0) {
        FUN_0632f118(*(long *)(unaff_x19 + 0xa8),0,1,0);
        if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0563c9e8(0);
        uVar3 = DAT_010fbbd8;
        if ((uVar4 & 1) != 0) goto LAB_05630d1c;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          OVRAnchor__OnSaveSpacesResult();
          uVar3 = *(undefined8 *)(unaff_x19 + 0xa8);
          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_063550b4(uVar3,0);
          puVar2 = System_Collections_Generic_HashSet<Name>_TypeInfo;
          if ((unaff_x20 != 0) && (lVar5 = *(long *)(unaff_x20 + 0x28), lVar5 != 0)) {
            uVar7 = *(undefined8 *)(unaff_x19 + 0x98);
            uVar3 = *(undefined8 *)(unaff_x19 + 0x90);
            *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(unaff_x19 + 0xa0);
            *(undefined8 *)(lVar5 + 0x18) = uVar7;
            *(undefined8 *)(lVar5 + 0x10) = uVar3;
            lVar5 = *(long *)(unaff_x20 + 0x28);
            uVar3 = FUN_0423e770(unaff_x20 + 0x90,*(undefined8 *)puVar2);
            if (lVar5 != 0) {
              puVar6 = (undefined8 *)(lVar5 + 0x28);
              *puVar6 = uVar3;
              LeanTween__value(puVar6,uVar3);
              lVar5 = *(long *)System_Collections_Generic_HashSet<Guid>_TypeInfo;
              if (*(long *)(lVar5 + 0x38) == 0) {
                FUN_02dcfd74(lVar5);
              }
              if (*(long *)(unaff_x20 + 0x90) != 0) {
                FUN_0423e488(unaff_x20 + 0x90,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
                *(undefined8 *)(unaff_x20 + 0x90) = 0;
                *(undefined8 *)(unaff_x20 + 0x98) = 0;
              }
              lVar5 = *(long *)(unaff_x20 + 0x28);
              uVar8 = FUN_0564288c(unaff_x20 + 0x6c,0);
              if (lVar5 != 0) {
                *(undefined4 *)(lVar5 + 0x58) = uVar8;
                *(undefined4 *)(lVar5 + 0x5c) = param_3;
                *(undefined4 *)(lVar5 + 0x60) = param_4;
                lVar5 = *(long *)(unaff_x20 + 0x28);
                uVar8 = FUN_0564288c(unaff_x20 + 0x78,0);
                if (lVar5 != 0) {
                  *(undefined4 *)(lVar5 + 100) = uVar8;
                  *(undefined4 *)(lVar5 + 0x68) = param_3;
                  *(undefined4 *)(lVar5 + 0x6c) = param_4;
                  lVar5 = *(long *)(unaff_x20 + 0x28);
                  uVar8 = FUN_0564288c(unaff_x20 + 0x84,0);
                  if (lVar5 != 0) {
                    *(undefined4 *)(lVar5 + 0x70) = uVar8;
                    *(undefined4 *)(lVar5 + 0x74) = param_3;
                    *(undefined4 *)(lVar5 + 0x78) = param_4;
                    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x80);
                    LeanTween__value((undefined8 *)(unaff_x20 + 0x18));
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


