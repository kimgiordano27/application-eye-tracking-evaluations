/*
FUNCTION_NAME: FUN_09b6acac
ENTRY_POINT: 09b6acac
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x09b6afec) */
/* WARNING: Removing unreachable block (ram,0x09b6afd8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_09b6acac(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  char local_34 [4];
  
  if ((DAT_0b3397ad & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0acbe5e8);
    FUN_04947ee4(PTR_DAT_0ac09b90);
    FUN_04947ee4(PTR_DAT_0ac15130);
    FUN_04947ee4(PTR_DAT_0ac09ba8);
    DAT_0b3397ad = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  local_34[0] = '\0';
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
  local_34[0] = '\0';
  FUN_08de98fc(uVar7,local_34,0);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x2c8))(plVar6,*(undefined8 *)(*plVar6 + 0x2d0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar10 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac15130) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_09b6adc0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6adc0:
  plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
  puVar4 = PTR_DAT_0acbe5e8;
  puVar3 = PTR_DAT_0ac09ba8;
  if (plVar6 != (long *)0x0) {
    iVar14 = 0;
    do {
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_09b6ae48;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68(plVar6,lVar10,0);
LAB_09b6ae48:
      uVar12 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      puVar2 = PTR_DAT_0ac09b90;
      if ((uVar12 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_04983e64(plVar6,*(undefined8 *)PTR_DAT_0ac09b90);
        if (plVar6 == (long *)0x0) goto LAB_09b6af88;
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_09b6af60;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_09b6af48;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_09b6aeb0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68(plVar6,lVar10,1);
LAB_09b6aeb0:
      plVar9 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c();
      }
      iVar5 = FUN_09b699f8(plVar9,0);
      iVar14 = iVar5 + iVar14;
    } while (plVar6 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_09b6af48:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto Unity_XR_OpenVR_OpenVRHMD__get_leftEyeVelocity;
    }
  }
LAB_09b6af60:
  puVar8 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar2,0);
Unity_XR_OpenVR_OpenVRHMD__get_leftEyeVelocity:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
LAB_09b6af88:
  if (local_34[0] != '\0') {
    thunk_FUN_0495413c(uVar7,0);
  }
  return iVar14;
}


