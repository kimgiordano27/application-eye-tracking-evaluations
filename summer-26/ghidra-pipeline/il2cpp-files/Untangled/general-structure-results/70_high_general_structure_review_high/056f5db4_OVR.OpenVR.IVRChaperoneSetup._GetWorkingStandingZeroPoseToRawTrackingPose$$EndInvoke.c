/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 056f5db4
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  long in_stack_00000008;
  
  lVar2 = thunk_FUN_02ef170c(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar2 == 0) goto LAB_056f6140;
  if (*(int *)(unaff_x26 + 0x18) == 0) goto LAB_056f613c;
  *(long *)(unaff_x26 + 0x20) = unaff_x23;
  thunk_FUN_02f411dc();
  puVar1 = PTR_DAT_06d03e90;
  if (unaff_x24 != 0) {
    lVar2 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_055316f4(lVar2,0);
    }
    uVar4 = FUN_0552fe54(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = FUN_02f07f14(*unaff_x27,1);
      if (lVar2 == 0) goto LAB_056f6138;
      if ((unaff_x23 != 0) && (lVar5 = thunk_FUN_02ef170c(), lVar5 == 0)) goto LAB_056f6140;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_056f613c;
      *(long *)(lVar2 + 0x20) = unaff_x23;
      thunk_FUN_02f411dc();
      if (in_stack_00000008 == 0) goto LAB_056f6138;
      lVar2 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden
                        (in_stack_00000008,*(undefined8 *)puVar1,0x14,0);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_055316f4(lVar2,0);
      }
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar6 = (long *)FUN_05717f90(0);
    puVar1 = PTR_DAT_06d01eb0;
    if (plVar6 != (long *)0x0) {
      lVar2 = thunk_FUN_02edd730(*(undefined8 *)
                                  (*plVar6 + (ulong)*(ushort *)(*(long *)PTR_DAT_06d56920 + 0x50) *
                                             0x10 + 0x140));
      uVar3 = (**(code **)(lVar2 + 8))(plVar6,uVar3,lVar2);
      *(undefined8 *)(unaff_x25 + 0x20) = uVar3;
      thunk_FUN_02f411dc();
      uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57330);
      FUN_056f6538();
      if (unaff_x19 != 0) {
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
        thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xe0),uVar3);
        if (*(char *)(unaff_x22 + 0x10) == '\0') {
          if (unaff_x19 != 0) {
LAB_056f610c:
            FUN_056f6754();
            return;
          }
        }
        else {
          lVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57358);
          FUN_05645a04(lVar2,0);
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x18) = unaff_x21;
            thunk_FUN_02f411dc();
            uVar3 = *(undefined8 *)PTR_DAT_06d57318;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            plVar6 = (long *)FUN_056109c0(uVar3,0);
            lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
            if (lVar5 != 0) {
              if ((unaff_x23 != 0) && (lVar7 = thunk_FUN_02ef170c(), lVar7 == 0)) {
LAB_056f6140:
                uVar3 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar3,0);
              }
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(long *)(lVar5 + 0x20) = unaff_x23;
                thunk_FUN_02f411dc();
                if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_02ef170c(), lVar7 == 0))
                goto LAB_056f6140;
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(long *)(lVar5 + 0x28) = unaff_x20;
                  thunk_FUN_02f411dc();
                  if (plVar6 != (long *)0x0) {
                    lVar5 = (**(code **)(*plVar6 + 0x968))
                                      (plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x970));
                    if (lVar5 != 0) {
                      uVar3 = FUN_0561c350(lVar5,0);
                      uVar3 = FUN_03a1b5b4(uVar3,*(undefined8 *)PTR_DAT_06d57320);
                      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                        thunk_FUN_02f12b58(*unaff_x29);
                      }
                      plVar6 = (long *)FUN_05717f90(0);
                      if (plVar6 != (long *)0x0) {
                        uVar3 = (**(code **)(*plVar6 + 0x188))
                                          (plVar6,uVar3,*(undefined8 *)(*plVar6 + 400));
                        *(undefined8 *)(lVar2 + 0x10) = uVar3;
                        thunk_FUN_02f411dc();
                        uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57328);
                        FUN_056f664c(uVar3,lVar2,*(undefined8 *)PTR_DAT_06d57350);
                        if (unaff_x19 != 0) {
                          *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
                          thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xe8),uVar3);
                          goto LAB_056f610c;
                        }
                      }
                    }
                  }
                  goto LAB_056f6138;
                }
              }
LAB_056f613c:
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
          }
        }
      }
    }
  }
LAB_056f6138:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


