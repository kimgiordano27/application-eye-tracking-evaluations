/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 057bd918
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte in_w8;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int unaff_w19;
  size_t unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  void *pvVar9;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x28;
  long unaff_x29;
  float fVar10;
  float unaff_s8;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_02feb2c4(param_2);
    }
    lVar3 = *unaff_x28;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_2) {
          lVar3 = lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138;
          goto LAB_057bd974;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_02feb5b8(unaff_x28,param_2,2);
LAB_057bd974:
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,unaff_x28,unaff_x29 + -0x30);
    lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar7 + 0x108);
    lVar3 = lVar4;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar3 = *(long *)(lVar7 + 0x108);
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x148);
    puVar5 = unaff_x21;
    if (-1 < *(int *)(lVar3 + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x30) = puVar5;
    FUN_02fe9dc8(lVar4,uVar2);
    if (*(char *)(unaff_x29 + -0x28) != '\0') {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4(lVar3);
      }
      lVar4 = *unaff_x28;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_057bda60;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8(unaff_x28,lVar3,1);
LAB_057bda60:
      fVar10 = (float)(*(code *)*puVar5)(unaff_x28,puVar5[1]);
      if (fVar10 < unaff_s8) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
        }
        lVar7 = *unaff_x28;
        pvVar9 = *(void **)(unaff_x29 + -0x48);
        lVar4 = *(long *)(unaff_x29 + -0x40);
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 == 0) goto LAB_057bdc64;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        break;
      }
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    lVar4 = *unaff_x28;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138;
          goto LAB_057bdae0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_02feb5b8(unaff_x28,lVar3,3);
LAB_057bdae0:
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,unaff_x28,unaff_x29 + -0x30);
    lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar7 + 0x108);
    lVar3 = lVar4;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar3 = *(long *)(lVar7 + 0x108);
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x148);
    puVar5 = unaff_x21;
    if (-1 < *(int *)(lVar3 + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x30) = puVar5;
    FUN_02fe9dc8(lVar4,uVar2);
    if (*(char *)(unaff_x29 + -0x28) != '\0') {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4(lVar3);
      }
      lVar4 = *unaff_x28;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_057bdbc8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8(unaff_x28,lVar3,0);
LAB_057bdbc8:
      fVar10 = (float)(*(code *)*puVar5)(unaff_x28,puVar5[1]);
      if (unaff_s8 < fVar10) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
        }
        lVar7 = *unaff_x28;
        pvVar9 = *(void **)(unaff_x29 + -0x48);
        lVar4 = *(long *)(unaff_x29 + -0x40);
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 == 0) goto LAB_057bdcbc;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_057bdca4;
      }
    }
    unaff_w19 = unaff_w19 + 1;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    lVar4 = *unaff_x24;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_057bd864;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02feb5b8();
LAB_057bd864:
    iVar1 = (*(code *)*puVar5)();
    lVar3 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    if (iVar1 <= unaff_w19) {
      pvVar9 = *(void **)(unaff_x29 + -0x50);
      if (-1 < *(int *)(*(long *)(lVar3 + 0x108) + 0x28)) {
        pvVar9 = (void *)(unaff_x29 + -0x38);
      }
      memcpy(unaff_x21,pvVar9,unaff_x20);
      pvVar9 = *(void **)(unaff_x29 + -0x48);
      lVar4 = *(long *)(unaff_x29 + -0x40);
      goto FUN_057bdd04;
    }
    lVar3 = *(long *)(lVar3 + 0xa8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    *(int *)(unaff_x29 + -0x1c) = unaff_w19;
    lVar4 = *unaff_x24;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_057bd8e4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_02feb5b8();
LAB_057bd8e4:
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x22;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    unaff_x28 = *(long **)(unaff_x29 + -0x28);
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
    in_w8 = *(byte *)(param_2 + 0x135);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar8 + -2) == lVar3) {
      iVar1 = *piVar8 + 3;
      goto LAB_057bdce0;
    }
  }
LAB_057bdc64:
  uVar2 = 3;
  goto LAB_057bdcc0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_057bdca4:
    if (*(long *)(piVar8 + -2) == lVar3) {
      iVar1 = *piVar8 + 2;
LAB_057bdce0:
      lVar3 = lVar7 + (long)iVar1 * 0x10 + 0x138;
      goto LAB_057bdce8;
    }
  }
LAB_057bdcbc:
  uVar2 = 2;
LAB_057bdcc0:
  lVar3 = FUN_02feb5b8(unaff_x28,lVar3,uVar2);
LAB_057bdce8:
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
  lVar3 = *(long *)(lVar3 + 8);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,unaff_x28,unaff_x29 + -0x30);
FUN_057bdd04:
  memcpy(pvVar9,unaff_x21,unaff_x20);
  if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


