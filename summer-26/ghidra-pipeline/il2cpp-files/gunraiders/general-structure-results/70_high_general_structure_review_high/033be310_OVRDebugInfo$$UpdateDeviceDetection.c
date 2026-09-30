/*
FUNCTION_NAME: OVRDebugInfo$$UpdateDeviceDetection
ENTRY_POINT: 033be310
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void OVRDebugInfo__UpdateDeviceDetection(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined1 auVar18 [16];
  undefined4 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  long in_stack_00000088;
  
  puVar6 = 
  Method_System_Collections_Generic_KeyValuePair<int,_SimpleTuple<Vector3,_Vector3,_List<int>>>_get_Value__
  ;
  puVar5 = Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__;
  puVar4 = UnityEngine_ISubsystemDescriptor_TypeInfo;
  puVar3 = PTR_DAT_04230e70;
  puVar2 = PTR_DAT_04230a80;
  puVar17 = PTR_DAT_0422f960;
  uStack0000000000000078 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  if (in_ZR) {
    uVar9 = 0;
    _uStack0000000000000078 = ZEXT816(0);
    goto LAB_033be3e4;
  }
  if (unaff_x19 == (long *)0x0) {
    uVar9 = 1;
    _uStack0000000000000078 = ZEXT816(0);
    goto LAB_033be3e4;
  }
  if (unaff_x20 == (long *)0x0) {
    uVar9 = 0xffffffff;
    _uStack0000000000000078 = ZEXT816(0);
    goto LAB_033be3e4;
  }
  switch(unaff_w21) {
  case 5:
  case 8:
  case 0xd:
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    uVar13 = FUN_03253ffc();
    FUN_03295500(0);
    uVar14 = FUN_03253ffc();
    uVar9 = FUN_03151ce8(uVar13,uVar14,0);
    goto LAB_033be3e4;
  case 6:
    if (*unaff_x20 == *(long *)PTR_DAT_04230358) {
LAB_033be884:
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      uVar9 = FUN_033bdf08(*puVar11,puVar11[1]);
      goto LAB_033be3e4;
    }
    if (*unaff_x19 == *(long *)PTR_DAT_04230358) {
LAB_033bea00:
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      iVar8 = FUN_033bdf08(*puVar11,puVar11[1]);
      uVar9 = (ulong)(uint)-iVar8;
      goto LAB_033be3e4;
    }
    if (((*unaff_x20 == *(long *)PTR_DAT_04230670) || (*unaff_x19 == *(long *)PTR_DAT_04230670)) ||
       ((*unaff_x20 == *(long *)PTR_DAT_04230108 || (*unaff_x19 == *(long *)PTR_DAT_04230108)))) {
LAB_033be8a0:
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      _uStack0000000000000078 = FUN_03253964();
      FUN_03295500(0);
      auVar18 = FUN_03253964();
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_0332d258(&stack0x00000078,auVar18._0_8_,auVar18._8_8_,0);
      goto LAB_033be3e4;
    }
    if (((*unaff_x20 != *(long *)PTR_DAT_042304e0) && (*unaff_x19 != *(long *)PTR_DAT_042304e0)) &&
       ((*unaff_x20 != *(long *)PTR_DAT_042304a8 && (*unaff_x19 != *(long *)PTR_DAT_042304a8)))) {
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03295500(0);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
      }
      in_stack_00000040 = FUN_03252aa8();
      FUN_03295500(0);
      uVar13 = FUN_03252aa8();
      uVar9 = FUN_032d0360(&stack0x00000040,uVar13,0);
      goto LAB_033be3e4;
    }
    goto LAB_033be6c8;
  case 7:
    if (*unaff_x20 == *(long *)PTR_DAT_04230358) goto LAB_033be884;
    if (*unaff_x19 == *(long *)PTR_DAT_04230358) goto LAB_033bea00;
    if ((((*unaff_x20 == *(long *)PTR_DAT_04230670) || (*unaff_x19 == *(long *)PTR_DAT_04230670)) ||
        (*unaff_x20 == *(long *)PTR_DAT_04230108)) || (*unaff_x19 == *(long *)PTR_DAT_04230108))
    goto LAB_033be8a0;
LAB_033be6c8:
    uVar9 = FUN_033bec84();
    goto LAB_033be3e4;
  case 9:
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    in_stack_00000070._4_1_ = FUN_0325057c();
    in_stack_00000070._4_1_ = in_stack_00000070._4_1_ & 1;
    FUN_03295500(0);
    uVar7 = FUN_0325057c();
    if (*(int *)(*(long *)PTR_DAT_0422fa08 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa08);
    }
    uVar9 = FUN_0324996c((long)&stack0x00000070 + 4,uVar7 & 1,0);
    goto LAB_033be3e4;
  default:
    uVar13 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_KeyValuePair<int,_SimpleTuple<Vector3,_Vector3,_List<int>>>_get_Value__
                               );
    uVar13 = thunk_FUN_01c49334(uVar13,&stack0x0000000c);
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar14 = FUN_03295500(0);
    in_stack_00000008 = unaff_w21;
    uVar15 = thunk_FUN_01c273e8(puVar6);
    uVar15 = thunk_FUN_01c49334(uVar15,&stack0x00000008);
    uVar16 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_KeyValuePair<XmlQualifiedName,_SchemaElementDecl>_get_Value__
                               );
    uVar14 = FUN_0336f2b8(uVar16,uVar14,uVar15,0);
    uVar15 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_KeyValuePair<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Key__
                               );
    uVar13 = FUN_03373998(uVar15,uVar13,uVar14,0);
    goto LAB_033bec68;
  case 0xc:
    if (*unaff_x20 == *(long *)PTR_DAT_0422f960) {
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      puVar2 = UnityEngine_ISubsystemDescriptor_TypeInfo;
      in_stack_00000068 = *puVar11;
      if (*unaff_x19 == *(long *)UnityEngine_ISubsystemDescriptor_TypeInfo) {
        puVar11 = (undefined8 *)thunk_FUN_01c49834();
        uStack0000000000000038 = puVar11[1];
        uStack0000000000000030 = *puVar11;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_032b65f8(&stack0x00000030,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
        }
        uVar13 = FUN_03253e3c();
      }
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032b2484(&stack0x00000068,uVar13,0);
    }
    else {
      if (*(long *)(*unaff_x20 + 0x40) !=
          *(long *)(*(long *)UnityEngine_ISubsystemDescriptor_TypeInfo + 0x40)) {
LAB_033beb2c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      uStack0000000000000028 = puVar11[1];
      uStack0000000000000020 = *puVar11;
      if (*unaff_x19 == *(long *)puVar4) {
        puVar11 = (undefined8 *)thunk_FUN_01c49834();
        uStack0000000000000018 = puVar11[1];
        uStack0000000000000010 = *puVar11;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
        }
        uVar13 = FUN_03253e3c();
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
        }
        FUN_032b5ff4(&stack0x00000010,uVar13,0);
      }
      uVar14 = uStack0000000000000018;
      uVar13 = uStack0000000000000010;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032b7034(&stack0x00000020,uVar13,uVar14,0);
    }
LAB_033be3e4:
    if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  case 0xe:
    lVar10 = thunk_FUN_01c495e4();
    if (lVar10 != 0) {
      uVar13 = thunk_FUN_01c495e4();
      uVar9 = FUN_0337e1c0(uVar13,lVar10,0);
      goto LAB_033be3e4;
    }
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar13 = thunk_FUN_01c496e0();
    puVar17 = 
    Method_System_Collections_Generic_KeyValuePair<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_get_Value__
    ;
    break;
  case 0xf:
    if (*unaff_x19 ==
        *(long *)Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__) {
      if (*(long *)(*unaff_x20 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__ +
                   0x40)) goto LAB_033beb2c;
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      in_stack_00000058 = puVar11[1];
      in_stack_00000050 = *puVar11;
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
LAB_033beb34:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      uVar9 = FUN_032cc414(&stack0x00000050,*puVar11,puVar11[1],0);
      goto LAB_033be3e4;
    }
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar13 = thunk_FUN_01c496e0();
    puVar17 = 
    Method_System_Collections_Generic_KeyValuePair<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Value__
    ;
    break;
  case 0x10:
    lVar10 = *(long *)PTR_DAT_04230e70;
    if (*(byte *)(*unaff_x19 + 0x130) < *(byte *)(lVar10 + 0x130)) {
      unaff_x19 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
             lVar10) {
      unaff_x19 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_038f99b4(unaff_x19,0,0);
    if ((uVar9 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
      goto LAB_033beb2c;
      plVar12 = (long *)FUN_027e13e8(*(undefined8 *)
                                      Method_System_Collections_Generic_KeyValuePair<XmlQualifiedName,_SchemaElementDecl>_get_Key__
                                    );
      uVar13 = (**(code **)(*unaff_x20 + 0x168))();
      if ((unaff_x19 == (long *)0x0) ||
         (uVar14 = (**(code **)(*unaff_x19 + 0x168))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x170)),
         plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar9 = (**(code **)(*plVar12 + 0x198))
                        (plVar12,uVar13,uVar14,*(undefined8 *)(*plVar12 + 0x1a0));
      goto LAB_033be3e4;
    }
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar13 = thunk_FUN_01c496e0();
    puVar17 = 
    Method_System_Collections_Generic_KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_get_Key__
    ;
    break;
  case 0x11:
    if (*unaff_x19 == *(long *)PTR_DAT_04230a80) {
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)PTR_DAT_04230a80 + 0x40))
      goto LAB_033beb2c;
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      in_stack_00000048 = *puVar11;
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_033beb34;
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      uVar13 = *puVar11;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032e84e4(&stack0x00000048,uVar13,0);
      goto LAB_033be3e4;
    }
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar13 = thunk_FUN_01c496e0();
    puVar17 = 
    Method_System_Collections_Generic_Dictionary<ProBuilderMesh,_HashSet<int>>_GetEnumerator__;
  }
  uVar14 = thunk_FUN_01c273e8(puVar17);
  FUN_032467a0(uVar13,uVar14,0);
LAB_033bec68:
  uVar14 = thunk_FUN_01c273e8(
                             Method_System_Collections_Generic_KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_get_Value__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar13,uVar14);
}


