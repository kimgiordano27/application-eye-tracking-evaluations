/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 056f5b98
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  long *plVar10;
  long *unaff_x28;
  long in_stack_00000008;
  
  if (param_1 == 0) goto LAB_056f6138;
  if ((unaff_x23 != 0) && (lVar4 = thunk_FUN_02ef170c(), lVar4 == 0)) goto LAB_056f6140;
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_056f613c;
  *(long *)(param_1 + 0x20) = unaff_x23;
  thunk_FUN_02f411dc();
  if ((unaff_x20 != 0) && (lVar4 = thunk_FUN_02ef170c(), lVar4 == 0)) goto LAB_056f6140;
  if (*(uint *)(param_1 + 0x18) < 2) goto LAB_056f613c;
  *(long *)(param_1 + 0x28) = unaff_x20;
  thunk_FUN_02f411dc();
  if (unaff_x25 != (long *)0x0) {
    uVar5 = (**(code **)(*unaff_x25 + 0x968))();
    puVar3 = PTR_DAT_06d37b88;
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar4 = FUN_05717f90(0);
    if (lVar4 != 0) {
      uVar6 = FUN_03b62b40(lVar4,*(undefined8 *)(unaff_x21 + 0x18),*(undefined8 *)PTR_DAT_06d56f08);
      *(undefined8 *)(unaff_x21 + 0x10) = uVar6;
      thunk_FUN_02f411dc();
      if (*(char *)(unaff_x22 + 0x11) != '\0') {
        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57348);
        FUN_05645a04(lVar4,0);
        if (lVar4 == 0) goto LAB_056f6138;
        plVar10 = (long *)(lVar4 + 0x28);
        *plVar10 = unaff_x21;
        thunk_FUN_02f411dc(plVar10);
        if (*plVar10 == 0) goto LAB_056f6138;
        uVar6 = *(undefined8 *)(*plVar10 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_056ec7d4(uVar6,1,0,0);
        uVar6 = 0;
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar8 = FUN_05717f90(0);
          if ((*plVar10 == 0) || (lVar8 == 0)) goto LAB_056f6138;
          uVar6 = FUN_03b62ef0(lVar8,*(undefined8 *)(*plVar10 + 0x18),
                               *(undefined8 *)PTR_DAT_06d56f10);
        }
        *(undefined8 *)(lVar4 + 0x10) = uVar6;
        thunk_FUN_02f411dc();
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        plVar10 = (long *)FUN_05717f90(0);
        if (plVar10 == (long *)0x0) goto LAB_056f6138;
        lVar8 = thunk_FUN_02edd730(*(undefined8 *)
                                    (*plVar10 +
                                     (ulong)*(ushort *)(*(long *)PTR_DAT_06d56f00 + 0x50) * 0x10 +
                                    0x140));
        uVar5 = (**(code **)(lVar8 + 8))(plVar10,uVar5,lVar8);
        *(undefined8 *)(lVar4 + 0x18) = uVar5;
        thunk_FUN_02f411dc();
        puVar2 = PTR_DAT_06d06088;
        lVar8 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
        if (lVar8 == 0) goto LAB_056f6138;
        if ((unaff_x23 != 0) && (lVar9 = thunk_FUN_02ef170c(), lVar9 == 0)) goto LAB_056f6140;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_056f613c;
        *(long *)(lVar8 + 0x20) = unaff_x23;
        thunk_FUN_02f411dc();
        puVar1 = PTR_DAT_06d03e90;
        if (unaff_x24 == 0) goto LAB_056f6138;
        lVar8 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden();
        if (lVar8 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_055316f4(lVar8,0);
        }
        uVar7 = FUN_0552fe54(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = FUN_02f07f14(*(undefined8 *)puVar2,1);
          if (lVar8 == 0) goto LAB_056f6138;
          if ((unaff_x23 != 0) && (lVar9 = thunk_FUN_02ef170c(), lVar9 == 0)) goto LAB_056f6140;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_056f613c;
          *(long *)(lVar8 + 0x20) = unaff_x23;
          thunk_FUN_02f411dc();
          if (in_stack_00000008 == 0) goto LAB_056f6138;
          lVar8 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden
                            (in_stack_00000008,*(undefined8 *)puVar1,0x14,0);
          if (lVar8 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_055316f4(lVar8,0);
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        plVar10 = (long *)FUN_05717f90(0);
        unaff_x27 = (long *)PTR_DAT_06d01eb0;
        if (plVar10 == (long *)0x0) goto LAB_056f6138;
        lVar8 = thunk_FUN_02edd730(*(undefined8 *)
                                    (*plVar10 +
                                     (ulong)*(ushort *)(*(long *)PTR_DAT_06d56920 + 0x50) * 0x10 +
                                    0x140));
        uVar5 = (**(code **)(lVar8 + 8))(plVar10,uVar5,lVar8);
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        thunk_FUN_02f411dc();
        uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57330);
        FUN_056f6538(uVar5,lVar4,*(undefined8 *)PTR_DAT_06d57340);
        if (unaff_x19 == 0) goto LAB_056f6138;
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar5;
        thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xe0),uVar5);
      }
      if (*(char *)(unaff_x22 + 0x10) == '\0') {
        if (unaff_x19 != 0) {
LAB_056f610c:
          FUN_056f6754();
          return;
        }
      }
      else {
        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57358);
        FUN_05645a04(lVar4,0);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x18) = unaff_x21;
          thunk_FUN_02f411dc();
          uVar5 = *(undefined8 *)PTR_DAT_06d57318;
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          plVar10 = (long *)FUN_056109c0(uVar5,0);
          lVar8 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
          if (lVar8 != 0) {
            if ((unaff_x23 != 0) && (lVar9 = thunk_FUN_02ef170c(), lVar9 == 0)) {
LAB_056f6140:
              uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar5,0);
            }
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(long *)(lVar8 + 0x20) = unaff_x23;
              thunk_FUN_02f411dc();
              if ((unaff_x20 != 0) && (lVar9 = thunk_FUN_02ef170c(), lVar9 == 0)) goto LAB_056f6140;
              if (1 < *(uint *)(lVar8 + 0x18)) {
                *(long *)(lVar8 + 0x28) = unaff_x20;
                thunk_FUN_02f411dc();
                if (plVar10 != (long *)0x0) {
                  lVar8 = (**(code **)(*plVar10 + 0x968))
                                    (plVar10,lVar8,*(undefined8 *)(*plVar10 + 0x970));
                  if (lVar8 != 0) {
                    uVar5 = FUN_0561c350(lVar8,0);
                    uVar5 = FUN_03a1b5b4(uVar5,*(undefined8 *)PTR_DAT_06d57320);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_02f12b58(*(long *)puVar3);
                    }
                    plVar10 = (long *)FUN_05717f90(0);
                    if (plVar10 != (long *)0x0) {
                      uVar5 = (**(code **)(*plVar10 + 0x188))
                                        (plVar10,uVar5,*(undefined8 *)(*plVar10 + 400));
                      *(undefined8 *)(lVar4 + 0x10) = uVar5;
                      thunk_FUN_02f411dc();
                      uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57328);
                      FUN_056f664c(uVar5,lVar4,*(undefined8 *)PTR_DAT_06d57350);
                      if (unaff_x19 != 0) {
                        *(undefined8 *)(unaff_x19 + 0xe8) = uVar5;
                        thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xe8),uVar5);
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
LAB_056f6138:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


