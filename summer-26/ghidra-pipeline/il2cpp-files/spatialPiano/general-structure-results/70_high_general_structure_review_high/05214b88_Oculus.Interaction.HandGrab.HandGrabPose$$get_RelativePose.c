/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabPose$$get_RelativePose
ENTRY_POINT: 05214b88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long Oculus_Interaction_HandGrab_HandGrabPose__get_RelativePose(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint unaff_w19;
  undefined8 uVar8;
  long unaff_x20;
  short unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined2 uStack000000000000000c;
  
  while (FUN_03abf108(param_1,param_2), unaff_x20 != 0) {
    do {
      lVar5 = *(long *)(unaff_x20 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_05214bec;
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = unaff_x23;
      }
      else {
        FUN_03abf904(unaff_x20,unaff_x23,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(unaff_x22 + 0x10) == 0) goto LAB_05214bec;
      if (*(int *)(*(long *)(unaff_x22 + 0x10) + 0x10) <= *(int *)(unaff_x22 + 0x20)) {
        thunk_FUN_02f6ef30(
                          UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                          );
        uVar8 = thunk_FUN_02f45270();
        uVar4 = thunk_FUN_02f6ef30(System_Collections_Generic_List<TextStyle>_TypeInfo);
        FUN_0515dff4(uVar8,uVar4,0);
        uVar4 = thunk_FUN_02f6ef30(System_Collections_Generic_List<Timer>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar8,uVar4);
      }
      unaff_x23 = Oculus_Interaction_HandGrab_HandPose___ctor();
      FUN_05214168();
      FUN_052149c8();
      if (*(long *)(unaff_x22 + 0x10) == 0) goto LAB_05214bec;
      sVar3 = FUN_04f69818(*(long *)(unaff_x22 + 0x10),*(undefined4 *)(unaff_x22 + 0x20),0);
      if (sVar3 == unaff_w21) {
        if (unaff_x20 == 0) {
          if (*(int *)(*(long *)System_Collections_Generic_List<OVRAnchor>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar5 = FUN_0521481c(unaff_x23,unaff_w19 & 1);
          return lVar5;
        }
        lVar5 = *(long *)(unaff_x20 + 0x10);
        lVar7 = *unaff_x24;
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = unaff_x23;
          }
          else {
            FUN_03abf904(unaff_x20,unaff_x23,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          puVar6 = (undefined8 *)System_Collections_Generic_List<TimeValue>_TypeInfo;
          if ((unaff_w19 & 1) == 0) {
            puVar6 = (undefined8 *)System_Collections_Generic_List<Thread>_TypeInfo;
          }
          lVar5 = thunk_FUN_02f45270(*puVar6);
          FUN_05116b38(lVar5,0);
          *(long *)(lVar5 + 0x10) = unaff_x20;
          return lVar5;
        }
        goto LAB_05214bec;
      }
      if (*(long *)(unaff_x22 + 0x10) == 0) goto LAB_05214bec;
      sVar3 = FUN_04f69818(*(long *)(unaff_x22 + 0x10),*(undefined4 *)(unaff_x22 + 0x20),0);
      if (sVar3 != 0x2c) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
        uVar1 = *(undefined4 *)(unaff_x22 + 0x20);
        FUN_02a7da48(uVar8);
        uStack000000000000000c = FUN_04f69818(uVar8,uVar1,0);
        FUN_02a7d698(*(undefined8 *)(PTR_DAT_067c9338 + 0x88));
        uVar8 = FUN_0504b4c4(&stack0x0000000c,0);
        uVar4 = thunk_FUN_02f6ef30(System_Collections_Generic_List<Toggle>_TypeInfo);
        uVar8 = FUN_04f65260(uVar4,uVar8,0);
        thunk_FUN_02f6ef30(
                          UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                          );
        uVar4 = thunk_FUN_02f45270();
        FUN_0515dff4(uVar4,uVar8,0);
        uVar8 = thunk_FUN_02f6ef30(System_Collections_Generic_List<Timer>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar4,uVar8);
      }
      *(int *)(unaff_x22 + 0x20) = *(int *)(unaff_x22 + 0x20) + 1;
      FUN_05214168();
    } while (unaff_x20 != 0);
    param_1 = thunk_FUN_02f45270(*unaff_x26);
    param_2 = *unaff_x27;
    unaff_x20 = param_1;
  }
LAB_05214bec:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


