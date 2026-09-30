/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 057587c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05758d94) */
/* WARNING: Removing unreachable block (ram,0x05758d7c) */
/* WARNING: Removing unreachable block (ram,0x05758b64) */
/* WARNING: Removing unreachable block (ram,0x05758c88) */
/* WARNING: Removing unreachable block (ram,0x05758cb8) */

void OVRPlugin__GetFaceVisemesState(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  if (*(long *)(param_1 + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  plVar7 = *(long **)(unaff_x20 + 0x38);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
  puVar5 = PTR_DAT_06d59708;
  puVar4 = PTR_DAT_06d4d140;
  puVar3 = PTR_DAT_06d02048;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
LAB_0575880c:
  lVar13 = *plVar7;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_05758858;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)puVar3,0);
LAB_05758858:
  uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar2 = PTR_DAT_06d01f60;
  if ((uVar14 & 1) != 0) {
    lVar13 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_057588b8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)puVar3,1);
LAB_057588b8:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d59710 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d59710))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar9);
      }
    }
    (**(code **)(*unaff_x19 + 0x578))();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (plVar9[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar10 = *(long **)(plVar9[2] + 0x40);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      do {
        do {
          lVar13 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_05758988;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0);
LAB_05758988:
          uVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          if ((uVar14 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_02ef170c(plVar10,*(undefined8 *)PTR_DAT_06d01f60);
            if (plVar9 == (long *)0x0) goto LAB_05758b58;
            lVar13 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 == 0) goto LAB_05758b30;
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_05758b18;
          }
          lVar13 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_057589e8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,1);
LAB_057589e8:
          plVar11 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar11);
            }
          }
          lVar13 = FUN_05b9a820(plVar9,plVar11,0);
          iVar6 = (**(code **)(*unaff_x21 + 0x2f8))();
          if (iVar6 != 1) goto LAB_05758a80;
        } while (lVar13 == 0);
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar4;
        }
      } while (lVar13 == **(long **)(lVar12 + 0xb8));
LAB_05758a80:
      if (unaff_x22 == 0) {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
      }
      else {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_056fd0d8();
      }
      (**(code **)(*unaff_x19 + 0x5d8))();
      FUN_0569d504();
    } while( true );
  }
  plVar7 = (long *)thunk_FUN_02ef170c(plVar7,*(undefined8 *)PTR_DAT_06d01f60);
  if (plVar7 == (long *)0x0) goto LAB_05758c7c;
  lVar13 = *plVar7;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 == 0) goto LAB_05758c54;
  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
  goto LAB_05758c3c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05758b18:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05758b4c;
    }
  }
LAB_05758b30:
  puVar8 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d01f60,0);
LAB_05758b4c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_05758b58:
  (**(code **)(*unaff_x19 + 0x588))();
  goto LAB_0575880c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05758c3c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05758c70;
    }
  }
LAB_05758c54:
  puVar8 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)puVar2,0);
LAB_05758c70:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_05758c7c:
                    /* WARNING: Could not recover jumptable at 0x05758cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x5a8))();
  return;
}


