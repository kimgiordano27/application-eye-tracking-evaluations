/*
FUNCTION_NAME: FUN_0550171c
ENTRY_POINT: 0550171c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05501a0c) */
/* WARNING: Removing unreachable block (ram,0x05501aec) */

long FUN_0550171c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  
  if ((DAT_06bbf556 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067ce4e8);
    FUN_02f08768(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_02f08768(UnityEngine_InputForUI_InputManagerProvider_Input_TypeInfo);
    FUN_02f08768(PTR_DAT_067ce4c8);
    FUN_02f08768(OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo);
    DAT_06bbf556 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) || (uVar7 = FUN_054f6fe4(), param_2 == 0)) goto LAB_05501aa8;
  lVar11 = FUN_054d66a8(param_2,0);
  puVar2 = PTR_DAT_067ce4c8;
  if (lVar11 == 0) goto LAB_05501aa8;
  iVar8 = FUN_040bc85c(lVar11,*(undefined8 *)PTR_DAT_067ce4c8);
  puVar6 = OVRPlugin_OVRP_0_1_1_TypeInfo;
  puVar5 = UnityEngine_InputForUI_InputManagerProvider_Input_TypeInfo;
  puVar4 = UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo;
  puVar3 = PTR_DAT_067ce4e8;
  puVar1 = PTR_DAT_067c91b8;
  if (iVar8 != 0) {
    uVar9 = FUN_040bc85c(lVar11,*(undefined8 *)puVar2);
    lVar12 = FUN_02f0880c(*(undefined8 *)puVar6,uVar9);
    plVar13 = (long *)FUN_040bcacc(lVar11,*(undefined8 *)puVar5);
    uVar19 = 0;
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar11 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_055018b0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar1,0);
LAB_055018b0:
      uVar17 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar17 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto LAB_05501a34;
        lVar11 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar17 == 0) goto LAB_055019d8;
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_055019c0;
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar11 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05501914;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar4,0);
LAB_05501914:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      auVar20 = FUN_05512e44(*(long *)(param_1 + 0x18),plVar15,uVar7,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      *(undefined1 (*) [16])(lVar12 + (long)(int)uVar19 * 0x10 + 0x20) = auVar20;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar11 = *(long *)(param_1 + 0x10);
      uVar16 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar19 = uVar19 + 1;
      FUN_054f8df0(lVar11,auVar20._0_8_ & 0xffffffff,uVar16);
    } while( true );
  }
  lVar11 = *(long *)PTR_DAT_067ce4e8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar11 = *(long *)puVar3;
  }
  lVar12 = **(long **)(lVar11 + 0xb8);
  goto LAB_05501a34;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_055019c0:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_055019f4;
    }
  }
LAB_055019d8:
  puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)PTR_DAT_067c91b0,0);
LAB_055019f4:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_05501a34:
  lVar11 = FUN_054d669c(param_2,0);
  puVar1 = OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo;
  puVar2 = OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo;
  if (lVar11 != 0) {
    iVar8 = 0;
    do {
      iVar10 = FUN_040bc85c(lVar11,*(undefined8 *)puVar2);
      if (iVar10 + -1 <= iVar8) {
        return lVar12;
      }
      lVar11 = FUN_054d669c(param_2,0);
      if (lVar11 == 0) break;
      uVar16 = FUN_040bc8e8(lVar11,iVar8,*(undefined8 *)puVar1);
      FUN_05501c04(param_1,uVar16);
      iVar8 = iVar8 + 1;
      lVar11 = FUN_054d669c(param_2,0);
    } while (lVar11 != 0);
  }
LAB_05501aa8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


