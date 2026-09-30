/*
FUNCTION_NAME: FUN_033b5bcc
ENTRY_POINT: 033b5bcc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x033b6310) */
/* WARNING: Removing unreachable block (ram,0x033b6198) */
/* WARNING: Removing unreachable block (ram,0x033b66a8) */
/* WARNING: Removing unreachable block (ram,0x033b6654) */
/* WARNING: Removing unreachable block (ram,0x033b5fbc) */

undefined8 FUN_033b5bcc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_54;
  
  if ((DAT_03ff6263 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d8d950);
    thunk_FUN_01ad9084(PTR_DAT_03d8d958);
    thunk_FUN_01ad9084(StringLiteral_3414);
    thunk_FUN_01ad9084(StringLiteral_3409);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__73_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(StringLiteral_5759);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    thunk_FUN_01ad9084(StringLiteral_2598);
    thunk_FUN_01ad9084(StringLiteral_7214);
    thunk_FUN_01ad9084(PTR_DAT_03d8c208);
    thunk_FUN_01ad9084(StringLiteral_5617);
    thunk_FUN_01ad9084(StringLiteral_7130);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    thunk_FUN_01ad9084(StringLiteral_6006);
    DAT_03ff6263 = 1;
  }
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
  puVar2 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
  local_70 = 0;
  local_54 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_2 == 0) goto LAB_033b6650;
  if (((*(long *)(param_2 + 0x70) != 0) &&
      (puVar14 = PTR_DAT_03d8d938, *(char *)(param_2 + 0x6a) == '\0')) ||
     ((*(long *)(param_2 + 0x78) != 0 &&
      (puVar14 = PTR_DAT_03d8d930, *(char *)(param_2 + 0x6b) == '\0')))) {
    uVar12 = thunk_FUN_01ad9084(puVar14);
    uVar12 = FUN_02ec9b78(uVar12,0);
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar13 = thunk_FUN_01afaadc();
    FUN_030406c4(uVar13,uVar12,0);
LAB_033b6718:
    uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d8d960);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar13,uVar12);
  }
  if (*(char *)(param_1 + 200) != '\0') {
    plVar9 = (long *)thunk_FUN_01acfdbc(param_1,0);
    FUN_01852fbc();
    uVar12 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    thunk_FUN_01ad9084(StringLiteral_2728);
    uVar13 = thunk_FUN_01afaadc();
    FUN_0304ec60(uVar13,uVar12,0);
    goto LAB_033b6718;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(long *)(param_2 + 0x90) != 0) {
    lVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__
                              );
    FUN_02b591b0(lVar8,*(undefined8 *)puVar2);
    plVar9 = (long *)FUN_033b7890(param_2);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      puVar6 = StringLiteral_6006;
      puVar5 = StringLiteral_3409;
      puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__;
      puVar14 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      puVar2 = Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar17 = *plVar9;
        lVar15 = *(long *)puVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_033b5e18;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,lVar15,0);
LAB_033b5e18:
        uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar18 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01afa9e0(plVar9,*(undefined8 *)puVar3);
          if (plVar9 == (long *)0x0) goto LAB_033b5fb0;
          lVar15 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar18 == 0) goto LAB_033b5f88;
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_033b5f70;
        }
        lVar17 = *plVar9;
        lVar15 = *(long *)puVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_033b5e78;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,lVar15,1);
LAB_033b5e78:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c();
        }
        plVar11 = (long *)thunk_FUN_01afac30();
        plVar16 = (long *)plVar11[1];
        if (plVar16 != (long *)0x0) {
          plVar11 = (long *)*plVar11;
          if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c();
          }
          if (*plVar16 != *(long *)puVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar16);
          }
          uVar12 = FUN_02ee6c30(plVar11,*(undefined8 *)puVar6,plVar16,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar15 = *(long *)(lVar8 + 0x10);
          lVar17 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar8,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
    goto LAB_033b6650;
  }
  goto LAB_033b5fec;
