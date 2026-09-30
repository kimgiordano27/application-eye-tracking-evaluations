/*
FUNCTION_NAME: FUN_05c69988
ENTRY_POINT: 05c69988
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c69c4c) */

void FUN_05c69988(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  
  if ((DAT_06b82410 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_System_Collections_Generic_List<DecalDrawCallChunk>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<DecalDrawCallChunk>_GetEnumerator__);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(Method_System_Collections_Generic_List<BaseRaycaster>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<BaseRaycaster>_Contains__);
    DAT_06b82410 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_System_Collections_Generic_List<DecalDrawCallChunk>_Clear__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05c69a5c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02d9a5d4(param_2,*(long *)
                                 Method_System_Collections_Generic_List<DecalDrawCallChunk>_Clear__,
                        0);
LAB_05c69a5c:
  puVar1 = PTR_DAT_0675f3d0;
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  puVar5 = Method_System_Collections_Generic_List<DecalDrawCallChunk>_GetEnumerator__;
  puVar4 = Method_System_Collections_Generic_List<BaseRaycaster>_Contains__;
  puVar3 = Method_System_Collections_Generic_List<BaseRaycaster>_Add__;
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto Unity_VisualScripting_FullSerializer_fsData__get_AsDictionary;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
Unity_VisualScripting_FullSerializer_fsData__get_AsDictionary:
    uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_05c69bf8;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05c69b40;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar5,0);
LAB_05c69b40:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *param_1;
    uVar12 = *(undefined8 *)puVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_05c69ba8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(param_1,*(long *)puVar3,9);
LAB_05c69ba8:
    (*(code *)*puVar6)(param_1,uVar8,uVar12,puVar6[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05c69c14;
    }
  }
LAB_05c69bf8:
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_05c69c14:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


