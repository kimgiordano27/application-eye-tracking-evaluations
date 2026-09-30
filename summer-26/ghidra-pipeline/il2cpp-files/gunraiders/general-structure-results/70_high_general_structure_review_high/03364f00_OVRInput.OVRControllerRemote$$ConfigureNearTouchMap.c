/*
FUNCTION_NAME: OVRInput.OVRControllerRemote$$ConfigureNearTouchMap
ENTRY_POINT: 03364f00
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void OVRInput_OVRControllerRemote__ConfigureNearTouchMap(void)

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
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  long lVar15;
  long unaff_x19;
  ulong unaff_x21;
  undefined4 unaff_w22;
  long unaff_x24;
  double dVar16;
  undefined1 auVar17 [16];
  double in_stack_00000010;
  long in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined *puVar13;
  
  uVar10 = FUN_03245d2c(unaff_x21 & 0xffffffff,0);
  puVar13 = 
  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__;
  if ((uVar10 & 1) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(unaff_x19 + 0xbc) == 1;
  }
  iVar9 = ((uint)unaff_x21 & 0xffff) - 0x30;
  plVar2 = (long *)(unaff_x19 + 0xb0);
  if ((iVar9 == 0) && (1 < *(int *)(unaff_x19 + 0xbc))) {
    lVar15 = *plVar2;
    if (lVar15 == 0) goto LAB_033657b0;
    uVar1 = *(int *)(unaff_x19 + 0xb8) + 1;
    if (*(uint *)(lVar15 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    sVar4 = *(short *)(lVar15 + (long)(int)uVar1 * 2 + 0x20);
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
      lVar15 = (unaff_x21 & 0xffff) - 0x30;
    }
    else {
      if (bVar7) {
        lVar15 = FUN_03374f50(plVar2,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = FUN_03152abc(lVar15,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03254880(lVar15,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03254880(lVar15,0x10,0);
        }
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_0336cfc0(uVar11,0);
        goto LAB_0336576c;
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar9 = FUN_03370d4c(uVar11,uVar8,uVar3,&stack0x00000018,0);
      lVar15 = in_stack_00000018;
      if (iVar9 == 2) {
        lVar15 = FUN_03374f50(plVar2,0);
        if (lVar15 == 0) {
LAB_033657b0:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)(lVar15 + 0x10) < 0x17d) {
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03295500(0);
          FUN_03365e1c(lVar15,uVar11);
          goto LAB_0336576c;
        }
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar11 = FUN_03295500(0);
        uVar14 = FUN_03374f50(plVar2,0);
        puVar13 = 
        Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
        ;
        goto LAB_03365904;
      }
      if (iVar9 != 1) {
        if (*(int *)(unaff_x19 + 0x5c) == 1) {
          uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
          uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
          uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          iVar9 = FUN_03370ebc(uVar11,uVar8,uVar3,&stack0x00000048,0);
          uVar11 = in_stack_00000048;
          uVar14 = in_stack_00000050;
          goto joined_r0x03365448;
        }
        uVar11 = FUN_03374f50(plVar2,0);
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar14 = FUN_03295500(0);
        uVar10 = FUN_032ba038(uVar11,0xa7,uVar14,&stack0x00000010,0);
        dVar16 = in_stack_00000010;
        if ((uVar10 & 1) != 0) goto LAB_03365748;
        goto LAB_03365304;
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    FUN_0336cfc0(lVar15,0);
    goto LAB_0336576c;
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
        lVar15 = FUN_03374f50(plVar2,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = FUN_03152abc(lVar15,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar8 = FUN_032546d8(lVar15,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar8 = FUN_032546d8(lVar15,0x10,0);
        }
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_0336cdb0(uVar8,0);
        goto LAB_0336576c;
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar9 = FUN_03370bd0(uVar11,uVar8,uVar3,(long)&stack0x00000028 + 4,0);
      if (iVar9 != 1) {
        if (iVar9 == 2) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar11 = FUN_03295500(0);
          uVar14 = FUN_03374f50(plVar2,0);
          puVar13 = 
          Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__
          ;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar11 = FUN_03295500(0);
          uVar14 = FUN_03374f50(plVar2,0);
          puVar13 = 
          Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
          ;
        }
        goto LAB_03365904;
      }
      iVar9 = in_stack_00000028._4_4_;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
    }
    FUN_0336cdb0(iVar9,0);
    goto LAB_0336576c;
  default:
    thunk_FUN_01c273e8(
                      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
                      );
    uVar11 = FUN_0335992c();
    goto LAB_03365928;
  case 4:
    lVar15 = FUN_03374f50(plVar2,0);
    if (bVar7) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar10 = FUN_03152abc(lVar15,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                            ,5,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar15,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar15,0x10,0);
      }
      goto LAB_0336576c;
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_03295500(0);
    uVar10 = FUN_032ba038(lVar15,0xa7,uVar11,&stack0x00000030,0);
    if ((uVar10 & 1) != 0) goto LAB_0336576c;
LAB_03365304:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar11 = FUN_03295500(0);
    uVar14 = FUN_03374f50(plVar2,0);
    puVar13 = 
    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_get_Current__
    ;
LAB_03365904:
    uVar12 = thunk_FUN_01c273e8(puVar13);
    FUN_0336f2b8(uVar12,uVar11,uVar14,0);
    uVar11 = FUN_03365da0();
LAB_03365928:
    uVar14 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar11,uVar14);
  case 5:
    break;
  case 8:
    if (bVar6) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar16 = (double)((uint)unaff_x21 & 0xffff) + -48.0;
    }
    else {
      lVar15 = FUN_03374f50(plVar2,0);
      if (bVar7) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = FUN_03152abc(lVar15,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                              ,5,0);
        puVar13 = PTR_DAT_0422fa10;
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03254880(lVar15,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03254880(lVar15,0x10,0);
        }
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032538c8(uVar11,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_0336d2c4(uVar11,0);
        goto LAB_0336576c;
      }
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_03295500(0);
      uVar10 = FUN_032ba038(lVar15,0xa7,uVar11,&stack0x00000020,0);
      dVar16 = in_stack_00000020;
      if ((uVar10 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar11 = FUN_03295500(0);
        uVar14 = FUN_03374f50(plVar2,0);
        puVar13 = 
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
    FUN_0336d2c4(dVar16,0);
    goto LAB_0336576c;
  }
  if (bVar6) {
    if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    auVar17 = FUN_03330114(unaff_x21 & 0xffffffff,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_0332bc20(&stack0x00000038,0x30,0);
    auVar17 = FUN_0333050c(auVar17._0_8_,auVar17._8_8_,in_stack_00000038,in_stack_00000040,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
  }
  else {
    if (bVar7) {
      lVar15 = FUN_03374f50(plVar2,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar10 = FUN_03152abc(lVar15,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                            ,5,0);
      puVar13 = PTR_DAT_0422fa10;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_03254880(lVar15,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_03254880(lVar15,0x10,0);
      }
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar17 = FUN_03253c44(uVar11,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336d1dc(auVar17._0_8_,auVar17._8_8_,0);
      goto LAB_0336576c;
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar9 = FUN_03370ebc(uVar11,uVar8,uVar3,&stack0x00000058,0);
    uVar11 = in_stack_00000058;
    uVar14 = in_stack_00000060;
joined_r0x03365448:
    if (iVar9 != 1) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar11 = FUN_03295500(0);
      uVar14 = FUN_03374f50(plVar2,0);
      puVar13 = 
      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
      ;
      goto LAB_03365904;
    }
    auVar5._8_8_ = uVar14;
    auVar5._0_8_ = uVar11;
    auVar17._8_8_ = uVar14;
    auVar17._0_8_ = uVar11;
    if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      auVar17 = auVar5;
    }
  }
  FUN_0336d1dc(auVar17._0_8_,auVar17._8_8_,0);
LAB_0336576c:
  *(undefined4 *)(unaff_x19 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  FUN_03359f08();
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000068) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


