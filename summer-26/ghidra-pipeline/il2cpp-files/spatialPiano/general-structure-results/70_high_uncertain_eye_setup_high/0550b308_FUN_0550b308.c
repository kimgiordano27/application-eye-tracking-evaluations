/*
FUNCTION_NAME: FUN_0550b308
ENTRY_POINT: 0550b308
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0550b57c) */
/* WARNING: Removing unreachable block (ram,0x0550b678) */

void FUN_0550b308(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_06bbf585 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067ca818);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067ca820);
    FUN_02f08768(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_54_0_TypeInfo);
    DAT_06bbf585 = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_53_0_TypeInfo;
  if (param_2 == 0) {
LAB_0550b674:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar5 = FUN_040bc85c(param_2,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
  puVar3 = PTR_DAT_067ca818;
  puVar2 = PTR_DAT_067c9338;
  puVar1 = PTR_DAT_067c91b8;
  if (iVar5 < 1) {
    return;
  }
  iVar5 = 0;
LAB_0550b3c8:
  lVar7 = FUN_040bc8e8(param_2,iVar5,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
  if (((*(long *)(param_1 + 0x10) != 0) && (FUN_054f7a24(*(long *)(param_1 + 0x10)), lVar7 != 0)) &&
     (*(long *)(lVar7 + 0x18) != 0)) {
    plVar8 = (long *)FUN_040bcacc(*(long *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_067ca820);
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0550b470;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,0);
LAB_0550b470:
      uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar13 & 1) == 0) goto LAB_0550b4fc;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0550b4d4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar3,0);
LAB_0550b4d4:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      FUN_05500c08(param_1,uVar10);
    } while( true );
  }
  goto LAB_0550b674;
LAB_0550b4fc:
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0550b564;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067c91b0,0);
LAB_0550b564:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0550b674;
  plVar8 = *(long **)(lVar7 + 0x10);
  FUN_054fb764(*(long *)(param_1 + 0x10),plVar8);
  if (plVar8 == (long *)0x0) goto LAB_0550b674;
  uVar10 = (**(code **)(*plVar8 + 0x3d8))(plVar8,*(undefined8 *)(*plVar8 + 0x3e0));
  lVar7 = *(long *)(puVar2 + 0xe0);
  lVar12 = *(long *)(puVar2 + 0x20);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar7);
  }
  uVar11 = FUN_050e4454(lVar12 + 0x20,0);
  uVar13 = FUN_050edfb8(uVar10,uVar11,0);
  if ((uVar13 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0550b674;
    FUN_054f7a84();
  }
  iVar5 = iVar5 + 1;
  iVar6 = FUN_040bc85c(param_2,*(undefined8 *)puVar4);
  if (iVar6 <= iVar5) {
    return;
  }
  goto LAB_0550b3c8;
}


