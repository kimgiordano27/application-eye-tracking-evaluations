/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$Setup
ENTRY_POINT: 04d9b0d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__Setup
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *plVar7;
  long unaff_x26;
  int unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  float fVar8;
  float unaff_s8;
  
  do {
    piVar6 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04d9b108;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_02f421d0();
LAB_04d9b108:
      iVar1 = (*(code *)*puVar2)();
      if (iVar1 <= unaff_w27) goto LAB_04d9b360;
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xa8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
      }
      lVar4 = *unaff_x24;
      *(int *)(unaff_x29 + -0x24) = unaff_w27;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_04d9b18c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar3 = FUN_02f421d0();
LAB_04d9b18c:
      lVar3 = *(long *)(lVar3 + 8);
      *(undefined8 *)(unaff_x29 + -0x30) = unaff_x28;
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8));
      plVar7 = *(long **)(unaff_x29 + -0x20);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04d9b3c8;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_04d9b220;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar7,lVar3,1);
LAB_04d9b220:
      fVar8 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xb8);
      if (unaff_s8 <= fVar8) {
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c(lVar3);
        }
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_04d9b314;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04d9b2fc;
      }
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            lVar3 = lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138;
            goto LAB_04d9b2a4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar3 = FUN_02f421d0(plVar7,lVar3,3);
LAB_04d9b2a4:
      lVar3 = *(long *)(lVar3 + 8);
      *(void **)(unaff_x29 + -0x20) = unaff_x22;
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar7,unaff_x29 + -0x20);
      memcpy(unaff_x21,unaff_x22,unaff_x20);
      unaff_w27 = unaff_w27 + 1;
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0xd0);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_02f41e9c(param_3);
      }
      param_1 = *unaff_x24;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_04d9b2fc:
    if (*(long *)(piVar6 + -2) == lVar3) {
      lVar3 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
      goto LAB_04d9b334;
    }
  }
LAB_04d9b314:
  lVar3 = FUN_02f421d0(plVar7,lVar3,2);
LAB_04d9b334:
  lVar3 = *(long *)(lVar3 + 8);
  *(void **)(unaff_x29 + -0x20) = unaff_x22;
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar7,unaff_x29 + -0x20);
  memcpy(unaff_x21,unaff_x22,unaff_x20);
LAB_04d9b360:
  memcpy(unaff_x22,unaff_x21,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_04d9b3c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


