/*
FUNCTION_NAME: OVRInput.OVRControllerRHand$$ConfigureNearTouchMap
ENTRY_POINT: 03364dec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void OVRInput_OVRControllerRHand__ConfigureNearTouchMap
               (long param_1,undefined4 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  long lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar16;
  long lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double in_stack_00000010;
  long in_stack_00000018;
  double in_stack_00000020;
  int iStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long lStack0000000000000068;
  undefined *puVar15;
  
  lVar5 = tpidr_el0;
  lStack0000000000000068 = *(long *)(lVar5 + 0x28);
  if ((DAT_0453351e & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__);
    FUN_01c5d288(PTR_DAT_042303d0);
    FUN_01c5d288(
                Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                );
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(PTR_DAT_04230108);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                );
    DAT_0453351e = 1;
  }
  puVar15 = PTR_DAT_042303d0;
  in_stack_00000030 = 0;
  iStack000000000000002c = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0.0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000010 = 0.0;
  uVar9 = 8;
  if ((*(int *)(param_1 + 0x28) == 0) && (uVar9 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
    uVar9 = 8;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_03375304(&stack0x00000038,*(undefined8 *)(param_1 + 0x80),param_4,
               *(int *)(param_1 + 0x8c) - param_4,0);
  *(undefined8 *)(param_1 + 0xb8) = in_stack_00000040;
  *(undefined8 *)(param_1 + 0xb0) = in_stack_00000038;
  if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar12 = FUN_03245d2c(param_3 & 0xffffffff,0);
  puVar15 = 
  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__;
  if ((uVar12 & 1) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(param_1 + 0xbc) == 1;
  }
  iVar10 = ((uint)param_3 & 0xffff) - 0x30;
  plVar2 = (long *)(param_1 + 0xb0);
  if ((iVar10 == 0) && (1 < *(int *)(param_1 + 0xbc))) {
    lVar17 = *plVar2;
    if (lVar17 == 0) goto LAB_033657b0;
    uVar1 = *(int *)(param_1 + 0xb8) + 1;
    if (*(uint *)(lVar17 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    sVar4 = *(short *)(lVar17 + (long)(int)uVar1 * 2 + 0x20);
    bVar8 = false;
    if ((sVar4 != 0x2e) && (bVar8 = false, sVar4 != 0x65)) {
      bVar8 = sVar4 != 0x45;
    }
  }
  else {
    bVar8 = false;
  }
  switch(param_2) {
  case 0:
  case 2:
    if (bVar7) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar17 = (param_3 & 0xffff) - 0x30;
LAB_03364f8c:
      lVar17 = FUN_0336cfc0(lVar17,0);
    }
    else if (bVar8) {
      lVar17 = FUN_03374f50(plVar2,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar12 = FUN_03152abc(lVar17,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                            ,5,0);
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_03254880(lVar17,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_03254880(lVar17,0x10,0);
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar17 = FUN_0336cfc0(uVar13,0);
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0xb0);
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar10 = FUN_03370d4c(uVar13,uVar9,uVar3,&stack0x00000018,0);
      lVar17 = in_stack_00000018;
      if (iVar10 != 2) {
        if (iVar10 != 1) {
          if (*(int *)(param_1 + 0x5c) == 1) {
            uVar13 = *(undefined8 *)(param_1 + 0xb0);
            uVar9 = *(undefined4 *)(param_1 + 0xb8);
            uVar3 = *(undefined4 *)(param_1 + 0xbc);
            if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            iVar10 = FUN_03370ebc(uVar13,uVar9,uVar3,&stack0x00000048,0);
            uVar13 = in_stack_00000048;
            uVar16 = in_stack_00000050;
            goto joined_r0x03365448;
          }
          uVar13 = FUN_03374f50(plVar2,0);
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
          }
          uVar16 = FUN_03295500(0);
          uVar12 = FUN_032ba038(uVar13,0xa7,uVar16,&stack0x00000010,0);
          dVar18 = in_stack_00000010;
          if ((uVar12 & 1) != 0) goto LAB_03365748;
          goto LAB_03365304;
        }
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        goto LAB_03364f8c;
      }
      lVar17 = FUN_03374f50(plVar2,0);
      if (lVar17 == 0) {
LAB_033657b0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (0x17c < *(int *)(lVar17 + 0x10)) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar13 = FUN_03295500(0);
        uVar16 = FUN_03374f50(plVar2,0);
        puVar15 = 
        Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
        ;
        goto LAB_03365904;
      }
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar13 = FUN_03295500(0);
      lVar17 = FUN_03365e1c(lVar17,uVar13);
    }
    break;
  case 1:
    if (bVar7) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    else {
      if (bVar8) {
        lVar17 = FUN_03374f50(plVar2,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar12 = FUN_03152abc(lVar17,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        if ((uVar12 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_032546d8(lVar17,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_032546d8(lVar17,0x10,0);
        }
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar17 = FUN_0336cdb0(uVar9,0);
        break;
      }
      uVar13 = *(undefined8 *)(param_1 + 0xb0);
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar11 = FUN_03370bd0(uVar13,uVar9,uVar3,&stack0x0000002c,0);
      iVar10 = iStack000000000000002c;
      if (iVar11 != 1) {
        if (iVar11 == 2) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar13 = FUN_03295500(0);
          uVar16 = FUN_03374f50(plVar2,0);
          puVar15 = 
          Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__
          ;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar13 = FUN_03295500(0);
          uVar16 = FUN_03374f50(plVar2,0);
          puVar15 = 
          Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
          ;
        }
        goto LAB_03365904;
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    lVar17 = FUN_0336cdb0(iVar10,0);
    break;
  default:
    uVar13 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
                               );
    uVar13 = FUN_0335992c(param_1,uVar13);
    goto LAB_03365928;
  case 4:
    lVar17 = FUN_03374f50(plVar2,0);
    if (bVar8) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar12 = FUN_03152abc(lVar17,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                            ,5,0);
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar17,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar17,0x10,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar13 = FUN_03295500(0);
      uVar12 = FUN_032ba038(lVar17,0xa7,uVar13,&stack0x00000030,0);
      if ((uVar12 & 1) == 0) {
LAB_03365304:
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar13 = FUN_03295500(0);
        uVar16 = FUN_03374f50(plVar2,0);
        puVar15 = 
        Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_get_Current__
        ;
LAB_03365904:
        uVar14 = thunk_FUN_01c273e8(puVar15);
        uVar13 = FUN_0336f2b8(uVar14,uVar13,uVar16,0);
        uVar13 = FUN_03365da0(param_1,uVar13,0);
LAB_03365928:
        uVar16 = thunk_FUN_01c273e8(
                                   Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar13,uVar16);
      }
    }
    uVar13 = 9;
    goto LAB_0336576c;
  case 5:
    if (bVar7) {
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar19 = FUN_03330114(param_3 & 0xffffffff,0);
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
      FUN_0332bc20(&stack0x00000038,0x30,0);
      auVar19 = FUN_0333050c(auVar19._0_8_,auVar19._8_8_,in_stack_00000038,in_stack_00000040,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    else {
      if (bVar8) {
        lVar17 = FUN_03374f50(plVar2,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar12 = FUN_03152abc(lVar17,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        puVar15 = PTR_DAT_0422fa10;
        if ((uVar12 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03254880(lVar17,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03254880(lVar17,0x10,0);
        }
        if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        auVar19 = FUN_03253c44(uVar13,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar17 = FUN_0336d1dc(auVar19._0_8_,auVar19._8_8_,0);
        goto LAB_03365764;
      }
      uVar13 = *(undefined8 *)(param_1 + 0xb0);
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar10 = FUN_03370ebc(uVar13,uVar9,uVar3,&stack0x00000058,0);
      uVar13 = in_stack_00000058;
      uVar16 = in_stack_00000060;
joined_r0x03365448:
      if (iVar10 != 1) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar13 = FUN_03295500(0);
        uVar16 = FUN_03374f50(plVar2,0);
        puVar15 = 
        Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
        ;
        goto LAB_03365904;
      }
      auVar6._8_8_ = uVar16;
      auVar6._0_8_ = uVar13;
      auVar19._8_8_ = uVar16;
      auVar19._0_8_ = uVar13;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
        auVar19 = auVar6;
      }
    }
    lVar17 = FUN_0336d1dc(auVar19._0_8_,auVar19._8_8_,0);
    goto LAB_03365764;
  case 8:
    if (bVar7) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar18 = (double)((uint)param_3 & 0xffff) + -48.0;
    }
    else {
      lVar17 = FUN_03374f50(plVar2,0);
      if (bVar8) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar12 = FUN_03152abc(lVar17,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        puVar15 = PTR_DAT_0422fa10;
        if ((uVar12 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03254880(lVar17,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03254880(lVar17,0x10,0);
        }
        if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_032538c8(uVar13,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar17 = FUN_0336d2c4(uVar13,0);
        goto LAB_03365764;
      }
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar13 = FUN_03295500(0);
      uVar12 = FUN_032ba038(lVar17,0xa7,uVar13,&stack0x00000020,0);
      dVar18 = in_stack_00000020;
      if ((uVar12 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar13 = FUN_03295500(0);
        uVar16 = FUN_03374f50(plVar2,0);
        puVar15 = 
        Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
        ;
        goto LAB_03365904;
      }
LAB_03365748:
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    lVar17 = FUN_0336d2c4(dVar18,0);
LAB_03365764:
    uVar13 = 8;
    goto LAB_0336576c;
  }
  uVar13 = 7;
LAB_0336576c:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_03359f08(param_1,uVar13,lVar17,0);
  if (*(long *)(lVar5 + 0x28) != lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


