/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$BeginInvoke
ENTRY_POINT: 0515f8d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0515fa60) */

long OVRPlugin_GetBoneSkeleton3Delegate__BeginInvoke(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int in_w9;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long lVar11;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x0515f8d4:
  puVar4 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
  do {
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
    }
    lVar11 = *unaff_x19;
    uVar6 = FUN_0515f4e8();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *(long *)(lVar11 + 0x10);
    lVar9 = *unaff_x24;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(lVar11,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar11 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0515f880;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f880:
    uVar8 = (*(code *)*puVar4)();
    puVar3 = PTR_DAT_0675f3d0;
    if ((uVar8 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_02d9d438();
      if (plVar5 == (long *)0x0) goto LAB_0515fa30;
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 == 0) goto LAB_0515fa08;
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          in_w9 = *piVar10;
          goto code_r0x0515f8d4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
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


