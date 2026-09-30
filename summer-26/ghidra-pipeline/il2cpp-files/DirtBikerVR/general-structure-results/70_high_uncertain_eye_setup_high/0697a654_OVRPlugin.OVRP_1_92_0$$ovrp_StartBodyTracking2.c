/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartBodyTracking2
ENTRY_POINT: 0697a654
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_92_0__ovrp_StartBodyTracking2
               (undefined8 param_1,undefined1 param_2 [16],float param_3,float param_4,long *param_5
               )

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined8 *puStack0000000000000018;
  long *in_stack_00000020;
  long *plStack0000000000000028;
  
  puVar4 = PTR_DAT_08488568;
  puVar2 = PTR_DAT_08486ff8;
  uStack0000000000000008 = 0;
  puStack0000000000000018 = &stack0x00000020;
  puStack0000000000000010 = (undefined1 *)param_1;
  plStack0000000000000028 = param_5;
  do {
    plVar6 = plStack0000000000000028;
    if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plStack0000000000000028;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0697a6c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,0);
LAB_0697a6c8:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar6 = plStack0000000000000028;
    puVar3 = PTR_DAT_08488550;
    if ((uVar8 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_03ac73c0(plStack0000000000000028,*(undefined8 *)PTR_DAT_08488550);
      in_stack_00000020 = plVar6;
      if (plVar6 == (long *)0x0) goto LAB_0697a81c;
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_0697a7f4;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plStack0000000000000028;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0697a730;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,1);
LAB_0697a730:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar6);
    }
    fVar10 = (float)FUN_07cac280(plVar6,0);
    param_3 = param_3 - unaff_s9;
    param_4 = param_4 - unaff_s10;
    FUN_07cac358(fVar10 - unaff_s8,param_3,param_4,plVar6,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar3,0);
LAB_0697a810:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
     (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plStack0000000000000028 = (long *)FUN_07cae9b8(lVar7,0);
  puStack0000000000000010 = (undefined1 *)&stack0x00000028;
  uStack0000000000000008 = 0;
  puStack0000000000000018 = &stack0x00000020;
  do {
    plVar6 = plStack0000000000000028;
    if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plStack0000000000000028;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0697a8a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,0);
LAB_0697a8a0:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar6 = plStack0000000000000028;
    if ((uVar8 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_03ac73c0(plStack0000000000000028,*(undefined8 *)puVar3);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      in_stack_00000020 = plVar6;
      if (uVar8 == 0) goto LAB_0697a9c4;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plStack0000000000000028;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0697a908;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,1);
LAB_0697a908:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar6);
    }
    fVar10 = (float)FUN_07cac280(plVar6,0);
    param_3 = param_3 - unaff_s9;
    param_4 = param_4 - unaff_s10;
    FUN_07cac358(fVar10 - unaff_s8,param_3,param_4,plVar6,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar3,0);
LAB_0697a9e0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


