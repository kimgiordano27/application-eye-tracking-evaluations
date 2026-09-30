/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 05758a44
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


/* WARNING: Removing unreachable block (ram,0x05758b64) */
/* WARNING: Removing unreachable block (ram,0x05758c04) */
/* WARNING: Removing unreachable block (ram,0x05758d7c) */
/* WARNING: Removing unreachable block (ram,0x05758c88) */
/* WARNING: Removing unreachable block (ram,0x05758cb8) */
/* WARNING: Removing unreachable block (ram,0x05758d94) */

void OVRPlugin__SetFaceTrackingVisemesEnabled(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x05758a44:
  iVar3 = (**(code **)(param_1 + 0x2f8))();
  if (iVar3 == 1) {
    if (unaff_x25 == 0) goto LAB_0575893c;
    lVar5 = *unaff_x27;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *unaff_x27;
    }
    if (unaff_x25 == **(long **)(lVar5 + 0xb8)) goto LAB_0575893c;
  }
  if (unaff_x22 == 0) {
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  else {
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_056fd0d8();
  }
  (**(code **)(*unaff_x19 + 0x5d8))();
  FUN_0569d504();
  do {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
LAB_0575893c:
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05758988;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(unaff_x23,*unaff_x28,0);
LAB_05758988:
    uVar7 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    if ((uVar7 & 1) != 0) break;
    plVar6 = (long *)thunk_FUN_02ef170c(unaff_x23,*(undefined8 *)PTR_DAT_06d01f60);
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d01f60) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05758b4c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d01f60,0);
LAB_05758b4c:
      (*(code *)*puVar4)(plVar6,puVar4[1]);
    }
    (**(code **)(*unaff_x19 + 0x588))();
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05758858;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c();
LAB_05758858:
    uVar7 = (*(code *)*puVar4)();
    puVar2 = PTR_DAT_06d01f60;
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_02ef170c();
      if (plVar6 == (long *)0x0) goto LAB_05758c7c;
      lVar5 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_05758c54;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_05758c3c;
    }
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_057588b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c();
LAB_057588b8:
    unaff_x24 = (long *)(*(code *)*puVar4)();
    if (unaff_x24 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d59710 + 0x130);
      if ((*(byte *)(*unaff_x24 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_06d59710)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x24);
      }
    }
    (**(code **)(*unaff_x19 + 0x578))();
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (unaff_x24[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar6 = *(long **)(unaff_x24[2] + 0x40);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    unaff_x23 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
  } while( true );
  lVar5 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_057589e8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c(unaff_x23,*unaff_x28,1);
LAB_057589e8:
  unaff_x26 = (long *)(*(code *)*puVar4)(unaff_x23,puVar4[1]);
  if (unaff_x26 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x26 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x26);
    }
  }
  unaff_x25 = FUN_05b9a820(unaff_x24,unaff_x26,0);
  param_1 = *unaff_x21;
  goto code_r0x05758a44;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_05758c3c:
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05758c70;
    }
  }
LAB_05758c54:
  puVar4 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_05758c70:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_05758c7c:
                    /* WARNING: Could not recover jumptable at 0x05758cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x5a8))();
  return;
}


