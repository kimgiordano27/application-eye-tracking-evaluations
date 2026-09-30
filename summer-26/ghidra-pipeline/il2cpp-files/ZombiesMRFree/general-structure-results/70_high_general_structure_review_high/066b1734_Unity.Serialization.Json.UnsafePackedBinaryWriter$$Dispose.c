/*
FUNCTION_NAME: Unity.Serialization.Json.UnsafePackedBinaryWriter$$Dispose
ENTRY_POINT: 066b1734
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3
*/


void Unity_Serialization_Json_UnsafePackedBinaryWriter__Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  FUN_02fe925c(System_Collections_Generic_List<OutRec>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<OVRSceneRoom>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xfee) = 1;
  puVar3 = System_Collections_Generic_List<OVRSceneRoom>_TypeInfo;
  lVar7 = *(long *)(unaff_x19 + 0x40);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 <= unaff_w21) {
      unaff_w21 = iVar1 + -1;
    }
    lVar4 = *(long *)System_Collections_Generic_List<OVRSceneRoom>_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = System_Collections_Generic_List<Oid>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar4 + 0xb8);
      lVar8 = thunk_FUN_0301080c(*(undefined8 *)
                                  System_Collections_Generic_List<ObjectFogController>_TypeInfo);
      FUN_051110bc(lVar8,uVar9,*(undefined8 *)System_Collections_Generic_List<OutRec>_TypeInfo,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar5 = lVar8;
      thunk_FUN_03048534(plVar5,lVar8);
    }
    FUN_04430c2c(lVar7,lVar8,*(undefined8 *)puVar2);
    puVar3 = System_Collections_Generic_List<NavMeshBuildMarkup>_TypeInfo;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      lVar7 = FUN_04430018(*(long *)(unaff_x19 + 0x40),unaff_w21,
                           *(undefined8 *)
                            System_Collections_Generic_List<NavMeshBuildMarkup>_TypeInfo);
      if ((lVar7 != 0) && (lVar7 = FUN_068f5db8(lVar7,0), puVar2 = PTR_DAT_06f6d618, lVar7 != 0)) {
        FUN_068f8b44(lVar7,1,0);
        *(int *)(unaff_x19 + 0x48) = unaff_w21;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar6 = FUN_068f9b78();
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x40) == 0) ||
             (lVar7 = FUN_04430018(*(long *)(unaff_x19 + 0x40),unaff_w21,*(undefined8 *)puVar3),
             lVar7 == 0)) goto LAB_066b18cc;
          FUN_066b1a2c();
        }
        FUN_066b1a80();
        return;
      }
    }
  }
LAB_066b18cc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


