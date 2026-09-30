/*
FUNCTION_NAME: FUN_03727120
ENTRY_POINT: 03727120
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_8
*/


long FUN_03727120(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_04538a4e & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fb40);
    FUN_01c5d288(PTR_DAT_0422fb50);
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(Method_System_Reflection_CustomAttributeTypedArgument__ctor__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
                );
    FUN_01c5d288(Method_System_IO_FileStream_Init__);
    FUN_01c5d288(Method_System_IO_FileStream_Read__);
    FUN_01c5d288(Method_System_IO_FileStream_EndWrite__);
    FUN_01c5d288(System_MonoCustomAttrs_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(UnityEngine_Rendering_Universal_SharedDecalEntityManager_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_01c5d288(UnityEngine_Rendering_Volume___TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                );
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__);
    DAT_04538a4e = 1;
  }
  if (param_3 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)Method_System_IO_FileStream_EndWrite__ + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = FUN_03727810(uVar11,param_3);
    if (lVar4 != 0) {
      lVar4 = FUN_038c7e04(lVar4,param_2,0);
      return lVar4;
    }
    goto LAB_037277cc;
  }
  if (param_2 == (long *)0x0) goto LAB_037277cc;
  lVar4 = (**(code **)(*param_2 + 0x2a8))
                    (param_2,*(undefined8 *)
                              Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                     *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                     *(undefined8 *)(*param_2 + 0x2b0));
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) == 0)) {
    lVar5 = (**(code **)(*param_2 + 0x2a8))
                      (param_2,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,
                       *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__,
                       *(undefined8 *)(*param_2 + 0x2b0));
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) < 1)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      uVar7 = FUN_032e935c(uVar11,uVar12,0);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0372740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (**(code **)(*param_2 + 0x3d8))(param_2,*(undefined8 *)(*param_2 + 0x3e0));
        return lVar4;
      }
      goto LAB_03727410;
    }
    lVar6 = FUN_031551a8(lVar5,0x3a,0,0);
    if (lVar6 == 0) goto LAB_037277cc;
    if (*(int *)(lVar6 + 0x18) == 2) {
      uVar11 = (**(code **)(*param_2 + 0x388))
                         (param_2,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(*param_2 + 0x390));
      uVar7 = thunk_FUN_03152714(uVar11,*(undefined8 *)
                                         VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                                 ,0);
      if ((uVar7 & 1) != 0) {
        if (*(uint *)(lVar6 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar5 = *(long *)(lVar6 + 0x28);
      }
    }
    if (*(int *)(*(long *)
                  Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__ +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_036eee44(lVar5,0);
    bVar1 = true;
  }
  else {
LAB_03727410:
    bVar1 = false;
    uVar11 = 0;
  }
  uVar7 = thunk_FUN_03152714(lVar4,*(undefined8 *)UnityEngine_Rendering_Volume___TypeInfo,0);
  puVar2 = PTR_DAT_0422fb28;
  if ((uVar7 & 1) != 0) {
    uVar11 = (**(code **)(*param_2 + 0x3d8))(param_2,*(undefined8 *)(*param_2 + 0x3e0));
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
    }
    lVar4 = FUN_01c5d5a4(uVar11,*(undefined8 *)
                                 UnityEngine_Rendering_Universal_SharedDecalEntityManager_TypeInfo,
                         *(undefined8 *)Method_System_IO_FileStream_Read__);
    lVar5 = *param_2;
    goto LAB_03727780;
  }
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_032e935c(0,uVar11,0);
  if ((uVar7 & 1) != 0) {
    if (lVar4 == 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_037309d0(lVar4,0);
    }
  }
  uVar12 = *(undefined8 *)PTR_DAT_0422fb50;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar12 = FUN_032e04b8(uVar12,0);
  uVar7 = FUN_032e935c(uVar11,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_032e04b8(uVar12,0);
    uVar7 = FUN_032e935c(uVar11,uVar12,0);
    if ((uVar7 & 1) != 0) goto LAB_0372756c;
  }
  else {
LAB_0372756c:
    bVar1 = true;
  }
  uVar12 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar12 = FUN_032e04b8(uVar12,0);
  uVar7 = FUN_032e935c(uVar11,uVar12,0);
  if ((uVar7 & 1) != 0) {
    uVar11 = FUN_0368ca08(0);
    uVar12 = thunk_FUN_01c273e8(Method_System_IO_FileStream_Read__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar11,uVar12);
  }
  FUN_0369dd04(uVar11,0,0);
  if (bVar1) {
    uVar12 = *(undefined8 *)PTR_DAT_0422fbe0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_032e04b8(uVar12,0);
    uVar7 = FUN_032e935c(uVar11,uVar12,0);
    if ((((uVar7 & 1) == 0) ||
        (iVar3 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0)),
        iVar3 != 1)) ||
       (uVar7 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220)),
       (uVar7 & 1) == 0)) {
      plVar9 = (long *)(**(code **)(*param_2 + 0x3d8))(param_2,*(undefined8 *)(*param_2 + 0x3e0));
      uVar12 = *(undefined8 *)PTR_DAT_0422fb40;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      uVar7 = FUN_032ea0d4(uVar11,uVar12,0);
      if ((uVar7 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_037277cc;
        uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
        }
        lVar4 = FUN_032556a4(uVar11,0);
      }
      else {
        lVar4 = FUN_0373f1d4(plVar9,uVar11,0);
      }
    }
    else {
      lVar4 = **(long **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
    }
    lVar5 = *param_2;
LAB_03727780:
    (**(code **)(lVar5 + 0x328))(param_2,*(undefined8 *)(lVar5 + 0x330));
    return lVar4;
  }
  lVar4 = FUN_032fbc28(uVar11,1,0);
  puVar2 = Method_System_IO_FileStream_Init__;
  if (lVar4 != 0) {
    uVar11 = *(undefined8 *)Method_System_IO_FileStream_Init__;
    lVar5 = thunk_FUN_01c495e4(lVar4,uVar11);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar4,uVar11);
    }
    lVar5 = *(long *)puVar2;
    plVar9 = (long *)thunk_FUN_01c495e4(lVar4,lVar5);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar4,lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_037277a4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01c72498(plVar9,lVar5,1);
LAB_037277a4:
    (*(code *)*puVar8)(plVar9,param_2,puVar8[1]);
    return lVar4;
  }
LAB_037277cc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


