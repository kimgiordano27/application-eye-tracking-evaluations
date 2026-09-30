/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$.ctor
ENTRY_POINT: 0515f92c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0515fa60) */

long OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider___ctor
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    lVar6 = *(long *)(unaff_x21 + 0x10);
    lVar8 = *unaff_x24;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = param_2;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(unaff_x21,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0515f880;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f880:
    uVar7 = (*(code *)*puVar4)();
    puVar3 = PTR_DAT_0675f3d0;
    if ((uVar7 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_02d9d438();
      if (plVar5 == (long *)0x0) goto LAB_0515fa30;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0515fa08;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0515f8e0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f8e0:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
    }
    unaff_x21 = *unaff_x19;
    param_2 = FUN_0515f4e8();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0515fa24;
    }
  }
LAB_0515fa08:
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar3,0);
LAB_0515fa24:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0515fa30:
  return *unaff_x19;
}


