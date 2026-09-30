/*
FUNCTION_NAME: Unity.Mathematics.Random$$NextFloat3Direction
ENTRY_POINT: 06d70a04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Unity_Mathematics_Random__NextFloat3Direction(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  
  FUN_03642964(TagLib_Mpeg4_FileParser_TypeInfo);
  FUN_03642964(System_IO_FileLoadException_TypeInfo);
  FUN_03642964(TagLib_Asf_FilePropertiesObject_TypeInfo);
  FUN_03642964(PTR_DAT_07a4a528);
  FUN_03642964(System_IO_FileMode_TypeInfo);
  FUN_03642964(System_IO_FileStream_TypeInfo);
  FUN_03642964(System_IO_FileStreamAsyncResult_TypeInfo);
  FUN_03642964(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xaee) = 1;
  lVar2 = thunk_FUN_0367fe20(*unaff_x23);
  FUN_05e5ae34(lVar2,0);
  uVar3 = FUN_05c966c0(*unaff_x20,*unaff_x22,0);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = FUN_05c966c0(*unaff_x20,*(undefined8 *)System_IO_FileStream_TypeInfo,0),
     (uVar3 & 1) != 0)) {
    return 0;
  }
  uVar3 = FUN_05c97640(unaff_x20[6],0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar4 = FUN_06d6eccc(unaff_x20[6]);
  if (lVar4 == 0) {
    return 0;
  }
  uVar3 = FUN_05c97640();
  uVar7 = unaff_x19;
  if ((uVar3 & 1) != 0) {
    if ((*(uint *)(lVar4 + 0x28) & 1) == 0) {
      uVar7 = *(undefined8 *)System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
      if (((*(uint *)(lVar4 + 0x28) ^ 0xffffffff) & 0x44) != 0) {
        uVar7 = unaff_x19;
      }
    }
    else {
      uVar7 = *(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo;
    }
  }
  uVar3 = FUN_05c97640(unaff_x20[2],0);
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,5);
    uVar8 = *unaff_x20;
    if (*(int *)(*(long *)TagLib_Asf_FilePropertiesObject_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)TagLib_Asf_FilePropertiesObject_TypeInfo);
    }
    uVar8 = FUN_06d70854(uVar8,0);
    if (lVar6 == 0) goto LAB_06d70d5c;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_06d70d60:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20),uVar8);
    puVar1 = PTR_DAT_07a4a528;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_06d70d60;
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_07a4a528;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x28));
    uVar8 = FUN_06d70854(unaff_x20[2],0);
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06d70d60;
    *(undefined8 *)(lVar6 + 0x30) = uVar8;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x30),uVar8);
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_06d70d60;
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)puVar1;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x38));
    uVar8 = FUN_06d70854(unaff_x20[3],0);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_06d70d60;
    *(undefined8 *)(lVar6 + 0x40) = uVar8;
    thunk_FUN_036b7ad0();
    uVar8 = FUN_05c98834(lVar6,0);
  }
  else {
    uVar8 = *unaff_x20;
    if (*(int *)(*(long *)TagLib_Asf_FilePropertiesObject_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar8 = FUN_06d70854(uVar8,0);
    uVar5 = FUN_06d70854(unaff_x20[3],0);
    uVar8 = FUN_05c981c8(uVar8,*(undefined8 *)PTR_DAT_07a4a528,uVar5,0);
  }
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)TagLib_Asf_FilePropertiesObject_TypeInfo);
  FUN_05e5ae34(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x20) = lVar4;
    thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar4);
    *(undefined8 *)(lVar6 + 0x10) = uVar7;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x10),uVar7);
    *(undefined8 *)(lVar6 + 0x18) = *unaff_x20;
    thunk_FUN_036b7ad0();
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar6;
      thunk_FUN_036b7ad0((long *)(lVar2 + 0x10),lVar6);
      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)System_IO_FileNotFoundException_TypeInfo);
      FUN_0414d3cc(uVar5,lVar2,*(undefined8 *)TagLib_Mpeg4_FileParser_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_079fe1e0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_06cf4a5c(uVar5,uVar8,uVar7,0,0,0);
      return uVar8;
    }
  }
LAB_06d70d5c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


