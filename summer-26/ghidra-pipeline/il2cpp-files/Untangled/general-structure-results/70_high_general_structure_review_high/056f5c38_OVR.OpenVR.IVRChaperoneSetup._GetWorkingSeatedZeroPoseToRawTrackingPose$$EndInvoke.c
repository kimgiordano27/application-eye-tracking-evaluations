/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 056f5c38
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


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x27;
  long *plVar8;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  thunk_FUN_02f12b58();
  lVar3 = FUN_05717f90(0);
  if (lVar3 == 0) goto LAB_056f6138;
  uVar4 = FUN_03b62b40(lVar3,*(undefined8 *)(unaff_x21 + 0x18),*(undefined8 *)PTR_DAT_06d56f08);
  *(undefined8 *)(unaff_x21 + 0x10) = uVar4;
  thunk_FUN_02f411dc();
  if (*(char *)(unaff_x22 + 0x11) != '\0') {
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57348);
    FUN_05645a04(lVar3,0);
    if (lVar3 == 0) goto LAB_056f6138;
    plVar8 = (long *)(lVar3 + 0x28);
    *plVar8 = unaff_x21;
    thunk_FUN_02f411dc(plVar8);
    if (*plVar8 == 0) goto LAB_056f6138;
    uVar4 = *(undefined8 *)(*plVar8 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_056ec7d4(uVar4,1,0,0);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar6 = FUN_05717f90(0);
      if ((*plVar8 == 0) || (lVar6 == 0)) goto LAB_056f6138;
      uVar4 = FUN_03b62ef0(lVar6,*(undefined8 *)(*plVar8 + 0x18),*(undefined8 *)PTR_DAT_06d56f10);
    }
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    thunk_FUN_02f411dc();
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar8 = (long *)FUN_05717f90(0);
    if (plVar8 == (long *)0x0) goto LAB_056f6138;
    lVar6 = thunk_FUN_02edd730(*(undefined8 *)
                                (*plVar8 + (ulong)*(ushort *)(*(long *)PTR_DAT_06d56f00 + 0x50) *
                                           0x10 + 0x140));
    uVar4 = (**(code **)(lVar6 + 8))(plVar8);
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    thunk_FUN_02f411dc();
    puVar2 = PTR_DAT_06d06088;
    lVar6 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
    if (lVar6 == 0) goto LAB_056f6138;
    if ((unaff_x23 != 0) && (lVar7 = thunk_FUN_02ef170c(), lVar7 == 0)) goto LAB_056f6140;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_056f613c;
    *(long *)(lVar6 + 0x20) = unaff_x23;
    thunk_FUN_02f411dc();
    puVar1 = PTR_DAT_06d03e90;
    if (unaff_x24 == 0) goto LAB_056f6138;
    lVar6 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden();
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_055316f4(lVar6,0);
    }
    uVar5 = FUN_0552fe54(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_02f07f14(*(undefined8 *)puVar2,1);
      if (lVar6 == 0) goto LAB_056f6138;
      if ((unaff_x23 != 0) && (lVar7 = thunk_FUN_02ef170c(), lVar7 == 0)) goto LAB_056f6140;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_056f613c;
      *(long *)(lVar6 + 0x20) = unaff_x23;
      thunk_FUN_02f411dc();
      if (in_stack_00000008 == 0) goto LAB_056f6138;
      lVar6 = Newtonsoft_Json_Schema_JsonSchema__set_Hidden
                        (in_stack_00000008,*(undefined8 *)puVar1,0x14,0);
      if (lVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_055316f4(lVar6,0);
      }
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar8 = (long *)FUN_05717f90(0);
    unaff_x27 = (long *)PTR_DAT_06d01eb0;
    if (plVar8 == (long *)0x0) goto LAB_056f6138;
    lVar6 = thunk_FUN_02edd730(*(undefined8 *)
                                (*plVar8 + (ulong)*(ushort *)(*(long *)PTR_DAT_06d56920 + 0x50) *
                                           0x10 + 0x140));
    uVar4 = (**(code **)(lVar6 + 8))(plVar8,uVar4,lVar6);
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    thunk_FUN_02f411dc();
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57330);
    FUN_056f6538(uVar4,lVar3,*(undefined8 *)PTR_DAT_06d57340);
    if (unaff_x19 == 0) goto LAB_056f6138;
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar4;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xe0),uVar4);
  }
  if (*(char *)(unaff_x22 + 0x10) == '\0') {
    if (unaff_x19 != 0) {
LAB_056f610c:
      FUN_056f6754();
      return;
    }
  }
  else {
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57358);
    FUN_05645a04(lVar3,0);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x18) = unaff_x21;
      thunk_FUN_02f411dc();
      uVar4 = *(undefined8 *)PTR_DAT_06d57318;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar8 = (long *)FUN_056109c0(uVar4,0);
      lVar6 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
      if (lVar6 != 0) {
        if ((unaff_x23 != 0) && (lVar7 = thunk_FUN_02ef170c(), lVar7 == 0)) {
LAB_056f6140:
          uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar4,0);
        }
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(long *)(lVar6 + 0x20) = unaff_x23;
          thunk_FUN_02f411dc();
          if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_02ef170c(), lVar7 == 0)) goto LAB_056f6140;
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(long *)(lVar6 + 0x28) = unaff_x20;
            thunk_FUN_02f411dc();
            if (plVar8 != (long *)0x0) {
              lVar6 = (**(code **)(*plVar8 + 0x968))(plVar8,lVar6,*(undefined8 *)(*plVar8 + 0x970));
              if (lVar6 != 0) {
                uVar4 = FUN_0561c350(lVar6,0);
                uVar4 = FUN_03a1b5b4(uVar4,*(undefined8 *)PTR_DAT_06d57320);
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(*unaff_x29);
                }
                plVar8 = (long *)FUN_05717f90(0);
                if (plVar8 != (long *)0x0) {
                  uVar4 = (**(code **)(*plVar8 + 0x188))
                                    (plVar8,uVar4,*(undefined8 *)(*plVar8 + 400));
                  *(undefined8 *)(lVar3 + 0x10) = uVar4;
                  thunk_FUN_02f411dc();
                  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57328);
                  FUN_056f664c(uVar4,lVar3,*(undefined8 *)PTR_DAT_06d57350);
                  if (unaff_x19 != 0) {
                    *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
                    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xe8),uVar4);
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
LAB_056f6138:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


