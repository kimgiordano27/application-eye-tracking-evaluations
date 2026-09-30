/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$.ctor
ENTRY_POINT: 0515f824
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

long OVRPlugin_GetBoneSkeleton3Delegate___ctor(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *plVar13;
  long unaff_x23;
  long *plVar14;
  
  puVar4 = PTR_DAT_067823b8;
  plVar13 = *(long **)(unaff_x22 + 0x3d8);
  plVar14 = *(long **)(unaff_x23 + 0x3b0);
  do {
    lVar8 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0515f880;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f880:
    uVar10 = (*(code *)*puVar5)();
    puVar3 = PTR_DAT_0675f3d0;
    if ((uVar10 & 1) == 0) {
      plVar13 = (long *)thunk_FUN_02d9d438();
      if (plVar13 == (long *)0x0) goto LAB_0515fa30;
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0515fa08;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0515f8e0;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f8e0:
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar14 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
    }
    lVar8 = *unaff_x19;
    uVar7 = FUN_0515f4e8();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *(long *)puVar4;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(lVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0515fa24;
    }
  }
LAB_0515fa08:
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar3,0);
LAB_0515fa24:
  (*(code *)*puVar5)(plVar13,puVar5[1]);
LAB_0515fa30:
  return *unaff_x19;
}


