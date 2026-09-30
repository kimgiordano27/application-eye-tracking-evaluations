/*
FUNCTION_NAME: OVRInput.OVRControllerRemote$$ConfigureAxis1DMap
ENTRY_POINT: 03364f20
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


/* WARNING: Removing unreachable block (ram,0x03365098) */
/* WARNING: Removing unreachable block (ram,0x033650ac) */
/* WARNING: Removing unreachable block (ram,0x033650b0) */
/* WARNING: Removing unreachable block (ram,0x03364fe0) */
/* WARNING: Removing unreachable block (ram,0x03364ff4) */
/* WARNING: Removing unreachable block (ram,0x03364ff8) */
/* WARNING: Removing unreachable block (ram,0x03365050) */
/* WARNING: Removing unreachable block (ram,0x03365054) */
/* WARNING: Removing unreachable block (ram,0x03364f6c) */
/* WARNING: Removing unreachable block (ram,0x03364f80) */
/* WARNING: Removing unreachable block (ram,0x03364f84) */
/* WARNING: Removing unreachable block (ram,0x03365064) */
/* WARNING: Removing unreachable block (ram,0x03365078) */
/* WARNING: Removing unreachable block (ram,0x0336507c) */

void OVRInput_OVRControllerRemote__ConfigureAxis1DMap(void)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  short unaff_w21;
  undefined4 unaff_w22;
  long unaff_x24;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined *puVar11;
  
  puVar11 = 
  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__;
  plVar2 = (long *)(unaff_x19 + 0xb0);
  if ((unaff_w21 == 0x30) && (1 < *(int *)(unaff_x19 + 0xbc))) {
    lVar13 = *plVar2;
    if (lVar13 == 0) goto LAB_033657b0;
    uVar1 = *(int *)(unaff_x19 + 0xb8) + 1;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    sVar4 = *(short *)(lVar13 + (long)(int)uVar1 * 2 + 0x20);
    bVar5 = false;
    if ((sVar4 != 0x2e) && (bVar5 = false, sVar4 != 0x65)) {
      bVar5 = sVar4 != 0x45;
    }
  }
  else {
    bVar5 = false;
  }
  switch(unaff_w22) {
  case 0:
  case 2:
    if (bVar5) {
      lVar13 = FUN_03374f50(plVar2,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar8 = FUN_03152abc(lVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                           ,5,0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03254880(lVar13,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03254880(lVar13,0x10,0);
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336cfc0(uVar9,0);
      goto LAB_0336576c;
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar6 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar7 = FUN_03370d4c(uVar9,uVar6,uVar3,&stack0x00000018,0);
    uVar9 = in_stack_00000018;
    if (iVar7 != 2) {
      if (iVar7 == 1) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_0336cfc0(uVar9,0);
        goto LAB_0336576c;
      }
      if (*(int *)(unaff_x19 + 0x5c) == 1) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
        uVar6 = *(undefined4 *)(unaff_x19 + 0xb8);
        uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iVar7 = FUN_03370ebc(uVar9,uVar6,uVar3,&stack0x00000048,0);
        uVar9 = in_stack_00000050;
        uVar12 = in_stack_00000048;
        if (iVar7 != 1) goto LAB_03365828;
        goto LAB_033656c8;
      }
      uVar9 = FUN_03374f50(plVar2,0);
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar12 = FUN_03295500(0);
      uVar8 = FUN_032ba038(uVar9,0xa7,uVar12,&stack0x00000010,0);
      uVar9 = in_stack_00000010;
      if ((uVar8 & 1) != 0) goto LAB_03365748;
      goto LAB_03365304;
    }
    lVar13 = FUN_03374f50(plVar2,0);
    if (lVar13 == 0) {
LAB_033657b0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(lVar13 + 0x10) < 0x17d) {
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_03295500(0);
      FUN_03365e1c(lVar13,uVar9);
      goto LAB_0336576c;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    uVar12 = FUN_03374f50(plVar2,0);
    puVar11 = 
    Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
    ;
    break;
  case 1:
    if (bVar5) {
      lVar13 = FUN_03374f50(plVar2,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar8 = FUN_03152abc(lVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                           ,5,0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar6 = FUN_032546d8(lVar13,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar6 = FUN_032546d8(lVar13,0x10,0);
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336cdb0(uVar6,0);
      goto LAB_0336576c;
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar6 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar7 = FUN_03370bd0(uVar9,uVar6,uVar3,(long)&stack0x00000028 + 4,0);
    if (iVar7 == 1) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336cdb0(in_stack_00000028._4_4_,0);
      goto LAB_0336576c;
    }
    if (iVar7 == 2) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar9 = FUN_03295500(0);
      uVar12 = FUN_03374f50(plVar2,0);
      puVar11 = 
      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__;
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar9 = FUN_03295500(0);
      uVar12 = FUN_03374f50(plVar2,0);
      puVar11 = 
      Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
      ;
    }
    break;
  default:
    thunk_FUN_01c273e8(
                      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
                      );
    uVar9 = FUN_0335992c();
    goto LAB_03365928;
  case 4:
    lVar13 = FUN_03374f50(plVar2,0);
    if (bVar5) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar8 = FUN_03152abc(lVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                           ,5,0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar13,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03254880(lVar13,0x10,0);
      }
      goto LAB_0336576c;
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_03295500(0);
    uVar8 = FUN_032ba038(lVar13,0xa7,uVar9,&stack0x00000030,0);
    if ((uVar8 & 1) != 0) goto LAB_0336576c;
LAB_03365304:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    uVar12 = FUN_03374f50(plVar2,0);
    puVar11 = 
    Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_get_Current__
    ;
    break;
  case 5:
    if (bVar5) {
      lVar13 = FUN_03374f50(plVar2,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar8 = FUN_03152abc(lVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                           ,5,0);
      puVar11 = PTR_DAT_0422fa10;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03254880(lVar13,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03254880(lVar13,0x10,0);
      }
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar14 = FUN_03253c44(uVar9,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336d1dc(auVar14._0_8_,auVar14._8_8_,0);
      goto LAB_0336576c;
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar6 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar7 = FUN_03370ebc(uVar9,uVar6,uVar3,&stack0x00000058,0);
    uVar9 = in_stack_00000060;
    uVar12 = in_stack_00000058;
    if (iVar7 == 1) {
LAB_033656c8:
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336d1dc(uVar12,uVar9,0);
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
LAB_03365828:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    uVar12 = FUN_03374f50(plVar2,0);
    puVar11 = 
    Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__;
    break;
  case 8:
    lVar13 = FUN_03374f50(plVar2,0);
    if (bVar5) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar8 = FUN_03152abc(lVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Flamethrower_FlamethrowerCachedDamage>_MoveNext__
                           ,5,0);
      puVar11 = PTR_DAT_0422fa10;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03254880(lVar13,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03254880(lVar13,0x10,0);
      }
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032538c8(uVar9,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336d2c4(uVar9,0);
      goto LAB_0336576c;
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_03295500(0);
    uVar8 = FUN_032ba038(lVar13,0xa7,uVar9,&stack0x00000020,0);
    uVar9 = in_stack_00000020;
    if ((uVar8 & 1) != 0) {
LAB_03365748:
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0336d2c4(uVar9,0);
      goto LAB_0336576c;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    uVar12 = FUN_03374f50(plVar2,0);
    puVar11 = 
    Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
    ;
  }
  uVar10 = thunk_FUN_01c273e8(puVar11);
  FUN_0336f2b8(uVar10,uVar9,uVar12,0);
  uVar9 = FUN_03365da0();
LAB_03365928:
  uVar12 = thunk_FUN_01c273e8(
                             Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar9,uVar12);
}


