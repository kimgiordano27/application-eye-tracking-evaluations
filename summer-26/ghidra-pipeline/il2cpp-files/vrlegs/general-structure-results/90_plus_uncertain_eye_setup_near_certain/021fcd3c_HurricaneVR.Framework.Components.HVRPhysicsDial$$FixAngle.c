/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDial$$FixAngle
ENTRY_POINT: 021fcd3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1dc) */
/* WARNING: Removing unreachable block (ram,0x021fd1a0) */
/* WARNING: Removing unreachable block (ram,0x021fd1a4) */

bool HurricaneVR_Framework_Components_HVRPhysicsDial__FixAngle(undefined8 param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar13;
  long *plVar14;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  void *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_01a46ff8(param_2);
    }
    lVar7 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == param_2) {
          lVar7 = lVar7 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_021fcd98;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    lVar7 = FUN_01a472ec(unaff_x23,param_2,0);
LAB_021fcd98:
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,unaff_x23,unaff_x29 + -0x10);
    memset(unaff_x27,0,unaff_x24);
    lVar13 = *(long *)(unaff_x22 + 0x20);
    lVar7 = *(long *)(lVar13 + 0xc0);
    if (*(int *)(*(long *)(lVar7 + 0x68) + 0x28) < 0) {
      pvVar5 = *(void **)(unaff_x29 + -0x30);
      memcpy(pvVar5,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
      lVar7 = *(long *)(lVar13 + 0xc0);
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    }
    else {
      pvVar5 = (void *)*unaff_x25;
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x78);
    *(long *)(unaff_x29 + -0x10) = unaff_x19;
    FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar5,uVar6);
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
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    if (*(uint *)(unaff_x20 + 3) <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar7,(long)unaff_x20 + (ulong)*(uint *)(*unaff_x20 + 0x104) * unaff_x26 + 0x20,
                 unaff_x27);
    iVar1 = **(int **)(unaff_x29 + -0x20) + 1;
    **(int **)(unaff_x29 + -0x20) = iVar1;
    if (unaff_w28 <= iVar1) {
LAB_021fcec8:
      plVar14 = *(long **)(unaff_x21 + 0x20);
      thunk_FUN_01a4b338();
      if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      cVar2 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
      thunk_FUN_01a4b338();
      if ((plVar14 == (long *)0x0) || (cVar2 != '\0')) goto LAB_021fd17c;
      iVar1 = *(int *)(unaff_x21 + 0x2c);
      thunk_FUN_01a4b338();
      puVar3 = PTR_DAT_03cbed20;
      if (iVar1 < (int)plVar14[3]) goto LAB_021fd17c;
      if ((int)plVar14[3] < 1) goto LAB_021fd168;
      uVar9 = 0;
      *(long **)(unaff_x29 + -0x50) = plVar14;
      break;
    }
    plVar14 = *(long **)(unaff_x21 + 0x10);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *plVar14;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed20) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_021fccdc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cbed20,0);
LAB_021fccdc:
    uVar9 = (*(code *)*puVar4)(plVar14,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      lVar7 = *(long *)(unaff_x21 + 0x40);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar7 + 0x10) = 1;
      goto LAB_021fcec8;
    }
    lVar7 = *(long *)(unaff_x21 + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar13 = *(long *)(lVar7 + 0x10);
    if ((lVar13 == 0x7fffffffffffffff) || ((lVar13 < 0 && (1 < -0x8000000000000000 - lVar13)))) {
      uVar6 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,unaff_x22);
    }
    unaff_x19 = lVar13 + 1;
    *(long *)(lVar7 + 0x10) = unaff_x19;
    unaff_x23 = *(long **)(unaff_x21 + 0x10);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x26 = (long)**(int **)(unaff_x29 + -0x20);
    param_2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  } while( true );
  do {
    plVar12 = *(long **)(unaff_x21 + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_021fcf80;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)puVar3,0);
LAB_021fcf80:
    uVar10 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      lVar7 = *(long *)(unaff_x21 + 0x40);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar7 + 0x10) = 1;
      thunk_FUN_01a4b338();
      *(int *)(unaff_x21 + 0x28) = (int)uVar9;
      break;
    }
    lVar7 = *(long *)(unaff_x21 + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar13 = *(long *)(lVar7 + 0x10);
    if ((lVar13 == 0x7fffffffffffffff) || ((lVar13 < 0 && (1 < -0x8000000000000000 - lVar13)))) {
      uVar6 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,unaff_x22);
    }
    *(long *)(lVar7 + 0x10) = lVar13 + 1;
    plVar12 = *(long **)(unaff_x21 + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8(lVar7);
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_021fd034;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar7 = FUN_01a472ec(plVar12,lVar7,0);
LAB_021fd034:
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))
              (*(undefined8 *)(lVar7 + 8),lVar7,plVar12,unaff_x29 + -0x10,unaff_x25);
    memset(unaff_x27,0,unaff_x24);
    lVar8 = *(long *)(unaff_x22 + 0x20);
    lVar7 = *(long *)(lVar8 + 0xc0);
    if (*(int *)(*(long *)(lVar7 + 0x68) + 0x28) < 0) {
      pvVar5 = *(void **)(unaff_x29 + -0x30);
      memcpy(pvVar5,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
      lVar7 = *(long *)(lVar8 + 0xc0);
      plVar14 = *(long **)(unaff_x29 + -0x50);
    }
    else {
      pvVar5 = (void *)*unaff_x25;
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x78);
    *(long *)(unaff_x29 + -0x10) = lVar13 + 1;
    FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar5,uVar6);
    uVar10 = (ulong)*(uint *)(plVar14 + 3);
    if (uVar10 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)plVar14 + uVar9 * *(uint *)(*plVar14 + 0x104) + 0x20),unaff_x27,unaff_x24)
    ;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
      uVar10 = (ulong)*(uint *)(plVar14 + 3);
    }
    if (uVar10 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar7,(long)plVar14 + uVar9 * *(uint *)(*plVar14 + 0x104) + 0x20,unaff_x27);
    uVar9 = uVar9 + 1;
  } while ((long)uVar9 < (long)(int)plVar14[3]);
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


