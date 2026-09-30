/*
FUNCTION_NAME: Unity.Serialization.Json.JsonValidator$$Dispose
ENTRY_POINT: 066b2e18
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066b3090) */

void Unity_Serialization_Json_JsonValidator__Dispose(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  puVar6 = System_Collections_Generic_List<Pose>_TypeInfo;
  puVar5 = PTR_DAT_06f70b38;
  puVar4 = PTR_DAT_06f6de60;
  puVar3 = PTR_DAT_06f6d618;
  do {
    lVar10 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_066b2e8c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_066b2e8c:
    uVar11 = (*(code *)*puVar7)();
    if ((uVar11 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_03010710();
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_066b3028;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_066b2eec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_066b2eec:
    plVar8 = (long *)(*(code *)*puVar7)();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar8);
    }
    lVar10 = FUN_068f5db8(plVar8,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar11 = FUN_068f8bc4(lVar10,0);
    if ((uVar11 & 1) != 0) {
      uVar9 = FUN_03bbe5d0(plVar8,*(undefined8 *)puVar6);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar11 = FUN_068f8810(uVar9,0,0);
      if ((uVar11 & 1) != 0) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar10 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar7 = uVar9;
          thunk_FUN_03048534(puVar7,uVar9);
        }
        else {
          FUN_044302e8();
        }
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *unaff_x22) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_066b3044;
    }
  }
LAB_066b3028:
  puVar7 = (undefined8 *)FUN_02feb5b8(plVar8,*unaff_x22,0);
LAB_066b3044:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


