/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetSkeleton3
ENTRY_POINT: 0697a5d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_92_0__ovrp_GetSkeleton3
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar16;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  
  fVar11 = (float)FUN_07cac824(param_4,0);
  if ((*(long *)(unaff_x19 + 0x20) != 0) && (unaff_x21 != 0)) {
    fVar15 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28) - unaff_s15 * unaff_s14;
    fVar14 = unaff_s13 + param_3 * fVar15;
    fVar13 = unaff_s12 + param_2 * fVar15;
    FUN_07cac358(unaff_s11 + fVar11 * fVar15,fVar13,fVar14);
    lVar5 = FUN_07c98f88();
    if (lVar5 != 0) {
      fVar11 = (float)FUN_07cac280(lVar5,0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar5 != 0)) {
        fVar15 = fVar13 - unaff_s9;
        fVar16 = fVar14 - unaff_s10;
        plVar6 = (long *)FUN_07cae9b8(lVar5,0);
        puVar4 = PTR_DAT_08488568;
        puVar2 = PTR_DAT_08486ff8;
        do {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar5 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0697a6c8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,0);
LAB_0697a6c8:
          uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          puVar3 = PTR_DAT_08488550;
          if ((uVar9 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_03ac73c0(plVar6,*(undefined8 *)PTR_DAT_08488550);
            if (plVar6 == (long *)0x0) goto LAB_0697a81c;
            lVar5 = *plVar6;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar9 == 0) goto LAB_0697a7f4;
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_0697a7dc;
          }
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar5 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_0697a730;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,1);
LAB_0697a730:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar5 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar5 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(plVar8);
          }
          fVar12 = (float)FUN_07cac280(plVar8,0);
          fVar13 = fVar13 - fVar15;
          fVar14 = fVar14 - fVar16;
          FUN_07cac358(fVar12 - (fVar11 - unaff_s8),fVar13,fVar14,plVar8,0);
        } while( true );
      }
    }
  }
  goto LAB_0697aa28;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0697a9ac:
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar3,0);
LAB_0697a9e0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0697a7dc:
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar3,0);
LAB_0697a810:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar5 != 0)) {
    plVar6 = (long *)FUN_07cae9b8(lVar5,0);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0697a8a0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,0);
LAB_0697a8a0:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03ac73c0(plVar6,*(undefined8 *)puVar3);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 == 0) goto LAB_0697a9c4;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0697a9ac;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0697a908;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,1);
LAB_0697a908:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar5 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar8);
      }
      fVar12 = (float)FUN_07cac280(plVar8,0);
      fVar13 = fVar13 - fVar15;
      fVar14 = fVar14 - fVar16;
      FUN_07cac358(fVar12 - (fVar11 - unaff_s8),fVar13,fVar14,plVar8,0);
    } while( true );
  }
LAB_0697aa28:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


