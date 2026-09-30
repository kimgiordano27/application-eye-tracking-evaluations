/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 05317a10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_hasVrFocus(void)

{
  float fVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  puVar4 = UnityEngine_Rendering_Universal_DecalDrawScreenSpaceSystem_TypeInfo;
  puVar3 = System_Predicate<Terrain>_TypeInfo;
  fVar17 = 0.0;
  fVar18 = 1.0;
  uStack0000000000000008 = 0;
  uVar13 = 0;
  bVar2 = false;
  uStack0000000000000000 = 0;
  uStack0000000000000010 = 0;
  do {
    lVar9 = *(long *)(unaff_x20 + 0xd0);
    if (lVar9 == 0) goto LAB_05317c88;
    uStack0000000000000008 = *(undefined8 *)(lVar9 + 200);
    uStack0000000000000000 = *(undefined8 *)(lVar9 + 0xc0);
    uStack0000000000000010 = *(undefined8 *)(lVar9 + 0xd0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar5 = FUN_05334430();
    if (iVar5 == 0) {
      lVar9 = *unaff_x19;
      if (lVar9 == 0) goto LAB_05317c88;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_05317c8c;
      *(undefined4 *)(lVar9 + uVar13 * 4 + 0x20) = 0;
    }
    else {
      plVar14 = *(long **)(unaff_x20 + 0x130);
      if (plVar14 == (long *)0x0) {
LAB_05317c88:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05317af8;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar4,0);
LAB_05317af8:
      fVar15 = (float)(*(code *)*puVar6)(plVar14,uVar13 & 0xffffffff,puVar6[1]);
      lVar9 = *(long *)(unaff_x20 + 0xd0);
      if (lVar9 == 0) goto LAB_05317c88;
      lVar11 = *unaff_x19;
      fVar16 = (fVar15 - *(float *)(lVar9 + 0xd8)) / (1.0 - *(float *)(lVar9 + 0xd8));
      fVar15 = 1.0;
      if (fVar16 <= 1.0) {
        fVar15 = fVar16;
      }
      fVar1 = 0.0;
      if (0.0 <= fVar16) {
        fVar1 = fVar15;
      }
      if (lVar11 == 0) goto LAB_05317c88;
      if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_05317c8c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar7 = *(long *)puVar3;
      *(float *)(lVar11 + uVar13 * 4 + 0x20) = fVar1;
      uStack0000000000000008 = *(undefined8 *)(lVar9 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar9 + 0xc0);
      uStack0000000000000010 = *(undefined8 *)(lVar9 + 0xd0);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar5 = FUN_05334430();
      if (iVar5 == 2) {
        lVar9 = *unaff_x19;
        if (lVar9 == 0) goto LAB_05317c88;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_05317c8c;
        bVar2 = true;
        fVar15 = *(float *)(lVar9 + uVar13 * 4 + 0x20);
        if (fVar15 <= fVar18) {
          fVar18 = fVar15;
        }
      }
      else {
        lVar9 = *(long *)(unaff_x20 + 0xd0);
        if (lVar9 == 0) goto LAB_05317c88;
        uStack0000000000000008 = *(undefined8 *)(lVar9 + 200);
        uStack0000000000000000 = *(undefined8 *)(lVar9 + 0xc0);
        uStack0000000000000010 = *(undefined8 *)(lVar9 + 0xd0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        iVar5 = FUN_05334430();
        lVar9 = *unaff_x19;
        if (iVar5 == 1) {
          if (lVar9 == 0) goto LAB_05317c88;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_05317c8c;
          fVar15 = *(float *)(lVar9 + uVar13 * 4 + 0x20);
          if (fVar17 <= fVar15) {
            fVar17 = fVar15;
          }
        }
        else if (lVar9 == 0) goto LAB_05317c88;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_05317c8c;
      uVar8 = 1 << (ulong)((uint)uVar13 & 0x1f);
      if (*(float *)(lVar9 + uVar13 * 4 + 0x20) <= 0.0) {
        uVar8 = *(uint *)(unaff_x20 + 0x158) & (uVar8 ^ 0xffffffff);
      }
      else {
        uVar8 = *(uint *)(unaff_x20 + 0x158) | uVar8;
      }
      *(uint *)(unaff_x20 + 0x158) = uVar8;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == 5) {
      if (!bVar2) {
        fVar18 = fVar17;
      }
      return fVar18;
    }
  } while( true );
}


