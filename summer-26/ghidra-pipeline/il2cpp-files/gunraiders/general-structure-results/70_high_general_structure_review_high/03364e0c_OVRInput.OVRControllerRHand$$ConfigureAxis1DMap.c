/*
FUNCTION_NAME: OVRInput.OVRControllerRHand$$ConfigureAxis1DMap
ENTRY_POINT: 03364e0c
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


void OVRInput_OVRControllerRHand__ConfigureAxis1DMap(ulong param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  long lVar16;
  int unaff_w20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  double dVar17;
  undefined1 auVar18 [16];
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
  long in_stack_00000068;
  undefined *puVar14;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x23 + 0x51e) = 1;
  }
  puVar14 = PTR_DAT_042303d0;
  in_stack_00000030 = 0;
  iStack000000000000002c = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0.0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000010 = 0.0;
  uVar8 = 8;
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar8 = 0xc, *(char *)(param_2 + 0x71) != '\0')) {
    uVar8 = 8;
  }
  *(undefined4 *)(param_2 + 0x24) = uVar8;
  if (*(char *)(param_2 + 0x38) != '\0') {
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_03375304(&stack0x00000038,*(undefined8 *)(param_2 + 0x80),unaff_w20,
               *(int *)(param_2 + 0x8c) - unaff_w20,0);
  *(undefined8 *)(param_2 + 0xb8) = in_stack_00000040;
  *(undefined8 *)(param_2 + 0xb0) = in_stack_00000038;
  if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar11 = FUN_03245d2c(unaff_x21 & 0xffffffff,0);
  puVar14 = 
  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__;
  if ((uVar11 & 1) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(param_2 + 0xbc) == 1;
  }
  iVar9 = ((uint)unaff_x21 & 0xffff) - 0x30;
  plVar2 = (long *)(param_2 + 0xb0);
  if ((iVar9 == 0) && (1 < *(int *)(param_2 + 0xbc))) {
    lVar16 = *plVar2;
    if (lVar16 == 0) goto LAB_033657b0;
    uVar1 = *(int *)(param_2 + 0xb8) + 1;
    if (*(uint *)(lVar16 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    sVar4 = *(short *)(lVar16 + (long)(int)uVar1 * 2 + 0x20);
    bVar7 = false;
    if ((sVar4 != 0x2e) && (bVar7 = false, sVar4 != 0x65)) {
      bVar7 = sVar4 != 0x45;
    }
  }
  else {
    bVar7 = false;
  }
  switch(unaff_w22) {
  case 0:
  case 2:
    if (bVar6) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar16 = (unaff_x21 & 0xffff) - 0x30;
LAB_03364f8c:
      lVar16 = FUN_0336cfc0(lVar16,0);
    }
    else if (bVar7) {
      lVar16 = FUN_03374f50(plVar2,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = FUN_03152abc(lVar16,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                            ,5,0);
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar12 = FUN_03254880(lVar16,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar12 = FUN_03254880(lVar16,0x10,0);
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar16 = FUN_0336cfc0(uVar12,0);
    }
    else {
      uVar12 = *(undefined8 *)(param_2 + 0xb0);
      uVar8 = *(undefined4 *)(param_2 + 0xb8);
      uVar3 = *(undefined4 *)(param_2 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar9 = FUN_03370d4c(uVar12,uVar8,uVar3,&stack0x00000018,0);
      lVar16 = in_stack_00000018;
      if (iVar9 != 2) {
        if (iVar9 != 1) {
          if (*(int *)(param_2 + 0x5c) == 1) {
            uVar12 = *(undefined8 *)(param_2 + 0xb0);
            uVar8 = *(undefined4 *)(param_2 + 0xb8);
            uVar3 = *(undefined4 *)(param_2 + 0xbc);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            iVar9 = FUN_03370ebc(uVar12,uVar8,uVar3,&stack0x00000048,0);
            uVar12 = in_stack_00000048;
            uVar15 = in_stack_00000050;
            goto joined_r0x03365448;
          }
          uVar12 = FUN_03374f50(plVar2,0);
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
          }
          uVar15 = FUN_03295500(0);
          uVar11 = FUN_032ba038(uVar12,0xa7,uVar15,&stack0x00000010,0);
          dVar17 = in_stack_00000010;
          if ((uVar11 & 1) != 0) goto LAB_03365748;
          goto LAB_03365304;
        }
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        goto LAB_03364f8c;
      }
      lVar16 = FUN_03374f50(plVar2,0);
      if (lVar16 == 0) {
LAB_033657b0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (0x17c < *(int *)(lVar16 + 0x10)) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        uVar15 = FUN_03374f50(plVar2,0);
        puVar14 = 
        Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
        ;
        goto LAB_03365904;
      }
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_03295500(0);
      lVar16 = FUN_03365e1c(lVar16,uVar12);
    }
    break;
  case 1:
    if (bVar6) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    else {
      if (bVar7) {
        lVar16 = FUN_03374f50(plVar2,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar11 = FUN_03152abc(lVar16,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar8 = FUN_032546d8(lVar16,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar8 = FUN_032546d8(lVar16,0x10,0);
        }
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar16 = FUN_0336cdb0(uVar8,0);
        break;
      }
      uVar12 = *(undefined8 *)(param_2 + 0xb0);
      uVar8 = *(undefined4 *)(param_2 + 0xb8);
      uVar3 = *(undefined4 *)(param_2 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar10 = FUN_03370bd0(uVar12,uVar8,uVar3,&stack0x0000002c,0);
      iVar9 = iStack000000000000002c;
      if (iVar10 != 1) {
        if (iVar10 == 2) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar12 = FUN_03295500(0);
          uVar15 = FUN_03374f50(plVar2,0);
          puVar14 = 
          Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__
          ;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar12 = FUN_03295500(0);
          uVar15 = FUN_03374f50(plVar2,0);
          puVar14 = 
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
    lVar16 = FUN_0336cdb0(iVar9,0);
    break;
  default:
    uVar12 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
                               );
    uVar12 = FUN_0335992c(param_2,uVar12);
    goto LAB_03365928;
  case 4:
    lVar16 = FUN_03374f50(plVar2,0);
    if (bVar7) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = FUN_03152abc(lVar16,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                            ,5,0);
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar16,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar16,0x10,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_03295500(0);
      uVar11 = FUN_032ba038(lVar16,0xa7,uVar12,&stack0x00000030,0);
      if ((uVar11 & 1) == 0) {
LAB_03365304:
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        uVar15 = FUN_03374f50(plVar2,0);
        puVar14 = 
        Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_get_Current__
        ;
LAB_03365904:
        uVar13 = thunk_FUN_01c273e8(puVar14);
        uVar12 = FUN_0336f2b8(uVar13,uVar12,uVar15,0);
        uVar12 = FUN_03365da0(param_2,uVar12,0);
LAB_03365928:
        uVar15 = thunk_FUN_01c273e8(
                                   Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar12,uVar15);
      }
    }
    uVar12 = 9;
    goto LAB_0336576c;
  case 5:
    if (bVar6) {
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar18 = FUN_03330114(unaff_x21 & 0xffffffff,0);
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
      FUN_0332bc20(&stack0x00000038,0x30,0);
      auVar18 = FUN_0333050c(auVar18._0_8_,auVar18._8_8_,in_stack_00000038,in_stack_00000040,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    else {
      if (bVar7) {
        lVar16 = FUN_03374f50(plVar2,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar11 = FUN_03152abc(lVar16,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        puVar14 = PTR_DAT_0422fa10;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar12 = FUN_03254880(lVar16,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar12 = FUN_03254880(lVar16,0x10,0);
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        auVar18 = FUN_03253c44(uVar12,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar16 = FUN_0336d1dc(auVar18._0_8_,auVar18._8_8_,0);
        goto LAB_03365764;
      }
      uVar12 = *(undefined8 *)(param_2 + 0xb0);
      uVar8 = *(undefined4 *)(param_2 + 0xb8);
      uVar3 = *(undefined4 *)(param_2 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar9 = FUN_03370ebc(uVar12,uVar8,uVar3,&stack0x00000058,0);
      uVar12 = in_stack_00000058;
      uVar15 = in_stack_00000060;
joined_r0x03365448:
      if (iVar9 != 1) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        uVar15 = FUN_03374f50(plVar2,0);
        puVar14 = 
        Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
        ;
        goto LAB_03365904;
      }
      auVar5._8_8_ = uVar15;
      auVar5._0_8_ = uVar12;
      auVar18._8_8_ = uVar15;
      auVar18._0_8_ = uVar12;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
        auVar18 = auVar5;
      }
    }
    lVar16 = FUN_0336d1dc(auVar18._0_8_,auVar18._8_8_,0);
    goto LAB_03365764;
  case 8:
    if (bVar6) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar17 = (double)((uint)unaff_x21 & 0xffff) + -48.0;
    }
    else {
      lVar16 = FUN_03374f50(plVar2,0);
      if (bVar7) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar11 = FUN_03152abc(lVar16,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        puVar14 = PTR_DAT_0422fa10;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar12 = FUN_03254880(lVar16,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar12 = FUN_03254880(lVar16,0x10,0);
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar12 = FUN_032538c8(uVar12,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar16 = FUN_0336d2c4(uVar12,0);
        goto LAB_03365764;
      }
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_03295500(0);
      uVar11 = FUN_032ba038(lVar16,0xa7,uVar12,&stack0x00000020,0);
      dVar17 = in_stack_00000020;
      if ((uVar11 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        uVar15 = FUN_03374f50(plVar2,0);
        puVar14 = 
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
    lVar16 = FUN_0336d2c4(dVar17,0);
LAB_03365764:
    uVar12 = 8;
    goto LAB_0336576c;
  }
  uVar12 = 7;
LAB_0336576c:
  *(undefined4 *)(param_2 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  FUN_03359f08(param_2,uVar12,lVar16,0);
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000068) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


