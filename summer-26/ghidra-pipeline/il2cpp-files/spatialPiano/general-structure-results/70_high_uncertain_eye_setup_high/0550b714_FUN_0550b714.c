/*
FUNCTION_NAME: FUN_0550b714
ENTRY_POINT: 0550b714
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x0550bafc) */

void FUN_0550b714(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  
  if ((DAT_06bbf587 & 1) == 0) {
                    /* try { // try from 0550b748 to 0560b74b has its CatchHandler @ 0550bcf4 */
                    /* try { // try from 0550b74c to 0560b80b has its CatchHandler @ 0550aaa8 */
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(OVRPlugin_OVRP_1_55_1_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067ce4e8);
    FUN_02f08768(OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_57_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cae40);
    FUN_02f08768(OVRPlugin_OVRP_1_59_0_TypeInfo);
    DAT_06bbf587 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar10 = (long *)FUN_040bcacc(param_2,*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
  puVar9 = OVRPlugin_OVRP_1_58_0_TypeInfo;
  puVar8 = OVRPlugin_OVRP_1_57_0_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_56_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_55_1_TypeInfo;
  puVar5 = PTR_DAT_067ce4e8;
  puVar4 = PTR_DAT_067cae40;
  puVar3 = PTR_DAT_067c91b8;
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar16 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0550b86c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_0550b86c:
                    /* try { // try from 0550b86c to 0560b86f has its CatchHandler @ 0550bcf0 */
                    /* try { // try from 0550b870 to 0560b947 has its CatchHandler @ 0550aaa8 */
    uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar17 & 1) == 0) {
                    /* try { // try from 0550ba34 to 0560ba77 has its CatchHandler @ 0550bd04 */
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar16 = *plVar10;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 == 0) goto LAB_0550ba78;
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar16 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0550b8d0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar6,0);
LAB_0550b8d0:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar1 = (int)plVar12[2];
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054f7a24();
      if (*plVar12 != *(long *)puVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar12);
      }
      FUN_05502278(param_1,1,plVar12[3],plVar12[4],1);
    }
    else if (iVar1 == 1) {
                    /* try { // try from 0550b948 to 0560b98b has its CatchHandler @ 0550c13c */
      if (*plVar12 != *(long *)puVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar12);
      }
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054f7a24();
      lVar16 = plVar12[3];
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar16 = FUN_0550bbdc(lVar16);
      plVar15 = (long *)plVar12[3];
      if (plVar15 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                    /* try { // try from 0550b9a8 to 0560b9ab has its CatchHandler @ 0550bcec */
                    /* try { // try from 0550b9ac to 0560ba33 has its CatchHandler @ 0550aaa8 */
        if ((bVar2 <= *(byte *)(*plVar15 + 0x130)) &&
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar17 = FUN_050ef21c(lVar16,0);
          if ((uVar17 & 1) != 0) {
            uVar13 = FUN_054dbcdc(plVar12[4],0);
            uVar14 = thunk_FUN_02f6ef30(OVRPlugin_OVRP_1_5_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar13,uVar14);
          }
          plVar15 = (long *)plVar12[3];
        }
      }
      FUN_05509d28(param_1,0,plVar15,1);
      FUN_0550b714(param_1,plVar12[4]);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054f7a84();
    }
    else if (iVar1 == 2) {
      if (*plVar12 != *(long *)puVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar12);
      }
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054f7a24();
      FUN_05509d28(param_1,0,plVar12[3],1);
      FUN_0550b308(param_1,plVar12[4]);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054f7a84();
    }
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0550ba94;
    }
  }
LAB_0550ba78:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b0,0);
LAB_0550ba94:
                    /* try { // try from 0550ba94 to 0560ba97 has its CatchHandler @ 0550bcdc */
                    /* try { // try from 0550ba98 to 0560bcab has its CatchHandler @ 0550aaa8 */
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


