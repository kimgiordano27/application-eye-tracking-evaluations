/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 05630db4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong unaff_x19;
  ulong uVar10;
  long unaff_x21;
  int unaff_w22;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  ulong unaff_x24;
  long unaff_x25;
  long lVar14;
  ulong unaff_x27;
  int *piVar15;
  int unaff_w29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  do {
    uVar8 = unaff_x24;
    unaff_x24 = unaff_x27;
    do {
      uVar6 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
      if ((int)uVar6 <= unaff_w29) {
        thunk_FUN_032e1da0(PTR_DAT_07279578);
        uVar3 = thunk_FUN_032a56a0();
        uVar4 = thunk_FUN_032e1da0(PTR_DAT_07282490);
        FUN_0592371c(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar3,in_stack_00000018);
      }
      uVar12 = (uint)uVar8;
      if (uVar6 <= uVar12) goto LAB_05630ed8;
      uVar13 = *(uint *)(unaff_x25 + unaff_x24 * unaff_x19 + 0x24);
      unaff_x24 = (ulong)uVar13;
      unaff_w29 = unaff_w29 + 1;
      uVar10 = uVar8 & 0xffffffff;
      if ((int)uVar13 < 0) {
        return 0;
      }
      if (uVar6 <= uVar13) goto LAB_05630ed8;
      piVar15 = (int *)(unaff_x25 + unaff_x24 * (unaff_x19 & 0xffffffff) + 0x20);
      uVar8 = unaff_x24;
    } while (*piVar15 != unaff_w22);
    lVar14 = unaff_x25 + unaff_x24 * unaff_x19;
    uVar16 = *(undefined8 *)(lVar14 + 0x40);
    uVar3 = *(undefined8 *)(lVar14 + 0x38);
    uVar20 = *(undefined8 *)(lVar14 + 0x30);
    uVar18 = *(undefined8 *)(lVar14 + 0x28);
    plVar11 = *(long **)(unaff_x21 + 0x30);
    uVar21 = in_stack_00000010[1];
    uVar19 = *in_stack_00000010;
    uVar17 = in_stack_00000010[3];
    uVar4 = in_stack_00000010[2];
    if (plVar11 == (long *)0x0) goto LAB_05630f18;
    lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8(lVar5);
    }
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05630d88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar11,lVar5,0);
LAB_05630d88:
    in_stack_000000c0 = uVar19;
    in_stack_000000c8 = uVar21;
    in_stack_000000d0 = uVar4;
    in_stack_000000d8 = uVar17;
    in_stack_000000e0 = uVar18;
    in_stack_000000e8 = uVar20;
    in_stack_000000f0 = uVar3;
    in_stack_000000f8 = uVar16;
    uVar8 = (*(code *)*puVar2)(plVar11,&stack0x000000e0,&stack0x000000c0,puVar2[1]);
    unaff_x27 = unaff_x24;
  } while ((uVar8 & 1) == 0);
  if ((int)uVar12 < 0) {
    uVar6 = *(uint *)(unaff_x25 + 0x18);
    if (uVar6 <= uVar13) goto LAB_05630ed8;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
LAB_05630f18:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(lVar5 + 0x18) <= (uint)in_stack_00000008) goto LAB_05630ed8;
    *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
         *(int *)(unaff_x25 + unaff_x24 * 0x28 + 0x24) + 1;
  }
  else {
    uVar6 = *(uint *)(unaff_x25 + 0x18);
    if ((uVar6 <= uVar13) || (uVar6 <= uVar12)) goto LAB_05630ed8;
    *(undefined4 *)(unaff_x25 + 0x20 + uVar10 * 0x28 + 4) =
         *(undefined4 *)(unaff_x25 + 0x20 + unaff_x24 * 0x28 + 4);
  }
  if (uVar13 < uVar6) {
    *piVar15 = -1;
    *(undefined8 *)(lVar14 + 0x30) = 0;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined4 *)(unaff_x25 + unaff_x24 * 0x28 + 0x24) = *(undefined4 *)(unaff_x21 + 0x28);
    iVar1 = *(int *)(unaff_x21 + 0x20) + -1;
    *(int *)(unaff_x21 + 0x20) = iVar1;
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x21 + 0x38) + 1;
    if (iVar1 == 0) {
      uVar13 = 0xffffffff;
      *(undefined4 *)(unaff_x21 + 0x24) = 0;
    }
    *(uint *)(unaff_x21 + 0x28) = uVar13;
    return 1;
  }
LAB_05630ed8:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


