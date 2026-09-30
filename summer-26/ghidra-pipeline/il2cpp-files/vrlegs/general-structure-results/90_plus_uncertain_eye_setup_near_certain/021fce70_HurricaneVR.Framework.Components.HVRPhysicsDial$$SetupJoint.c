/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDial$$SetupJoint
ENTRY_POINT: 021fce70
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1dc) */
/* WARNING: Removing unreachable block (ram,0x021fd1a0) */
/* WARNING: Removing unreachable block (ram,0x021fd1a4) */

bool HurricaneVR_Framework_Components_HVRPhysicsDial__SetupJoint(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x20;
  long *plVar13;
  long unaff_x21;
  long unaff_x22;
  long *plVar14;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  void *unaff_x27;
  int unaff_w28;
  ulong uVar15;
  long unaff_x29;
  
  while( true ) {
    if (*(uint *)(unaff_x20 + 3) <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(param_1,(long)unaff_x20 + (ulong)*(uint *)(*unaff_x20 + 0x104) * unaff_x26 + 0x20,
                 unaff_x27);
    iVar1 = **(int **)(unaff_x29 + -0x20) + 1;
    **(int **)(unaff_x29 + -0x20) = iVar1;
    if (unaff_w28 <= iVar1) break;
    plVar14 = *(long **)(unaff_x21 + 0x10);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *plVar14;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbed20) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_021fccdc;
        }
        uVar15 = uVar15 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar15 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cbed20,0);
LAB_021fccdc:
    uVar15 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    if ((uVar15 & 1) == 0) {
      lVar8 = *(long *)(unaff_x21 + 0x40);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar8 + 0x10) = 1;
      break;
    }
    lVar8 = *(long *)(unaff_x21 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *(long *)(lVar8 + 0x10);
    if ((lVar11 == 0x7fffffffffffffff) || ((lVar11 < 0 && (1 < -0x8000000000000000 - lVar11)))) {
      uVar7 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,unaff_x22);
    }
    *(long *)(lVar8 + 0x10) = lVar11 + 1;
    plVar14 = *(long **)(unaff_x21 + 0x10);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = **(uint **)(unaff_x29 + -0x20);
    unaff_x26 = (long)(int)uVar3;
    lVar8 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
    }
    lVar9 = *plVar14;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_021fcd98;
        }
        uVar15 = uVar15 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar15 != 0);
    }
    lVar8 = FUN_01a472ec(plVar14,lVar8,0);
LAB_021fcd98:
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar14,unaff_x29 + -0x10);
    memset(unaff_x27,0,unaff_x24);
    lVar9 = *(long *)(unaff_x22 + 0x20);
    lVar8 = *(long *)(lVar9 + 0xc0);
    if (*(int *)(*(long *)(lVar8 + 0x68) + 0x28) < 0) {
      pvVar6 = *(void **)(unaff_x29 + -0x30);
      memcpy(pvVar6,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
      lVar8 = *(long *)(lVar9 + 0xc0);
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    }
    else {
      pvVar6 = (void *)*unaff_x25;
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x78);
    *(long *)(unaff_x29 + -0x10) = lVar11 + 1;
    FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar6,uVar7);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(unaff_x20 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)unaff_x20 + (ulong)*(uint *)(*unaff_x20 + 0x104) * unaff_x26 + 0x20),
           unaff_x27,unaff_x24);
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_01a46ff8();
    }
  }
  plVar14 = *(long **)(unaff_x21 + 0x20);
  thunk_FUN_01a4b338();
  if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  cVar2 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
  thunk_FUN_01a4b338();
  if ((plVar14 != (long *)0x0) && (cVar2 == '\0')) {
    iVar1 = *(int *)(unaff_x21 + 0x2c);
    thunk_FUN_01a4b338();
    puVar4 = PTR_DAT_03cbed20;
    if ((int)plVar14[3] <= iVar1) {
      if (0 < (int)plVar14[3]) {
        uVar15 = 0;
        *(long **)(unaff_x29 + -0x50) = plVar14;
        do {
          plVar13 = *(long **)(unaff_x21 + 0x10);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar8 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_021fcf80;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)puVar4,0);
LAB_021fcf80:
          uVar10 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          if ((uVar10 & 1) == 0) {
            lVar8 = *(long *)(unaff_x21 + 0x40);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            thunk_FUN_01a4b338();
            *(undefined1 *)(lVar8 + 0x10) = 1;
            thunk_FUN_01a4b338();
            *(int *)(unaff_x21 + 0x28) = (int)uVar15;
            break;
          }
          lVar8 = *(long *)(unaff_x21 + 0x18);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar11 = *(long *)(lVar8 + 0x10);
          if ((lVar11 == 0x7fffffffffffffff) || ((lVar11 < 0 && (1 < -0x8000000000000000 - lVar11)))
             ) {
            uVar7 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar7,unaff_x22);
          }
          *(long *)(lVar8 + 0x10) = lVar11 + 1;
          plVar13 = *(long **)(unaff_x21 + 0x10);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar8 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01a46ff8(lVar8);
          }
          lVar9 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                lVar8 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
                goto LAB_021fd034;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          lVar8 = FUN_01a472ec(plVar13,lVar8,0);
LAB_021fd034:
          *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
          lVar8 = *(long *)(lVar8 + 8);
          (**(code **)(lVar8 + 0x10))
                    (*(undefined8 *)(lVar8 + 8),lVar8,plVar13,unaff_x29 + -0x10,unaff_x25);
          memset(unaff_x27,0,unaff_x24);
          lVar9 = *(long *)(unaff_x22 + 0x20);
          lVar8 = *(long *)(lVar9 + 0xc0);
          if (*(int *)(*(long *)(lVar8 + 0x68) + 0x28) < 0) {
            pvVar6 = *(void **)(unaff_x29 + -0x30);
            memcpy(pvVar6,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
            lVar8 = *(long *)(lVar9 + 0xc0);
            plVar14 = *(long **)(unaff_x29 + -0x50);
          }
          else {
            pvVar6 = (void *)*unaff_x25;
          }
          uVar7 = *(undefined8 *)(lVar8 + 0x78);
          *(long *)(unaff_x29 + -0x10) = lVar11 + 1;
          FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar6,uVar7);
          uVar10 = (ulong)*(uint *)(plVar14 + 3);
          if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          memcpy((void *)((long)plVar14 + uVar15 * *(uint *)(*plVar14 + 0x104) + 0x20),unaff_x27,
                 unaff_x24);
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01a46ff8();
            uVar10 = (ulong)*(uint *)(plVar14 + 3);
          }
          if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          FUN_01ab6954(lVar8,(long)plVar14 + uVar15 * *(uint *)(*plVar14 + 0x104) + 0x20,unaff_x27);
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)(int)plVar14[3]);
      }
      thunk_FUN_01a4b338();
      *(undefined4 *)(unaff_x21 + 0x2c) = 0;
    }
  }
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x40),0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0 < **(int **)(unaff_x29 + -0x20);
}


