/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$OnHoverChanged
ENTRY_POINT: 0314f31c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0314f4d8) */

void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__OnHoverChanged
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong in_x9;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar7 [16];
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0314f358;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_0314f358:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_0314f484;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0314f46c;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01dde7f8(lVar3);
      }
      lVar4 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0314f3d0;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_0314f3d0:
      auVar7 = (*(code *)*puVar1)();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar5 = *(uint *)(unaff_x21 + 0x18);
      if (uVar5 == *(uint *)(lVar3 + 0x18)) {
        FUN_0314dd2c();
        uVar5 = *(uint *)(unaff_x21 + 0x18);
        lVar3 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
      }
      else {
        *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      *(undefined1 (*) [16])(lVar3 + (long)(int)uVar5 * 0x10 + 0x20) = auVar7;
      param_1 = *unaff_x19;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_0314f46c:
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto Meta_XR_ImmersiveDebugger_UserInterface_ProxyConsoleLine___ctor;
    }
  }
LAB_0314f484:
  puVar1 = (undefined8 *)FUN_01dde8fc();
Meta_XR_ImmersiveDebugger_UserInterface_ProxyConsoleLine___ctor:
  (*(code *)*puVar1)();
  return;
}


