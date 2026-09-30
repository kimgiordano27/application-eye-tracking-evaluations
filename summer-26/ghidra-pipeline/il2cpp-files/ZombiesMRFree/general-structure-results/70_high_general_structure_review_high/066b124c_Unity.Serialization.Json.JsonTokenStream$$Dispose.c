/*
FUNCTION_NAME: Unity.Serialization.Json.JsonTokenStream$$Dispose
ENTRY_POINT: 066b124c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Unity_Serialization_Json_JsonTokenStream__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long lVar14;
  long *unaff_x22;
  int iVar15;
  long *plVar16;
  long *plVar17;
  long *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x668));
  FUN_02fe925c(System_Collections_Generic_List<OVRSpaceUser>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<Node>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<OVRSpatialAnchor>_TypeInfo);
  FUN_02fe925c(System_Func<string,_float,_float>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo);
  FUN_02fe925c(PTR_DAT_06f6d618);
  FUN_02fe925c(System_Func<bool,_bool,_bool,_float>_TypeInfo);
  FUN_02fe925c(System_Func<Node,_bool>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<object>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<Object>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xfec) = 1;
  puVar4 = System_Collections_Generic_List<OVRSpaceUser>_TypeInfo;
  puVar3 = System_Func<bool,_bool,_bool,_float>_TypeInfo;
  puVar2 = System_Func<string,_float,_float>_TypeInfo;
  puVar1 = System_Func<Node,_bool>_TypeInfo;
  in_stack_00000028 = 0;
  if (unaff_x22 == (long *)0x0) {
LAB_066b16c8:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  iVar15 = 0;
  plVar16 = (long *)0x0;
  plVar17 = (long *)0x0;
LAB_066b130c:
  lVar11 = *unaff_x22;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_066b1358;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_02feb5b8();
LAB_066b1358:
  lVar11 = (*(code *)*puVar6)();
  if (lVar11 == 0) goto LAB_066b16c8;
  iVar5 = FUN_04920cf4(lVar11,*(undefined8 *)puVar3);
  if (iVar5 <= iVar15) {
    return;
  }
  lVar11 = *unaff_x22;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_066b13c4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_02feb5b8();
LAB_066b13c4:
  lVar11 = (*(code *)*puVar6)();
  if ((lVar11 == 0) || (lVar11 = FUN_04920adc(lVar11,iVar15,*(undefined8 *)puVar1), lVar11 == 0))
  goto LAB_066b16c8;
  uVar12 = FUN_066659a0(lVar11,0);
  plVar8 = plVar17;
  if (((uVar12 & 1) == 0) && (uVar12 = FUN_06665454(lVar11,0), (uVar12 & 1) == 0)) {
    lVar14 = *(long *)(in_stack_00000020 + 0x28);
    uVar7 = thunk_FUN_02fe6234(lVar11,0);
    if (lVar14 == 0) goto LAB_066b16c8;
    uVar12 = FUN_052be160(lVar14,uVar7,&stack0x00000028,*(undefined8 *)puVar4);
    uVar7 = in_stack_00000028;
    if ((uVar12 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_02fe6234(lVar11,0);
      plVar8 = plVar16;
      if (plVar9 != (long *)0x0) {
        plVar8 = plVar9;
      }
      uVar7 = *(undefined8 *)System_Collections_Generic_List<object>_TypeInfo;
      plVar16 = plVar8;
      if (plVar9 == (long *)0x0) goto LAB_066b1530;
      if (plVar8 == (long *)0x0) goto LAB_066b16c8;
      lVar11 = *plVar8;
LAB_066b1520:
      uVar10 = (**(code **)(lVar11 + 0x168))(plVar8,*(undefined8 *)(lVar11 + 0x170));
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar14 = FUN_03d29810(uVar7,in_stack_00000018,0,
                            *(undefined8 *)System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo)
      ;
      if ((lVar14 == 0) || (lVar14 = FUN_068f5db8(lVar14,0), lVar14 == 0)) goto LAB_066b16c8;
      FUN_068fc96c(lVar14,*(undefined8 *)(lVar11 + 0x28),0);
      plVar8 = (long *)FUN_03c73394(lVar14,*(undefined8 *)
                                            System_Collections_Generic_List<OVRSpatialAnchor>_TypeInfo
                                   );
      uVar12 = FUN_068f9b78(plVar8,0,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = System_Convert__ToDouble(*(undefined8 *)(in_stack_00000020 + 0x58),0);
        if ((uVar12 & 1) == 0) {
          if (*(long *)(lVar11 + 0x38) == 0) goto LAB_066b16c8;
          uVar12 = FUN_05971348(*(long *)(lVar11 + 0x38),*(undefined8 *)(in_stack_00000020 + 0x58),0
                               );
          if ((uVar12 & 1) != 0) {
            *in_stack_00000000 = (long)plVar8;
            thunk_FUN_03048534(in_stack_00000000,plVar8);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar12 = FUN_068f8810(plVar17,0,0);
        if ((uVar12 & 1) != 0) {
          if (plVar17 == (long *)0x0) goto LAB_066b16c8;
          plVar17[10] = (long)plVar8;
          thunk_FUN_03048534(plVar17 + 10,plVar8);
        }
        if (plVar8 == (long *)0x0) goto LAB_066b16c8;
        plVar8[9] = (long)plVar17;
        thunk_FUN_03048534(plVar8 + 9,plVar17);
        plVar8[8] = in_stack_00000008;
        thunk_FUN_03048534();
        (**(code **)(*plVar8 + 0x188))(plVar8,lVar11,*(undefined8 *)(*plVar8 + 400));
        lVar14 = FUN_03c73394(lVar14,*(undefined8 *)System_Collections_Generic_List<Node>_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
        }
        uVar12 = FUN_068f8810(lVar14,0,0);
        if (((uVar12 & 1) != 0) &&
           (lVar11 = thunk_FUN_03010710(lVar11,*(undefined8 *)puVar2), lVar11 != 0)) {
          if (lVar14 != 0) {
            FUN_066b1214(in_stack_00000020,lVar11,*(undefined8 *)(lVar14 + 0x20),plVar8,
                         in_stack_00000000);
            goto LAB_066b16a0;
          }
          goto LAB_066b16c8;
        }
        goto LAB_066b16a0;
      }
      plVar8 = (long *)thunk_FUN_02fe6234(lVar11,0);
      uVar7 = *(undefined8 *)System_Collections_Generic_List<Object>_TypeInfo;
      if (plVar8 != (long *)0x0) {
        if (plVar8 != (long *)0x0) {
          lVar11 = *plVar8;
          goto LAB_066b1520;
        }
        goto LAB_066b16c8;
      }
LAB_066b1530:
      uVar10 = 0;
    }
    uVar7 = FUN_059687dc(uVar7,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
    }
    FUN_068bdec0(uVar7,0);
    plVar8 = plVar17;
  }
LAB_066b16a0:
  iVar15 = iVar15 + 1;
  plVar17 = plVar8;
  goto LAB_066b130c;
}


