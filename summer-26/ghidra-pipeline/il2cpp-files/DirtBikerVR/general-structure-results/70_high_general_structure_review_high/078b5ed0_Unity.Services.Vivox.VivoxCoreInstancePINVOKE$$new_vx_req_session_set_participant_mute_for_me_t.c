/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_session_set_participant_mute_for_me_t
ENTRY_POINT: 078b5ed0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_set_participant_mute_for_me_t
               (void *param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar14;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b5ec8 with catch @ 078b5ed0
                        */
  memcpy(param_1,param_2,param_3);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b5ec4 with catch @ 078b5ed4
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b5d9c with catch @ 078b5ed8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b5d38 with catch @ 078b5edc
                        */
  uVar1 = unaff_x19[0xe];
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo);
                    /* try { // try from 078b5ef8 to 079b5efb has its CatchHandler @ 078b5f24 */
                    /* try { // try from 078b5efc to 079b5f27 has its CatchHandler @ 078b58ac */
  memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
  memset(&stack0x00000030,0,0x4c0);
                    /* catch() { ... } // from try @ 078b5ef8 with catch @ 078b5f24 */
  FUN_078b75cc(uVar5,uVar1,1,&stack0x000004f0,&stack0x00000030);
                    /* try { // try from 078b5f28 to 079b5f2f has its CatchHandler @ 078b5f38 */
                    /* try { // try from 078b5f30 to 079b5f3b has its CatchHandler @ 078b58ac */
  lVar6 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                    ();
  if (lVar6 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_078b7484;
  }
  in_stack_00000028 = FUN_067c4bec(lVar6,0);
  uVar7 = FUN_0666e8e0(&stack0x00000028,0);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 5;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    FUN_0666e9a8(&stack0x00000028,0);
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo);
    FUN_0679343c(lVar6,0);
    auVar3._8_8_ = in_stack_00000020;
    auVar3._0_8_ = in_stack_00000018;
    auVar2._8_8_ = in_stack_00000020;
    auVar2._0_8_ = in_stack_00000018;
    if (lVar6 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    *(undefined4 *)(lVar6 + 0x10) = 1;
    puVar4 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
    if (unaff_x20 == 0) {
      _in_stack_00000018 = auVar3;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar14 = *(long **)(unaff_x20 + 0x38);
    if (plVar14 == (long *)0x0) {
      _in_stack_00000018 = auVar2;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar12 = *plVar14;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_078b6038;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_03ac43c4(plVar14,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,2)
    ;
LAB_078b6038:
    uVar5 = (*(code *)*puVar8)(plVar14,puVar8[1]);
    *(undefined8 *)(lVar6 + 0x28) = uVar5;
    thunk_FUN_03afed3c();
    *(long *)(unaff_x20 + 0x20) = lVar6;
    thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar6);
    plVar14 = *(long **)(unaff_x20 + 0x38);
    if (plVar14 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar6 = *plVar14;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_078b60bc;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)puVar4,1);
LAB_078b60bc:
    _in_stack_00000018 = (*(code *)*puVar8)(plVar14,puVar8[1]);
    uVar5 = FUN_0674aae0(&stack0x00000018,0);
    *(undefined8 *)(unaff_x19 + 0xc) = uVar5;
    thunk_FUN_03afed3c();
    puVar8 = (undefined8 *)(unaff_x19 + 0xc);
    uVar7 = FUN_065cd268(*puVar8,0);
    puVar4 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar7 & 1) == 0) {
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar14 = *(long **)(unaff_x20 + 0x48);
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar6 = *plVar14;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_03ac43c4(plVar14,*(long *)
                                     System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23)
      ;
LAB_078b6484:
      lVar6 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar7 = 0;
      if (lVar6 != 0) {
        plVar14 = *(long **)(unaff_x20 + 0x48);
        if (plVar14 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar6 = *plVar14;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)puVar4,0x23);
LAB_078b64ec:
        plVar14 = (long *)(*(code *)*puVar9)(plVar14,puVar9[1]);
        if (plVar14 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar6 = *plVar14;
        uVar5 = *puVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_03ac43c4(plVar14,*(long *)
                                       System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                              ,0);
LAB_078b6558:
        uVar7 = (*(code *)*puVar9)(plVar14,uVar5,puVar9[1]);
      }
    }
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar5 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                      (uVar7,*(undefined8 *)(unaff_x20 + 0x20));
    uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo)
    ;
    FUN_078c41d8(uVar10,uVar5,2,0,0);
    puVar9 = (undefined8 *)(unaff_x19 + 10);
    plVar14 = (long *)*puVar9;
    if (plVar14 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar6 = *plVar14;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar5 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar11 = (undefined8 *)(lVar6 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_03ac43c4(plVar14,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
    (*(code *)*puVar11)(plVar14,uVar5,uVar10,puVar11[1]);
    *puVar9 = 0;
    thunk_FUN_03afed3c(puVar9,0);
    *puVar8 = 0;
    thunk_FUN_03afed3c(puVar8,0);
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
    return;
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


