/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$.ctor
ENTRY_POINT: 06e1ffdc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898(PTR_DAT_08e780e8);
  FUN_03c8f898(PTR_DAT_08e93160);
  FUN_03c8f898(PTR_DAT_08e93228);
  FUN_03c8f898(PTR_DAT_08e93498);
  FUN_03c8f898(PTR_DAT_08e78230);
  FUN_03c8f898(PTR_DAT_08e78238);
  FUN_03c8f898(PTR_DAT_08e78240);
  *(undefined1 *)(unaff_x20 + 0x35) = 1;
  puVar1 = PTR_DAT_08e780e8;
  in_stack_00000008 = 0;
  plVar9 = *(long **)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06e1cccc(plVar9,*(undefined8 *)(unaff_x19 + 10),1);
    lVar6 = *(long *)(unaff_x19 + 10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar6 + 0x58) != 1) {
      FUN_06e1cf58(plVar9,lVar6,1);
      lVar6 = *(long *)(unaff_x19 + 10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      goto LAB_06e20274;
    }
    plVar3 = (long *)FUN_06e19aa4(plVar9);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar3;
    uVar10 = *(undefined8 *)(unaff_x19 + 10);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e93160) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_06e20118;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e93160,1);
LAB_06e20118:
    uVar10 = (*(code *)*puVar4)(plVar3,uVar10,puVar4[1]);
    plVar3 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    uVar11 = *(undefined8 *)(unaff_x19 + 10);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93450);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (uVar5,plVar9,*(undefined8 *)PTR_DAT_08e93498,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e93228) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_06e201cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e93228,5);
LAB_06e201cc:
    lVar6 = (*(code *)*puVar4)(plVar3,uVar11,uVar10,uVar5,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar6,*(undefined8 *)PTR_DAT_08e78240);
    uVar7 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08e78238);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0417fc58(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar10 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e78230);
  uVar7 = FUN_06f74e14(uVar10,0);
  uVar5 = *(undefined8 *)(unaff_x19 + 10);
  if ((uVar7 & 1) == 0) {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar7,uVar5);
    }
    FUN_06e1cdc8(plVar9,uVar5,uVar10,1);
    lVar6 = *(long *)(unaff_x19 + 10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  else {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar7,uVar5);
    }
    FUN_06e1d3dc(plVar9,uVar5,1);
    lVar6 = *(long *)(unaff_x19 + 10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
LAB_06e20274:
  uVar10 = *(undefined8 *)(lVar6 + 0x88);
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_08e78268;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar10,*(undefined8 *)puVar2);
  return;
}


