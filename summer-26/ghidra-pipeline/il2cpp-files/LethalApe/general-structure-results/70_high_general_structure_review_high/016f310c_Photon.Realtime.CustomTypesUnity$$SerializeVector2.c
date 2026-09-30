/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 016f310c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__SerializeVector2(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *plVar12;
  
  iVar4 = (*(code *)*param_1)();
  if (iVar4 < 1) {
    return;
  }
  plVar5 = *(long **)(unaff_x19 + 0x28);
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    bVar1 = *(byte *)(*(long *)PTR_DAT_02bbd6c8 + 300);
    if ((bVar1 <= *(byte *)(lVar8 + 300)) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_02bbd6c8)) {
      (**(code **)(lVar8 + 0x3b8))(plVar5,unaff_w20);
LAB_016f3330:
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
  }
  lVar8 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_02bd6ab0) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_016f31c4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0099eb60();
LAB_016f31c4:
  plVar5 = (long *)(*(code *)*puVar6)();
  puVar3 = PTR_DAT_02bfc6e8;
  puVar2 = PTR_DAT_02bcb4e8;
  if (plVar5 != (long *)0x0) {
    do {
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_016f3234;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0099eb60(plVar5,lVar8,0);
LAB_016f3234:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) goto LAB_016f3330;
      lVar9 = *plVar5;
      plVar12 = *(long **)(unaff_x19 + 0x28);
      lVar8 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_016f3298;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0099eb60(plVar5,lVar8,1);
LAB_016f3298:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar12 == (long *)0x0) break;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_016f3300;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0099eb60(plVar12,*(long *)puVar2,8);
LAB_016f3300:
      (*(code *)*puVar6)(plVar12,unaff_w20,uVar7,puVar6[1]);
      unaff_w20 = unaff_w20 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


