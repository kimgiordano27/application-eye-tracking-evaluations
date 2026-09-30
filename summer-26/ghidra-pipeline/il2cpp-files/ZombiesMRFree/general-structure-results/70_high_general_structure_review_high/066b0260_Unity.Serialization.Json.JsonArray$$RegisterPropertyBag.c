/*
FUNCTION_NAME: Unity.Serialization.Json.JsonArray$$RegisterPropertyBag
ENTRY_POINT: 066b0260
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066b0354) */

void Unity_Serialization_Json_JsonArray__RegisterPropertyBag(long *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
    uVar3 = FUN_068f5db8(param_1,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0669a8e4(uVar3,0);
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_066b01f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_066b01f0:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_03010710();
      if (plVar4 == (long *)0x0) goto code_r0x066b032c;
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_066b0300;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_066b0250;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_066b0250:
    param_1 = (long *)(*(code *)*puVar2)();
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_066b031c;
    }
  }
LAB_066b0300:
  puVar2 = (undefined8 *)FUN_02feb5b8(plVar4,*unaff_x22,0);
LAB_066b031c:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
code_r0x066b032c:
  FUN_066b07b0();
  return;
}


