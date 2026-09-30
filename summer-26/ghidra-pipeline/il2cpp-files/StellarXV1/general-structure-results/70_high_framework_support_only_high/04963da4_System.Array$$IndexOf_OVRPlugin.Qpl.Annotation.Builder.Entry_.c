/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 04963da4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *unaff_x22;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined1 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  undefined1 uStack0000000000000010;
  undefined1 uStack0000000000000014;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  undefined1 uStack0000000000000020;
  undefined1 uStack0000000000000024;
  undefined1 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  undefined1 in_stack_00000038;
  
  uVar2 = FUN_0482a6c0();
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_06efc758();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar2 = FUN_0482a6c0(uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_04964128;
    plVar4 = (long *)FUN_06efc758();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)(unaff_x24 + 0x90))) goto LAB_0496486c;
    lVar5 = FUN_0482ab50(plVar4,0);
    FUN_06efc7c4();
    if (lVar5 == 0) goto LAB_04964128;
    uVar3 = FUN_06efc758();
    in_stack_00000038 = 0;
    uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),&stack0x00000038);
    uVar2 = FUN_076cb228(uVar3,uVar6,0);
    if ((uVar2 & 1) == 0) goto LAB_04964128;
    uVar3 = FUN_06efc758();
    uStack000000000000002c = 0;
    uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000028 + 4);
    uVar2 = FUN_076cb228(uVar3,uVar6,0);
    if ((uVar2 & 1) == 0) goto LAB_04964128;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6ff8,0);
    if ((uVar2 & 1) != 0) {
LAB_04964118:
      iVar1 = *(int *)(*unaff_x22 + 0xe4);
joined_r0x04964120:
      if (iVar1 == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_0482c278(*(undefined8 *)PTR_DAT_092b6498);
      uVar6 = FUN_0482c278(*(undefined8 *)PTR_DAT_09285978);
      uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a57d8);
      plVar4 = *(long **)PTR_DAT_092b6408;
      goto LAB_04964788;
    }
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6f80,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6e78,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6fa0,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092ace58,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6f40,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6f78,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a7068,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6f90,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6e98,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a7030,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6ef0,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a58c0,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a70b0,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6f70,0);
    if ((uVar2 & 1) != 0) goto LAB_04964118;
    uVar3 = FUN_06efc758();
    uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a6f28,0);
    iVar1 = *(int *)(*unaff_x22 + 0xe4);
    if ((uVar2 & 1) != 0) goto joined_r0x04964120;
    if (iVar1 == 0) {
      thunk_FUN_040d65a8();
    }
    plVar4 = (long *)FUN_0482bed4(*(undefined8 *)PTR_DAT_092b6490);
    uVar3 = FUN_0482c278(*(undefined8 *)PTR_DAT_092b6480);
    uVar6 = *(undefined8 *)PTR_DAT_09285978;
  }
  else {
LAB_04964128:
    uVar3 = FUN_06efc758();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar2 = FUN_0482a6c0(uVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_06efc758();
      uStack0000000000000028 = 1;
      uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),&stack0x00000028);
      uVar2 = FUN_076cb228(uVar3,uVar6,0);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_040dedf8(PTR_DAT_092a5848);
        uVar3 = thunk_FUN_040b4efc();
        puVar8 = PTR_DAT_092a5868;
        goto LAB_04964994;
      }
      uVar3 = FUN_06efc758();
      uStack0000000000000024 = 1;
      uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000020 + 4);
      uVar2 = FUN_076cb228(uVar3,uVar6,0);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_040dedf8(PTR_DAT_092a5848);
        uVar3 = thunk_FUN_040b4efc();
        puVar8 = PTR_DAT_092a5870;
        goto LAB_04964994;
      }
      plVar4 = (long *)FUN_06efc758();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x22);
      }
      puVar8 = PTR_DAT_09285978;
      uVar3 = FUN_0482c278(*(undefined8 *)PTR_DAT_09285978);
      uVar6 = FUN_0482c278(*(undefined8 *)puVar8);
      uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a57d8);
      if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)(unaff_x24 + 0x90))) goto LAB_0496486c;
      goto LAB_04964788;
    }
    uVar3 = FUN_06efc758();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar2 = FUN_0482a6c0(uVar3,0);
    if ((uVar2 & 1) == 0) {
LAB_0496484c:
      thunk_FUN_040dedf8(PTR_DAT_092a5848);
      uVar3 = thunk_FUN_040b4efc();
      puVar8 = PTR_DAT_092a5860;
      goto LAB_04964994;
    }
    plVar4 = (long *)FUN_06efc758();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)(unaff_x24 + 0x90))) {
LAB_0496486c:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar4);
    }
    lVar5 = FUN_0482ab50(plVar4,0);
    FUN_06efc7c4();
    if (lVar5 == 0) goto LAB_0496484c;
    uVar3 = FUN_06efc758();
    uStack0000000000000020 = 1;
    uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),&stack0x00000020);
    uVar2 = FUN_076cb228(uVar3,uVar6,0);
    if ((uVar2 & 1) == 0) {
LAB_04964474:
      uVar3 = FUN_06efc758();
      uStack0000000000000010 = 1;
      uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),&stack0x00000010);
      uVar2 = FUN_076cb228(uVar3,uVar6,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = FUN_06efc758();
        uStack0000000000000008 = 1;
        uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),&stack0x00000008);
        uVar2 = FUN_076cb228(uVar3,uVar6,0);
        if ((uVar2 & 1) == 0) {
          uVar3 = FUN_06efc758();
          uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092ace58,0);
          iVar1 = *(int *)(*unaff_x22 + 0xe4);
          if ((uVar2 & 1) != 0) goto joined_r0x04964120;
          puVar9 = (undefined8 *)PTR_DAT_092b6490;
          if (iVar1 == 0) {
            thunk_FUN_040d65a8();
            puVar9 = (undefined8 *)PTR_DAT_092b6490;
          }
        }
        else {
          in_stack_00000000._4_1_ = 1;
          uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000000 + 4);
          uVar6 = FUN_06efc758();
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*unaff_x22);
          }
          uVar6 = FUN_0482a6cc(uVar6,*(undefined8 *)PTR_DAT_092a5818,0);
          uVar2 = FUN_076cb228(uVar3,uVar6,0);
          if ((uVar2 & 1) == 0) {
            thunk_FUN_040dedf8(PTR_DAT_092a5848);
            uVar3 = thunk_FUN_040b4efc();
            puVar8 = PTR_DAT_092a5888;
            goto LAB_04964994;
          }
          puVar9 = (undefined8 *)PTR_DAT_092b64a0;
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            puVar9 = (undefined8 *)PTR_DAT_092b64a0;
          }
        }
      }
      else {
        uVar3 = FUN_06efc758();
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*unaff_x22);
        }
        uVar3 = FUN_0482a6cc(uVar3,*(undefined8 *)PTR_DAT_092a5838,0);
        uStack000000000000000c = 1;
        uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000008 + 4);
        uVar2 = FUN_076cb228(uVar3,uVar6,0);
        if ((uVar2 & 1) == 0) {
          thunk_FUN_040dedf8(PTR_DAT_092a5848);
          uVar3 = thunk_FUN_040b4efc();
          puVar8 = PTR_DAT_092a5880;
LAB_04964994:
          uVar6 = thunk_FUN_040dedf8(puVar8);
          FUN_04784f34(uVar3,uVar6,0);
          uVar6 = thunk_FUN_040dedf8(PTR_DAT_092b64b8);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar3,uVar6);
        }
        uVar3 = FUN_06efc758();
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*unaff_x22);
        }
        uVar3 = FUN_0482a6cc(uVar3,*(undefined8 *)PTR_DAT_0928bfe0,0);
        uVar2 = FUN_076cb228(uVar3,*(undefined8 *)PTR_DAT_092a7180,0);
        if ((uVar2 & 1) == 0) {
          puVar9 = (undefined8 *)PTR_DAT_092b64a8;
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            puVar9 = (undefined8 *)PTR_DAT_092b64a8;
          }
        }
        else {
          puVar9 = (undefined8 *)PTR_DAT_092b6488;
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            puVar9 = (undefined8 *)PTR_DAT_092b6488;
          }
        }
      }
    }
    else {
      uVar3 = FUN_06efc758();
      uStack000000000000001c = 1;
      uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000018 + 4);
      uVar2 = FUN_076cb228(uVar3,uVar6,0);
      if ((uVar2 & 1) == 0) goto LAB_04964474;
      uStack0000000000000018 = 1;
      uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),&stack0x00000018);
      uVar6 = FUN_06efc758();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x22);
      }
      uVar6 = FUN_0482a6cc(uVar6,*(undefined8 *)PTR_DAT_092a5838,0);
      uVar2 = FUN_076cb228(uVar3,uVar6,0);
      if ((uVar2 & 1) == 0) {
LAB_04964938:
        thunk_FUN_040dedf8(PTR_DAT_092a5848);
        uVar3 = thunk_FUN_040b4efc();
        puVar8 = PTR_DAT_092a5878;
        goto LAB_04964994;
      }
      uStack0000000000000014 = 1;
      uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000010 + 4);
      uVar6 = FUN_06efc758();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x22);
      }
      uVar6 = FUN_0482a6cc(uVar6,*(undefined8 *)PTR_DAT_092a5818,0);
      uVar2 = FUN_076cb228(uVar3,uVar6,0);
      if ((uVar2 & 1) == 0) goto LAB_04964938;
      puVar9 = (undefined8 *)PTR_DAT_092b64b0;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar9 = (undefined8 *)PTR_DAT_092b64b0;
      }
    }
    plVar4 = (long *)FUN_0482bed4(*puVar9);
    puVar8 = PTR_DAT_09285978;
    uVar3 = FUN_0482c278(*(undefined8 *)PTR_DAT_09285978);
    uVar6 = *(undefined8 *)puVar8;
  }
  uVar6 = FUN_0482c278(uVar6);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a57d8);
LAB_04964788:
  Amazon_S3_Model_PutObjectResponse__IsSetChecksumSHA1(uVar7,plVar4,uVar3,uVar6,0);
  return uVar7;
}


