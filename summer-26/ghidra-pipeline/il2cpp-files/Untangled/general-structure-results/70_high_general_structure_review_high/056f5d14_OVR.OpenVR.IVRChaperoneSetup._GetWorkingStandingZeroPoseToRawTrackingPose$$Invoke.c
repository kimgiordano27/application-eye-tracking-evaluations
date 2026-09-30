/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 056f5d14
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x29;
  long in_stack_00000008;
  
  uVar3 = FUN_03b62ef0();
  *(undefined8 *)(unaff_x25 + 0x10) = uVar3;
  thunk_FUN_02f411dc();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  plVar4 = (long *)FUN_05717f90(0);
  if (plVar4 != (long *)0x0) {
    lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                (*plVar4 + (ulong)*(ushort *)(*(long *)PTR_DAT_06d56f00 + 0x50) *
                                           0x10 + 0x140));
    uVar3 = (**(code **)(lVar5 + 8))(plVar4);
    *(undefined8 *)(unaff_x25 + 0x18) = uVar3;
    thunk_FUN_02f411dc();
    puVar1 = PTR_DAT_06d06088;
    lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
    if (lVar5 != 0) {
      if ((unaff_x23 != 0) && (lVar6 = thunk_FUN_02ef170c(), lVar6 == 0)) goto LAB_056f6140;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_056f613c;
      *(long *)(lVar5 + 0x20) = unaff_x23;
      thunk_FUN_02f411dc();
      puVar2 = PTR_DAT_06d03e90;
      if (unaff_x24 != 0) {
        lVar5 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden();
        if (lVar5 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_055316f4(lVar5,0);
        }
        uVar7 = FUN_0552fe54(uVar3,0,0);
        if ((uVar7 & 1) != 0) {
          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
          if (lVar5 == 0) goto LAB_056f6138;
          if ((unaff_x23 != 0) && (lVar6 = thunk_FUN_02ef170c(), lVar6 == 0)) goto LAB_056f6140;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_056f613c;
          *(long *)(lVar5 + 0x20) = unaff_x23;
          thunk_FUN_02f411dc();
          if (in_stack_00000008 == 0) goto LAB_056f6138;
          lVar5 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden
                            (in_stack_00000008,*(undefined8 *)puVar2,0x14,0);
          if (lVar5 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_055316f4(lVar5,0);
          }
        }
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        plVar4 = (long *)FUN_05717f90(0);
        puVar1 = PTR_DAT_06d01eb0;
        if (plVar4 != (long *)0x0) {
          lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                      (*plVar4 + (ulong)*(ushort *)
                                                         (*(long *)PTR_DAT_06d56920 + 0x50) * 0x10 +
                                      0x140));
          uVar3 = (**(code **)(lVar5 + 8))(plVar4,uVar3,lVar5);
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
              lVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57358);
              FUN_05645a04(lVar5,0);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x18) = unaff_x21;
                thunk_FUN_02f411dc();
                uVar3 = *(undefined8 *)PTR_DAT_06d57318;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                plVar4 = (long *)FUN_056109c0(uVar3,0);
                lVar6 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
                if (lVar6 != 0) {
                  if ((unaff_x23 != 0) && (lVar8 = thunk_FUN_02ef170c(), lVar8 == 0)) {
LAB_056f6140:
                    uVar3 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                    FUN_02f07f94(uVar3,0);
                  }
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(long *)(lVar6 + 0x20) = unaff_x23;
                    thunk_FUN_02f411dc();
                    if ((unaff_x20 != 0) && (lVar8 = thunk_FUN_02ef170c(), lVar8 == 0))
                    goto LAB_056f6140;
                    if (1 < *(uint *)(lVar6 + 0x18)) {
                      *(long *)(lVar6 + 0x28) = unaff_x20;
                      thunk_FUN_02f411dc();
                      if (plVar4 != (long *)0x0) {
                        lVar6 = (**(code **)(*plVar4 + 0x968))
                                          (plVar4,lVar6,*(undefined8 *)(*plVar4 + 0x970));
                        if (lVar6 != 0) {
                          uVar3 = FUN_0561c350(lVar6,0);
                          uVar3 = FUN_03a1b5b4(uVar3,*(undefined8 *)PTR_DAT_06d57320);
                          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                            thunk_FUN_02f12b58(*unaff_x29);
                          }
                          plVar4 = (long *)FUN_05717f90(0);
                          if (plVar4 != (long *)0x0) {
                            uVar3 = (**(code **)(*plVar4 + 0x188))
                                              (plVar4,uVar3,*(undefined8 *)(*plVar4 + 400));
                            *(undefined8 *)(lVar5 + 0x10) = uVar3;
                            thunk_FUN_02f411dc();
                            uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57328);
                            FUN_056f664c(uVar3,lVar5,*(undefined8 *)PTR_DAT_06d57350);
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
    }
  }
LAB_056f6138:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


