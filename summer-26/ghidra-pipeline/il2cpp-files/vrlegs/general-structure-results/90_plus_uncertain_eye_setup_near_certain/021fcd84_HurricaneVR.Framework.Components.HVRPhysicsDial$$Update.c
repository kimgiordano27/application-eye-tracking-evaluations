/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDial$$Update
ENTRY_POINT: 021fcd84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 113
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1dc) */
/* WARNING: Removing unreachable block (ram,0x021fd1a0) */
/* WARNING: Removing unreachable block (ram,0x021fd1a4) */

bool HurricaneVR_Framework_Components_HVRPhysicsDial__Update
               (long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar12;
  long *plVar13;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  void *unaff_x27;
  int unaff_w28;
  ulong uVar14;
  long unaff_x29;
  
code_r0x021fcd84:
  lVar4 = FUN_01a472ec(param_1,param_2,param_3);
  param_1 = unaff_x23;
  do {
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,param_1,unaff_x29 + -0x10);
    memset(unaff_x27,0,unaff_x24);
    lVar12 = *(long *)(unaff_x22 + 0x20);
    lVar4 = *(long *)(lVar12 + 0xc0);
    if (*(int *)(*(long *)(lVar4 + 0x68) + 0x28) < 0) {
      pvVar6 = *(void **)(unaff_x29 + -0x30);
      memcpy(pvVar6,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
      lVar4 = *(long *)(lVar12 + 0xc0);
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    }
    else {
      pvVar6 = (void *)*unaff_x25;
    }
    uVar7 = *(undefined8 *)(lVar4 + 0x78);
    *(long *)(unaff_x29 + -0x10) = unaff_x19;
    FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar6,uVar7);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(unaff_x20 + 3) <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)unaff_x20 + (ulong)*(uint *)(*unaff_x20 + 0x104) * unaff_x26 + 0x20),
           unaff_x27,unaff_x24);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (*(uint *)(unaff_x20 + 3) <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar4,(long)unaff_x20 + (ulong)*(uint *)(*unaff_x20 + 0x104) * unaff_x26 + 0x20,
                 unaff_x27);
    iVar1 = **(int **)(unaff_x29 + -0x20) + 1;
    **(int **)(unaff_x29 + -0x20) = iVar1;
    if (unaff_w28 <= iVar1) {
LAB_021fcec8:
      plVar13 = *(long **)(unaff_x21 + 0x20);
      thunk_FUN_01a4b338();
      if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      cVar2 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
      thunk_FUN_01a4b338();
      if ((plVar13 == (long *)0x0) || (cVar2 != '\0')) goto LAB_021fd17c;
      iVar1 = *(int *)(unaff_x21 + 0x2c);
      thunk_FUN_01a4b338();
      puVar3 = PTR_DAT_03cbed20;
      if (iVar1 < (int)plVar13[3]) goto LAB_021fd17c;
      if ((int)plVar13[3] < 1) goto LAB_021fd168;
      uVar14 = 0;
      *(long **)(unaff_x29 + -0x50) = plVar13;
      goto LAB_021fcf2c;
    }
    plVar13 = *(long **)(unaff_x21 + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *plVar13;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed20) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_021fccdc;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed20,0);
LAB_021fccdc:
    uVar14 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if ((uVar14 & 1) == 0) {
      lVar4 = *(long *)(unaff_x21 + 0x40);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar4 + 0x10) = 1;
      goto LAB_021fcec8;
    }
    lVar4 = *(long *)(unaff_x21 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar12 = *(long *)(lVar4 + 0x10);
    if ((lVar12 == 0x7fffffffffffffff) || ((lVar12 < 0 && (1 < -0x8000000000000000 - lVar12)))) {
      uVar7 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,unaff_x22);
    }
    unaff_x19 = lVar12 + 1;
    *(long *)(lVar4 + 0x10) = unaff_x19;
    param_1 = *(long **)(unaff_x21 + 0x10);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x26 = (long)**(int **)(unaff_x29 + -0x20);
    param_2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_01a46ff8(param_2);
    }
    lVar4 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 == 0) break;
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != param_2) {
      uVar14 = uVar14 - 1;
      piVar10 = piVar10 + 4;
      if (uVar14 == 0) goto LAB_021fcd7c;
    }
    lVar4 = lVar4 + (long)*piVar10 * 0x10 + 0x138;
  } while( true );
LAB_021fcd7c:
  param_3 = 0;
  unaff_x23 = param_1;
  goto code_r0x021fcd84;
LAB_021fcf2c:
  do {
    plVar11 = *(long **)(unaff_x21 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_021fcf80;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)puVar3,0);
LAB_021fcf80:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      lVar4 = *(long *)(unaff_x21 + 0x40);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar4 + 0x10) = 1;
      thunk_FUN_01a4b338();
      *(int *)(unaff_x21 + 0x28) = (int)uVar14;
      break;
    }
    lVar4 = *(long *)(unaff_x21 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar12 = *(long *)(lVar4 + 0x10);
    if ((lVar12 == 0x7fffffffffffffff) || ((lVar12 < 0 && (1 < -0x8000000000000000 - lVar12)))) {
      uVar7 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,unaff_x22);
    }
    *(long *)(lVar4 + 0x10) = lVar12 + 1;
    plVar11 = *(long **)(unaff_x21 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8(lVar4);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          lVar4 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_021fd034;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar4 = FUN_01a472ec(plVar11,lVar4,0);
LAB_021fd034:
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))
              (*(undefined8 *)(lVar4 + 8),lVar4,plVar11,unaff_x29 + -0x10,unaff_x25);
    memset(unaff_x27,0,unaff_x24);
    lVar8 = *(long *)(unaff_x22 + 0x20);
    lVar4 = *(long *)(lVar8 + 0xc0);
    if (*(int *)(*(long *)(lVar4 + 0x68) + 0x28) < 0) {
      pvVar6 = *(void **)(unaff_x29 + -0x30);
      memcpy(pvVar6,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
      lVar4 = *(long *)(lVar8 + 0xc0);
      plVar13 = *(long **)(unaff_x29 + -0x50);
    }
    else {
      pvVar6 = (void *)*unaff_x25;
    }
    uVar7 = *(undefined8 *)(lVar4 + 0x78);
    *(long *)(unaff_x29 + -0x10) = lVar12 + 1;
    FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar6,uVar7);
    uVar9 = (ulong)*(uint *)(plVar13 + 3);
    if (uVar9 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)plVar13 + uVar14 * *(uint *)(*plVar13 + 0x104) + 0x20),unaff_x27,unaff_x24
          );
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
      uVar9 = (ulong)*(uint *)(plVar13 + 3);
    }
    if (uVar9 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar4,(long)plVar13 + uVar14 * *(uint *)(*plVar13 + 0x104) + 0x20,unaff_x27);
    uVar14 = uVar14 + 1;
  } while ((long)uVar14 < (long)(int)plVar13[3]);
LAB_021fd168:
  thunk_FUN_01a4b338();
  *(undefined4 *)(unaff_x21 + 0x2c) = 0;
LAB_021fd17c:
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x40),0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0 < **(int **)(unaff_x29 + -0x20);
}