LAB_033b6128:
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_033b6180;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar3,0);
LAB_033b6180:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  if (plVar9 == (long *)0x0) goto LAB_033b6650;
  uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  *(undefined8 *)(param_2 + 0x18) = uVar12;
  thunk_FUN_01b4f09c();
  goto LAB_033b61c0;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b5f70:
    if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b5fa4;
    }
  }
LAB_033b5f88:
  puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar3,0);
LAB_033b5fa4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_033b5fb0:
  if (lVar8 == 0) goto LAB_033b6650;
  local_90 = FUN_02b5b460(lVar8,*(undefined8 *)StringLiteral_5759);
  thunk_FUN_01b4f09c(&local_90);
LAB_033b5fec:
  lVar8 = FUN_033b7dbc(param_2);
  if (lVar8 != 0) {
    iVar7 = FUN_0247199c(lVar8,*(undefined8 *)PTR_DAT_03d8d958);
    if (iVar7 < 1) {
LAB_033b61c0:
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      if (*(char *)(param_2 + 0x69) == '\0') {
        if (*(int *)(*(long *)StringLiteral_7214 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        local_a8 = thunk_FUN_01ab13e0(0);
        local_b0 = 0;
      }
      else {
        FUN_033b76b0(&local_a8,&local_b0,1);
      }
      if (*(char *)(param_2 + 0x6a) == '\0') {
        local_b8 = 0;
        if (*(int *)(*(long *)StringLiteral_7214 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        local_c0 = thunk_FUN_01ab1434(0);
      }
      else {
        FUN_033b76b0(&local_b8,&local_c0,0);
      }
      if (*(char *)(param_2 + 0x6b) == '\0') {
        local_c8 = 0;
        if (*(int *)(*(long *)StringLiteral_7214 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        local_d0 = thunk_FUN_01ab1390(0);
      }
      else {
        FUN_033b76b0(&local_c8,&local_d0,0);
      }
      FUN_033b7578(param_2,&local_a0);
      uVar18 = FUN_01aaa318(param_2,local_a8,local_c0,local_d0,&local_a0);
      if ((uVar18 & 1) == 0) {
        iVar7 = (int)uStack_98;
        uVar12 = thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
        lVar8 = FUN_01b47fd0(uVar12,8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d8d968);
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined8 *)(lVar8 + 0x20) = uVar12;
        thunk_FUN_01b4f09c();
        if ((DAT_03ff626b & 1) == 0) {
          thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
          DAT_03ff626b = 1;
        }
        lVar15 = *(long *)(param_2 + 0x10);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__
                              + 0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(long *)(lVar8 + 0x28) = lVar15;
        thunk_FUN_01b4f09c();
        uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d8d970);
        if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined8 *)(lVar8 + 0x30) = uVar12;
        thunk_FUN_01b4f09c();
        if ((DAT_03ff6267 & 1) == 0) {
          thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
          DAT_03ff6267 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x18);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__
                              + 0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(long *)(lVar8 + 0x38) = lVar15;
        thunk_FUN_01b4f09c();
        uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d8d978);
        if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined8 *)(lVar8 + 0x40) = uVar12;
        thunk_FUN_01b4f09c();
        if ((DAT_03ff626c & 1) == 0) {
          thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
          DAT_03ff626c = 1;
        }
        lVar15 = *(long *)(param_2 + 0x20);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__
                              + 0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(long *)(lVar8 + 0x48) = lVar15;
        thunk_FUN_01b4f09c();
        uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d8d980);
        if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined8 *)(lVar8 + 0x50) = uVar12;
        thunk_FUN_01b4f09c();
        uVar12 = FUN_03433a38(-(int)uStack_98,0);
        if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined8 *)(lVar8 + 0x58) = uVar12;
        thunk_FUN_01b4f09c();
        uVar12 = FUN_02ee6e18(lVar8,0);
        thunk_FUN_01ad9084(PTR_DAT_03d8d868);
        uVar13 = thunk_FUN_01afaadc();
        FUN_0343432c(uVar13,-iVar7,uVar12,0);
        uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d8d960);
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar13,uVar12);
      }
      uVar18 = FUN_0308a038(local_78,0,0);
      uVar12 = local_78;
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)StringLiteral_2598 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_02f7cb24(uVar12,0);
        local_78 = 0;
      }
      uVar12 = local_a0;
      uVar13 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d8c208);
      FUN_0337913c(uVar13,uVar12,1,0);
      FUN_033b56c8(param_1,uVar13);
      uVar12 = local_a8;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(int *)(param_1 + 0x2c) = (int)uStack_98;
      if (*(char *)(param_2 + 0x69) != '\0') {
        if (*(int *)(*(long *)StringLiteral_7214 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        thunk_FUN_01ab1870(uVar12,&local_54,0);
        lVar8 = *(long *)(param_2 + 0xa8);
        if (lVar8 == 0) {
          lVar8 = FUN_02effed0(0);
        }
        uVar12 = local_b0;
        uVar13 = thunk_FUN_01afaadc(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__
                                   );
        FUN_02fb476c(uVar13,uVar12,2,1,0x2000,0);
        plVar9 = (long *)thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7130);
        FUN_02fa44d0(plVar9,uVar13,lVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_033b6650;
        (**(code **)(*plVar9 + 0x268))(plVar9,1,*(undefined8 *)(*plVar9 + 0x270));
        *(long *)(param_1 + 0xb8) = (long)plVar9;
        thunk_FUN_01b4f09c((long *)(param_1 + 0xb8),plVar9);
      }
      uVar12 = local_c0;
      if (*(char *)(param_2 + 0x6a) != '\0') {
        if (*(int *)(*(long *)StringLiteral_7214 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        thunk_FUN_01ab1870(uVar12,&local_54,0);
        puVar2 = StringLiteral_3414;
        lVar8 = *(long *)(param_2 + 0x70);
        if (lVar8 == 0) {
          if (*(int *)(*(long *)StringLiteral_3414 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (DAT_03ff17d2 == '\0') {
            thunk_FUN_01ad9084(StringLiteral_3414);
            DAT_03ff17d2 = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar8 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        }
        uVar12 = local_b8;
        uVar13 = thunk_FUN_01afaadc(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__
                                   );
        FUN_02fb476c(uVar13,uVar12,1,1,0x2000,0);
        uVar12 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5617);
        FUN_02fa26c0(uVar12,uVar13,lVar8,1,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar12;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xb0),uVar12);
      }
      uVar12 = local_d0;
      if (*(char *)(param_2 + 0x6b) != '\0') {
        if (*(int *)(*(long *)StringLiteral_7214 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        thunk_FUN_01ab1870(uVar12,&local_54,0);
        puVar2 = StringLiteral_3414;
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 == 0) {
          if (*(int *)(*(long *)StringLiteral_3414 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (DAT_03ff17d2 == '\0') {
            thunk_FUN_01ad9084(StringLiteral_3414);
            DAT_03ff17d2 = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar8 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        }
        uVar12 = local_c8;
        uVar13 = thunk_FUN_01afaadc(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__
                                   );
        FUN_02fb476c(uVar13,uVar12,1,1,0x2000,0);
        uVar12 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5617);
        FUN_02fa26c0(uVar12,uVar13,lVar8,1,0);
        *(undefined8 *)(param_1 + 0xc0) = uVar12;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xc0),uVar12);
      }
      return 1;
    }
    plVar9 = (long *)thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                                       );
    FUN_02eeeb74(plVar9,0);
    lVar8 = FUN_033b7dbc(param_2);
    if (lVar8 != 0) {
      plVar11 = (long *)FUN_02471f74(lVar8,*(undefined8 *)PTR_DAT_03d8d950);
      puVar14 = 
      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__73_System_Collections_IEnumerator_Reset__
      ;
      puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar8 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_033b60ac;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_033b60ac:
        uVar18 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar18 & 1) == 0) goto LAB_033b6128;
        lVar8 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar14) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_033b6108;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar14,0);
LAB_033b6108:
        uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        FUN_03390830(plVar9,uVar12,0);
      } while( true );
    }
  }
LAB_033b6650:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


