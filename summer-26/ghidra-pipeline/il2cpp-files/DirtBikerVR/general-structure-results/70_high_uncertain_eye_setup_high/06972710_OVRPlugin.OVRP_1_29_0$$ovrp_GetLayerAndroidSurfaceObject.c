/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetLayerAndroidSurfaceObject
ENTRY_POINT: 06972710
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06972940) */

void OVRPlugin_OVRP_1_29_0__ovrp_GetLayerAndroidSurfaceObject(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int in_w9;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x06972710:
  puVar6 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
  do {
    plVar7 = (long *)(*(code *)*puVar6)(unaff_x20,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    bVar1 = *(byte *)(*unaff_x22 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar7);
    }
    uVar8 = thunk_FUN_07ca227c(plVar7,0);
    uVar9 = thunk_FUN_065cbffc(uVar8,*unaff_x23,0);
    if ((uVar9 & 1) == 0) {
      uVar8 = FUN_07c99058(plVar7,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07ca310c(uVar8,0);
    }
    plVar7 = in_stack_00000048;
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *in_stack_00000048;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_069726b4;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*unaff_x21,0);
LAB_069726b4:
    uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    unaff_x20 = in_stack_00000048;
    puVar3 = PTR_DAT_08488550;
    if ((uVar9 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_03ac73c0(in_stack_00000048,*(undefined8 *)PTR_DAT_08488550);
      in_stack_00000038 = plVar7;
      if (plVar7 == (long *)0x0) goto LAB_06972834;
      lVar10 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 == 0) goto LAB_0697280c;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_1 = *in_stack_00000048;
    uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          in_w9 = *piVar13;
          goto code_r0x06972710;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*unaff_x21,1);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar13 = piVar13 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto FUN_06972828;
    }
  }
LAB_0697280c:
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar3,0);
FUN_06972828:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_06972834:
  puVar5 = PTR_DAT_084b7348;
  puVar4 = PTR_DAT_084b5eb8;
  puVar3 = PTR_DAT_084b5ea0;
  if (((*(long *)(unaff_x19 + 0x20) == 0) ||
      (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xe8), lVar10 == 0)) ||
     (lVar10 = *(long *)(lVar10 + 0x50), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04de90b8(&stack0x00000020,lVar10,*(undefined8 *)PTR_DAT_084b5ed0);
  while( true ) {
    uVar9 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar4);
    if ((uVar9 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,*(undefined8 *)puVar3);
      return;
    }
    lVar10 = *(long *)(unaff_x19 + 0x38);
    uVar8 = FUN_069729e8();
    if (lVar10 == 0) break;
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar12 = *(long *)puVar5;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0(lVar10,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


