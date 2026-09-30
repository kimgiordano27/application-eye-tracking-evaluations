/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$BeginInvoke
ENTRY_POINT: 012caa38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__BeginInvoke
               (void)

{
  void *__src;
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int unaff_w20;
  void *__dest;
  undefined8 *unaff_x21;
  undefined8 uVar9;
  size_t __n;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x28;
  long unaff_x29;
  float unaff_s8;
  
  do {
    if (*(char *)(unaff_x29 + -0x78) != '\0') {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c(lVar2);
      }
      lVar4 = *unaff_x28;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            lVar2 = lVar4 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_012caaa8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar2 = FUN_00d59724(unaff_x28,lVar2,0);
LAB_012caaa8:
      lVar2 = *(long *)(lVar2 + 8);
      (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,unaff_x28,0,unaff_x29 + -0x78);
      if (unaff_s8 < *(float *)(unaff_x29 + -0x78)) {
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
        if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
          lVar2 = FUN_00d5941c(lVar2);
        }
        lVar6 = *unaff_x28;
        __dest = *(void **)(unaff_x29 + -0xa8);
        lVar4 = *(long *)(unaff_x29 + -0xa0);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 == 0) goto LAB_012cabb4;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        break;
      }
    }
    unaff_w20 = unaff_w20 + 1;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar2);
    }
    lVar4 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          lVar2 = lVar4 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_012ca6e0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar2 = FUN_00d59724();
LAB_012ca6e0:
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    lVar2 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    if (*(int *)(unaff_x29 + -0x78) <= unaff_w20) {
      lVar2 = *(long *)(lVar2 + 0x108);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c();
      }
      __n = *(size_t *)(unaff_x29 + -0x90);
      __dest = *(void **)(unaff_x29 + -0xa8);
      lVar4 = *(long *)(unaff_x29 + -0xa0);
      __src = *(void **)(unaff_x29 + -0x98);
      if (-1 < *(int *)(lVar2 + 0x28)) {
        __src = (void *)(unaff_x29 + -0x88);
      }
      memcpy(unaff_x21,__src,__n);
      goto LAB_012cac00;
    }
    lVar2 = *(long *)(lVar2 + 0xa8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar2);
    }
    *(int *)(unaff_x29 + -0x6c) = unaff_w20;
    lVar4 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          lVar2 = lVar4 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_012ca770;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar2 = FUN_00d59724();
LAB_012ca770:
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    unaff_x28 = *(long **)(unaff_x29 + -0x78);
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar2);
    }
    lVar4 = *unaff_x28;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          lVar2 = lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138;
          goto LAB_012ca804;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar2 = FUN_00d59724(unaff_x28,lVar2,2);
LAB_012ca804:
    *(undefined8 **)(unaff_x29 + -0x80) = unaff_x21;
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,unaff_x28,unaff_x29 + -0x80);
    lVar6 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar6 + 0x108);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    lVar2 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar4);
      lVar6 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar6 + 0x108);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    uVar9 = *(undefined8 *)(lVar6 + 0x148);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_00d5941c(lVar4);
    }
    puVar3 = unaff_x21;
    if (-1 < *(int *)(lVar4 + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x80) = puVar3;
    FUN_00da59dc(lVar2,uVar9);
    if (*(char *)(unaff_x29 + -0x78) != '\0') {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c(lVar2);
      }
      lVar4 = *unaff_x28;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            lVar2 = lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138;
            goto LAB_012ca910;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar2 = FUN_00d59724(unaff_x28,lVar2,1);
LAB_012ca910:
      lVar2 = *(long *)(lVar2 + 8);
      (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,unaff_x28,0,unaff_x29 + -0x78);
      if (*(float *)(unaff_x29 + -0x78) < unaff_s8) goto LAB_012cab0c;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar2);
    }
    lVar4 = *unaff_x28;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          lVar2 = lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138;
          goto LAB_012ca9a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar2 = FUN_00d59724(unaff_x28,lVar2,3);
LAB_012ca9a0:
    *(undefined8 **)(unaff_x29 + -0x80) = unaff_x21;
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,unaff_x28,unaff_x29 + -0x80);
    lVar6 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar6 + 0x108);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    lVar2 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_00d5941c(lVar4);
      lVar6 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar6 + 0x108);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    uVar9 = *(undefined8 *)(lVar6 + 0x148);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_00d5941c(lVar4);
    }
    puVar3 = unaff_x21;
    if (-1 < *(int *)(lVar4 + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x80) = puVar3;
    FUN_00da59dc(lVar2,uVar9);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == lVar2) {
      iVar5 = *piVar8 + 2;
      goto LAB_012cabd8;
    }
  }
LAB_012cabb4:
  uVar9 = 2;
  goto LAB_012cabb8;
LAB_012cab0c:
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c(lVar2);
  }
  lVar6 = *unaff_x28;
  __dest = *(void **)(unaff_x29 + -0xa8);
  lVar4 = *(long *)(unaff_x29 + -0xa0);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
        iVar5 = *piVar8 + 3;
LAB_012cabd8:
        lVar2 = lVar6 + (long)iVar5 * 0x10 + 0x138;
        goto LAB_012cabe0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  uVar9 = 3;
LAB_012cabb8:
  lVar2 = FUN_00d59724(unaff_x28,lVar2,uVar9);
LAB_012cabe0:
  *(undefined8 **)(unaff_x29 + -0x80) = unaff_x21;
  lVar2 = *(long *)(lVar2 + 8);
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,unaff_x28,unaff_x29 + -0x80);
  __n = *(size_t *)(unaff_x29 + -0x90);
LAB_012cac00:
  memcpy(__dest,unaff_x21,__n);
  if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -0x68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


