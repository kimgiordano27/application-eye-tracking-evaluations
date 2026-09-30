/*
FUNCTION_NAME: UnityEngine.UIElements.Cursor$$get_defaultCursorId
ENTRY_POINT: 069ac604
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


void UnityEngine_UIElements_Cursor__get_defaultCursorId(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  uint *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_00000100;
  
  if (0x24 < *unaff_x22) {
    unaff_x20[0x28] = *unaff_x28;
    thunk_FUN_03048534(unaff_x20 + 0x28);
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 200);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
    uVar3 = *unaff_x27;
    unaff_x26[7] = *(undefined8 *)(unaff_x19 + 0xb0);
    unaff_x26[6] = uVar8;
    unaff_x26[9] = uVar7;
    unaff_x26[8] = uVar6;
    lVar4 = thunk_FUN_0301043c(uVar3,&stack0x000000e0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0)) {
LAB_069ad498:
      uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
    puVar1 = System_Data_ReadOnlyException_TypeInfo;
    if (0x25 < *unaff_x22) {
      unaff_x20[0x29] = lVar4;
      thunk_FUN_03048534(unaff_x20 + 0x29,lVar4);
      lVar4 = *(long *)puVar1;
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar4 == 0) goto LAB_069ad498;
        lVar4 = *(long *)puVar1;
      }
      if (0x26 < *unaff_x22) {
        unaff_x20[0x2a] = lVar4;
        thunk_FUN_03048534(unaff_x20 + 0x2a);
        in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 0xf0);
        uVar8 = *(undefined8 *)(unaff_x19 + 0xd0);
        uVar7 = *(undefined8 *)(unaff_x19 + 0xe8);
        uVar6 = *(undefined8 *)(unaff_x19 + 0xe0);
        uVar3 = *unaff_x27;
        unaff_x26[1] = *(undefined8 *)(unaff_x19 + 0xd8);
        *unaff_x26 = uVar8;
        unaff_x26[3] = uVar7;
        unaff_x26[2] = uVar6;
        lVar4 = thunk_FUN_0301043c(uVar3,&stack0x000000b0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
        goto LAB_069ad498;
        puVar1 = System_Xml_ReaderPositionInfo_TypeInfo;
        if (0x27 < *unaff_x22) {
          unaff_x20[0x2b] = lVar4;
          thunk_FUN_03048534(unaff_x20 + 0x2b,lVar4);
          lVar4 = *(long *)puVar1;
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar4 == 0) goto LAB_069ad498;
            lVar4 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_06f6d5d8;
          if (0x28 < *unaff_x22) {
            unaff_x20[0x2c] = lVar4;
            thunk_FUN_03048534(unaff_x20 + 0x2c);
            in_stack_000000a8 = *(undefined4 *)(unaff_x19 + 0x100);
            in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0xf8);
            lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&stack0x000000a0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
            goto LAB_069ad498;
            puVar2 = RaycastTest_TypeInfo;
            if (0x29 < *unaff_x22) {
              unaff_x20[0x2d] = lVar4;
              thunk_FUN_03048534(unaff_x20 + 0x2d,lVar4);
              lVar4 = *(long *)puVar2;
              if (lVar4 == 0) {
                lVar4 = 0;
              }
              else {
                lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40));
                if (lVar4 == 0) goto LAB_069ad498;
                lVar4 = *(long *)puVar2;
              }
              if (0x2a < *unaff_x22) {
                unaff_x20[0x2e] = lVar4;
                thunk_FUN_03048534(unaff_x20 + 0x2e);
                in_stack_00000098 = *(undefined4 *)(unaff_x19 + 0x10c);
                in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x104);
                lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&stack0x00000090);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0
                   )) goto LAB_069ad498;
                puVar2 = System_Threading_ReaderWriterLockSlim_TypeInfo;
                if (0x2b < *unaff_x22) {
                  unaff_x20[0x2f] = lVar4;
                  thunk_FUN_03048534(unaff_x20 + 0x2f,lVar4);
                  lVar4 = *(long *)puVar2;
                  if (lVar4 == 0) {
                    lVar4 = 0;
                  }
                  else {
                    lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40));
                    if (lVar4 == 0) goto LAB_069ad498;
                    lVar4 = *(long *)puVar2;
                  }
                  if (0x2c < *unaff_x22) {
                    unaff_x20[0x30] = lVar4;
                    thunk_FUN_03048534(unaff_x20 + 0x30);
                    in_stack_00000088 = *(undefined4 *)(unaff_x19 + 0x118);
                    in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x110);
                    lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&stack0x00000080);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)),
                       lVar5 == 0)) goto LAB_069ad498;
                    puVar2 = RootMotion_FinalIK_Recoil_TypeInfo;
                    if (0x2d < *unaff_x22) {
                      unaff_x20[0x31] = lVar4;
                      thunk_FUN_03048534(unaff_x20 + 0x31,lVar4);
                      lVar4 = *(long *)puVar2;
                      if (lVar4 == 0) {
                        lVar4 = 0;
                      }
                      else {
                        lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40));
                        if (lVar4 == 0) goto LAB_069ad498;
                        lVar4 = *(long *)puVar2;
                      }
                      if (0x2e < *unaff_x22) {
                        unaff_x20[0x32] = lVar4;
                        thunk_FUN_03048534(unaff_x20 + 0x32);
                        in_stack_00000078 = *(undefined4 *)(unaff_x19 + 0x124);
                        in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0x11c);
                        lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&stack0x00000070);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)),
                           lVar5 == 0)) goto LAB_069ad498;
                        puVar1 = PTR_DAT_06f7f478;
                        if (0x2f < *unaff_x22) {
                          unaff_x20[0x33] = lVar4;
                          thunk_FUN_03048534(unaff_x20 + 0x33,lVar4);
                          lVar4 = *(long *)puVar1;
                          if (lVar4 == 0) {
                            lVar4 = 0;
                          }
                          else {
                            lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40));
                            if (lVar4 == 0) goto LAB_069ad498;
                            lVar4 = *(long *)puVar1;
                          }
                          if (0x30 < *unaff_x22) {
                            unaff_x20[0x34] = lVar4;
                            thunk_FUN_03048534(unaff_x20 + 0x34);
                            uStack000000000000006c = *(undefined4 *)(unaff_x19 + 0x128);
                            lVar4 = thunk_FUN_0301043c(*unaff_x25,(long)&stack0x00000068 + 4);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40))
                               , lVar5 == 0)) goto LAB_069ad498;
                            puVar1 = Pathfinding_RecastTileUpdateHandler_TypeInfo;
                            if (0x31 < *unaff_x22) {
                              unaff_x20[0x35] = lVar4;
                              thunk_FUN_03048534(unaff_x20 + 0x35,lVar4);
                              lVar4 = *(long *)puVar1;
                              if (lVar4 == 0) {
                                lVar4 = 0;
                              }
                              else {
                                lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*unaff_x20 + 0x40))
                                ;
                                if (lVar4 == 0) goto LAB_069ad498;
                                lVar4 = *(long *)puVar1;
                              }
                              if (0x32 < *unaff_x22) {
                                unaff_x20[0x36] = lVar4;
                                thunk_FUN_03048534(unaff_x20 + 0x36);
                                uStack0000000000000068 = *(undefined4 *)(unaff_x19 + 300);
                                lVar4 = thunk_FUN_0301043c(*unaff_x25,&stack0x00000068);
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                      (*unaff_x20 + 0x40)),
                                   lVar5 == 0)) goto LAB_069ad498;
                                puVar1 = System_Data_RecordManager_TypeInfo;
                                if (0x33 < *unaff_x22) {
                                  unaff_x20[0x37] = lVar4;
                                  thunk_FUN_03048534(unaff_x20 + 0x37,lVar4);
                                  lVar4 = *(long *)puVar1;
                                  if (lVar4 == 0) {
                                    lVar4 = 0;
                                  }
                                  else {
                                    lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                      (*unaff_x20 + 0x40));
                                    if (lVar4 == 0) goto LAB_069ad498;
                                    lVar4 = *(long *)puVar1;
                                  }
                                  if (0x34 < *unaff_x22) {
                                    unaff_x20[0x38] = lVar4;
                                    thunk_FUN_03048534(unaff_x20 + 0x38);
                                    uStack0000000000000064 = *(undefined4 *)(unaff_x19 + 0x130);
                                    lVar4 = thunk_FUN_0301043c(*unaff_x25,(long)&stack0x00000060 + 4
                                                              );
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                          (*unaff_x20 + 0x40)),
                                       lVar5 == 0)) goto LAB_069ad498;
                                    puVar1 = RaycastWeaponExtended_TypeInfo;
                                    if (0x35 < *unaff_x22) {
                                      unaff_x20[0x39] = lVar4;
                                      thunk_FUN_03048534(unaff_x20 + 0x39,lVar4);
                                      lVar4 = *(long *)puVar1;
                                      if (lVar4 == 0) {
                                        lVar4 = 0;
                                      }
                                      else {
                                        lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                          (*unaff_x20 + 0x40));
                                        if (lVar4 == 0) goto LAB_069ad498;
                                        lVar4 = *(long *)puVar1;
                                      }
                                      if (0x36 < *unaff_x22) {
                                        unaff_x20[0x3a] = lVar4;
                                        thunk_FUN_03048534(unaff_x20 + 0x3a);
                                        uStack0000000000000060 = *(undefined4 *)(unaff_x19 + 0x134);
                                        lVar4 = thunk_FUN_0301043c(*unaff_x25,&stack0x00000060);
                                        if ((lVar4 != 0) &&
                                           (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                              (*unaff_x20 + 0x40)),
                                           lVar5 == 0)) goto LAB_069ad498;
                                        puVar1 = System_Net_ReceiveState_TypeInfo;
                                        if (0x37 < *unaff_x22) {
                                          unaff_x20[0x3b] = lVar4;
                                          thunk_FUN_03048534(unaff_x20 + 0x3b,lVar4);
                                          lVar4 = *(long *)puVar1;
                                          if (lVar4 == 0) {
                                            lVar4 = 0;
                                          }
                                          else {
                                            lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                              (*unaff_x20 + 0x40));
                                            if (lVar4 == 0) goto LAB_069ad498;
                                            lVar4 = *(long *)puVar1;
                                          }
                                          if (0x38 < *unaff_x22) {
                                            unaff_x20[0x3c] = lVar4;
                                            thunk_FUN_03048534(unaff_x20 + 0x3c);
                                            uStack000000000000005c =
                                                 *(undefined4 *)(unaff_x19 + 0x138);
                                            lVar4 = thunk_FUN_0301043c(*unaff_x25,
                                                                       (long)&stack0x00000058 + 4);
                                            if ((lVar4 != 0) &&
                                               (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                                  (*unaff_x20 + 0x40
                                                                                  )), lVar5 == 0))
                                            goto LAB_069ad498;
                                            puVar1 = 
                                            Oculus_Interaction_Input_ReadOnlyHandJointPoses_TypeInfo
                                            ;
                                            if (0x39 < *unaff_x22) {
                                              unaff_x20[0x3d] = lVar4;
                                              thunk_FUN_03048534(unaff_x20 + 0x3d,lVar4);
                                              lVar4 = *(long *)puVar1;
                                              if (lVar4 == 0) {
                                                lVar4 = 0;
                                              }
                                              else {
                                                lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                                  (*unaff_x20 + 0x40
                                                                                  ));
                                                if (lVar4 == 0) goto LAB_069ad498;
                                                lVar4 = *(long *)puVar1;
                                              }
                                              if (0x3a < *unaff_x22) {
                                                unaff_x20[0x3e] = lVar4;
                                                thunk_FUN_03048534(unaff_x20 + 0x3e);
                                                uStack0000000000000058 =
                                                     *(undefined4 *)(unaff_x19 + 0x13c);
                                                lVar4 = thunk_FUN_0301043c(*unaff_x25,
                                                                           &stack0x00000058);
                                                if ((lVar4 != 0) &&
                                                   (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                                      (*unaff_x20 +
                                                                                      0x40)),
                                                   lVar5 == 0)) goto LAB_069ad498;
                                                puVar1 = MeshCombineStudio_ReadMe_TypeInfo;
                                                if (0x3b < *unaff_x22) {
                                                  unaff_x20[0x3f] = lVar4;
                                                  thunk_FUN_03048534(unaff_x20 + 0x3f,lVar4);
                                                  lVar4 = *(long *)puVar1;
                                                  if (lVar4 == 0) {
                                                    lVar4 = 0;
                                                  }
                                                  else {
                                                    lVar4 = thunk_FUN_03010710(lVar4,*(undefined8 *)
                                                                                      (*unaff_x20 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_069ad498;
                                                    lVar4 = *(long *)puVar1;
                                                  }
                                                  if (0x3c < *unaff_x22) {
                                                    unaff_x20[0x40] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x40);
                                                    uStack0000000000000054 =
                                                         *(undefined4 *)(unaff_x19 + 0x140);
                                                    lVar4 = thunk_FUN_0301043c(*unaff_x25,
                                                                               (long)&
                                                  stack0x00000050 + 4);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = RbFreeze_TypeInfo;
                                                  if (0x3d < *unaff_x22) {
                                                    unaff_x20[0x41] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x41,lVar4);
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar1;
                                                  }
                                                  if (0x3e < *unaff_x22) {
                                                    unaff_x20[0x42] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x42);
                                                    uStack0000000000000050 =
                                                         *(undefined4 *)(unaff_x19 + 0x144);
                                                    lVar4 = thunk_FUN_0301043c(*unaff_x25,
                                                                               &stack0x00000050);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = PTR_DAT_06f7c958;
                                                  if (0x3f < *unaff_x22) {
                                                    unaff_x20[0x43] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x43,lVar4);
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar1;
                                                  }
                                                  if (0x40 < *unaff_x22) {
                                                    unaff_x20[0x44] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x44);
                                                    uStack000000000000004c =
                                                         *(undefined4 *)(unaff_x19 + 0x148);
                                                    lVar4 = thunk_FUN_0301043c(*unaff_x25,
                                                                               (long)&
                                                  stack0x00000048 + 4);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = PTR_DAT_06f7faf0;
                                                  if (0x41 < *unaff_x22) {
                                                    unaff_x20[0x45] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x45,lVar4);
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar1;
                                                  }
                                                  if (0x42 < *unaff_x22) {
                                                    unaff_x20[0x46] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x46);
                                                    uStack0000000000000048 =
                                                         *(undefined4 *)(unaff_x19 + 0x14c);
                                                    lVar4 = thunk_FUN_0301043c(*unaff_x25,
                                                                               &stack0x00000048);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = PTR_DAT_06f7d8a8;
                                                  if (0x43 < *unaff_x22) {
                                                    unaff_x20[0x47] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x47,lVar4);
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar1;
                                                  }
                                                  puVar1 = PTR_DAT_06f7d838;
                                                  if (0x44 < *unaff_x22) {
                                                    unaff_x20[0x48] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x48);
                                                    in_stack_00000040 =
                                                         *(undefined4 *)(unaff_x19 + 0x150);
                                                    lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1
                                                                               ,&stack0x00000040);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar2 = 
                                                  System_Xml_ReadContentAsBinaryHelper_TypeInfo;
                                                  if (0x45 < *unaff_x22) {
                                                    unaff_x20[0x49] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x49,lVar4);
                                                    lVar4 = *(long *)puVar2;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar2;
                                                  }
                                                  if (0x46 < *unaff_x22) {
                                                    unaff_x20[0x4a] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x4a);
                                                    in_stack_00000038 =
                                                         *(undefined4 *)(unaff_x19 + 0x154);
                                                    lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1
                                                                               ,&stack0x00000038);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar2 = 
                                                  Oculus_Interaction_Input_Compatibility_OVR_ReadOnlyHandJointPoses_TypeInfo
                                                  ;
                                                  if (0x47 < *unaff_x22) {
                                                    unaff_x20[0x4b] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x4b,lVar4);
                                                    lVar4 = *(long *)puVar2;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar2;
                                                  }
                                                  if (0x48 < *unaff_x22) {
                                                    unaff_x20[0x4c] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x4c);
                                                    uStack0000000000000034 =
                                                         *(undefined4 *)(unaff_x19 + 0x158);
                                                    lVar4 = thunk_FUN_0301043c(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000030 + 4);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar2 = 
                                                  System_Threading_ReaderWriterLock_TypeInfo;
                                                  if (0x49 < *unaff_x22) {
                                                    unaff_x20[0x4d] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x4d,lVar4);
                                                    lVar4 = *(long *)puVar2;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar2;
                                                  }
                                                  if (0x4a < *unaff_x22) {
                                                    unaff_x20[0x4e] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x4e);
                                                    uStack0000000000000030 =
                                                         *(undefined4 *)(unaff_x19 + 0x15c);
                                                    lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1
                                                                               ,&stack0x00000030);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar2 = RbForce_TypeInfo;
                                                  if (0x4b < *unaff_x22) {
                                                    unaff_x20[0x4f] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x4f,lVar4);
                                                    lVar4 = *(long *)puVar2;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar2;
                                                  }
                                                  if (0x4c < *unaff_x22) {
                                                    unaff_x20[0x50] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x50);
                                                    uStack000000000000002c =
                                                         *(undefined4 *)(unaff_x19 + 0x160);
                                                    lVar4 = thunk_FUN_0301043c(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000028 + 4);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar2 = 
                                                  System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo
                                                  ;
                                                  if (0x4d < *unaff_x22) {
                                                    unaff_x20[0x51] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x51,lVar4);
                                                    lVar4 = *(long *)puVar2;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar2;
                                                  }
                                                  if (0x4e < *unaff_x22) {
                                                    unaff_x20[0x52] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x52);
                                                    uStack0000000000000028 =
                                                         *(undefined4 *)(unaff_x19 + 0x164);
                                                    lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1
                                                                               ,&stack0x00000028);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = RealtimeLight_TypeInfo;
                                                  if (0x4f < *unaff_x22) {
                                                    unaff_x20[0x53] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x53,lVar4);
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar1;
                                                  }
                                                  puVar1 = 
                                                  Unity_VisualScripting_RayConverter_TypeInfo;
                                                  if (0x50 < *unaff_x22) {
                                                    unaff_x20[0x54] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x54);
                                                    in_stack_00000020 =
                                                         *(undefined4 *)(unaff_x19 + 0x178);
                                                    in_stack_00000018 =
                                                         *(undefined8 *)(unaff_x19 + 0x170);
                                                    in_stack_00000010 =
                                                         *(undefined8 *)(unaff_x19 + 0x168);
                                                    lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1
                                                                               ,&stack0x00000010);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = PTR_DAT_06f7d510;
                                                  if (0x51 < *unaff_x22) {
                                                    unaff_x20[0x55] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x55,lVar4);
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar1;
                                                  }
                                                  puVar1 = 
                                                  Unity_VisualScripting_Ray2DConverter_TypeInfo;
                                                  if (0x52 < *unaff_x22) {
                                                    unaff_x20[0x56] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x56);
                                                    uStack000000000000000c =
                                                         *(undefined4 *)(unaff_x19 + 0x17c);
                                                    lVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1
                                                                               ,(long)&
                                                  stack0x00000008 + 4);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = RealityValue_TypeInfo;
                                                  if (0x53 < *unaff_x22) {
                                                    unaff_x20[0x57] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x57,lVar4);
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 == 0) {
                                                      lVar4 = 0;
                                                    }
                                                    else {
                                                      lVar4 = thunk_FUN_03010710(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar4 == 0) goto LAB_069ad498;
                                                  lVar4 = *(long *)puVar1;
                                                  }
                                                  if (0x54 < *unaff_x22) {
                                                    unaff_x20[0x58] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x58);
                                                    uStack0000000000000008 =
                                                         *(undefined1 *)(unaff_x19 + 0x180);
                                                    lVar4 = thunk_FUN_0301043c(*unaff_x24,
                                                                               &stack0x00000008);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_03010710(lVar4,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
                                                  goto LAB_069ad498;
                                                  puVar1 = 
                                                  Pathfinding_Ionic_Zip_ReadProgressEventArgs_TypeInfo
                                                  ;
                                                  if (0x55 < *unaff_x22) {
                                                    unaff_x20[0x59] = lVar4;
                                                    thunk_FUN_03048534(unaff_x20 + 0x59,lVar4);
                                                    FUN_05972680(*(undefined8 *)puVar1);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_02fe94f0();
}


