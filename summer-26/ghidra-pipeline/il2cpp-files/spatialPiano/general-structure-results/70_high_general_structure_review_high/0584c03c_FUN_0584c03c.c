/*
FUNCTION_NAME: FUN_0584c03c
ENTRY_POINT: 0584c03c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0584c584) */

void FUN_0584c03c(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_06bc0fba & 1) == 0) {
                    /* try { // try from 0584c070 to 0594c07b has its CatchHandler @ 0584c600 */
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
                    /* try { // try from 0584c084 to 0594c087 has its CatchHandler @ 0584c668 */
                    /* try { // try from 0584c088 to 0594c1db has its CatchHandler @ 0584b600 */
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(System_Nullable<bool>_TypeInfo);
    FUN_02f08768(
                System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                );
    FUN_02f08768(System_Nullable<byte>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc0fba = 1;
  }
  puVar3 = PTR_DAT_067c9338;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x28) != 0)) {
    uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
    uVar15 = *(undefined8 *)System_Nullable<bool>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar15 = FUN_050e4454(uVar15,0);
    uVar7 = FUN_050ed374(uVar14,uVar15,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_0584c578;
      uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
      uVar15 = *(undefined8 *)System_Nullable<byte>_TypeInfo;
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_050e4454(uVar15,0);
      uVar7 = FUN_050ed374(uVar14,uVar15,0);
      if ((uVar7 & 1) == 0) {
        if (param_3 == (long *)0x0) goto LAB_0584c578;
        goto LAB_0584c1c4;
      }
    }
    plVar8 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
    if (plVar8 != (long *)0x0) {
      if ((param_3 != (long *)0x0) &&
         (lVar9 = thunk_FUN_02f45174(param_3,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
        uVar14 = thunk_FUN_02f52b60();
                    /* try { // try from 0584c594 to 0594c597 has its CatchHandler @ 0584c720 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0584c598 to 0594c59b has its CatchHandler @ 0584c71c */
        FUN_02f0888c(uVar14,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0584c58c to 0594c593 has its CatchHandler @ 0584c7a0 */
        FUN_02f089d0();
      }
      plVar8[4] = (long)param_3;
      param_3 = plVar8;
LAB_0584c1c4:
      lVar9 = *(long *)(puVar3 + 0xa0);
      bVar1 = *(byte *)(lVar9 + 0x130);
                    /* try { // try from 0584c1dc to 0594c203 has its CatchHandler @ 0584c670 */
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(param_3);
      }
      plVar8 = (long *)FUN_050fa88c(param_3,0);
      puVar6 = 
      System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo;
      puVar5 = System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo;
      puVar4 = PTR_DAT_067cbf00;
      puVar3 = PTR_DAT_067c91b8;
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *plVar8;
        lVar9 = *(long *)puVar3;
                    /* try { // try from 0584c240 to 0594c26b has its CatchHandler @ 0584c66c */
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0584c284;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar8,lVar9,0);
LAB_0584c284:
        uVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        puVar2 = PTR_DAT_067c91b0;
        if ((uVar7 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_02f45174(plVar8,*(undefined8 *)PTR_DAT_067c91b0);
                    /* try { // try from 0584c414 to 0594c43b has its CatchHandler @ 0584c620 */
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 == 0) goto LAB_0584c450;
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0584c438;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *plVar8;
        lVar9 = *(long *)puVar3;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    /* try { // try from 0584c2a8 to 0594c2b3 has its CatchHandler @ 0584c5fc */
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
                    /* try { // try from 0584c2bc to 0594c2bf has its CatchHandler @ 0584c618 */
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0584c2ec;
            }
                    /* try { // try from 0584c2c0 to 0594c413 has its CatchHandler @ 0584b600 */
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar8,lVar9,1);
LAB_0584c2ec:
        plVar11 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
        if (plVar11 == (long *)0x0) {
          uVar14 = thunk_FUN_02f6ef30(
                                     Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastSafeDivide_0000035E_PostfixBurstDelegate>_get_Value__
                                     );
          uVar15 = 0;
LAB_0584c4d4:
          uVar14 = FUN_04f65e2c(uVar14,uVar15,0);
                    /* try { // try from 0584c4e0 to 0594c4eb has its CatchHandler @ 0584c5f4 */
          thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
          uVar15 = thunk_FUN_02f45270();
                    /* try { // try from 0584c4f4 to 0594c4f7 has its CatchHandler @ 0584c60c */
                    /* try { // try from 0584c4f8 to 0594c58b has its CatchHandler @ 0584b600 */
          FUN_050d5404(uVar15,uVar14,0);
          uVar14 = thunk_FUN_02f6ef30(
                                     Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastSafeDivide_0000035F_PostfixBurstDelegate>_get_Value__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar15,uVar14);
        }
        lVar9 = *plVar11;
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
          uVar14 = thunk_FUN_02f6ef30(
                                     Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastSafeDivide_0000035E_PostfixBurstDelegate>_get_Value__
                                     );
          uVar15 = thunk_FUN_02f1863c(plVar11,0);
          goto LAB_0584c4d4;
        }
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
          (**(code **)(lVar9 + 0x3f8))
                    (plVar11,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar9 + 0x400));
        }
        else {
          uVar14 = (**(code **)(lVar9 + 0x1a8))(plVar11,*(undefined8 *)(lVar9 + 0x1b0));
          uVar15 = (**(code **)(*plVar11 + 0x358))(plVar11,*(undefined8 *)(*plVar11 + 0x360));
          uVar7 = FUN_0584e194(param_2,uVar14,uVar15);
          if ((uVar7 & 1) == 0) {
            uVar14 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
            uVar15 = (**(code **)(*plVar11 + 0x358))(plVar11,*(undefined8 *)(*plVar11 + 0x360));
            uVar14 = FUN_05845640(param_1,uVar14,uVar15,0);
            uVar15 = thunk_FUN_02f6ef30(
                                       Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastSafeDivide_0000035F_PostfixBurstDelegate>_get_Value__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar14,uVar15);
          }
          uVar14 = *(undefined8 *)puVar4;
          if (*(int *)(param_1 + 0x50) == 1) {
            FUN_05845df4(param_1,plVar11,uVar14,uVar14,0,1,0);
          }
          else {
            FUN_05845c40(param_1,plVar11,uVar14,uVar14,0,1,0);
          }
        }
      } while( true );
    }
  }
LAB_0584c578:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_0584c438:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0584c46c;
    }
  }
LAB_0584c450:
  puVar10 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar2,0);
LAB_0584c46c:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
                    /* try { // try from 0584c478 to 0594c4a3 has its CatchHandler @ 0584c61c */
  return;
}


