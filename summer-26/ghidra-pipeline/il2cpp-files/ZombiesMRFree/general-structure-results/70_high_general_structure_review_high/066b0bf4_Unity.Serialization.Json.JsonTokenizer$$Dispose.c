/*
FUNCTION_NAME: Unity.Serialization.Json.JsonTokenizer$$Dispose
ENTRY_POINT: 066b0bf4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066b0fec) */
/* WARNING: Removing unreachable block (ram,0x066b0ed8) */
/* WARNING: Removing unreachable block (ram,0x066b0ff8) */
/* WARNING: Removing unreachable block (ram,0x066b0ee0) */
/* WARNING: Removing unreachable block (ram,0x066b0ff4) */
/* WARNING: Removing unreachable block (ram,0x066b0ef8) */
/* WARNING: Removing unreachable block (ram,0x066b0f0c) */

void Unity_Serialization_Json_JsonTokenizer__Dispose(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  long lVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x25;
  undefined8 uVar13;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x066b0bf4:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_066b0be8;
LAB_066b0c00:
  puVar3 = (undefined8 *)FUN_02feb5b8();
  do {
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_066b0f7c;
      lVar6 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_066b0f54;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_066b0c78;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_066b0c78:
    lVar6 = (*(code *)*puVar3)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar4 = FUN_06666998(lVar6,0);
    if ((uVar4 & 1) == 0) {
      lVar7 = *unaff_x26;
      uVar11 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar7);
        lVar7 = *unaff_x26;
      }
      lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(lVar7);
          lVar7 = *unaff_x26;
        }
        uVar13 = **(undefined8 **)(lVar7 + 0xb8);
        lVar12 = thunk_FUN_0301080c(*unaff_x27);
        FUN_057fae58(lVar12,uVar13,
                     *(undefined8 *)System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo
                     ,0);
        plVar5 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
        *plVar5 = lVar12;
        thunk_FUN_03048534(plVar5,lVar12);
        unaff_x25 = (undefined8 *)System_Collections_Generic_List<NavMeshModifierVolume>_TypeInfo;
      }
      iVar2 = FUN_03c3a0c8(uVar11,lVar12,*unaff_x25);
      if (iVar2 != 0) {
        uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
        uVar11 = FUN_068f5d7c();
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar7 = FUN_03d29810(uVar13,uVar11,0,
                             *(undefined8 *)System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo
                            );
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar7 = FUN_068f5db8(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_068fc96c(lVar7,*(undefined8 *)(lVar6 + 0x18),0);
        lVar12 = FUN_03c73394(lVar7,*(undefined8 *)PTR_DAT_06f766c8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06903590(lVar12,0);
        FUN_06903f44(lVar12,1,0);
        lVar12 = FUN_03c73394(lVar7,*(undefined8 *)
                                     System_Collections_Generic_List<OVRAnchor>_TypeInfo);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_066b11cc(lVar12,lVar6);
        *(long *)(lVar12 + 0x38) = unaff_x19;
        thunk_FUN_03048534();
        lVar6 = *(long *)(unaff_x19 + 0x40);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar9 = *(long *)System_Collections_Generic_List<OVRBoneCapsule>_TypeInfo;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar12;
          thunk_FUN_03048534(plVar5,lVar12);
        }
        else {
          FUN_044302e8(lVar6,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        lVar6 = FUN_03c73394(lVar7,*(undefined8 *)System_Collections_Generic_List<Node>_TypeInfo);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_066b1214();
        uVar4 = FUN_068f8810(0,0,0);
        if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
      }
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x28;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_066b0c00;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_066b0be8:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x066b0bf4;
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_066b0f70;
    }
  }
LAB_066b0f54:
  puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_066b0f70:
  (*(code *)*puVar3)();
LAB_066b0f7c:
  Unity_Serialization_Json_NodeParser__Seek();
  return;
}


